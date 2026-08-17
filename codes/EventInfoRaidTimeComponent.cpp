void EventInfoRaidTimeComponent___ctor(EventInfoRaidTimeComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


System_String_o *EventInfoRaidTimeComponent__GetRestTime(
        EventInfoRaidTimeComponent_o *this,
        int64_t at,
        const MethodInfo *method)
{
  int v4; // w8
  int64_t Time; // x0
  System_DateTime_o v6; // x20
  System_DateTime_o v7; // x1
  System_DateTime_o v8; // x19
  System_DateTime_o v9; // x0
  System_DateTime_o v10; // x1
  System_TimeSpan_o v11; // x1
  System_TimeSpan_o v12; // x0
  int32_t Hours; // w19
  System_TimeSpan_o v14; // x0
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v16; // w19
  const MethodInfo *v17; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v19; // x20
  Il2CppObject *v20; // x19
  System_TimeSpan_o v21; // x0
  Il2CppObject *v22; // x21
  System_TimeSpan_o v23; // x0
  Il2CppObject *v24; // x0
  int32_t Seconds; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int64_t ticks; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5972606 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_26450/*"{0:D2}:{1:D2}:{2:D2}[-]"*/);
    byte_5972606 = 1;
  }
  v4 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  ticks = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, at);
  Time = NetworkManager__getTime(0);
  v6.fields._dateData = NetworkManager__getDateTime_48347260(Time, 0).fields._dateData;
  v8.fields._dateData = NetworkManager__getDateTime_48347260(at, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v7.fields._dateData);
  v9.fields._dateData = v8.fields._dateData;
  v10.fields._dateData = v6.fields._dateData;
  ticks = System_DateTime__op_Subtraction_77030584(v9, v10, 0).fields._ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v11.fields._ticks);
  v12.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v12, 0);
  v14.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v14, 0);
  v16 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v16, v17);
  v19 = System_String__Concat_75651716(RestTimeColorStr, (System_String_o *)StringLiteral_26450/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0);
  v28 = v16;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
  v21.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v21, 0);
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Minutes);
  v23.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v23, 0);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
  return System_String__Format_75697948(v19, v20, v22, v24, 0);
}


System_String_o *EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_5972607 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16545/*"[FF0000]"*/);
    sub_2213A60(&StringLiteral_16552/*"[FFFFFF]"*/);
    sub_2213A60(&StringLiteral_16548/*"[FFFF00]"*/);
    byte_5972607 = 1;
  }
  if ( (unsigned int)restHours <= 4 )
    v4 = &StringLiteral_16548/*"[FFFF00]"*/;
  else
    v4 = (__int64 *)&StringLiteral_16552/*"[FFFFFF]"*/;
  if ( restHours <= 0 )
    v4 = &StringLiteral_16545/*"[FF0000]"*/;
  return (System_String_o *)*v4;
}


void EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v13; // x21
  System_String_o *bgSpriteName; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v18; // x1

  if ( (byte_5972604 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972604 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v13 = this->fields.bgSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
      AtlasManager__SetEventUI(v13, bgSpriteName, 0);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_24:
        sub_2213CDC(TimeLimitAt, v11);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.parent)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.generic_class);
    }
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
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

  if ( (byte_5972608 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972608 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
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
  __int64 v4; // x1
  int64_t reidTimeLimit; // x23
  UnityEngine_GameObject_o *Time; // x0
  __int64 v7; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v9; // x21
  System_String_o *v10; // x0
  struct EventUiEntity_o *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x22
  __int64 v16; // x1
  bool v17; // w8
  int v18; // w9
  __int64 v19; // x1
  System_String_o *v20; // x20
  __int64 v21; // x1
  bool v22; // w8
  int v23; // w9
  const MethodInfo *v24; // x2
  struct EventUiEntity_o *v25; // x8
  System_String_o *v26; // x22
  struct UILabel_o *v27; // x20
  const MethodInfo *v28; // x2
  System_String_o *v29; // x1
  struct UILabel_o *v30; // x19
  EventInfoRaidTimeComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_5972605 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5912/*"EVENT_RAID_TIME_OVER_TXT_"*/);
    sub_2213A60(&StringLiteral_1211/*"00:00:00[-]"*/);
    sub_2213A60(&StringLiteral_5911/*"EVENT_RAID_TIME_OVER_TXT"*/);
    sub_2213A60(&StringLiteral_5909/*"EVENT_RAID_TIME_LIMIT_TXT_"*/);
    sub_2213A60(&StringLiteral_5908/*"EVENT_RAID_TIME_LIMIT_TXT"*/);
    byte_5972605 = 1;
  }
  if ( this->fields.isUpdate )
  {
    timeText = (UnityEngine_Object_o *)this->fields.timeText;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(timeText, 0, 0) )
    {
      reidTimeLimit = this->fields.reidTimeLimit;
      if ( reidTimeLimit >= 1 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        Time = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v9 = Time;
          v10 = System_Int32__ToString((int)eventUiEntity + 24, 0);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                               (System_String_o *)StringLiteral_5909/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v10,
                                               0);
          v11 = this->fields.eventUiEntity;
          if ( v11 )
          {
            v12 = (System_String_o *)Time;
            v13 = System_Int32__ToString((int)v11 + 24, 0);
            v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_5912/*"EVENT_RAID_TIME_OVER_TXT_"*/, v13, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
            v17 = LocalizationManager__ContainsKey(v12, 0);
            v18 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( v17 )
            {
              if ( !v18 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
            }
            else
            {
              if ( !v18 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
              v12 = (System_String_o *)StringLiteral_5908/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            }
            v20 = LocalizationManager__Get(v12, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
            v22 = LocalizationManager__ContainsKey(v15, 0);
            v23 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( v22 )
            {
              if ( !v23 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
            }
            else
            {
              if ( !v23 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
              v15 = (System_String_o *)StringLiteral_5911/*"EVENT_RAID_TIME_OVER_TXT"*/;
            }
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0);
            v25 = this->fields.eventUiEntity;
            if ( v25 )
            {
              v26 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v25->fields.eventId,
                     v24) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0);
                  if ( reidTimeLimit - (__int64)v9 < 1 )
                  {
                    if ( !byte_596D8AF )
                    {
                      sub_2213A60(&RaidAutoUpdateRequest_TypeInfo);
                      byte_596D8AF = 1;
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
                              v29 = v26;
                              goto LABEL_55;
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
                              UILabel__set_text((UILabel_o *)Time, v20, 0);
                              v30 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v31, 0, v32);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_1211/*"00:00:00[-]"*/,
                                                                   0);
                              if ( v30 )
                              {
                                v29 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v30;
                                goto LABEL_55;
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
                            UILabel__set_text((UILabel_o *)Time, v20, 0);
                            v27 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v28);
                            if ( v27 )
                            {
                              v29 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v27;
LABEL_55:
                              UILabel__set_text((UILabel_o *)Time, v29, 0);
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
        sub_2213CDC(Time, v7);
      }
    }
  }
}