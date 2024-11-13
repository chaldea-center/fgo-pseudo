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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Time; // x0
  uint64_t dateData; // x20
  __int64 v14; // x1
  uint64_t v15; // x19
  __int64 v16; // x1
  int32_t Hours; // w19
  EventInfoRaidTimeComponent_o *Days; // x0
  int32_t v19; // w19
  const MethodInfo *v20; // x2
  System_String_o *RestTimeColorStr; // x0
  System_String_o *v22; // x20
  Il2CppObject *v23; // x19
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-40h] BYREF
  int32_t v29; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t ticks; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_TimeSpan_o v32; // 0:x0.8
  System_TimeSpan_o v33; // 0:x0.8
  System_TimeSpan_o v34; // 0:x0.8
  System_TimeSpan_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x1.8

  if ( (byte_4B177E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, at, method);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25204/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v10, v11);
    byte_4B177E1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, at);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime_39270164(Time, 0LL).fields._dateData;
  v15 = NetworkManager__getDateTime_39270164(at, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v14);
  v31.fields._dateData = v15;
  v36.fields._dateData = dateData;
  ticks = System_DateTime__op_Subtraction_63094440(v31, v36, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v16);
  v32.fields._ticks = (int64_t)&ticks;
  Hours = System_TimeSpan__get_Hours(v32, 0LL);
  v33.fields._ticks = (int64_t)&ticks;
  Days = (EventInfoRaidTimeComponent_o *)System_TimeSpan__get_Days(v33, 0LL);
  v19 = Hours + 24 * (_DWORD)Days;
  RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(Days, v19, v20);
  v22 = System_String__Concat_62401220(RestTimeColorStr, (System_String_o *)StringLiteral_25204/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, 0LL);
  v29 = v19;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v34.fields._ticks = (int64_t)&ticks;
  Minutes = System_TimeSpan__get_Minutes(v34, 0LL);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v35.fields._ticks = (int64_t)&ticks;
  Seconds = System_TimeSpan__get_Seconds(v35, 0LL);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  return System_String__Format_62415660(v22, v23, v24, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoRaidTimeComponent__GetRestTimeColorStr(
        EventInfoRaidTimeComponent_o *this,
        int32_t restHours,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 *v8; // x8

  if ( (byte_4B177E2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16099/*"[FF0000]"*/, *(_QWORD *)&restHours, method);
    sub_1BCA7E0(&StringLiteral_16106/*"[FFFFFF]"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_16102/*"[FFFF00]"*/, v6, v7);
    byte_4B177E2 = 1;
  }
  if ( restHours <= 4 )
    v8 = &StringLiteral_16102/*"[FFFF00]"*/;
  else
    v8 = (__int64 *)&StringLiteral_16106/*"[FFFFFF]"*/;
  if ( restHours <= 0 )
    v8 = &StringLiteral_16099/*"[FF0000]"*/;
  return (System_String_o *)*v8;
}


void __fastcall EventInfoRaidTimeComponent__Initialization(
        EventInfoRaidTimeComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *bgSpriteName; // x21
  UISprite_o *v21; // x22
  ScrTerminalMap_o *TimeLimitAt; // x0
  UnityEngine_GameObject_c *klass; // x8
  UILabel_o *titleText; // x8
  const MethodInfo *v25; // x1

  if ( (byte_4B177DF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B177DF = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL) )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v21 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
      AtlasManager__SetEventUI(v21, bgSpriteName, 0LL);
      TimeLimitAt = (ScrTerminalMap_o *)this->fields.bgSprite;
      if ( !TimeLimitAt )
LABEL_24:
        sub_1BCAA3C(TimeLimitAt, v17);
      ((void (__fastcall *)(ScrTerminalMap_o *, void *))TimeLimitAt->klass[2]._1.typeMetadataHandle)(
        TimeLimitAt,
        TimeLimitAt->klass[2]._1.interopData);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v18);
    byte_4B10F83 = 1;
  }
  TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
    TimeLimitAt = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = TimeLimitAt->fields.subRootGimmickP->klass;
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
  EventInfoRaidTimeComponent__UpdateDisp(this, v25);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoRaidTimeComponent__OnMoveRaidBoss(
        EventInfoRaidTimeComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B177E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B177E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *timeText; // x20
  __int64 v19; // x1
  int64_t reidTimeLimit; // x24
  UnityEngine_GameObject_o *Time; // x0
  __int64 v22; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_GameObject_o *v24; // x21
  System_String_o *v25; // x0
  struct EventUiEntity_o *v26; // x8
  System_String_o *v27; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  __int64 v31; // x1
  bool v32; // w23
  System_String_o *v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x20
  __int64 v36; // x1
  bool v37; // w23
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  struct EventUiEntity_o *v40; // x8
  System_String_o *v41; // x22
  __int64 v42; // x2
  struct UILabel_o *v43; // x20
  const MethodInfo *v44; // x2
  System_String_o *v45; // x1
  struct UILabel_o *v46; // x19
  EventInfoRaidTimeComponent_o *v47; // x0
  const MethodInfo *v48; // x2
  System_String_o *RestTimeColorStr; // x0

  if ( (byte_4B177E0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5770/*"EVENT_RAID_TIME_OVER_TXT_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1225/*"00:00:00[-]"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5769/*"EVENT_RAID_TIME_OVER_TXT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5767/*"EVENT_RAID_TIME_LIMIT_TXT_"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5766/*"EVENT_RAID_TIME_LIMIT_TXT"*/, v16, v17);
    byte_4B177E0 = 1;
  }
  if ( this->fields.isUpdate )
  {
    timeText = (UnityEngine_Object_o *)this->fields.timeText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(timeText, 0LL, 0LL) )
    {
      reidTimeLimit = this->fields.reidTimeLimit;
      if ( reidTimeLimit >= 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
        Time = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          v24 = Time;
          v25 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
          Time = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                               (System_String_o *)StringLiteral_5767/*"EVENT_RAID_TIME_LIMIT_TXT_"*/,
                                               v25,
                                               0LL);
          v26 = this->fields.eventUiEntity;
          if ( v26 )
          {
            v27 = (System_String_o *)Time;
            v28 = System_Int32__ToString((int)v26 + 24, 0LL);
            v30 = System_String__Concat_62401220((System_String_o *)StringLiteral_5770/*"EVENT_RAID_TIME_OVER_TXT_"*/, v28, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
            v32 = LocalizationManager__ContainsKey(v27, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
            if ( v32 )
              v33 = v27;
            else
              v33 = (System_String_o *)StringLiteral_5766/*"EVENT_RAID_TIME_LIMIT_TXT"*/;
            v35 = LocalizationManager__Get(v33, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
            v37 = LocalizationManager__ContainsKey(v30, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
            v38 = v37 ? v30 : (System_String_o *)StringLiteral_5769/*"EVENT_RAID_TIME_OVER_TXT"*/;
            Time = (UnityEngine_GameObject_o *)LocalizationManager__Get(v38, 0LL);
            v40 = this->fields.eventUiEntity;
            if ( v40 )
            {
              v41 = (System_String_o *)Time;
              if ( EventInfoRaidTimeComponent__OnMoveRaidBoss(
                     (EventInfoRaidTimeComponent_o *)Time,
                     v40->fields.eventId,
                     v39) )
              {
                Time = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive(Time, 1, 0LL);
                  if ( reidTimeLimit - (__int64)v24 < 1 )
                  {
                    if ( !byte_4B13525 )
                    {
                      sub_1BCA7E0(&RaidAutoUpdateRequest_TypeInfo, v22, v42);
                      byte_4B13525 = 1;
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
                              v45 = v41;
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
                              UILabel__set_text((UILabel_o *)Time, v35, 0LL);
                              v46 = this->fields.timeText;
                              RestTimeColorStr = EventInfoRaidTimeComponent__GetRestTimeColorStr(v47, 0, v48);
                              Time = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                                   RestTimeColorStr,
                                                                   (System_String_o *)StringLiteral_1225/*"00:00:00[-]"*/,
                                                                   0LL);
                              if ( v46 )
                              {
                                v45 = (System_String_o *)Time;
                                Time = (UnityEngine_GameObject_o *)v46;
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
                            UILabel__set_text((UILabel_o *)Time, v35, 0LL);
                            v43 = this->fields.timeText;
                            Time = (UnityEngine_GameObject_o *)EventInfoRaidTimeComponent__GetRestTime(
                                                                 this,
                                                                 this->fields.reidTimeLimit,
                                                                 v44);
                            if ( v43 )
                            {
                              v45 = (System_String_o *)Time;
                              Time = (UnityEngine_GameObject_o *)v43;
LABEL_53:
                              UILabel__set_text((UILabel_o *)Time, v45, 0LL);
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
        sub_1BCAA3C(Time, v22);
      }
    }
  }
}