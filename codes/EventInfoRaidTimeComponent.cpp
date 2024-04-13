void __fastcall EventInfoRaidTimeComponent___ctor(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTime(
        EventInfoRaidTimeComponent_o *this,
        int64_t at,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Time; // x0
  uint64_t dateData; // x20
  uint64_t v16; // x19
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v19; // w19
  const MethodInfo *v20; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v22; // x20
  Il2CppObject *v23; // x19
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-30h] BYREF
  int32_t v29; // [xsp+14h] [xbp-2Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_TimeSpan_o v32; // 0:x0.8
  System_TimeSpan_o v33; // 0:x0.8
  System_TimeSpan_o v34; // 0:x0.8
  System_TimeSpan_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x1.8

  if ( (byte_42E9532 & 1) == 0 )
  {
    sub_B5D5C4(&System_DateTime_TypeInfo, at, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23816/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v11, v12, v13);
    byte_42E9532 = 1;
  }
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_26077468(Time, 0LL).fields.dateData;
  v16 = NetworkManager__getDateTime_26077468(at, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v31.fields.dateData = v16;
  v36.fields.dateData = dateData;
  ticks = System_DateTime__op_Subtraction_15579448(v31, v36, 0LL).fields._ticks;
  v32.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v32, 0LL);
  v33.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v33, 0LL);
  v19 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v19, v20);
  v22 = System_String__Concat_44577788(RestTimeColorStr, (System_String_o *)StringLiteral_23816/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v29 = v19;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v34.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v34, 0LL);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v35.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v35, 0LL);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_44578852(v22, v23, v24, v25, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 *v11; // x8

  if ( (byte_42E9533 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15930/*"[FF0000]"*/, restHours, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_15936/*"[FFFFFF]"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15933/*"[FFFF00]"*/, v8, v9, v10);
    byte_42E9533 = 1;
  }
  v11 = (__int64 *)&StringLiteral_15936/*"[FFFFFF]"*/;
  if ( restHours < 5 )
    v11 = &StringLiteral_15933/*"[FFFF00]"*/;
  if ( restHours < 1 )
    v11 = &StringLiteral_15930/*"[FF0000]"*/;
  return (System_String_o *)*v11;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v20; // x1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v25; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v29; // x1

  if ( (byte_42E9530 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E9530 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B5D560(
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
      v25 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v25, bgSpriteName, 0LL);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_28:
        sub_B5D69C(TimeLimitAt, v20);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.typeMetadataHandle)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.interopData);
    }
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v20, v21, v22);
    byte_42E4B1E = 1;
  }
  TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = TimeLimitAt->fields.pfbLineP->klass;
  if ( !klass )
    goto LABEL_28;
  if ( !*p_eventUiEntity )
    goto LABEL_28;
  TimeLimitAt = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
  if ( !TimeLimitAt )
    goto LABEL_28;
  TimeLimitAt = (ScrTerminalMap_o *)ScrTerminalMap__GetTimeLimitAt(TimeLimitAt, (*p_eventUiEntity)->fields.eventId, 0LL);
  titleText = this->fields.titleText;
  this->fields.reidTimeLimit = (int64_t)TimeLimitAt;
  if ( !titleText )
    goto LABEL_28;
  UILabel__set_text(titleText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeText;
  if ( !TimeLimitAt )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeOverText;
  if ( !TimeLimitAt )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoRaidTimeComponent__UpdateDisp(this, v29);
}


bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E9534 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9534 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return EventRaidMaster__IsEventRaidAliveAny((EventRaidMaster_o *)Instance, eventId, 0LL);
}


// attributes: thunk
void __fastcall EventInfoRaidTimeComponent__Update(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoRaidTimeComponent__UpdateDisp(this, method);
}


void __fastcall EventInfoRaidTimeComponent__UpdateDisp(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x23
  UnityEngine_GameObject_o *Time; // x0
  __int64 v32; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v34; // x21
  System_String_o *v35; // x0
  struct EventUiEntity_o *v36; // x8
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x22
  System_String_o *v40; // x20
  const MethodInfo *v41; // x2
  struct EventUiEntity_o *v42; // x8
  System_String_o *v43; // x22
  int v44; // w2
  __int64 v45; // x3
  struct UILabel_o *v46; // x20
  const MethodInfo *v47; // x2
  System_String_o *v48; // x1
  RaidAutoUpdateRequest_c *v49; // x0
  struct UILabel_o *v50; // x19
  EventInfoRaidTimeComponent_o *v51; // x0
  const MethodInfo *v52; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_42E9531 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5770/*"EVENT_RAID_TIME_OVER_TXT_"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_990/*"00:00:00[-]"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5769/*"EVENT_RAID_TIME_OVER_TXT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5767/*"EVENT_RAID_TIME_LIMIT_TXT_"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5766/*"EVENT_RAID_TIME_LIMIT_TXT"*/, v26, v27, v28);
    byte_42E9531 = 1;
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
        Time = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v34 = Time;
          v35 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_44577788(
                                               (System_String_o *)StringLiteral_5767/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v35,
                                               0LL);
          v36 = this->fields.eventUiEntity;
          if ( v36 )
          {
            v37 = (System_String_o *)Time;
            v38 = System_Int32__ToString((int)v36 + 24, 0LL);
            v39 = System_String__Concat_44577788((System_String_o *)StringLiteral_5770/*"EVENT_RAID_TIME_OVER_TXT_"*/, v38, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v37, 0LL) )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v37 = (System_String_o *)StringLiteral_5766/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            }
            v40 = LocalizationManager__Get(v37, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v39, 0LL) )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v39 = (System_String_o *)StringLiteral_5769/*"EVENT_RAID_TIME_OVER_TXT"*/;
            }
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v39, 0LL);
            v42 = this->fields.eventUiEntity;
            if ( v42 )
            {
              v43 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v42->fields.eventId,
                     v41) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v34 < 1 )
                  {
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                    }
                    if ( !byte_42E8169 )
                    {
                      sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v32, v44, v45);
                      byte_42E8169 = 1;
                    }
                    v49 = RaidAutoUpdateRequest_TypeInfo;
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                      v49 = RaidAutoUpdateRequest_TypeInfo;
                    }
                    if ( v49->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
                    {
                      Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                      this->fields.isUpdate = 0;
                      if ( Time )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0LL);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0LL);
                          Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                          if ( Time )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0LL);
                            Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                            if ( Time )
                            {
                              v48 = v43;
                              goto LABEL_69;
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                      if ( Time )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0LL);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0LL);
                          Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                          if ( Time )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0LL);
                            Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                            if ( Time )
                            {
                              UILabel__set_text((UILabel_o *)Time, v40, 0LL);
                              v50 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v51, 0, v52);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_44577788(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_990/*"00:00:00[-]"*/,
                                                                   0LL);
                              if ( v50 )
                              {
                                v48 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v50;
                                goto LABEL_69;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                    if ( Time )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0LL);
                      Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                      if ( Time )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0LL);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0LL);
                          Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                          if ( Time )
                          {
                            UILabel__set_text((UILabel_o *)Time, v40, 0LL);
                            v46 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v47);
                            if ( v46 )
                            {
                              v48 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v46;
LABEL_69:
                              UILabel__set_text((UILabel_o *)Time, v48, 0LL);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                this->fields.isUpdate = 0;
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
        sub_B5D69C(Time, v32);
      }
    }
  }
}