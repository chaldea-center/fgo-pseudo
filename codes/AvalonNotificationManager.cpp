void AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BE26 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4D2BE26 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  int64_t Time_42128268; // x21
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
  Il2CppObject *v40; // x1
  System_String_o *v41; // x0
  System_DateTime_o v42; // x0
  int64_t v43; // x19
  _BOOL8 v44; // x0
  __int64 v45; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v49; // x1
  __int64 cooltime; // x23
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v54; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v56; // x0
  __int64 v57; // x1
  bool v58; // w8
  char *v59; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x21
  Il2CppObject *v70; // x1
  System_String_o *v71; // x0
  System_DateTime_o v72; // x0
  int64_t v73; // x19
  int v74; // w24
  Il2CppObject **v75; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v80; // w27
  __int64 v81; // x22
  __int64 v82; // x8
  int32_t v83; // w20
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  Il2CppObject **v88; // x21
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  Il2CppObject **v93; // x22
  System_String_o *v94; // x0
  System_String_o *v95; // x21
  Il2CppObject *v96; // x1
  System_String_o *v97; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v100; // x20
  int v101; // w23
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppClass *v104; // x26
  const char *v105; // x8
  int v106; // w27
  __int64 v107; // x8
  __int64 v108; // x9
  int32_t v109; // w21
  System_String_o *v110; // x0
  __int64 v111; // x1
  System_String_o *v112; // x22
  Il2CppObject *v113; // x1
  System_String_o *v114; // x0
  int64_t v115; // x19
  System_Collections_Generic_List_object__o *v116; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v117; // x20
  int v118; // w23
  _BOOL8 v119; // x0
  __int64 v120; // x1
  Il2CppClass *v121; // x26
  const char *v122; // x8
  int v123; // w27
  __int64 v124; // x8
  __int64 v125; // x9
  int32_t v126; // w21
  System_String_o *v127; // x0
  __int64 v128; // x1
  System_String_o *v129; // x22
  Il2CppObject *v130; // x1
  System_String_o *v131; // x0
  int v132; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v134; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v135; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v138; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4D2BE25 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&StringLiteral_16886/*"ap_max"*/);
    sub_1C94098(&StringLiteral_9319/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1C94098(&StringLiteral_23390/*"rp_max"*/);
    sub_1C94098(&StringLiteral_22465/*"no_expedition_{0}"*/);
    sub_1C94098(&StringLiteral_9318/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_1C94098(&StringLiteral_9320/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1C94098(&StringLiteral_9317/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_9324/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_22464/*"no_craft_{0}"*/);
    sub_1C94098(&StringLiteral_9321/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1C94098(&StringLiteral_9323/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_22468/*"no_operation_{0}"*/);
    sub_1C94098(&StringLiteral_9322/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_22467/*"no_harvest_{0}"*/);
    sub_1C94098(&StringLiteral_22466/*"no_fatigue"*/);
    byte_4D2BE25 = 1;
  }
  entity = 0;
  memset(&v140, 0, sizeof(v140));
  memset(&v139, 0, sizeof(v139));
  v138 = 0;
  memset(&v137, 0, sizeof(v137));
  memset(&v136, 0, sizeof(v136));
  v134 = 0;
  v135 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D29D8A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D29D8A = 1;
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
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16886/*"ap_max"*/, 0);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_23390/*"rp_max"*/, 0);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9323/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_22466/*"no_fatigue"*/, 0);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
      Time_42128268 = NetworkManager__getTime_42128268(v19, 0);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1C942F0(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v23 = 0;
        v24 = 0;
        do
        {
          if ( v23 >= (unsigned int)max_length )
            sub_1C942F8(Instance);
          v25 = EnableEntityList->m_Items[v23];
          if ( !v25 || !v22 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v22,
                                        &entity,
                                        v25->fields.id,
                                        (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
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
            Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v133,
              v26,
              (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v28 = v24;
            v140 = v133;
            while ( 1 )
            {
              v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v140,
                      (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v29 )
                break;
              if ( !Master_object )
                sub_1C942F0(v29, v30);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v25->fields.id,
                                     (int32_t)v140.fields._current,
                                     0);
              v32 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0);
                v35 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1C942F0(0, v34);
                v36 = v32->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v37 = v36 - Time_42128268;
                if ( v36 - Time_42128268 >= 1 && v36 < v25->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9321/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0);
                  v39 = System_String__Format(v38, (Il2CppObject *)v35->fields.name, 0);
                  LODWORD(v133.fields._list) = v28;
                  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
                  v41 = System_String__Format((System_String_o *)StringLiteral_22468/*"no_operation_{0}"*/, v40, 0);
                  NotificationPluginScript__SetLocalNotification(v37, v39, v41, 0);
                  ++v28;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v140,
              (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
        v42.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v43 = NetworkManager__getTime_42128268(v42, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v133,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v132 = 0;
        v139 = v133;
        while ( 1 )
        {
          v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v139,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v44 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v139.fields._current;
          if ( !v139.fields._current )
            sub_1C942F0(v44, v45);
          monitor = (char *)v139.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v139.fields._current,
                           0);
          if ( !MasterEntity )
            sub_1C942F0(0, v49);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v51 )
            sub_1C942F0(0, v52);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v51,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1C942F0(0, v54);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v138,
                 current->fields.eventId,
                 (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v56 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0);
            if ( !v56 )
              sub_1C942F0(0, v57);
            if ( !v138 )
              sub_1C942F0(v56, v57);
            v58 = clearedAt + v56->fields.cooltime < (__int64)v138[6].klass;
          }
          else
          {
LABEL_92:
            v58 = 1;
          }
          v59 = &monitor[cooltime - v43];
          if ( v58 && (__int64)v59 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0);
            if ( QuestEntity )
            {
              v61 = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v61 )
                sub_1C942F0(0, v62);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v61, QuestEntity->fields.id, 0, 0) )
              {
                v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v63 )
                  sub_1C942F0(0, v64);
                v65 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v63,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v65 )
                  sub_1C942F0(0, v66);
                v67 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v65,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v67 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9320/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0);
                  v69 = System_String__Format(v68, (Il2CppObject *)v67[2].klass, 0);
                  LODWORD(v133.fields._list) = v132;
                  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
                  v71 = System_String__Format((System_String_o *)StringLiteral_22467/*"no_harvest_{0}"*/, v70, 0);
                  NotificationPluginScript__SetLocalNotification((int32_t)v59, v69, v71, 0);
                  ++v132;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v139,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v72.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v73 = NetworkManager__getTime_42128268(v72, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList((UserEventExpeditionMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v133,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v74 = 0;
        v137 = v133;
        while ( 1 )
        {
          v75 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v137,
                                   (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v75 & 1) == 0 )
            break;
          v77 = v137.fields._current;
          if ( !v137.fields._current )
            sub_1C942F0(v75, v76);
          klass = v137.fields._current[2].klass;
          if ( !klass )
            sub_1C942F0(v75, v76);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v80 = 0;
            do
            {
              if ( v80 >= (unsigned int)namespaze )
                sub_1C942F8(v75);
              v81 = *((_QWORD *)&klass->_1.byval_arg.data + v80);
              if ( !v81 )
                sub_1C942F0(v75, v76);
              v82 = *(unsigned int *)(v81 + 28);
              v83 = v82 - v73;
              if ( v82 - v73 >= 1 )
              {
                v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v84 )
                  sub_1C942F0(0, v85);
                v86 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v84,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v86 )
                  sub_1C942F0(0, v87);
                v75 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v86,
                                         (int32_t)v77[1].monitor,
                                         *(_DWORD *)(v81 + 16),
                                         0);
                v88 = v75;
                if ( v75 )
                {
                  v89 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v89 )
                    sub_1C942F0(0, v90);
                  v91 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v89,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v91 )
                    sub_1C942F0(0, v92);
                  v75 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v91,
                                           (int32_t)v77[1].monitor,
                                           *(_DWORD *)(v81 + 20),
                                           0);
                  v93 = v75;
                  if ( v75 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_9319/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0);
                    v95 = System_String__Format_64459052(v94, v93[3], v88[3], 0);
                    LODWORD(v133.fields._list) = v74;
                    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
                    v97 = System_String__Format((System_String_o *)StringLiteral_22465/*"no_expedition_{0}"*/, v96, 0);
                    NotificationPluginScript__SetLocalNotification(v83, v95, v97, 0);
                    ++v74;
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
          &v137,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v100 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v133,
          EntityList,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v136 = v133;
        v101 = 0;
        while ( 1 )
        {
          v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v136,
                   (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v102 )
            break;
          if ( !v136.fields._current )
            sub_1C942F0(v102, v103);
          v104 = v136.fields._current[2].klass;
          if ( !v104 )
            sub_1C942F0(v102, v103);
          v105 = v104->_1.namespaze;
          if ( (int)v105 >= 1 )
          {
            v106 = 0;
            do
            {
              if ( v106 >= (unsigned int)v105 )
                sub_1C942F8(v102);
              v107 = *((_QWORD *)&v104->_1.byval_arg.data + v106);
              if ( !v107 )
                sub_1C942F0(v102, v103);
              v108 = *(_QWORD *)(v107 + 48);
              v109 = v108 - Time;
              if ( v108 - Time >= 1 )
              {
                if ( !v100 )
                  sub_1C942F0(v102, v103);
                v102 = DataMasterBase_object__object__int___TryGetEntity(
                         v100,
                         &v135,
                         *(_DWORD *)(v107 + 20),
                         (const MethodInfo_345B50C *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v102 )
                {
                  if ( !v135 )
                    sub_1C942F0(v102, v103);
                  if ( !LODWORD(v135[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_9322/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0);
                    if ( !v135 )
                      sub_1C942F0(v110, v111);
                    v112 = System_String__Format(v110, (Il2CppObject *)v135[2].klass, 0);
                    LODWORD(v133.fields._list) = v101;
                    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
                    v114 = System_String__Format((System_String_o *)StringLiteral_22465/*"no_expedition_{0}"*/, v113, 0);
                    NotificationPluginScript__SetLocalNotification(v109, v112, v114, 0);
                    ++v101;
                  }
                }
              }
              LODWORD(v105) = v104->_1.namespaze;
              ++v106;
            }
            while ( v106 < (int)v105 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v136,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v115 = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v116 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v116 )
          goto LABEL_186;
        v117 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v133,
          v116,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v136 = v133;
        v118 = 0;
        while ( 1 )
        {
          v119 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v136,
                   (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v119 )
            break;
          if ( !v136.fields._current )
            sub_1C942F0(v119, v120);
          v121 = v136.fields._current[2].klass;
          if ( !v121 )
            sub_1C942F0(v119, v120);
          v122 = v121->_1.namespaze;
          if ( (int)v122 >= 1 )
          {
            v123 = 0;
            do
            {
              if ( v123 >= (unsigned int)v122 )
                sub_1C942F8(v119);
              v124 = *((_QWORD *)&v121->_1.byval_arg.data + v123);
              if ( !v124 )
                sub_1C942F0(v119, v120);
              v125 = *(_QWORD *)(v124 + 48);
              v126 = v125 - v115;
              if ( v125 - v115 >= 1 )
              {
                if ( !v117 )
                  sub_1C942F0(v119, v120);
                v119 = DataMasterBase_object__object__int___TryGetEntity(
                         v117,
                         &v134,
                         *(_DWORD *)(v124 + 20),
                         (const MethodInfo_345B50C *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v119 )
                {
                  if ( !v134 )
                    sub_1C942F0(v119, v120);
                  if ( LODWORD(v134[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v127 = LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0);
                    if ( !v134 )
                      sub_1C942F0(v127, v128);
                    v129 = System_String__Format(v127, (Il2CppObject *)v134[2].klass, 0);
                    LODWORD(v133.fields._list) = v118;
                    v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
                    v131 = System_String__Format((System_String_o *)StringLiteral_22464/*"no_craft_{0}"*/, v130, 0);
                    NotificationPluginScript__SetLocalNotification(v126, v129, v131, 0);
                    ++v118;
                  }
                }
              }
              LODWORD(v122) = v121->_1.namespaze;
              ++v123;
            }
            while ( v123 < (int)v122 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v136,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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