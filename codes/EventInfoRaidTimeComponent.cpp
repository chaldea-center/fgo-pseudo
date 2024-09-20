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
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x19
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int32_t v28; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v30; // 0:x0.8
  System_TimeSpan_o v31; // 0:x0.8
  System_TimeSpan_o v32; // 0:x0.8
  System_TimeSpan_o v33; // 0:x0.8
  System_TimeSpan_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x1.8

  if ( (byte_4A5C7DF & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    sub_1B885B0(&StringLiteral_24949/*"{0:D2}:{1:D2}:{2:D2}[-]"*/);
    byte_4A5C7DF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_38478840(Time, 0LL).fields._dateData;
  v6 = NetworkManager__getDateTime_38478840(at, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v30.fields._dateData = v6;
  v35.fields._dateData = dateData;
  ticks = System_DateTime__op_Subtraction_62399924(v30, v35, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v31.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v31, 0LL);
  v32.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v32, 0LL);
  v9 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v9, v10);
  v12 = System_String__Concat_61707032(RestTimeColorStr, (System_String_o *)StringLiteral_24949/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v28 = v9;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15);
  v33.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v33, 0LL);
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v17, v18, v19);
  v34.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v34, 0LL);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v21, v22, v23);
  return System_String__Format_61721472(v12, v16, v20, v24, 0LL);
}


System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4A5C7E0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15933/*"[FF0000]"*/);
    sub_1B885B0(&StringLiteral_15939/*"[FFFFFF]"*/);
    sub_1B885B0(&StringLiteral_15936/*"[FFFF00]"*/);
    byte_4A5C7E0 = 1;
  }
  if ( restHours <= 4 )
    v4 = &StringLiteral_15936/*"[FFFF00]"*/;
  else
    v4 = (__int64 *)&StringLiteral_15939/*"[FFFFFF]"*/;
  if ( restHours <= 0 )
    v4 = &StringLiteral_15933/*"[FF0000]"*/;
  return (System_String_o *)*v4;
}


void __fastcall EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v10; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v14; // x1

  if ( (byte_4A5C7DD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C7DD = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v10 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v10, bgSpriteName, 0LL);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_24:
        sub_1B8880C(TimeLimitAt, v7);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.typeMetadataHandle)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.interopData);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  EventInfoRaidTimeComponent__UpdateDisp(this, v14);
}


bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5C7E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C7E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
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

  if ( (byte_4A5C7DE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5686/*"EVENT_RAID_TIME_OVER_TXT_"*/);
    sub_1B885B0(&StringLiteral_1229/*"00:00:00[-]"*/);
    sub_1B885B0(&StringLiteral_5685/*"EVENT_RAID_TIME_OVER_TXT"*/);
    sub_1B885B0(&StringLiteral_5683/*"EVENT_RAID_TIME_LIMIT_TXT_"*/);
    sub_1B885B0(&StringLiteral_5682/*"EVENT_RAID_TIME_LIMIT_TXT"*/);
    byte_4A5C7DE = 1;
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
          v8 = Time;
          v9 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                               (System_String_o *)StringLiteral_5683/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v9,
                                               0LL);
          v10 = this->fields.eventUiEntity;
          if ( v10 )
          {
            v11 = (System_String_o *)Time;
            v12 = System_Int32__ToString((int)v10 + 24, 0LL);
            v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_5686/*"EVENT_RAID_TIME_OVER_TXT_"*/, v12, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__ContainsKey(v11, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v14 )
              v15 = v11;
            else
              v15 = (System_String_o *)StringLiteral_5682/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            v16 = LocalizationManager__Get(v15, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v17 = LocalizationManager__ContainsKey(v13, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v18 = v17 ? v13 : (System_String_o *)StringLiteral_5685/*"EVENT_RAID_TIME_OVER_TXT"*/;
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0LL);
            v20 = this->fields.eventUiEntity;
            if ( v20 )
            {
              v21 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v20->fields.eventId,
                     v19) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v8 < 1 )
                  {
                    if ( !byte_4A58532 )
                    {
                      sub_1B885B0(&RaidAutoUpdateRequest_TypeInfo);
                      byte_4A58532 = 1;
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
                              UILabel__set_text((UILabel_o *)Time, v16, 0LL);
                              v25 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v26, 0, v27);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_1229/*"00:00:00[-]"*/,
                                                                   0LL);
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
                            UILabel__set_text((UILabel_o *)Time, v16, 0LL);
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
                              UILabel__set_text((UILabel_o *)Time, v24, 0LL);
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
        sub_1B8880C(Time, v6);
      }
    }
  }
}