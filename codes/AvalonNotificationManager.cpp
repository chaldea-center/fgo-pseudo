void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A750 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4A5A750 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
}


void __fastcall AvalonNotificationManager__Initialize(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0LL);
}


void __fastcall AvalonNotificationManager__OnApplicationFocus(
        AvalonNotificationManager_o *this,
        bool isFocus,
        const MethodInfo *method)
{
  NetworkManager_c *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v6; // x19
  int64_t ActAllRecoverTime; // x0
  int32_t v8; // w20
  System_String_o *v9; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v11; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_String_o *v14; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v16; // w19
  System_String_o *v17; // x0
  EventEntity_array *EnableEntityList; // x20
  int64_t Time_38478060; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  int v22; // w27
  int v23; // w25
  EventEntity_o *v24; // x29
  System_Collections_Generic_List_int__o *v25; // x23
  Il2CppObject *Master_object; // x19
  int v27; // w26
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v31; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v33; // x1
  EventCooltimeRewardEntity_o *v34; // x24
  int64_t v35; // x8
  int32_t v36; // w23
  System_String_o *v37; // x0
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x1
  System_String_o *v43; // x0
  int64_t v44; // x19
  _BOOL8 v45; // x0
  __int64 v46; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v50; // x1
  __int64 cooltime; // x25
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v55; // x1
  int64_t clearedAt; // x27
  EventQuestCooltimeEntity_o *v57; // x0
  __int64 v58; // x1
  bool v59; // w8
  char *v60; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x21
  System_String_o *v69; // x0
  System_String_o *v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x1
  System_String_o *v75; // x0
  int64_t v76; // x19
  int v77; // w24
  Il2CppObject **v78; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v83; // w27
  __int64 v84; // x22
  __int64 v85; // x8
  int32_t v86; // w20
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  Il2CppObject **v91; // x21
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  Il2CppObject **v96; // x22
  System_String_o *v97; // x0
  System_String_o *v98; // x21
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x1
  System_String_o *v103; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // x20
  int v107; // w23
  _BOOL8 v108; // x0
  __int64 v109; // x1
  Il2CppClass *v110; // x26
  const char *v111; // x8
  int v112; // w27
  __int64 v113; // x8
  __int64 v114; // x9
  int32_t v115; // w21
  System_String_o *v116; // x0
  __int64 v117; // x1
  System_String_o *v118; // x22
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x1
  System_String_o *v123; // x0
  int v124; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+10h] [xbp-100h] BYREF
  Il2CppObject *v126; // [xsp+28h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+30h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+50h] [xbp-C0h] BYREF
  Il2CppObject *v129; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF
  System_DateTime_o v133; // 0:x0.8
  System_DateTime_o v134; // 0:x0.8
  System_DateTime_o v135; // 0:x0.8

  if ( (byte_4A5A74F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_16806/*"ap_max"*/);
    sub_1B885B0(&StringLiteral_9272/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_22976/*"rp_max"*/);
    sub_1B885B0(&StringLiteral_22099/*"no_expedition_{0}"*/);
    sub_1B885B0(&StringLiteral_9273/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9271/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9277/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9274/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9276/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_22102/*"no_operation_{0}"*/);
    sub_1B885B0(&StringLiteral_9275/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_22101/*"no_harvest_{0}"*/);
    sub_1B885B0(&StringLiteral_22100/*"no_fatigue"*/);
    byte_4A5A74F = 1;
  }
  entity = 0LL;
  memset(&v131, 0, sizeof(v131));
  memset(&v130, 0, sizeof(v130));
  v129 = 0LL;
  memset(&v128, 0, sizeof(v128));
  memset(&v127, 0, sizeof(v127));
  v126 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A58A02 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A58A02 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  if ( v4->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v6 = SelfUserGame;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v6, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v8 = ActAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16806/*"ap_max"*/, 0LL);
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v6, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v11 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_157;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_157;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9277/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_22976/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_157;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v16 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9276/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_22100/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_157;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v133.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_38478060 = NetworkManager__getTime_38478060(v133, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_157:
        sub_1B8880C(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0;
        v23 = 0;
        do
        {
          if ( v22 >= (unsigned int)max_length )
            sub_1B88814(Instance, v13);
          v24 = EnableEntityList->m_Items[v22];
          if ( !v24 || !v21 )
            goto LABEL_157;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v21,
                                        &entity,
                                        v24->fields.id,
                                        (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_157;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v24->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_157;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v24->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_157;
          v25 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v125,
              v25,
              (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v27 = v23;
            v131 = v125;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v131,
                      (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v28 )
                break;
              if ( !Master_object )
                sub_1B8880C(v28, v29);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v24->fields.id,
                                     (int32_t)v131.fields._current,
                                     0LL);
              v31 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v34 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1B8880C(0LL, v33);
                v35 = v31->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v36 = v35 - Time_38478060;
                if ( v35 - Time_38478060 >= 1 && v35 < v24->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9274/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v38 = System_String__Format(v37, (Il2CppObject *)v34->fields.name, 0LL);
                  LODWORD(v125.fields._list) = v27;
                  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v39, v40, v41);
                  v43 = System_String__Format((System_String_o *)StringLiteral_22102/*"no_operation_{0}"*/, v42, 0LL);
                  NotificationPluginScript__SetLocalNotification(v36, v38, v43, 0LL);
                  ++v27;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v131,
              (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v27 = v23;
          }
          max_length = EnableEntityList->max_length;
          ++v22;
          v23 = v27;
        }
        while ( v22 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v134.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v44 = NetworkManager__getTime_38478060(v134, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v125,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v124 = 0;
        v130 = v125;
        while ( 1 )
        {
          v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v130,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v45 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v130.fields._current;
          if ( !v130.fields._current )
            sub_1B8880C(v45, v46);
          monitor = (char *)v130.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v130.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1B8880C(0LL, v50);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v52 )
            sub_1B8880C(0LL, v53);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v52,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1B8880C(0LL, v55);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v129,
                 current->fields.eventId,
                 (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v57 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v57 )
              sub_1B8880C(0LL, v58);
            if ( !v129 )
              sub_1B8880C(v57, v58);
            v59 = clearedAt + v57->fields.cooltime < (__int64)v129[6].klass;
          }
          else
          {
LABEL_92:
            v59 = 1;
          }
          v60 = &monitor[cooltime - v44];
          if ( v59 && (__int64)v60 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v62 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v62 )
                sub_1B8880C(0LL, v63);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v62, QuestEntity->fields.id, 0LL) )
              {
                v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v64 )
                  sub_1B8880C(0LL, v65);
                v66 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v64,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v66 )
                  sub_1B8880C(0LL, v67);
                v68 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v68 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9273/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v70 = System_String__Format(v69, (Il2CppObject *)v68[2].klass, 0LL);
                  LODWORD(v125.fields._list) = v124;
                  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v71, v72, v73);
                  v75 = System_String__Format((System_String_o *)StringLiteral_22101/*"no_harvest_{0}"*/, v74, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v60, v70, v75, 0LL);
                  ++v124;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v130,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v135.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v76 = NetworkManager__getTime_38478060(v135, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v125,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v77 = 0;
        v128 = v125;
        while ( 1 )
        {
          v78 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v128,
                                   (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v78 & 1) == 0 )
            break;
          v80 = v128.fields._current;
          if ( !v128.fields._current )
            sub_1B8880C(v78, v79);
          klass = v128.fields._current[2].klass;
          if ( !klass )
            sub_1B8880C(v78, v79);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v83 = 0;
            do
            {
              if ( v83 >= (unsigned int)namespaze )
                sub_1B88814(v78, v79);
              v84 = *((_QWORD *)&klass->_1.byval_arg.data + v83);
              if ( !v84 )
                sub_1B8880C(v78, v79);
              v85 = *(unsigned int *)(v84 + 28);
              v86 = v85 - v76;
              if ( v85 - v76 >= 1 )
              {
                v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v87 )
                  sub_1B8880C(0LL, v88);
                v89 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v87,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v89 )
                  sub_1B8880C(0LL, v90);
                v78 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v89,
                                         (int32_t)v80[1].monitor,
                                         *(_DWORD *)(v84 + 16),
                                         0LL);
                v91 = v78;
                if ( v78 )
                {
                  v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v92 )
                    sub_1B8880C(0LL, v93);
                  v94 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v92,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v94 )
                    sub_1B8880C(0LL, v95);
                  v78 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v94,
                                           (int32_t)v80[1].monitor,
                                           *(_DWORD *)(v84 + 20),
                                           0LL);
                  v96 = v78;
                  if ( v78 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v98 = System_String__Format_61721404(v97, v96[3], v91[3], 0LL);
                    LODWORD(v125.fields._list) = v77;
                    v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v99, v100, v101);
                    v103 = System_String__Format((System_String_o *)StringLiteral_22099/*"no_expedition_{0}"*/, v102, 0LL);
                    NotificationPluginScript__SetLocalNotification(v86, v98, v103, 0LL);
                    ++v77;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v83;
            }
            while ( v83 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v128,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_157;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_157;
        v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v125,
          EntityList,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v127 = v125;
        v107 = 0;
        while ( 1 )
        {
          v108 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v127,
                   (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v108 )
            break;
          if ( !v127.fields._current )
            sub_1B8880C(v108, v109);
          v110 = v127.fields._current[2].klass;
          if ( !v110 )
            sub_1B8880C(v108, v109);
          v111 = v110->_1.namespaze;
          if ( (int)v111 >= 1 )
          {
            v112 = 0;
            do
            {
              if ( v112 >= (unsigned int)v111 )
                sub_1B88814(v108, v109);
              v113 = *((_QWORD *)&v110->_1.byval_arg.data + v112);
              if ( !v113 )
                sub_1B8880C(v108, v109);
              v114 = *(_QWORD *)(v113 + 48);
              v115 = v114 - Time;
              if ( v114 - Time >= 1 )
              {
                if ( !v106 )
                  sub_1B8880C(v108, v109);
                v108 = DataMasterBase_object__object__int___TryGetEntity(
                         v106,
                         &v126,
                         *(_DWORD *)(v113 + 20),
                         (const MethodInfo_311D988 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v108 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                  if ( !v126 )
                    sub_1B8880C(v116, v117);
                  v118 = System_String__Format(v116, (Il2CppObject *)v126[1].monitor, 0LL);
                  LODWORD(v125.fields._list) = v107;
                  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v119, v120, v121);
                  v123 = System_String__Format((System_String_o *)StringLiteral_22099/*"no_expedition_{0}"*/, v122, 0LL);
                  NotificationPluginScript__SetLocalNotification(v115, v118, v123, 0LL);
                  ++v107;
                }
              }
              LODWORD(v111) = v110->_1.namespaze;
              ++v112;
            }
            while ( v112 < (int)v111 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v127,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
    }
  }
}


void __fastcall AvalonNotificationManager__SetRemotePushState(
        AvalonNotificationManager_o *this,
        bool isSend,
        const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0LL);
}