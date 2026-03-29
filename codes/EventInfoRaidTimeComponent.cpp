System_String_o *EventInfoRaidTimeComponent__GetRestTime(
        EventInfoRaidTimeComponent_o *this,
        int64_t at,
        const MethodInfo *method)
{
  int64_t Time; // x0
  System_DateTime_o v5; // x20
  System_DateTime_o v6; // x19
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v9; // w19
  const MethodInfo *v10; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int32_t v19; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D327C6 & 1) == 0 )
  {
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&System_TimeSpan_TypeInfo);
    sub_1C93AD4(&StringLiteral_25393/*"{0:D2}:{1:D2}:{2:D2}[-]"*/);
    byte_4D327C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v5.fields._dateData = NetworkManager__getDateTime_42096756(Time, 0).fields._dateData;
  v6.fields._dateData = NetworkManager__getDateTime_42096756(at, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  ticks = System_DateTime__op_Subtraction_65826720(v6, v5, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  Hours = System_TimeSpan__get_Hours((System_TimeSpan_o)&ticks, 0);
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days((System_TimeSpan_o)&ticks, 0);
  v9 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v9, v10);
  v12 = System_String__Concat_64425724(RestTimeColorStr, (System_String_o *)StringLiteral_25393/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0);
  v19 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  Minutes = System_TimeSpan__get_Minutes((System_TimeSpan_o)&ticks, 0);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  Seconds = System_TimeSpan__get_Seconds((System_TimeSpan_o)&ticks, 0);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_64467100(v12, v13, v14, v15, 0);
}


System_String_o *EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4D327C7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16021/*"[FF0000]"*/);
    sub_1C93AD4(&StringLiteral_16028/*"[FFFFFF]"*/);
    sub_1C93AD4(&StringLiteral_16024/*"[FFFF00]"*/);
    byte_4D327C7 = 1;
  }
  if ( restHours <= 4 )
    v4 = &StringLiteral_16024/*"[FFFF00]"*/;
  else
    v4 = (__int64 *)&StringLiteral_16028/*"[FFFFFF]"*/;
  if ( restHours <= 0 )
    v4 = &StringLiteral_16021/*"[FF0000]"*/;
  return (System_String_o *)*v4;
}


void EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v14; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v18; // x1

  if ( (byte_4D327C4 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D327C4 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v14 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v14, bgSpriteName, 0);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_24:
        sub_1C93D2C(TimeLimitAt, v11);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.parent)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.generic_class);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = TimeLimitAt->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_24;
  if ( !*p_eventUiEntity )
    goto LABEL_24;
  TimeLimitAt = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
  if ( !TimeLimitAt )
    goto LABEL_24;
  TimeLimitAt = (ScrTerminalMap_o *)ScrTerminalMap__GetTimeLimitAt(TimeLimitAt, (*p_eventUiEntity)->fields.eventId, 0);
  titleText = this->fields.titleText;
  this->fields.reidTimeLimit = (int64_t)TimeLimitAt;
  if ( !titleText )
    goto LABEL_24;
  UILabel__set_text(titleText, (System_String_o *)StringLiteral_1/*""*/, 0);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeText;
  if ( !TimeLimitAt )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeOverText;
  if ( !TimeLimitAt )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.isUpdate = 1;
  EventInfoRaidTimeComponent__UpdateDisp(this, v18);
}


bool EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D327C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D327C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v5);
  }
  return EventRaidMaster__IsEventRaidAliveAny((EventRaidMaster_o *)Instance, eventId, 0);
}


// attributes: thunk
void EventInfoRaidTimeComponent__Update(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoRaidTimeComponent__UpdateDisp(this, method);
}


void EventInfoRaidTimeComponent__UpdateDisp(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x24
  UnityEngine_GameObject_o *Time; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v8; // x21
  System_String_o *v9; // x0
  struct EventUiEntity_o *v10; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  bool v14; // w23
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  bool v17; // w23
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  struct EventUiEntity_o *v20; // x8
  System_String_o *v21; // x22
  struct UILabel_o *v22; // x20
  const MethodInfo *v23; // x2
  System_String_o *v24; // x1
  struct UILabel_o *v25; // x19
  EventInfoRaidTimeComponent_o *v26; // x0
  const MethodInfo *v27; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_4D327C5 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_5707/*"EVENT_RAID_TIME_OVER_TXT_"*/);
    sub_1C93AD4(&StringLiteral_1129/*"00:00:00[-]"*/);
    sub_1C93AD4(&StringLiteral_5706/*"EVENT_RAID_TIME_OVER_TXT"*/);
    sub_1C93AD4(&StringLiteral_5704/*"EVENT_RAID_TIME_LIMIT_TXT_"*/);
    sub_1C93AD4(&StringLiteral_5703/*"EVENT_RAID_TIME_LIMIT_TXT"*/);
    byte_4D327C5 = 1;
  }
  if ( this->fields.isUpdate )
  {
    timeText = (UnityEngine_Object_o *)this->fields.timeText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(timeText, 0, 0) )
    {
      reidTimeLimit = this->fields.reidTimeLimit;
      if ( reidTimeLimit >= 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v8 = Time;
          v9 = System_Int32__ToString((int)eventUiEntity + 24, 0);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_64425724(
                                               (System_String_o *)StringLiteral_5704/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v9,
                                               0);
          v10 = this->fields.eventUiEntity;
          if ( v10 )
          {
            v11 = (System_String_o *)Time;
            v12 = System_Int32__ToString((int)v10 + 24, 0);
            v13 = System_String__Concat_64425724((System_String_o *)StringLiteral_5707/*"EVENT_RAID_TIME_OVER_TXT_"*/, v12, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__ContainsKey(v11, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v14 )
              v15 = v11;
            else
              v15 = (System_String_o *)StringLiteral_5703/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            v16 = LocalizationManager__Get(v15, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v17 = LocalizationManager__ContainsKey(v13, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v18 = v17 ? v13 : (System_String_o *)StringLiteral_5706/*"EVENT_RAID_TIME_OVER_TXT"*/;
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0);
            v20 = this->fields.eventUiEntity;
            if ( v20 )
            {
              v21 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v20->fields.eventId,
                     v19) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0);
                  if ( reidTimeLimit - (__int64)v8 < 1 )
                  {
                    if ( !byte_4D2DB31 )
                    {
                      sub_1C93AD4(&RaidAutoUpdateRequest_TypeInfo);
                      byte_4D2DB31 = 1;
                    }
                    if ( RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
                    {
                      Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                      this->fields.isUpdate = 0;
                      if ( Time )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0);
                          Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                          if ( Time )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0);
                            Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                            if ( Time )
                            {
                              v24 = v21;
                              goto LABEL_53;
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
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0);
                          Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                          if ( Time )
                          {
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0);
                            Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                            if ( Time )
                            {
                              UILabel__set_text((UILabel_o *)Time, v16, 0);
                              v25 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v26, 0, v27);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_64425724(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_1129/*"00:00:00[-]"*/,
                                                                   0);
                              if ( v25 )
                              {
                                v24 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v25;
                                goto LABEL_53;
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
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0);
                      Time = (UnityEngine_GameObject_o *)this->fields.timeText;
                      if ( Time )
                      {
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 1, 0);
                        Time = (UnityEngine_GameObject_o *)this->fields.timeOverText;
                        if ( Time )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Time, 0, 0);
                          Time = (UnityEngine_GameObject_o *)this->fields.titleText;
                          if ( Time )
                          {
                            UILabel__set_text((UILabel_o *)Time, v16, 0);
                            v22 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v23);
                            if ( v22 )
                            {
                              v24 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v22;
LABEL_53:
                              UILabel__set_text((UILabel_o *)Time, v24, 0);
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
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 0, 0);
                  return;
                }
              }
            }
          }
        }
        sub_1C93D2C(Time, v6);
      }
    }
  }
}