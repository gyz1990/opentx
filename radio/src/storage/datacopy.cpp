//This file was auto-generated by generate_datacopy.py script on Sat May  7 11:05:00 2016. Do not edit this file!



template <class A, class B>
void copyCurveRef(A * dest, B * src)
{
  dest->type = src->type;
  dest->value = src->value;
}

template <class A, class B>
void copyMixData(A * dest, B * src)
{
  dest->weight = src->weight;
  dest->destCh = src->destCh;
  dest->srcRaw = src->srcRaw;
  dest->carryTrim = src->carryTrim;
  dest->mixWarn = src->mixWarn;
  dest->mltpx = src->mltpx;
  dest->spare = src->spare;
  dest->offset = src->offset;
  dest->swtch = src->swtch;
  dest->flightModes = src->flightModes;
  copyCurveRef(&dest->curve, &src->curve);
  dest->delayUp = src->delayUp;
  dest->delayDown = src->delayDown;
  dest->speedUp = src->speedUp;
  dest->speedDown = src->speedDown;
}

template <class A, class B>
void copyExpoData(A * dest, B * src)
{
  dest->mode = src->mode;
  dest->scale = src->scale;
  dest->srcRaw = src->srcRaw;
  dest->carryTrim = src->carryTrim;
  dest->chn = src->chn;
  dest->swtch = src->swtch;
  dest->flightModes = src->flightModes;
  dest->weight = src->weight;
  dest->spare = src->spare;
  dest->offset = src->offset;
  copyCurveRef(&dest->curve, &src->curve);
}

template <class A, class B>
void copyLimitData(A * dest, B * src)
{
  dest->min = src->min;
  dest->max = src->max;
  dest->ppmCenter = src->ppmCenter;
  dest->offset = src->offset;
  dest->symetrical = src->symetrical;
  dest->revert = src->revert;
  dest->spare = src->spare;
  dest->curve = src->curve;
}

template <class A, class B>
void copyLogicalSwitchData(A * dest, B * src)
{
  dest->func = src->func;
  dest->v1 = src->v1;
  dest->v3 = src->v3;
  dest->andsw = src->andsw;
  dest->andswtype = src->andswtype;
  dest->spare = src->spare;
  dest->v2 = src->v2;
  dest->delay = src->delay;
  dest->duration = src->duration;
}

template <class A, class B>
void copyCustomFunctionData(A * dest, B * src)
{
  dest->swtch = src->swtch;
  dest->func = src->func;
  copyCustomFunctionData_all(&dest->all, &src->all);
  dest->active = src->active;
}

template <class A, class B>
void copytrim_t(A * dest, B * src)
{
  dest->value = src->value;
  dest->mode = src->mode;
}

template <class A, class B>
void copyFlightModeData(A * dest, B * src)
{
  for (int i=0; i<NUM_STICKS; i++) {
    copytrim_t(&dest->trim[i], &src->trim[i]);
  }
  dest->swtch = src->swtch;
  dest->spare = src->spare;
  dest->fadeIn = src->fadeIn;
  dest->fadeOut = src->fadeOut;
  memcpy(dest->gvars, src->gvars, sizeof(dest->gvars));
}

template <class A, class B>
void copyGVarData(A * dest, B * src)
{
  dest->min = src->min;
  dest->max = src->max;
  dest->popup = src->popup;
  dest->prec = src->prec;
  dest->unit = src->unit;
  dest->spare = src->spare;
}

template <class A, class B>
void copyTimerData(A * dest, B * src)
{
  dest->mode = src->mode;
  dest->start = src->start;
  dest->value = src->value;
  dest->countdownBeep = src->countdownBeep;
  dest->minuteBeep = src->minuteBeep;
  dest->persistent = src->persistent;
  dest->countdownStart = src->countdownStart;
}

template <class A, class B>
void copySwashRingData(A * dest, B * src)
{
  dest->type = src->type;
  dest->value = src->value;
  dest->collectiveSource = src->collectiveSource;
  dest->aileronSource = src->aileronSource;
  dest->elevatorSource = src->elevatorSource;
  dest->collectiveWeight = src->collectiveWeight;
  dest->aileronWeight = src->aileronWeight;
  dest->elevatorWeight = src->elevatorWeight;
}

template <class A, class B>
void copyScriptData(A * dest, B * src)
{
  memcpy(dest->file, src->file, sizeof(dest->file));
  memcpy(dest->name, src->name, sizeof(dest->name));
  memcpy(dest->inputs, src->inputs, sizeof(dest->inputs));
}

template <class A, class B>
void copyFrSkyRSSIAlarm(A * dest, B * src)
{
  dest->level = src->level;
  dest->value = src->value;
}

template <class A, class B>
void copyFrSkyTelemetryData(A * dest, B * src)
{
  dest->varioSource = src->varioSource;
  dest->varioCenterSilent = src->varioCenterSilent;
  dest->varioCenterMax = src->varioCenterMax;
  dest->varioCenterMin = src->varioCenterMin;
  dest->varioMin = src->varioMin;
  dest->varioMax = src->varioMax;
  for (int i=0; i<2; i++) {
    copyFrSkyRSSIAlarm(&dest->rssiAlarms[i], &src->rssiAlarms[i]);
  }
}

template <class A, class B>
void copyTelemetrySensor(A * dest, B * src)
{
  dest->id = src->id;
  dest->instance = src->instance;
  memcpy(dest->label, src->label, sizeof(dest->label));
  dest->type = src->type;
  dest->unit = src->unit;
  dest->prec = src->prec;
  dest->autoOffset = src->autoOffset;
  dest->filter = src->filter;
  dest->logs = src->logs;
  dest->persistent = src->persistent;
  dest->onlyPositive = src->onlyPositive;
  dest->subId = src->subId;
  copyTelemetrySensor_custom(&dest->custom, &src->custom);
}

template <class A, class B>
void copyModuleData(A * dest, B * src)
{
  dest->type = src->type;
  dest->rfProtocol = src->rfProtocol;
  dest->channelsStart = src->channelsStart;
  dest->channelsCount = src->channelsCount;
  dest->failsafeMode = src->failsafeMode;
  dest->subType = src->subType;
  dest->invertedSerial = src->invertedSerial;
  memcpy(dest->failsafeChannels, src->failsafeChannels, sizeof(dest->failsafeChannels));
  copyModuleData_ppm(&dest->ppm, &src->ppm);
}

template <class A, class B>
void copyModelHeader(A * dest, B * src)
{
  memcpy(dest->name, src->name, sizeof(dest->name));
  memcpy(dest->modelId, src->modelId, sizeof(dest->modelId));
}

template <class A, class B>
void copyZone(A * dest, B * src)
{
  dest->x = src->x;
  dest->y = src->y;
  dest->w = src->w;
  dest->h = src->h;
}

template <class A, class B>
void copyZoneOption(A * dest, B * src)
{
  dest->name = src->name;
  dest->type = src->type;
  dest->deflt = src->deflt;
}

template <class A, class B>
void copyCustomScreenData(A * dest, B * src)
{
  memcpy(dest->layoutName, src->layoutName, sizeof(dest->layoutName));
  dest->layoutData = src->layoutData;
}

template <class A, class B>
void copyModelData(A * dest, B * src)
{
  copyModelHeader(&dest->header, &src->header);
  for (int i=0; i<3; i++) {
    copyTimerData(&dest->timers[i], &src->timers[i]);
  }
  dest->telemetryProtocol = src->telemetryProtocol;
  dest->thrTrim = src->thrTrim;
  dest->noGlobalFunctions = src->noGlobalFunctions;
  dest->displayTrims = src->displayTrims;
  dest->ignoreSensorIds = src->ignoreSensorIds;
  dest->trimInc = src->trimInc;
  dest->disableThrottleWarning = src->disableThrottleWarning;
  dest->displayChecklist = src->displayChecklist;
  dest->extendedLimits = src->extendedLimits;
  dest->extendedTrims = src->extendedTrims;
  dest->throttleReversed = src->throttleReversed;
  dest->beepANACenter = src->beepANACenter;
  for (int i=0; i<64; i++) {
    copyMixData(&dest->mixData[i], &src->mixData[i]);
  }
  for (int i=0; i<32; i++) {
    copyLimitData(&dest->limitData[i], &src->limitData[i]);
  }
  for (int i=0; i<64; i++) {
    copyExpoData(&dest->expoData[i], &src->expoData[i]);
  }
  memcpy(dest->curves, src->curves, sizeof(dest->curves));
  memcpy(dest->points, src->points, sizeof(dest->points));
  for (int i=0; i<64; i++) {
    copyLogicalSwitchData(&dest->logicalSw[i], &src->logicalSw[i]);
  }
  for (int i=0; i<64; i++) {
    copyCustomFunctionData(&dest->customFn[i], &src->customFn[i]);
  }
  copySwashRingData(&dest->swashR, &src->swashR);
  for (int i=0; i<9; i++) {
    copyFlightModeData(&dest->flightModeData[i], &src->flightModeData[i]);
  }
  for (int i=0; i<9; i++) {
    copyGVarData(&dest->gvars[i], &src->gvars[i]);
  }
  for (int i=0; i<3; i++) {
    copyModuleData(&dest->moduleData[i], &src->moduleData[i]);
  }
}

template <class A, class B>
void copyStepsCalibData(A * dest, B * src)
{
  dest->count = src->count;
  memcpy(dest->steps, src->steps, sizeof(dest->steps));
}

template <class A, class B>
void copyCalibData(A * dest, B * src)
{
  dest->mid = src->mid;
  dest->spanNeg = src->spanNeg;
  dest->spanPos = src->spanPos;
}

template <class A, class B>
void copyTrainerMix(A * dest, B * src)
{
  dest->srcChn = src->srcChn;
  dest->mode = src->mode;
  dest->studWeight = src->studWeight;
}

template <class A, class B>
void copyTrainerData(A * dest, B * src)
{
  memcpy(dest->calib, src->calib, sizeof(dest->calib));
}

template <class A, class B>
void copyRadioData(A * dest, B * src)
{
  for (int i=0; i<11; i++) {
    copyCalibData(&dest->calib[i], &src->calib[i]);
  }
  dest->stickMode = src->stickMode;
  dest->switchesDelay = src->switchesDelay;
  for (int i=0; i<64; i++) {
    copyCustomFunctionData(&dest->customFn[i], &src->customFn[i]);
  }
  dest->slidersConfig = src->slidersConfig;
  dest->switchConfig = src->switchConfig;
  dest->potsConfig = src->potsConfig;
}

template <class A, class B>
void copyCustomFunctionData_all(A * dest, B * src)
{
  dest->val = src->val;
  dest->mode = src->mode;
  dest->param = src->param;
}

template <class A, class B>
void copyTelemetrySensor_custom(A * dest, B * src)
{
  dest->ratio = src->ratio;
  dest->offset = src->offset;
}

template <class A, class B>
void copyModuleData_ppm(A * dest, B * src)
{
  dest->delay = src->delay;
  dest->pulsePol = src->pulsePol;
  dest->outputType = src->outputType;
  dest->frameLength = src->frameLength;
}
