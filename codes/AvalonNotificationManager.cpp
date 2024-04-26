void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_434F72F & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_434F72F = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  EventEntity_array *EnableEntityList; // x19
  int64_t Time_25947024; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  unsigned int v22; // w28
  EventEntity_o *v23; // x25
  System_Collections_Generic_List_int__o *v24; // x23
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v26; // x8
  int32_t v27; // w23
  System_String_o *v28; // x0
  System_String_o *v29; // x24
  __int64 v30; // x2
  Il2CppObject *v31; // x1
  System_String_o *v32; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v36; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v38; // x1
  EventCooltimeRewardEntity_o *v39; // x24
  int v40; // w26
  int64_t v41; // x19
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v45; // x1
  __int64 cooltime; // x28
  WebViewManager_o *v47; // x0
  __int64 v48; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v52; // x0
  __int64 v53; // x1
  bool v54; // w8
  char *v55; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v57; // x0
  __int64 v58; // x1
  WebViewManager_o *v59; // x0
  __int64 v60; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x0
  __int64 v62; // x1
  WarEntity_o *v63; // x21
  System_String_o *v64; // x0
  System_String_o *v65; // x21
  __int64 v66; // x2
  Il2CppObject *v67; // x1
  System_String_o *v68; // x0
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int v71; // w20
  int v72; // w8
  int64_t v73; // x19
  int v74; // w24
  Il2CppObject **v75; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v80; // w26
  __int64 v81; // x22
  __int64 v82; // x8
  int32_t v83; // w20
  WebViewManager_o *v84; // x0
  __int64 v85; // x1
  EventExpeditionMaster_o *v86; // x0
  __int64 v87; // x1
  Il2CppObject **v88; // x21
  WebViewManager_o *v89; // x0
  __int64 v90; // x1
  EventExpeditionPieceMaster_o *v91; // x0
  __int64 v92; // x1
  Il2CppObject **v93; // x22
  System_String_o *v94; // x0
  System_String_o *v95; // x21
  __int64 v96; // x2
  Il2CppObject *v97; // x1
  System_String_o *v98; // x0
  int v99; // w20
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // [xsp+0h] [xbp-E0h]
  int v103; // [xsp+0h] [xbp-E0h]
  int v104; // [xsp+4h] [xbp-DCh]
  _BYTE v105[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v106; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v108; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v110; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v112; // 0:x0.8
  System_DateTime_o v113; // 0:x0.8
  System_DateTime_o v114; // 0:x0.8

  if ( (byte_434F72E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&StringLiteral_16609/*"ap_max"*/);
    sub_B70694(&StringLiteral_9441/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_B70694(&StringLiteral_22228/*"rp_max"*/);
    sub_B70694(&StringLiteral_21446/*"no_expedition_{0}"*/);
    sub_B70694(&StringLiteral_9442/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_B70694(&StringLiteral_9440/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_9445/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_9443/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_B70694(&StringLiteral_9444/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_21449/*"no_operation_{0}"*/);
    sub_B70694(&StringLiteral_21448/*"no_harvest_{0}"*/);
    sub_B70694(&StringLiteral_21447/*"no_fatigue"*/);
    byte_434F72E = 1;
  }
  entity = 0LL;
  memset(&v110, 0, sizeof(v110));
  memset(&v109, 0, sizeof(v109));
  v108 = 0LL;
  memset(&v107, 0, sizeof(v107));
  v106 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_434DCCD )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434DCCD = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
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
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v6, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v8 = ActAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16609/*"ap_max"*/, 0LL);
        }
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v6, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v11 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9445/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_22228/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_160;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v16 = FatigueAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9444/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_21447/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v112.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_25947024 = NetworkManager__getTime_25947024(v112, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B7076C(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v102 = 0LL;
        v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= max_length )
          {
            v100 = sub_B70798(Instance);
            sub_B70738(v100, 0LL);
          }
          v23 = EnableEntityList->m_Items[v22];
          if ( !v23 || !v21 )
            goto LABEL_160;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v21,
                                        &entity,
                                        v23->fields.id,
                                        (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_160;
            Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v23->fields.id, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !Instance )
                  goto LABEL_160;
                Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                              (EventCooltimeRewardMaster_o *)Instance,
                                              v23->fields.id,
                                              0LL);
                if ( !Instance )
                  goto LABEL_160;
                v24 = (System_Collections_Generic_List_int__o *)Instance;
                if ( SLODWORD(Instance->fields.datalist) >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v105,
                    v24,
                    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v110 = *(System_Collections_Generic_List_Enumerator_int__o *)v105;
                  while ( 1 )
                  {
                    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                            &v110,
                            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v33 )
                      break;
                    if ( !Master_WarQuestSelectionMaster )
                      sub_B7076C(v33, v34);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           Master_WarQuestSelectionMaster,
                                           v23->fields.id,
                                           v110.fields.current,
                                           0LL);
                    v36 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v39 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B7076C(0LL, v38);
                      v26 = v36->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v27 = v26 - Time_25947024;
                      if ( v26 - Time_25947024 >= 1 && v26 < v23->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9443/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v29 = System_String__Format(v28, (Il2CppObject *)v39->fields.name, 0LL);
                        *(_DWORD *)v105 = v102;
                        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v105, v30);
                        v32 = System_String__Format((System_String_o *)StringLiteral_21449/*"no_operation_{0}"*/, v31, 0LL);
                        NotificationPluginScript__SetLocalNotification(v27, v29, v32, 0LL);
                        LODWORD(v102) = v102 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v105[4 * SHIDWORD(v102) + 24] = 508;
                  v40 = ++v106;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v110,
                    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v40 )
                  {
                    if ( *(_DWORD *)&v105[4 * v40 + 20] == 508 )
                    {
                      v106 = v40 - 1;
                      HIDWORD(v102) = v40 - 1;
                    }
                    else
                    {
                      HIDWORD(v102) = v40;
                    }
                  }
                  else
                  {
                    HIDWORD(v102) = 0;
                  }
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
          if ( (int)++v22 >= max_length )
            goto LABEL_91;
        }
      }
      HIDWORD(v102) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v113.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v41 = NetworkManager__getTime_25947024(v113, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v105,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v103 = 0;
        v109 = *(System_Collections_Generic_List_Enumerator_T__o *)v105;
        while ( 1 )
        {
          v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v109,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v69 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v109.fields.current;
          if ( !v109.fields.current )
            sub_B7076C(v69, v70);
          monitor = (char *)v109.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v109.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B7076C(0LL, v45);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v47 )
            sub_B7076C(0LL, v48);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v47,
                                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B7076C(0LL, v50);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v108,
                 current->fields.eventId,
                 (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v52 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v52 )
              sub_B7076C(0LL, v53);
            if ( !v108 )
              sub_B7076C(v52, v53);
            v54 = clearedAt + v52->fields.cooltime < *(_QWORD *)&v108->fields.eventId;
          }
          else
          {
LABEL_108:
            v54 = 1;
          }
          v55 = &monitor[cooltime - v41];
          if ( v54 && (__int64)v55 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v57 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v57 )
                sub_B7076C(0LL, v58);
              if ( clsQuestCheck__CheckQuestPlayableNow(v57, QuestEntity->fields.id, 0LL) )
              {
                v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v59 )
                  sub_B7076C(0LL, v60);
                v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v59,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v61 )
                  sub_B7076C(0LL, v62);
                v63 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v61,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v63 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9442/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v65 = System_String__Format(v64, (Il2CppObject *)v63->fields.name, 0LL);
                  *(_DWORD *)v105 = v103;
                  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v105, v66);
                  v68 = System_String__Format((System_String_o *)StringLiteral_21448/*"no_harvest_{0}"*/, v67, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v55, v65, v68, 0LL);
                  ++v103;
                }
              }
            }
          }
        }
        *(_DWORD *)&v105[4 * SHIDWORD(v102) + 24] = 836;
        v71 = ++v106;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v109,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v71 )
        {
          v72 = v71 - 1;
          if ( *(_DWORD *)&v105[4 * v71 + 20] == 836 )
          {
            --v71;
            v106 = v72;
          }
        }
      }
      else
      {
        v71 = HIDWORD(v102);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v114.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v73 = NetworkManager__getTime_25947024(v114, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_160;
        v104 = v71;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v105,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v74 = 0;
        v107 = *(System_Collections_Generic_List_Enumerator_T__o *)v105;
        while ( 1 )
        {
          v75 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                   &v107,
                                   (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v75 & 1) == 0 )
            break;
          v77 = v107.fields.current;
          if ( !v107.fields.current )
            sub_B7076C(v75, v76);
          klass = v107.fields.current[2].klass;
          if ( !klass )
            sub_B7076C(v75, v76);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v80 = 0;
            do
            {
              if ( v80 >= (unsigned int)namespaze )
              {
                v101 = sub_B70798(v75);
                sub_B70738(v101, 0LL);
              }
              v81 = *((_QWORD *)&klass->_1.byval_arg.data + v80);
              if ( !v81 )
                sub_B7076C(v75, v76);
              v82 = *(unsigned int *)(v81 + 28);
              v83 = v82 - v73;
              if ( v82 - v73 >= 1 )
              {
                v84 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v84 )
                  sub_B7076C(0LL, v85);
                v86 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v84,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v86 )
                  sub_B7076C(0LL, v87);
                v75 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         v86,
                                         (int32_t)v77[1].monitor,
                                         *(_DWORD *)(v81 + 16),
                                         0LL);
                v88 = v75;
                if ( v75 )
                {
                  v89 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v89 )
                    sub_B7076C(0LL, v90);
                  v91 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v89,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v91 )
                    sub_B7076C(0LL, v92);
                  v75 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           v91,
                                           (int32_t)v77[1].monitor,
                                           *(_DWORD *)(v81 + 20),
                                           0LL);
                  v93 = v75;
                  if ( v75 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_9441/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v95 = System_String__Format_44753704(v94, v93[3], v88[3], 0LL);
                    *(_DWORD *)v105 = v74;
                    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v105, v96);
                    v98 = System_String__Format((System_String_o *)StringLiteral_21446/*"no_expedition_{0}"*/, v97, 0LL);
                    NotificationPluginScript__SetLocalNotification(v83, v95, v98, 0LL);
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
        *(_DWORD *)&v105[4 * v104 + 24] = 1118;
        v99 = ++v106;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v107,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v99 && *(_DWORD *)&v105[4 * v99 + 20] == 1118 )
          v106 = v99 - 1;
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