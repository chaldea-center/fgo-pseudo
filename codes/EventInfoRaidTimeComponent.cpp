void __fastcall EventInfoRaidTimeComponent___ctor(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTime(
        EventInfoRaidTimeComponent_o *this,
        int64_t at,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Time; // x0
  uint64_t dateData; // x20
  uint64_t v9; // x19
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v12; // w19
  const MethodInfo *v13; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v15; // x20
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-30h] BYREF
  int32_t v22; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_TimeSpan_o v25; // 0:x0.8
  System_TimeSpan_o v26; // 0:x0.8
  System_TimeSpan_o v27; // 0:x0.8
  System_TimeSpan_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x1.8

  if ( (byte_40FA169 & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, at);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23411/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v6);
    byte_40FA169 = 1;
  }
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_23685272(Time, 0LL).fields.dateData;
  v9 = NetworkManager__getDateTime_23685272(at, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v24.fields.dateData = v9;
  v29.fields.dateData = dateData;
  ticks = System_DateTime__op_Subtraction_15199104(v24, v29, 0LL).fields._ticks;
  v25.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v25, 0LL);
  v26.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v26, 0LL);
  v12 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v12, v13);
  v15 = System_String__Concat_43743732(RestTimeColorStr, (System_String_o *)StringLiteral_23411/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v22 = v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v27.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v27, 0LL);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v28.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v28, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_43744796(v15, v16, v17, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8

  if ( (byte_40FA16A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15677/*"[FF0000]"*/, *(_QWORD *)&restHours);
    sub_B16FFC(&StringLiteral_15683/*"[FFFFFF]"*/, v4);
    sub_B16FFC(&StringLiteral_15680/*"[FFFF00]"*/, v5);
    byte_40FA16A = 1;
  }
  v6 = (__int64 *)&StringLiteral_15683/*"[FFFFFF]"*/;
  if ( restHours < 5 )
    v6 = &StringLiteral_15680/*"[FFFF00]"*/;
  if ( restHours < 1 )
    v6 = &StringLiteral_15677/*"[FF0000]"*/;
  return (System_String_o *)*v6;
}


void __fastcall EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v17; // x22
  struct UISprite_o *v18; // x0
  TerminalSceneComponent_c *v19; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0
  int64_t TimeLimitAt; // x0
  UILabel_o *titleText; // x8
  UILabel_o *timeText; // x0
  UILabel_o *timeOverText; // x0
  const MethodInfo *v26; // x1

  if ( (byte_40FA167 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FA167 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v17 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v17, bgSpriteName, 0LL);
      v18 = this->fields.bgSprite;
      if ( !v18 )
LABEL_28:
        sub_B170D4();
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._33_MakePixelPerfect.method)(
        v18,
        v18->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    byte_40F6042 = 1;
  }
  v19 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v19->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_28;
  if ( !*p_eventUiEntity )
    goto LABEL_28;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_28;
  TimeLimitAt = ScrTerminalMap__GetTimeLimitAt(mTerminalMap, (*p_eventUiEntity)->fields.eventId, 0LL);
  titleText = this->fields.titleText;
  this->fields.reidTimeLimit = TimeLimitAt;
  if ( !titleText )
    goto LABEL_28;
  UILabel__set_text(titleText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  timeText = this->fields.timeText;
  if ( !timeText )
    goto LABEL_28;
  UILabel__set_text(timeText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  timeOverText = this->fields.timeOverText;
  if ( !timeOverText )
    goto LABEL_28;
  UILabel__set_text(timeOverText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoRaidTimeComponent__UpdateDisp(this, v26);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA16B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA16B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventRaidMaster__IsEventRaidAliveAny(MasterData_WarQuestSelectionMaster, eventId, 0LL);
}


// attributes: thunk
void __fastcall EventInfoRaidTimeComponent__Update(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoRaidTimeComponent__UpdateDisp(this, method);
}


void __fastcall EventInfoRaidTimeComponent__UpdateDisp(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x21
  EventInfoRaidTimeComponent_o *Time; // x0
  const MethodInfo *v12; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoRaidTimeComponent_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Behaviour_o *v17; // x0
  UnityEngine_Behaviour_o *v18; // x0
  UnityEngine_Behaviour_o *v19; // x0
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x20
  const MethodInfo *v23; // x2
  System_String_o *RestTime; // x0
  System_String_o *v25; // x1
  UILabel_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  RaidAutoUpdateRequest_c *v28; // x0
  UnityEngine_Behaviour_o *v29; // x0
  UnityEngine_Behaviour_o *v30; // x0
  UnityEngine_Behaviour_o *v31; // x0
  UILabel_o *v32; // x20
  System_String_o *v33; // x0
  struct UILabel_o *v34; // x19
  EventInfoRaidTimeComponent_o *v35; // x0
  const MethodInfo *v36; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v38; // x0
  UnityEngine_Behaviour_o *titleText; // x0
  UnityEngine_Behaviour_o *v40; // x0
  UnityEngine_Behaviour_o *timeOverText; // x0

  if ( (byte_40FA168 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_968/*"00:00:00[-]"*/, v6);
    sub_B16FFC(&StringLiteral_5675/*"EVENT_RAID_TIME_OVER_TXT"*/, v7);
    sub_B16FFC(&StringLiteral_5673/*"EVENT_RAID_TIME_LIMIT_TXT"*/, v8);
    byte_40FA168 = 1;
  }
  if ( this->fields.isUpdate )
  {
    timeText = (UnityEngine_Object_o *)this->fields.timeText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(timeText, 0LL, 0LL) )
    {
      reidTimeLimit = this->fields.reidTimeLimit;
      if ( reidTimeLimit >= 1 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = (EventInfoRaidTimeComponent_o *)NetworkManager__getTime(0LL);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v14 = Time;
          if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(Time, eventUiEntity->fields.eventId, v12) )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !gameObject )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            if ( reidTimeLimit - (__int64)v14 < 1 )
            {
              if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
              }
              if ( !byte_40F98AA )
              {
                sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v16);
                byte_40F98AA = 1;
              }
              v28 = RaidAutoUpdateRequest_TypeInfo;
              if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                v28 = RaidAutoUpdateRequest_TypeInfo;
              }
              if ( v28->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
              {
                titleText = (UnityEngine_Behaviour_o *)this->fields.titleText;
                this->fields.isUpdate = 0;
                if ( !titleText )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(titleText, 0, 0LL);
                v40 = (UnityEngine_Behaviour_o *)this->fields.timeText;
                if ( !v40 )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(v40, 0, 0LL);
                timeOverText = (UnityEngine_Behaviour_o *)this->fields.timeOverText;
                if ( !timeOverText )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(timeOverText, 1, 0LL);
                v34 = this->fields.timeOverText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5675/*"EVENT_RAID_TIME_OVER_TXT"*/, 0LL);
                if ( !v34 )
                  goto LABEL_55;
              }
              else
              {
                v29 = (UnityEngine_Behaviour_o *)this->fields.titleText;
                if ( !v29 )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
                v30 = (UnityEngine_Behaviour_o *)this->fields.timeText;
                if ( !v30 )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(v30, 1, 0LL);
                v31 = (UnityEngine_Behaviour_o *)this->fields.timeOverText;
                if ( !v31 )
                  goto LABEL_55;
                UnityEngine_Behaviour__set_enabled(v31, 0, 0LL);
                v32 = this->fields.titleText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_RAID_TIME_LIMIT_TXT"*/, 0LL);
                if ( !v32 )
                  goto LABEL_55;
                UILabel__set_text(v32, v33, 0LL);
                v34 = this->fields.timeText;
                RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v35, 0, v36);
                v38 = System_String__Concat_43743732(RestTimeColorStr, (System_String_o *)StringLiteral_968/*"00:00:00[-]"*/, 0LL);
                if ( !v34 )
                  goto LABEL_55;
              }
              v25 = v38;
              v26 = v34;
              goto LABEL_54;
            }
            v17 = (UnityEngine_Behaviour_o *)this->fields.titleText;
            if ( v17 )
            {
              UnityEngine_Behaviour__set_enabled(v17, 1, 0LL);
              v18 = (UnityEngine_Behaviour_o *)this->fields.timeText;
              if ( v18 )
              {
                UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
                v19 = (UnityEngine_Behaviour_o *)this->fields.timeOverText;
                if ( v19 )
                {
                  UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
                  v20 = this->fields.titleText;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_RAID_TIME_LIMIT_TXT"*/, 0LL);
                  if ( v20 )
                  {
                    UILabel__set_text(v20, v21, 0LL);
                    v22 = this->fields.timeText;
                    RestTime = EventInfoRaidTimeComponent__GetRestTime(this, this->fields.reidTimeLimit, v23);
                    if ( v22 )
                    {
                      v25 = RestTime;
                      v26 = v22;
LABEL_54:
                      UILabel__set_text(v26, v25, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
          else
          {
            this->fields.isUpdate = 0;
            v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( v27 )
            {
              UnityEngine_GameObject__SetActive(v27, 0, 0LL);
              return;
            }
          }
        }
LABEL_55:
        sub_B170D4();
      }
    }
  }
}