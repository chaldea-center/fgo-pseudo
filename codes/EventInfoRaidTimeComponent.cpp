void __fastcall EventInfoRaidTimeComponent___ctor(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTime(
        EventInfoRaidTimeComponent_o *this,
        int64_t at,
        const MethodInfo *method)
{
  int64_t Time; // x0
  uint64_t dateData; // x20
  uint64_t v6; // x19
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v9; // w19
  const MethodInfo *v10; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v12; // x20
  __int64 v13; // x2
  Il2CppObject *v14; // x19
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  __int64 v17; // x2
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

  if ( (byte_4352A6D & 1) == 0 )
  {
    sub_B70694(&System_DateTime_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_23888/*"{0:D2}:{1:D2}:{2:D2}[-]"*/);
    byte_4352A6D = 1;
  }
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_25947808(Time, 0LL).fields.dateData;
  v6 = NetworkManager__getDateTime_25947808(at, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v24.fields.dateData = v6;
  v29.fields.dateData = dateData;
  ticks = System_DateTime__op_Subtraction_42983664(v24, v29, 0LL).fields._ticks;
  v25.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v25, 0LL);
  v26.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v26, 0LL);
  v9 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v9, v10);
  v12 = System_String__Concat_44758168(RestTimeColorStr, (System_String_o *)StringLiteral_23888/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v22 = v9;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v13);
  v27.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v27, 0LL);
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v15);
  v28.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v28, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v17);
  return System_String__Format_44759232(v12, v14, v16, v18, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4352A6E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15961/*"[FF0000]"*/);
    sub_B70694(&StringLiteral_15967/*"[FFFFFF]"*/);
    sub_B70694(&StringLiteral_15964/*"[FFFF00]"*/);
    byte_4352A6E = 1;
  }
  v4 = (__int64 *)&StringLiteral_15967/*"[FFFFFF]"*/;
  if ( restHours < 5 )
    v4 = &StringLiteral_15964/*"[FFFF00]"*/;
  if ( restHours < 1 )
    v4 = &StringLiteral_15961/*"[FF0000]"*/;
  return (System_String_o *)*v4;
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
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v14; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v18; // x1

  if ( (byte_4352A6B & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352A6B = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B70630(
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
      v14 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v14, bgSpriteName, 0LL);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_28:
        sub_B7076C(TimeLimitAt, v11);
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
  EventInfoRaidTimeComponent__UpdateDisp(this, v18);
}


bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4352A6F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352A6F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
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
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x23
  UnityEngine_GameObject_o *Time; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v8; // x21
  System_String_o *v9; // x0
  struct EventUiEntity_o *v10; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  System_String_o *v14; // x20
  const MethodInfo *v15; // x2
  struct EventUiEntity_o *v16; // x8
  System_String_o *v17; // x22
  struct UILabel_o *v18; // x20
  const MethodInfo *v19; // x2
  System_String_o *v20; // x1
  RaidAutoUpdateRequest_c *v21; // x0
  struct UILabel_o *v22; // x19
  EventInfoRaidTimeComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_4352A6C & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&RaidAutoUpdateRequest_TypeInfo);
    sub_B70694(&StringLiteral_5782/*"EVENT_RAID_TIME_OVER_TXT_"*/);
    sub_B70694(&StringLiteral_995/*"00:00:00[-]"*/);
    sub_B70694(&StringLiteral_5781/*"EVENT_RAID_TIME_OVER_TXT"*/);
    sub_B70694(&StringLiteral_5779/*"EVENT_RAID_TIME_LIMIT_TXT_"*/);
    sub_B70694(&StringLiteral_5778/*"EVENT_RAID_TIME_LIMIT_TXT"*/);
    byte_4352A6C = 1;
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
          v8 = Time;
          v9 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_44758168(
                                               (System_String_o *)StringLiteral_5779/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v9,
                                               0LL);
          v10 = this->fields.eventUiEntity;
          if ( v10 )
          {
            v11 = (System_String_o *)Time;
            v12 = System_Int32__ToString((int)v10 + 24, 0LL);
            v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_5782/*"EVENT_RAID_TIME_OVER_TXT_"*/, v12, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v11, 0LL) )
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
              v11 = (System_String_o *)StringLiteral_5778/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            }
            v14 = LocalizationManager__Get(v11, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v13, 0LL) )
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
              v13 = (System_String_o *)StringLiteral_5781/*"EVENT_RAID_TIME_OVER_TXT"*/;
            }
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v13, 0LL);
            v16 = this->fields.eventUiEntity;
            if ( v16 )
            {
              v17 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v16->fields.eventId,
                     v15) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v8 < 1 )
                  {
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                    }
                    if ( !byte_4351891 )
                    {
                      sub_B70694(&RaidAutoUpdateRequest_TypeInfo);
                      byte_4351891 = 1;
                    }
                    v21 = RaidAutoUpdateRequest_TypeInfo;
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                      v21 = RaidAutoUpdateRequest_TypeInfo;
                    }
                    if ( v21->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
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
                              v20 = v17;
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
                              UILabel__set_text((UILabel_o *)Time, v14, 0LL);
                              v22 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v23, 0, v24);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_44758168(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_995/*"00:00:00[-]"*/,
                                                                   0LL);
                              if ( v22 )
                              {
                                v20 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v22;
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
                            UILabel__set_text((UILabel_o *)Time, v14, 0LL);
                            v18 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v19);
                            if ( v18 )
                            {
                              v20 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v18;
LABEL_69:
                              UILabel__set_text((UILabel_o *)Time, v20, 0LL);
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
        sub_B7076C(Time, v6);
      }
    }
  }
}