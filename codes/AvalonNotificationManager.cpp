void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDBAF5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4BDBAF5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  int64_t Time_39806296; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  int v22; // w27
  int v23; // w28
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
  __int64 cooltime; // x23
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v55; // x1
  int64_t clearedAt; // x26
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
  int64_t v124; // x19
  System_Collections_Generic_List_object__o *v125; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v126; // x20
  int v127; // w23
  _BOOL8 v128; // x0
  __int64 v129; // x1
  Il2CppClass *v130; // x26
  const char *v131; // x8
  int v132; // w27
  __int64 v133; // x8
  __int64 v134; // x9
  int32_t v135; // w21
  System_String_o *v136; // x0
  __int64 v137; // x1
  System_String_o *v138; // x22
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject *v142; // x1
  System_String_o *v143; // x0
  int v144; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v146; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v147; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v150; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  System_DateTime_o v154; // 0:x0.8
  System_DateTime_o v155; // 0:x0.8
  System_DateTime_o v156; // 0:x0.8

  if ( (byte_4BDBAF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&StringLiteral_17088/*"ap_max"*/);
    sub_1C21E38(&StringLiteral_9466/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_23400/*"rp_max"*/);
    sub_1C21E38(&StringLiteral_22502/*"no_expedition_{0}"*/);
    sub_1C21E38(&StringLiteral_9465/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_9467/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_9464/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_9471/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_22501/*"no_craft_{0}"*/);
    sub_1C21E38(&StringLiteral_9468/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_9470/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_22505/*"no_operation_{0}"*/);
    sub_1C21E38(&StringLiteral_9469/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_22504/*"no_harvest_{0}"*/);
    sub_1C21E38(&StringLiteral_22503/*"no_fatigue"*/);
    byte_4BDBAF4 = 1;
  }
  entity = 0LL;
  memset(&v152, 0, sizeof(v152));
  memset(&v151, 0, sizeof(v151));
  v150 = 0LL;
  memset(&v149, 0, sizeof(v149));
  memset(&v148, 0, sizeof(v148));
  v146 = 0LL;
  v147 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD9C34 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9C34 = 1;
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
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9464/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_17088/*"ap_max"*/, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9471/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_23400/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_186;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v16 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9470/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_22503/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v154.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_39806296 = NetworkManager__getTime_39806296(v154, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1C22094(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0;
        v23 = 0;
        do
        {
          if ( v22 >= (unsigned int)max_length )
            sub_1C2209C(Instance, v13);
          v24 = EnableEntityList->m_Items[v22];
          if ( !v24 || !v21 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v21,
                                        &entity,
                                        v24->fields.id,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v24->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v24->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_186;
          v25 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v145,
              v25,
              (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v27 = v23;
            v152 = v145;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v152,
                      (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v28 )
                break;
              if ( !Master_object )
                sub_1C22094(v28, v29);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v24->fields.id,
                                     (int32_t)v152.fields._current,
                                     0LL);
              v31 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v34 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1C22094(0LL, v33);
                v35 = v31->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v36 = v35 - Time_39806296;
                if ( v35 - Time_39806296 >= 1 && v35 < v24->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v38 = System_String__Format(v37, (Il2CppObject *)v34->fields.name, 0LL);
                  LODWORD(v145.fields._list) = v27;
                  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v39, v40, v41);
                  v43 = System_String__Format((System_String_o *)StringLiteral_22505/*"no_operation_{0}"*/, v42, 0LL);
                  NotificationPluginScript__SetLocalNotification(v36, v38, v43, 0LL);
                  ++v27;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v152,
              (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
        v155.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v44 = NetworkManager__getTime_39806296(v155, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v145,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v144 = 0;
        v151 = v145;
        while ( 1 )
        {
          v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v151,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v45 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v151.fields._current;
          if ( !v151.fields._current )
            sub_1C22094(v45, v46);
          monitor = (char *)v151.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v151.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1C22094(0LL, v50);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v52 )
            sub_1C22094(0LL, v53);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v52,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1C22094(0LL, v55);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v150,
                 current->fields.eventId,
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v57 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v57 )
              sub_1C22094(0LL, v58);
            if ( !v150 )
              sub_1C22094(v57, v58);
            v59 = clearedAt + v57->fields.cooltime < (__int64)v150[6].klass;
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
              v62 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v62 )
                sub_1C22094(0LL, v63);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v62, QuestEntity->fields.id, 0LL) )
              {
                v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v64 )
                  sub_1C22094(0LL, v65);
                v66 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v64,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v66 )
                  sub_1C22094(0LL, v67);
                v68 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v66,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v68 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9467/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v70 = System_String__Format(v69, (Il2CppObject *)v68[2].klass, 0LL);
                  LODWORD(v145.fields._list) = v144;
                  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v71, v72, v73);
                  v75 = System_String__Format((System_String_o *)StringLiteral_22504/*"no_harvest_{0}"*/, v74, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v60, v70, v75, 0LL);
                  ++v144;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v151,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v156.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v76 = NetworkManager__getTime_39806296(v156, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v145,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v77 = 0;
        v149 = v145;
        while ( 1 )
        {
          v78 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v149,
                                   (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v78 & 1) == 0 )
            break;
          v80 = v149.fields._current;
          if ( !v149.fields._current )
            sub_1C22094(v78, v79);
          klass = v149.fields._current[2].klass;
          if ( !klass )
            sub_1C22094(v78, v79);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v83 = 0;
            do
            {
              if ( v83 >= (unsigned int)namespaze )
                sub_1C2209C(v78, v79);
              v84 = *((_QWORD *)&klass->_1.byval_arg.data + v83);
              if ( !v84 )
                sub_1C22094(v78, v79);
              v85 = *(unsigned int *)(v84 + 28);
              v86 = v85 - v76;
              if ( v85 - v76 >= 1 )
              {
                v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v87 )
                  sub_1C22094(0LL, v88);
                v89 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v87,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v89 )
                  sub_1C22094(0LL, v90);
                v78 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v89,
                                         (int32_t)v80[1].monitor,
                                         *(_DWORD *)(v84 + 16),
                                         0LL);
                v91 = v78;
                if ( v78 )
                {
                  v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v92 )
                    sub_1C22094(0LL, v93);
                  v94 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v92,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v94 )
                    sub_1C22094(0LL, v95);
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
                    v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9466/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v98 = System_String__Format_63129848(v97, v96[3], v91[3], 0LL);
                    LODWORD(v145.fields._list) = v77;
                    v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v99, v100, v101);
                    v103 = System_String__Format((System_String_o *)StringLiteral_22502/*"no_expedition_{0}"*/, v102, 0LL);
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
          &v149,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v145,
          EntityList,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v148 = v145;
        v107 = 0;
        while ( 1 )
        {
          v108 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v148,
                   (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v108 )
            break;
          if ( !v148.fields._current )
            sub_1C22094(v108, v109);
          v110 = v148.fields._current[2].klass;
          if ( !v110 )
            sub_1C22094(v108, v109);
          v111 = v110->_1.namespaze;
          if ( (int)v111 >= 1 )
          {
            v112 = 0;
            do
            {
              if ( v112 >= (unsigned int)v111 )
                sub_1C2209C(v108, v109);
              v113 = *((_QWORD *)&v110->_1.byval_arg.data + v112);
              if ( !v113 )
                sub_1C22094(v108, v109);
              v114 = *(_QWORD *)(v113 + 48);
              v115 = v114 - Time;
              if ( v114 - Time >= 1 )
              {
                if ( !v106 )
                  sub_1C22094(v108, v109);
                v108 = DataMasterBase_object__object__int___TryGetEntity(
                         v106,
                         &v147,
                         *(_DWORD *)(v113 + 20),
                         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v108 )
                {
                  if ( !v147 )
                    sub_1C22094(v108, v109);
                  if ( !LODWORD(v147[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_9469/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                    if ( !v147 )
                      sub_1C22094(v116, v117);
                    v118 = System_String__Format(v116, (Il2CppObject *)v147[2].klass, 0LL);
                    LODWORD(v145.fields._list) = v107;
                    v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v119, v120, v121);
                    v123 = System_String__Format((System_String_o *)StringLiteral_22502/*"no_expedition_{0}"*/, v122, 0LL);
                    NotificationPluginScript__SetLocalNotification(v115, v118, v123, 0LL);
                    ++v107;
                  }
                }
              }
              LODWORD(v111) = v110->_1.namespaze;
              ++v112;
            }
            while ( v112 < (int)v111 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v148,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v124 = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v125 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v125 )
          goto LABEL_186;
        v126 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v145,
          v125,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v148 = v145;
        v127 = 0;
        while ( 1 )
        {
          v128 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v148,
                   (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v128 )
            break;
          if ( !v148.fields._current )
            sub_1C22094(v128, v129);
          v130 = v148.fields._current[2].klass;
          if ( !v130 )
            sub_1C22094(v128, v129);
          v131 = v130->_1.namespaze;
          if ( (int)v131 >= 1 )
          {
            v132 = 0;
            do
            {
              if ( v132 >= (unsigned int)v131 )
                sub_1C2209C(v128, v129);
              v133 = *((_QWORD *)&v130->_1.byval_arg.data + v132);
              if ( !v133 )
                sub_1C22094(v128, v129);
              v134 = *(_QWORD *)(v133 + 48);
              v135 = v134 - v124;
              if ( v134 - v124 >= 1 )
              {
                if ( !v126 )
                  sub_1C22094(v128, v129);
                v128 = DataMasterBase_object__object__int___TryGetEntity(
                         v126,
                         &v146,
                         *(_DWORD *)(v133 + 20),
                         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v128 )
                {
                  if ( !v146 )
                    sub_1C22094(v128, v129);
                  if ( LODWORD(v146[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_9465/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0LL);
                    if ( !v146 )
                      sub_1C22094(v136, v137);
                    v138 = System_String__Format(v136, (Il2CppObject *)v146[2].klass, 0LL);
                    LODWORD(v145.fields._list) = v127;
                    v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v139, v140, v141);
                    v143 = System_String__Format((System_String_o *)StringLiteral_22501/*"no_craft_{0}"*/, v142, 0LL);
                    NotificationPluginScript__SetLocalNotification(v135, v138, v143, 0LL);
                    ++v127;
                  }
                }
              }
              LODWORD(v131) = v130->_1.namespaze;
              ++v132;
            }
            while ( v132 < (int)v131 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v148,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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