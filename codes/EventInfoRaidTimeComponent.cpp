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

  if ( (byte_418869C & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, at);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23505/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v6);
    byte_418869C = 1;
  }
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_26271468(Time, 0LL).fields.dateData;
  v9 = NetworkManager__getDateTime_26271468(at, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v24.fields.dateData = v9;
  v29.fields.dateData = dateData;
  ticks = System_DateTime__op_Subtraction_15284788(v24, v29, 0LL).fields._ticks;
  v25.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v25, 0LL);
  v26.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v26, 0LL);
  v12 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v12, v13);
  v15 = System_String__Concat_44305532(RestTimeColorStr, (System_String_o *)StringLiteral_23505/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v22 = v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v27.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v27, 0LL);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v28.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v28, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_44306596(v15, v16, v17, v18, 0LL);
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

  if ( (byte_418869D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15740/*"[FF0000]"*/, *(_QWORD *)&restHours);
    sub_B2C35C(&StringLiteral_15746/*"[FFFFFF]"*/, v4);
    sub_B2C35C(&StringLiteral_15743/*"[FFFF00]"*/, v5);
    byte_418869D = 1;
  }
  v6 = (__int64 *)&StringLiteral_15746/*"[FFFFFF]"*/;
  if ( restHours < 5 )
    v6 = &StringLiteral_15743/*"[FFFF00]"*/;
  if ( restHours < 1 )
    v6 = &StringLiteral_15740/*"[FF0000]"*/;
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
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v21; // x1

  if ( (byte_418869A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418869A = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B2C2F8(
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
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_28:
        sub_B2C434(TimeLimitAt, v14);
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    byte_4183C65 = 1;
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
  EventInfoRaidTimeComponent__UpdateDisp(this, v21);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418869E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418869E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x23
  UnityEngine_GameObject_o *Time; // x0
  __int64 v14; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v16; // x21
  System_String_o *v17; // x0
  struct EventUiEntity_o *v18; // x8
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x22
  System_String_o *v22; // x20
  const MethodInfo *v23; // x2
  struct EventUiEntity_o *v24; // x8
  System_String_o *v25; // x22
  struct UILabel_o *v26; // x20
  const MethodInfo *v27; // x2
  System_String_o *v28; // x1
  RaidAutoUpdateRequest_c *v29; // x0
  struct UILabel_o *v30; // x19
  EventInfoRaidTimeComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_418869B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&RaidAutoUpdateRequest_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5693/*"EVENT_RAID_TIME_OVER_TXT_"*/, v6);
    sub_B2C35C(&StringLiteral_970/*"00:00:00[-]"*/, v7);
    sub_B2C35C(&StringLiteral_5692/*"EVENT_RAID_TIME_OVER_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_5690/*"EVENT_RAID_TIME_LIMIT_TXT_"*/, v9);
    sub_B2C35C(&StringLiteral_5689/*"EVENT_RAID_TIME_LIMIT_TXT"*/, v10);
    byte_418869B = 1;
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
          v16 = Time;
          v17 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_44305532(
                                               (System_String_o *)StringLiteral_5690/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v17,
                                               0LL);
          v18 = this->fields.eventUiEntity;
          if ( v18 )
          {
            v19 = (System_String_o *)Time;
            v20 = System_Int32__ToString((int)v18 + 24, 0LL);
            v21 = System_String__Concat_44305532((System_String_o *)StringLiteral_5693/*"EVENT_RAID_TIME_OVER_TXT_"*/, v20, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v19, 0LL) )
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
              v19 = (System_String_o *)StringLiteral_5689/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            }
            v22 = LocalizationManager__Get(v19, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( LocalizationManager__ContainsKey(v21, 0LL) )
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
              v21 = (System_String_o *)StringLiteral_5692/*"EVENT_RAID_TIME_OVER_TXT"*/;
            }
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0LL);
            v24 = this->fields.eventUiEntity;
            if ( v24 )
            {
              v25 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v24->fields.eventId,
                     v23) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v16 < 1 )
                  {
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                    }
                    if ( !byte_4186CF8 )
                    {
                      sub_B2C35C(&RaidAutoUpdateRequest_TypeInfo, v14);
                      byte_4186CF8 = 1;
                    }
                    v29 = RaidAutoUpdateRequest_TypeInfo;
                    if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
                      v29 = RaidAutoUpdateRequest_TypeInfo;
                    }
                    if ( v29->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
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
                              v28 = v25;
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
                              UILabel__set_text((UILabel_o *)Time, v22, 0LL);
                              v30 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v31, 0, v32);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_44305532(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_970/*"00:00:00[-]"*/,
                                                                   0LL);
                              if ( v30 )
                              {
                                v28 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v30;
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
                            UILabel__set_text((UILabel_o *)Time, v22, 0LL);
                            v26 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v27);
                            if ( v26 )
                            {
                              v28 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v26;
LABEL_69:
                              UILabel__set_text((UILabel_o *)Time, v28, 0LL);
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
        sub_B2C434(Time, v14);
      }
    }
  }
}