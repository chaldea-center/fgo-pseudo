void AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C56339 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4C56339 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
}


void AvalonNotificationManager__Initialize(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0);
}


void AvalonNotificationManager__OnApplicationFocus(
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
  System_DateTime_o v19; // x0
  int64_t Time_41414896; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  int v23; // w27
  int v24; // w28
  EventEntity_o *v25; // x29
  System_Collections_Generic_List_int__o *v26; // x23
  Il2CppObject *Master_object; // x19
  int v28; // w26
  _BOOL8 v29; // x0
  __int64 v30; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v32; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v34; // x1
  EventCooltimeRewardEntity_o *v35; // x24
  int64_t v36; // x8
  int32_t v37; // w23
  System_String_o *v38; // x0
  System_String_o *v39; // x24
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  System_DateTime_o v48; // x0
  int64_t v49; // x19
  _BOOL8 v50; // x0
  __int64 v51; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v55; // x1
  __int64 cooltime; // x23
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v60; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v62; // x0
  __int64 v63; // x1
  bool v64; // w8
  char *v65; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  Il2CppObject *v73; // x21
  System_String_o *v74; // x0
  System_String_o *v75; // x21
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  Il2CppObject *v82; // x1
  System_String_o *v83; // x0
  System_DateTime_o v84; // x0
  int64_t v85; // x19
  int v86; // w24
  Il2CppObject **v87; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v92; // w27
  __int64 v93; // x22
  __int64 v94; // x8
  int32_t v95; // w20
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  Il2CppObject **v100; // x21
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  Il2CppObject **v105; // x22
  System_String_o *v106; // x0
  System_String_o *v107; // x21
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  __int64 v111; // x5
  __int64 v112; // x6
  __int64 v113; // x7
  Il2CppObject *v114; // x1
  System_String_o *v115; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v118; // x20
  int v119; // w23
  _BOOL8 v120; // x0
  __int64 v121; // x1
  Il2CppClass *v122; // x26
  const char *v123; // x8
  int v124; // w27
  __int64 v125; // x8
  __int64 v126; // x9
  int32_t v127; // w21
  System_String_o *v128; // x0
  __int64 v129; // x1
  System_String_o *v130; // x22
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  __int64 v134; // x5
  __int64 v135; // x6
  __int64 v136; // x7
  Il2CppObject *v137; // x1
  System_String_o *v138; // x0
  int64_t v139; // x19
  System_Collections_Generic_List_object__o *v140; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v141; // x20
  int v142; // w23
  _BOOL8 v143; // x0
  __int64 v144; // x1
  Il2CppClass *v145; // x26
  const char *v146; // x8
  int v147; // w27
  __int64 v148; // x8
  __int64 v149; // x9
  int32_t v150; // w21
  System_String_o *v151; // x0
  __int64 v152; // x1
  System_String_o *v153; // x22
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  __int64 v157; // x5
  __int64 v158; // x6
  __int64 v159; // x7
  Il2CppObject *v160; // x1
  System_String_o *v161; // x0
  int v162; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v163; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v164; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v165; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v168; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v169; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v170; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4C56338 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&StringLiteral_16823/*"ap_max"*/);
    sub_1C3E564(&StringLiteral_9298/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_23180/*"rp_max"*/);
    sub_1C3E564(&StringLiteral_22274/*"no_expedition_{0}"*/);
    sub_1C3E564(&StringLiteral_9297/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_9299/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_9296/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_9303/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_22273/*"no_craft_{0}"*/);
    sub_1C3E564(&StringLiteral_9300/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_9302/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_22277/*"no_operation_{0}"*/);
    sub_1C3E564(&StringLiteral_9301/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_22276/*"no_harvest_{0}"*/);
    sub_1C3E564(&StringLiteral_22275/*"no_fatigue"*/);
    byte_4C56338 = 1;
  }
  entity = 0;
  memset(&v170, 0, sizeof(v170));
  memset(&v169, 0, sizeof(v169));
  v168 = 0;
  memset(&v167, 0, sizeof(v167));
  memset(&v166, 0, sizeof(v166));
  v164 = 0;
  v165 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C542D0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C542D0 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  if ( v4->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v6 = SelfUserGame;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetLocalNotiffication(0) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v6, 0);
        if ( ActAllRecoverTime >= 1 )
        {
          v8 = ActAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9296/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16823/*"ap_max"*/, 0);
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetRaidNotiffication(0) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v6, 0);
        if ( RpAllRecoverTime >= 1 )
        {
          v11 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_23180/*"rp_max"*/, 0);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_186;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v16 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9302/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_22275/*"no_fatigue"*/, 0);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
      Time_41414896 = NetworkManager__getTime_41414896(v19, 0);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1C3E7C0(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v23 = 0;
        v24 = 0;
        do
        {
          if ( v23 >= (unsigned int)max_length )
            sub_1C3E7C8(Instance, v13);
          v25 = EnableEntityList->m_Items[v23];
          if ( !v25 || !v22 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v22,
                                        &entity,
                                        v25->fields.id,
                                        (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v25->fields.id, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v25->fields.id,
                                        0);
          if ( !Instance )
            goto LABEL_186;
          v26 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v163,
              v26,
              (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v28 = v24;
            v170 = v163;
            while ( 1 )
            {
              v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v170,
                      (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v29 )
                break;
              if ( !Master_object )
                sub_1C3E7C0(v29, v30);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v25->fields.id,
                                     (int32_t)v170.fields._current,
                                     0);
              v32 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0);
                v35 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1C3E7C0(0, v34);
                v36 = v32->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v37 = v36 - Time_41414896;
                if ( v36 - Time_41414896 >= 1 && v36 < v25->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9300/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0);
                  v39 = System_String__Format(v38, (Il2CppObject *)v35->fields.name, 0);
                  LODWORD(v163.fields._list) = v28;
                  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v40, v41, v42, v43, v44, v45);
                  v47 = System_String__Format((System_String_o *)StringLiteral_22277/*"no_operation_{0}"*/, v46, 0);
                  NotificationPluginScript__SetLocalNotification(v37, v39, v47, 0);
                  ++v28;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v170,
              (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v28 = v24;
          }
          max_length = EnableEntityList->max_length;
          ++v23;
          v24 = v28;
        }
        while ( v23 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v48.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v49 = NetworkManager__getTime_41414896(v48, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v163,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v162 = 0;
        v169 = v163;
        while ( 1 )
        {
          v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v169,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v50 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v169.fields._current;
          if ( !v169.fields._current )
            sub_1C3E7C0(v50, v51);
          monitor = (char *)v169.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v169.fields._current,
                           0);
          if ( !MasterEntity )
            sub_1C3E7C0(0, v55);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v57 )
            sub_1C3E7C0(0, v58);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v57,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1C3E7C0(0, v60);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v168,
                 current->fields.eventId,
                 (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v62 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0);
            if ( !v62 )
              sub_1C3E7C0(0, v63);
            if ( !v168 )
              sub_1C3E7C0(v62, v63);
            v64 = clearedAt + v62->fields.cooltime < (__int64)v168[6].klass;
          }
          else
          {
LABEL_92:
            v64 = 1;
          }
          v65 = &monitor[cooltime - v49];
          if ( v64 && (__int64)v65 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0);
            if ( QuestEntity )
            {
              v67 = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v67 )
                sub_1C3E7C0(0, v68);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v67, QuestEntity->fields.id, 0, 0) )
              {
                v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v69 )
                  sub_1C3E7C0(0, v70);
                v71 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v69,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v71 )
                  sub_1C3E7C0(0, v72);
                v73 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v71,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v73 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9299/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0);
                  v75 = System_String__Format(v74, (Il2CppObject *)v73[2].klass, 0);
                  LODWORD(v163.fields._list) = v162;
                  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v76, v77, v78, v79, v80, v81);
                  v83 = System_String__Format((System_String_o *)StringLiteral_22276/*"no_harvest_{0}"*/, v82, 0);
                  NotificationPluginScript__SetLocalNotification((int32_t)v65, v75, v83, 0);
                  ++v162;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v169,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v84.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v85 = NetworkManager__getTime_41414896(v84, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList((UserEventExpeditionMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v163,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v86 = 0;
        v167 = v163;
        while ( 1 )
        {
          v87 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v167,
                                   (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v87 & 1) == 0 )
            break;
          v89 = v167.fields._current;
          if ( !v167.fields._current )
            sub_1C3E7C0(v87, v88);
          klass = v167.fields._current[2].klass;
          if ( !klass )
            sub_1C3E7C0(v87, v88);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v92 = 0;
            do
            {
              if ( v92 >= (unsigned int)namespaze )
                sub_1C3E7C8(v87, v88);
              v93 = *((_QWORD *)&klass->_1.byval_arg.data + v92);
              if ( !v93 )
                sub_1C3E7C0(v87, v88);
              v94 = *(unsigned int *)(v93 + 28);
              v95 = v94 - v85;
              if ( v94 - v85 >= 1 )
              {
                v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v96 )
                  sub_1C3E7C0(0, v97);
                v98 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v96,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v98 )
                  sub_1C3E7C0(0, v99);
                v87 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v98,
                                         (int32_t)v89[1].monitor,
                                         *(_DWORD *)(v93 + 16),
                                         0);
                v100 = v87;
                if ( v87 )
                {
                  v101 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v101 )
                    sub_1C3E7C0(0, v102);
                  v103 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v101,
                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v103 )
                    sub_1C3E7C0(0, v104);
                  v87 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v103,
                                           (int32_t)v89[1].monitor,
                                           *(_DWORD *)(v93 + 20),
                                           0);
                  v105 = v87;
                  if ( v87 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0);
                    v107 = System_String__Format_63677760(v106, v105[3], v100[3], 0);
                    LODWORD(v163.fields._list) = v86;
                    v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v108, v109, v110, v111, v112, v113);
                    v115 = System_String__Format((System_String_o *)StringLiteral_22274/*"no_expedition_{0}"*/, v114, 0);
                    NotificationPluginScript__SetLocalNotification(v95, v107, v115, 0);
                    ++v86;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v92;
            }
            while ( v92 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v167,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v118 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v163,
          EntityList,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v166 = v163;
        v119 = 0;
        while ( 1 )
        {
          v120 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v166,
                   (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v120 )
            break;
          if ( !v166.fields._current )
            sub_1C3E7C0(v120, v121);
          v122 = v166.fields._current[2].klass;
          if ( !v122 )
            sub_1C3E7C0(v120, v121);
          v123 = v122->_1.namespaze;
          if ( (int)v123 >= 1 )
          {
            v124 = 0;
            do
            {
              if ( v124 >= (unsigned int)v123 )
                sub_1C3E7C8(v120, v121);
              v125 = *((_QWORD *)&v122->_1.byval_arg.data + v124);
              if ( !v125 )
                sub_1C3E7C0(v120, v121);
              v126 = *(_QWORD *)(v125 + 48);
              v127 = v126 - Time;
              if ( v126 - Time >= 1 )
              {
                if ( !v118 )
                  sub_1C3E7C0(v120, v121);
                v120 = DataMasterBase_object__object__int___TryGetEntity(
                         v118,
                         &v165,
                         *(_DWORD *)(v125 + 20),
                         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v120 )
                {
                  if ( !v165 )
                    sub_1C3E7C0(v120, v121);
                  if ( !LODWORD(v165[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_9301/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0);
                    if ( !v165 )
                      sub_1C3E7C0(v128, v129);
                    v130 = System_String__Format(v128, (Il2CppObject *)v165[2].klass, 0);
                    LODWORD(v163.fields._list) = v119;
                    v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v131, v132, v133, v134, v135, v136);
                    v138 = System_String__Format((System_String_o *)StringLiteral_22274/*"no_expedition_{0}"*/, v137, 0);
                    NotificationPluginScript__SetLocalNotification(v127, v130, v138, 0);
                    ++v119;
                  }
                }
              }
              LODWORD(v123) = v122->_1.namespaze;
              ++v124;
            }
            while ( v124 < (int)v123 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v139 = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v140 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v140 )
          goto LABEL_186;
        v141 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v163,
          v140,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v166 = v163;
        v142 = 0;
        while ( 1 )
        {
          v143 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v166,
                   (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v143 )
            break;
          if ( !v166.fields._current )
            sub_1C3E7C0(v143, v144);
          v145 = v166.fields._current[2].klass;
          if ( !v145 )
            sub_1C3E7C0(v143, v144);
          v146 = v145->_1.namespaze;
          if ( (int)v146 >= 1 )
          {
            v147 = 0;
            do
            {
              if ( v147 >= (unsigned int)v146 )
                sub_1C3E7C8(v143, v144);
              v148 = *((_QWORD *)&v145->_1.byval_arg.data + v147);
              if ( !v148 )
                sub_1C3E7C0(v143, v144);
              v149 = *(_QWORD *)(v148 + 48);
              v150 = v149 - v139;
              if ( v149 - v139 >= 1 )
              {
                if ( !v141 )
                  sub_1C3E7C0(v143, v144);
                v143 = DataMasterBase_object__object__int___TryGetEntity(
                         v141,
                         &v164,
                         *(_DWORD *)(v148 + 20),
                         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v143 )
                {
                  if ( !v164 )
                    sub_1C3E7C0(v143, v144);
                  if ( LODWORD(v164[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v151 = LocalizationManager__Get((System_String_o *)StringLiteral_9297/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0);
                    if ( !v164 )
                      sub_1C3E7C0(v151, v152);
                    v153 = System_String__Format(v151, (Il2CppObject *)v164[2].klass, 0);
                    LODWORD(v163.fields._list) = v142;
                    v160 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163, v154, v155, v156, v157, v158, v159);
                    v161 = System_String__Format((System_String_o *)StringLiteral_22273/*"no_craft_{0}"*/, v160, 0);
                    NotificationPluginScript__SetLocalNotification(v150, v153, v161, 0);
                    ++v142;
                  }
                }
              }
              LODWORD(v146) = v145->_1.namespaze;
              ++v147;
            }
            while ( v147 < (int)v146 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v166,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
    }
  }
}


void AvalonNotificationManager__SetRemotePushState(
        AvalonNotificationManager_o *this,
        bool isSend,
        const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0);
}