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
  __int64 v7; // x1
  int64_t Time; // x0
  uint64_t dateData; // x20
  uint64_t v10; // x19
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v13; // w19
  const MethodInfo *v14; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v16; // x20
  Il2CppObject *v17; // x19
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int32_t v23; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v25; // 0:x0.8
  System_TimeSpan_o v26; // 0:x0.8
  System_TimeSpan_o v27; // 0:x0.8
  System_TimeSpan_o v28; // 0:x0.8
  System_TimeSpan_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x1.8

  if ( (byte_49FDC0D & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, at);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24849/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v7);
    byte_49FDC0D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_38073412(Time, 0LL).fields._dateData;
  v10 = NetworkManager__getDateTime_38073412(at, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v25.fields._dateData = v10;
  v30.fields._dateData = dateData;
  ticks = System_DateTime__op_Subtraction_62068280(v25, v30, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v26.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v26, 0LL);
  v27.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v27, 0LL);
  v13 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v13, v14);
  v16 = System_String__Concat_61375396(RestTimeColorStr, (System_String_o *)StringLiteral_24849/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v23 = v13;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v28.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v28, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v29.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v29, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_61389836(v16, v17, v18, v19, 0LL);
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

  if ( (byte_49FDC0E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15865/*"[FF0000]"*/, *(_QWORD *)&restHours);
    sub_1B640C8(&StringLiteral_15871/*"[FFFFFF]"*/, v4);
    sub_1B640C8(&StringLiteral_15868/*"[FFFF00]"*/, v5);
    byte_49FDC0E = 1;
  }
  if ( restHours <= 4 )
    v6 = &StringLiteral_15868/*"[FFFF00]"*/;
  else
    v6 = (__int64 *)&StringLiteral_15871/*"[FFFFFF]"*/;
  if ( restHours <= 0 )
    v6 = &StringLiteral_15865/*"[FF0000]"*/;
  return (System_String_o *)*v6;
}


void __fastcall EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v13; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v17; // x1

  if ( (byte_49FDC0B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, entity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FDC0B = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v13 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v13, bgSpriteName, 0LL);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_24:
        sub_1B64324(TimeLimitAt);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.typeMetadataHandle)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.interopData);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v10);
    byte_49F76BD = 1;
  }
  TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = TimeLimitAt->fields.rootEffectP->klass;
  if ( !klass )
    goto LABEL_24;
  if ( !*p_eventUiEntity )
    goto LABEL_24;
  TimeLimitAt = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
  if ( !TimeLimitAt )
    goto LABEL_24;
  TimeLimitAt = (ScrTerminalMap_o *)ScrTerminalMap__GetTimeLimitAt(TimeLimitAt, (*p_eventUiEntity)->fields.eventId, 0LL);
  titleText = this->fields.titleText;
  this->fields.reidTimeLimit = (int64_t)TimeLimitAt;
  if ( !titleText )
    goto LABEL_24;
  UILabel__set_text(titleText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeText;
  if ( !TimeLimitAt )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  TimeLimitAt = (ScrTerminalMap_o *)this->fields.timeOverText;
  if ( !TimeLimitAt )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)TimeLimitAt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoRaidTimeComponent__UpdateDisp(this, v17);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FDC0F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FDC0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  UnityEngine_Object_o *timeText; // x20
  int64_t reidTimeLimit; // x24
  UnityEngine_GameObject_o *Time; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v14; // x21
  System_String_o *v15; // x0
  struct EventUiEntity_o *v16; // x8
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  bool v20; // w23
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  bool v23; // w23
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  struct EventUiEntity_o *v26; // x8
  System_String_o *v27; // x22
  __int64 v28; // x1
  struct UILabel_o *v29; // x20
  const MethodInfo *v30; // x2
  System_String_o *v31; // x1
  struct UILabel_o *v32; // x19
  EventInfoRaidTimeComponent_o *v33; // x0
  const MethodInfo *v34; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_49FDC0C & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_5660/*"EVENT_RAID_TIME_OVER_TXT_"*/, v5);
    sub_1B640C8(&StringLiteral_1230/*"00:00:00[-]"*/, v6);
    sub_1B640C8(&StringLiteral_5659/*"EVENT_RAID_TIME_OVER_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_5657/*"EVENT_RAID_TIME_LIMIT_TXT_"*/, v8);
    sub_1B640C8(&StringLiteral_5656/*"EVENT_RAID_TIME_LIMIT_TXT"*/, v9);
    byte_49FDC0C = 1;
  }
  if ( this->fields.isUpdate )
  {
    timeText = (UnityEngine_Object_o *)this->fields.timeText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(timeText, 0LL, 0LL) )
    {
      reidTimeLimit = this->fields.reidTimeLimit;
      if ( reidTimeLimit >= 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v14 = Time;
          v15 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                               (System_String_o *)StringLiteral_5657/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v15,
                                               0LL);
          v16 = this->fields.eventUiEntity;
          if ( v16 )
          {
            v17 = (System_String_o *)Time;
            v18 = System_Int32__ToString((int)v16 + 24, 0LL);
            v19 = System_String__Concat_61375396((System_String_o *)StringLiteral_5660/*"EVENT_RAID_TIME_OVER_TXT_"*/, v18, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v20 = LocalizationManager__ContainsKey(v17, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v20 )
              v21 = v17;
            else
              v21 = (System_String_o *)StringLiteral_5656/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            v22 = LocalizationManager__Get(v21, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v23 = LocalizationManager__ContainsKey(v19, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = v23 ? v19 : (System_String_o *)StringLiteral_5659/*"EVENT_RAID_TIME_OVER_TXT"*/;
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24, 0LL);
            v26 = this->fields.eventUiEntity;
            if ( v26 )
            {
              v27 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v26->fields.eventId,
                     v25) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v14 < 1 )
                  {
                    if ( !byte_49F97F8 )
                    {
                      sub_1B640C8(&RaidAutoUpdateRequest_TypeInfo, v28);
                      byte_49F97F8 = 1;
                    }
                    if ( RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap >= this->fields.reidTimeLimit )
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
                              v31 = v27;
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
                              v32 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v33, 0, v34);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_1230/*"00:00:00[-]"*/,
                                                                   0LL);
                              if ( v32 )
                              {
                                v31 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v32;
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
                            v29 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v30);
                            if ( v29 )
                            {
                              v31 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v29;
LABEL_53:
                              UILabel__set_text((UILabel_o *)Time, v31, 0LL);
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
        sub_1B64324(Time);
      }
    }
  }
}