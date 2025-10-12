void AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C36FA0 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4C36FA0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  System_String_o *v13; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v15; // w19
  System_String_o *v16; // x0
  EventEntity_array *EnableEntityList; // x20
  System_DateTime_o v18; // x0
  int64_t Time_41266888; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  int v22; // w27
  int v23; // w28
  EventEntity_o *v24; // x29
  System_Collections_Generic_List_int__o *v25; // x23
  Il2CppObject *Master_object; // x19
  int v27; // w26
  _BOOL8 v28; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v30; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  EventCooltimeRewardEntity_o *v32; // x24
  int64_t v33; // x8
  int32_t v34; // w23
  System_String_o *v35; // x0
  System_String_o *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x1
  System_String_o *v44; // x0
  System_DateTime_o v45; // x0
  int64_t v46; // x19
  _BOOL8 v47; // x0
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 cooltime; // x23
  Il2CppObject *v52; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v55; // x0
  bool v56; // w8
  char *v57; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x21
  System_String_o *v63; // x0
  System_String_o *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  Il2CppObject *v71; // x1
  System_String_o *v72; // x0
  System_DateTime_o v73; // x0
  int64_t v74; // x19
  int v75; // w24
  Il2CppObject **v76; // x0
  Il2CppObject *v77; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v80; // w27
  __int64 v81; // x22
  __int64 v82; // x8
  int32_t v83; // w20
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x0
  Il2CppObject **v86; // x21
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x0
  Il2CppObject **v89; // x22
  System_String_o *v90; // x0
  System_String_o *v91; // x21
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x6
  __int64 v97; // x7
  Il2CppObject *v98; // x1
  System_String_o *v99; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // x20
  int v103; // w23
  _BOOL8 v104; // x0
  Il2CppClass *v105; // x26
  const char *v106; // x8
  int v107; // w27
  __int64 v108; // x8
  __int64 v109; // x9
  int32_t v110; // w21
  System_String_o *v111; // x0
  System_String_o *v112; // x22
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  Il2CppObject *v119; // x1
  System_String_o *v120; // x0
  int64_t v121; // x19
  System_Collections_Generic_List_object__o *v122; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v123; // x20
  int v124; // w23
  _BOOL8 v125; // x0
  Il2CppClass *v126; // x26
  const char *v127; // x8
  int v128; // w27
  __int64 v129; // x8
  __int64 v130; // x9
  int32_t v131; // w21
  System_String_o *v132; // x0
  System_String_o *v133; // x22
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  __int64 v137; // x5
  __int64 v138; // x6
  __int64 v139; // x7
  Il2CppObject *v140; // x1
  System_String_o *v141; // x0
  int v142; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v144; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v145; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v148; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4C36F9F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&StringLiteral_16806/*"ap_max"*/);
    sub_1C32C20(&StringLiteral_9297/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_23157/*"rp_max"*/);
    sub_1C32C20(&StringLiteral_22253/*"no_expedition_{0}"*/);
    sub_1C32C20(&StringLiteral_9296/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_9298/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_9295/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_9302/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_22252/*"no_craft_{0}"*/);
    sub_1C32C20(&StringLiteral_9299/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_9301/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_22256/*"no_operation_{0}"*/);
    sub_1C32C20(&StringLiteral_9300/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_22255/*"no_harvest_{0}"*/);
    sub_1C32C20(&StringLiteral_22254/*"no_fatigue"*/);
    byte_4C36F9F = 1;
  }
  entity = 0;
  memset(&v150, 0, sizeof(v150));
  memset(&v149, 0, sizeof(v149));
  v148 = 0;
  memset(&v147, 0, sizeof(v147));
  memset(&v146, 0, sizeof(v146));
  v144 = 0;
  v145 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C34F48 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C34F48 = 1;
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
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16806/*"ap_max"*/, 0);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9302/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0);
            NotificationPluginScript__SetLocalNotification(v11, v13, (System_String_o *)StringLiteral_23157/*"rp_max"*/, 0);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_186;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v15 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_9301/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v15, v16, (System_String_o *)StringLiteral_22254/*"no_fatigue"*/, 0);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
      Time_41266888 = NetworkManager__getTime_41266888(v18, 0);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1C32E7C(Instance);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0;
        v23 = 0;
        do
        {
          if ( v22 >= (unsigned int)max_length )
            sub_1C32E84(Instance);
          v24 = EnableEntityList->m_Items[v22];
          if ( !v24 || !v21 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v21,
                                        &entity,
                                        v24->fields.id,
                                        (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v24->fields.id, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v24->fields.id,
                                        0);
          if ( !Instance )
            goto LABEL_186;
          v25 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v143,
              v25,
              (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v27 = v23;
            v150 = v143;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v150,
                      (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v28 )
                break;
              if ( !Master_object )
                sub_1C32E7C(v28);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v24->fields.id,
                                     (int32_t)v150.fields._current,
                                     0);
              v30 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0);
                v32 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1C32E7C(0);
                v33 = v30->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v34 = v33 - Time_41266888;
                if ( v33 - Time_41266888 >= 1 && v33 < v24->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9299/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0);
                  v36 = System_String__Format(v35, (Il2CppObject *)v32->fields.name, 0);
                  LODWORD(v143.fields._list) = v27;
                  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v37, v38, v39, v40, v41, v42);
                  v44 = System_String__Format((System_String_o *)StringLiteral_22256/*"no_operation_{0}"*/, v43, 0);
                  NotificationPluginScript__SetLocalNotification(v34, v36, v44, 0);
                  ++v27;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v150,
              (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
      if ( EventRewardSaveData__GetCooltimeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v45.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v46 = NetworkManager__getTime_41266888(v45, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v143,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v142 = 0;
        v149 = v143;
        while ( 1 )
        {
          v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v149,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v47 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v149.fields._current;
          if ( !v149.fields._current )
            sub_1C32E7C(v47);
          monitor = (char *)v149.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v149.fields._current,
                           0);
          if ( !MasterEntity )
            sub_1C32E7C(0);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v52 )
            sub_1C32E7C(0);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v52,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1C32E7C(0);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v148,
                 current->fields.eventId,
                 (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v55 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0);
            if ( !v55 )
              sub_1C32E7C(0);
            if ( !v148 )
              sub_1C32E7C(v55);
            v56 = clearedAt + v55->fields.cooltime < (__int64)v148[6].klass;
          }
          else
          {
LABEL_92:
            v56 = 1;
          }
          v57 = &monitor[cooltime - v46];
          if ( v56 && (__int64)v57 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0);
            if ( QuestEntity )
            {
              v59 = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v59 )
                sub_1C32E7C(0);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v59, QuestEntity->fields.id, 0, 0) )
              {
                v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v60 )
                  sub_1C32E7C(0);
                v61 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v60,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v61 )
                  sub_1C32E7C(0);
                v62 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v61,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v62 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0);
                  v64 = System_String__Format(v63, (Il2CppObject *)v62[2].klass, 0);
                  LODWORD(v143.fields._list) = v142;
                  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v65, v66, v67, v68, v69, v70);
                  v72 = System_String__Format((System_String_o *)StringLiteral_22255/*"no_harvest_{0}"*/, v71, 0);
                  NotificationPluginScript__SetLocalNotification((int32_t)v57, v64, v72, 0);
                  ++v142;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v149,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v73.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v74 = NetworkManager__getTime_41266888(v73, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList((UserEventExpeditionMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v143,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v75 = 0;
        v147 = v143;
        while ( 1 )
        {
          v76 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v147,
                                   (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v76 & 1) == 0 )
            break;
          v77 = v147.fields._current;
          if ( !v147.fields._current )
            sub_1C32E7C(v76);
          klass = v147.fields._current[2].klass;
          if ( !klass )
            sub_1C32E7C(v76);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v80 = 0;
            do
            {
              if ( v80 >= (unsigned int)namespaze )
                sub_1C32E84(v76);
              v81 = *((_QWORD *)&klass->_1.byval_arg.data + v80);
              if ( !v81 )
                sub_1C32E7C(v76);
              v82 = *(unsigned int *)(v81 + 28);
              v83 = v82 - v74;
              if ( v82 - v74 >= 1 )
              {
                v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v84 )
                  sub_1C32E7C(0);
                v85 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v84,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v85 )
                  sub_1C32E7C(0);
                v76 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v85,
                                         (int32_t)v77[1].monitor,
                                         *(_DWORD *)(v81 + 16),
                                         0);
                v86 = v76;
                if ( v76 )
                {
                  v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v87 )
                    sub_1C32E7C(0);
                  v88 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v87,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v88 )
                    sub_1C32E7C(0);
                  v76 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v88,
                                           (int32_t)v77[1].monitor,
                                           *(_DWORD *)(v81 + 20),
                                           0);
                  v89 = v76;
                  if ( v76 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_9297/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0);
                    v91 = System_String__Format_63559836(v90, v89[3], v86[3], 0);
                    LODWORD(v143.fields._list) = v75;
                    v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v92, v93, v94, v95, v96, v97);
                    v99 = System_String__Format((System_String_o *)StringLiteral_22253/*"no_expedition_{0}"*/, v98, 0);
                    NotificationPluginScript__SetLocalNotification(v83, v91, v99, 0);
                    ++v75;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v80;
            }
            while ( v80 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v147,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v143,
          EntityList,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v146 = v143;
        v103 = 0;
        while ( 1 )
        {
          v104 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v146,
                   (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v104 )
            break;
          if ( !v146.fields._current )
            sub_1C32E7C(v104);
          v105 = v146.fields._current[2].klass;
          if ( !v105 )
            sub_1C32E7C(v104);
          v106 = v105->_1.namespaze;
          if ( (int)v106 >= 1 )
          {
            v107 = 0;
            do
            {
              if ( v107 >= (unsigned int)v106 )
                sub_1C32E84(v104);
              v108 = *((_QWORD *)&v105->_1.byval_arg.data + v107);
              if ( !v108 )
                sub_1C32E7C(v104);
              v109 = *(_QWORD *)(v108 + 48);
              v110 = v109 - Time;
              if ( v109 - Time >= 1 )
              {
                if ( !v102 )
                  sub_1C32E7C(v104);
                v104 = DataMasterBase_object__object__int___TryGetEntity(
                         v102,
                         &v145,
                         *(_DWORD *)(v108 + 20),
                         (const MethodInfo_3396884 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v104 )
                {
                  if ( !v145 )
                    sub_1C32E7C(v104);
                  if ( !LODWORD(v145[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_9300/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0);
                    if ( !v145 )
                      sub_1C32E7C(v111);
                    v112 = System_String__Format(v111, (Il2CppObject *)v145[2].klass, 0);
                    LODWORD(v143.fields._list) = v103;
                    v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v113, v114, v115, v116, v117, v118);
                    v120 = System_String__Format((System_String_o *)StringLiteral_22253/*"no_expedition_{0}"*/, v119, 0);
                    NotificationPluginScript__SetLocalNotification(v110, v112, v120, 0);
                    ++v103;
                  }
                }
              }
              LODWORD(v106) = v105->_1.namespaze;
              ++v107;
            }
            while ( v107 < (int)v106 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v146,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v121 = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v122 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v122 )
          goto LABEL_186;
        v123 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v143,
          v122,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v146 = v143;
        v124 = 0;
        while ( 1 )
        {
          v125 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v146,
                   (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v125 )
            break;
          if ( !v146.fields._current )
            sub_1C32E7C(v125);
          v126 = v146.fields._current[2].klass;
          if ( !v126 )
            sub_1C32E7C(v125);
          v127 = v126->_1.namespaze;
          if ( (int)v127 >= 1 )
          {
            v128 = 0;
            do
            {
              if ( v128 >= (unsigned int)v127 )
                sub_1C32E84(v125);
              v129 = *((_QWORD *)&v126->_1.byval_arg.data + v128);
              if ( !v129 )
                sub_1C32E7C(v125);
              v130 = *(_QWORD *)(v129 + 48);
              v131 = v130 - v121;
              if ( v130 - v121 >= 1 )
              {
                if ( !v123 )
                  sub_1C32E7C(v125);
                v125 = DataMasterBase_object__object__int___TryGetEntity(
                         v123,
                         &v144,
                         *(_DWORD *)(v129 + 20),
                         (const MethodInfo_3396884 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v125 )
                {
                  if ( !v144 )
                    sub_1C32E7C(v125);
                  if ( LODWORD(v144[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v132 = LocalizationManager__Get((System_String_o *)StringLiteral_9296/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0);
                    if ( !v144 )
                      sub_1C32E7C(v132);
                    v133 = System_String__Format(v132, (Il2CppObject *)v144[2].klass, 0);
                    LODWORD(v143.fields._list) = v124;
                    v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v134, v135, v136, v137, v138, v139);
                    v141 = System_String__Format((System_String_o *)StringLiteral_22252/*"no_craft_{0}"*/, v140, 0);
                    NotificationPluginScript__SetLocalNotification(v131, v133, v141, 0);
                    ++v124;
                  }
                }
              }
              LODWORD(v127) = v126->_1.namespaze;
              ++v128;
            }
            while ( v128 < (int)v127 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v146,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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