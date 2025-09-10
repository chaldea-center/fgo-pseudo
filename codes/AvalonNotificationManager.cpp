void AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C268C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_4C268C9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  int64_t Time_41144944; // x21
  __int64 v21; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  int v24; // w27
  int v25; // w28
  EventEntity_o *v26; // x29
  System_Collections_Generic_List_int__o *v27; // x23
  Il2CppObject *Master_object; // x19
  int v29; // w26
  _BOOL8 v30; // x0
  __int64 v31; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v33; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v35; // x1
  EventCooltimeRewardEntity_o *v36; // x24
  int64_t v37; // x8
  int32_t v38; // w23
  System_String_o *v39; // x0
  System_String_o *v40; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x1
  System_String_o *v45; // x0
  System_DateTime_o v46; // x0
  int64_t v47; // x19
  _BOOL8 v48; // x0
  __int64 v49; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v53; // x1
  __int64 cooltime; // x23
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v58; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v60; // x0
  __int64 v61; // x1
  bool v62; // w8
  char *v63; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  System_String_o *v72; // x0
  System_String_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x1
  System_String_o *v78; // x0
  System_DateTime_o v79; // x0
  int64_t v80; // x19
  int v81; // w24
  Il2CppObject **v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  Il2CppObject *v85; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v88; // w27
  __int64 v89; // x22
  __int64 v90; // x8
  int32_t v91; // w20
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  Il2CppObject **v96; // x21
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  Il2CppObject **v101; // x22
  System_String_o *v102; // x0
  System_String_o *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  Il2CppObject *v107; // x1
  System_String_o *v108; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v111; // x20
  int v112; // w23
  _BOOL8 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  Il2CppClass *v116; // x26
  const char *v117; // x8
  int v118; // w27
  __int64 v119; // x8
  __int64 v120; // x9
  int32_t v121; // w21
  System_String_o *v122; // x0
  __int64 v123; // x1
  System_String_o *v124; // x22
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x1
  System_String_o *v129; // x0
  int64_t v130; // x19
  System_Collections_Generic_List_object__o *v131; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v132; // x20
  int v133; // w23
  _BOOL8 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  Il2CppClass *v137; // x26
  const char *v138; // x8
  int v139; // w27
  __int64 v140; // x8
  __int64 v141; // x9
  int32_t v142; // w21
  System_String_o *v143; // x0
  __int64 v144; // x1
  System_String_o *v145; // x22
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x1
  System_String_o *v150; // x0
  int v151; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v153; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v154; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v155; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v156; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v157; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v158; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v159; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4C268C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&StringLiteral_16803/*"ap_max"*/);
    sub_1C2D490(&StringLiteral_9291/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_23139/*"rp_max"*/);
    sub_1C2D490(&StringLiteral_22236/*"no_expedition_{0}"*/);
    sub_1C2D490(&StringLiteral_9290/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_9292/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_9289/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_9296/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_22235/*"no_craft_{0}"*/);
    sub_1C2D490(&StringLiteral_9293/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_9295/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_22239/*"no_operation_{0}"*/);
    sub_1C2D490(&StringLiteral_9294/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_22238/*"no_harvest_{0}"*/);
    sub_1C2D490(&StringLiteral_22237/*"no_fatigue"*/);
    byte_4C268C8 = 1;
  }
  entity = 0;
  memset(&v159, 0, sizeof(v159));
  memset(&v158, 0, sizeof(v158));
  v157 = 0;
  memset(&v156, 0, sizeof(v156));
  memset(&v155, 0, sizeof(v155));
  v153 = 0;
  v154 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C24874 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C24874 = 1;
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
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9289/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16803/*"ap_max"*/, 0);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9296/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_23139/*"rp_max"*/, 0);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_22237/*"no_fatigue"*/, 0);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
      Time_41144944 = NetworkManager__getTime_41144944(v19, 0);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1C2D6EC(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v24 = 0;
        v25 = 0;
        do
        {
          if ( v24 >= (unsigned int)max_length )
            sub_1C2D6F4(Instance, v13, v21);
          v26 = EnableEntityList->m_Items[v24];
          if ( !v26 || !v23 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v23,
                                        &entity,
                                        v26->fields.id,
                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v26->fields.id, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v26->fields.id,
                                        0);
          if ( !Instance )
            goto LABEL_186;
          v27 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v152,
              v27,
              (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v29 = v25;
            v159 = v152;
            while ( 1 )
            {
              v30 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v159,
                      (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v30 )
                break;
              if ( !Master_object )
                sub_1C2D6EC(v30, v31);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v26->fields.id,
                                     (int32_t)v159.fields._current,
                                     0);
              v33 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0);
                v36 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1C2D6EC(0, v35);
                v37 = v33->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v38 = v37 - Time_41144944;
                if ( v37 - Time_41144944 >= 1 && v37 < v26->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9293/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0);
                  v40 = System_String__Format(v39, (Il2CppObject *)v36->fields.name, 0);
                  LODWORD(v152.fields._list) = v29;
                  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v41, v42, v43);
                  v45 = System_String__Format((System_String_o *)StringLiteral_22239/*"no_operation_{0}"*/, v44, 0);
                  NotificationPluginScript__SetLocalNotification(v38, v40, v45, 0);
                  ++v29;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v159,
              (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v29 = v25;
          }
          max_length = EnableEntityList->max_length;
          ++v24;
          v25 = v29;
        }
        while ( v24 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v46.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v47 = NetworkManager__getTime_41144944(v46, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v152,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v151 = 0;
        v158 = v152;
        while ( 1 )
        {
          v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v158,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v48 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v158.fields._current;
          if ( !v158.fields._current )
            sub_1C2D6EC(v48, v49);
          monitor = (char *)v158.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v158.fields._current,
                           0);
          if ( !MasterEntity )
            sub_1C2D6EC(0, v53);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v55 )
            sub_1C2D6EC(0, v56);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v55,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1C2D6EC(0, v58);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v157,
                 current->fields.eventId,
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v60 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0);
            if ( !v60 )
              sub_1C2D6EC(0, v61);
            if ( !v157 )
              sub_1C2D6EC(v60, v61);
            v62 = clearedAt + v60->fields.cooltime < (__int64)v157[6].klass;
          }
          else
          {
LABEL_92:
            v62 = 1;
          }
          v63 = &monitor[cooltime - v47];
          if ( v62 && (__int64)v63 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0);
            if ( QuestEntity )
            {
              v65 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v65 )
                sub_1C2D6EC(0, v66);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v65, QuestEntity->fields.id, 0) )
              {
                v67 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v67 )
                  sub_1C2D6EC(0, v68);
                v69 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v67,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v69 )
                  sub_1C2D6EC(0, v70);
                v71 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v71 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0);
                  v73 = System_String__Format(v72, (Il2CppObject *)v71[2].klass, 0);
                  LODWORD(v152.fields._list) = v151;
                  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v74, v75, v76);
                  v78 = System_String__Format((System_String_o *)StringLiteral_22238/*"no_harvest_{0}"*/, v77, 0);
                  NotificationPluginScript__SetLocalNotification((int32_t)v63, v73, v78, 0);
                  ++v151;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v158,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v79.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v80 = NetworkManager__getTime_41144944(v79, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList((UserEventExpeditionMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v152,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v81 = 0;
        v156 = v152;
        while ( 1 )
        {
          v82 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v156,
                                   (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v82 & 1) == 0 )
            break;
          v85 = v156.fields._current;
          if ( !v156.fields._current )
            sub_1C2D6EC(v82, v83);
          klass = v156.fields._current[2].klass;
          if ( !klass )
            sub_1C2D6EC(v82, v83);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v88 = 0;
            do
            {
              if ( v88 >= (unsigned int)namespaze )
                sub_1C2D6F4(v82, v83, v84);
              v89 = *((_QWORD *)&klass->_1.byval_arg.data + v88);
              if ( !v89 )
                sub_1C2D6EC(v82, v83);
              v90 = *(unsigned int *)(v89 + 28);
              v91 = v90 - v80;
              if ( v90 - v80 >= 1 )
              {
                v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v92 )
                  sub_1C2D6EC(0, v93);
                v94 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v92,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v94 )
                  sub_1C2D6EC(0, v95);
                v82 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v94,
                                         (int32_t)v85[1].monitor,
                                         *(_DWORD *)(v89 + 16),
                                         0);
                v96 = v82;
                if ( v82 )
                {
                  v97 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v97 )
                    sub_1C2D6EC(0, v98);
                  v99 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v97,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v99 )
                    sub_1C2D6EC(0, v100);
                  v82 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v99,
                                           (int32_t)v85[1].monitor,
                                           *(_DWORD *)(v89 + 20),
                                           0);
                  v101 = v82;
                  if ( v82 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v102 = LocalizationManager__Get((System_String_o *)StringLiteral_9291/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0);
                    v103 = System_String__Format_63499156(v102, v101[3], v96[3], 0);
                    LODWORD(v152.fields._list) = v81;
                    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v104, v105, v106);
                    v108 = System_String__Format((System_String_o *)StringLiteral_22236/*"no_expedition_{0}"*/, v107, 0);
                    NotificationPluginScript__SetLocalNotification(v91, v103, v108, 0);
                    ++v81;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v88;
            }
            while ( v88 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v156,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v111 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v152,
          EntityList,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v155 = v152;
        v112 = 0;
        while ( 1 )
        {
          v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v155,
                   (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v113 )
            break;
          if ( !v155.fields._current )
            sub_1C2D6EC(v113, v114);
          v116 = v155.fields._current[2].klass;
          if ( !v116 )
            sub_1C2D6EC(v113, v114);
          v117 = v116->_1.namespaze;
          if ( (int)v117 >= 1 )
          {
            v118 = 0;
            do
            {
              if ( v118 >= (unsigned int)v117 )
                sub_1C2D6F4(v113, v114, v115);
              v119 = *((_QWORD *)&v116->_1.byval_arg.data + v118);
              if ( !v119 )
                sub_1C2D6EC(v113, v114);
              v120 = *(_QWORD *)(v119 + 48);
              v121 = v120 - Time;
              if ( v120 - Time >= 1 )
              {
                if ( !v111 )
                  sub_1C2D6EC(v113, v114);
                v113 = DataMasterBase_object__object__int___TryGetEntity(
                         v111,
                         &v154,
                         *(_DWORD *)(v119 + 20),
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v113 )
                {
                  if ( !v154 )
                    sub_1C2D6EC(v113, v114);
                  if ( !LODWORD(v154[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0);
                    if ( !v154 )
                      sub_1C2D6EC(v122, v123);
                    v124 = System_String__Format(v122, (Il2CppObject *)v154[2].klass, 0);
                    LODWORD(v152.fields._list) = v112;
                    v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v125, v126, v127);
                    v129 = System_String__Format((System_String_o *)StringLiteral_22236/*"no_expedition_{0}"*/, v128, 0);
                    NotificationPluginScript__SetLocalNotification(v121, v124, v129, 0);
                    ++v112;
                  }
                }
              }
              LODWORD(v117) = v116->_1.namespaze;
              ++v118;
            }
            while ( v118 < (int)v117 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v155,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v130 = NetworkManager__getTime(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v131 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v131 )
          goto LABEL_186;
        v132 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v152,
          v131,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v155 = v152;
        v133 = 0;
        while ( 1 )
        {
          v134 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v155,
                   (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v134 )
            break;
          if ( !v155.fields._current )
            sub_1C2D6EC(v134, v135);
          v137 = v155.fields._current[2].klass;
          if ( !v137 )
            sub_1C2D6EC(v134, v135);
          v138 = v137->_1.namespaze;
          if ( (int)v138 >= 1 )
          {
            v139 = 0;
            do
            {
              if ( v139 >= (unsigned int)v138 )
                sub_1C2D6F4(v134, v135, v136);
              v140 = *((_QWORD *)&v137->_1.byval_arg.data + v139);
              if ( !v140 )
                sub_1C2D6EC(v134, v135);
              v141 = *(_QWORD *)(v140 + 48);
              v142 = v141 - v130;
              if ( v141 - v130 >= 1 )
              {
                if ( !v132 )
                  sub_1C2D6EC(v134, v135);
                v134 = DataMasterBase_object__object__int___TryGetEntity(
                         v132,
                         &v153,
                         *(_DWORD *)(v140 + 20),
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v134 )
                {
                  if ( !v153 )
                    sub_1C2D6EC(v134, v135);
                  if ( LODWORD(v153[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v143 = LocalizationManager__Get((System_String_o *)StringLiteral_9290/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0);
                    if ( !v153 )
                      sub_1C2D6EC(v143, v144);
                    v145 = System_String__Format(v143, (Il2CppObject *)v153[2].klass, 0);
                    LODWORD(v152.fields._list) = v133;
                    v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152, v146, v147, v148);
                    v150 = System_String__Format((System_String_o *)StringLiteral_22235/*"no_craft_{0}"*/, v149, 0);
                    NotificationPluginScript__SetLocalNotification(v142, v145, v150, 0);
                    ++v133;
                  }
                }
              }
              LODWORD(v138) = v137->_1.namespaze;
              ++v139;
            }
            while ( v139 < (int)v138 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v155,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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