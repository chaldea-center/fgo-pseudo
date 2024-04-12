void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_42ACE9B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_42ACE9B = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  int64_t Time_25741128; // x20
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
  Il2CppObject *v30; // x1
  System_String_o *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v35; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v37; // x1
  EventCooltimeRewardEntity_o *v38; // x24
  int v39; // w26
  int64_t v40; // x19
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v44; // x1
  __int64 cooltime; // x28
  WebViewManager_o *v46; // x0
  __int64 v47; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v51; // x0
  __int64 v52; // x1
  bool v53; // w8
  char *v54; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v56; // x0
  __int64 v57; // x1
  WebViewManager_o *v58; // x0
  __int64 v59; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x0
  __int64 v61; // x1
  WarEntity_o *v62; // x21
  System_String_o *v63; // x0
  System_String_o *v64; // x21
  Il2CppObject *v65; // x1
  System_String_o *v66; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  int v69; // w20
  int v70; // w8
  int64_t v71; // x19
  int v72; // w24
  Il2CppObject **v73; // x0
  __int64 v74; // x1
  Il2CppObject *v75; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v78; // w26
  __int64 v79; // x22
  __int64 v80; // x8
  int32_t v81; // w20
  WebViewManager_o *v82; // x0
  __int64 v83; // x1
  EventExpeditionMaster_o *v84; // x0
  __int64 v85; // x1
  Il2CppObject **v86; // x21
  WebViewManager_o *v87; // x0
  __int64 v88; // x1
  EventExpeditionPieceMaster_o *v89; // x0
  __int64 v90; // x1
  Il2CppObject **v91; // x22
  System_String_o *v92; // x0
  System_String_o *v93; // x21
  Il2CppObject *v94; // x1
  System_String_o *v95; // x0
  int v96; // w20
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // [xsp+0h] [xbp-E0h]
  int v100; // [xsp+0h] [xbp-E0h]
  int v101; // [xsp+4h] [xbp-DCh]
  _BYTE v102[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v103; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v105; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v107; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v109; // 0:x0.8
  System_DateTime_o v110; // 0:x0.8
  System_DateTime_o v111; // 0:x0.8

  if ( (byte_42ACE9A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&StringLiteral_16479/*"ap_max"*/);
    sub_B52984(&StringLiteral_9388/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_B52984(&StringLiteral_22046/*"rp_max"*/);
    sub_B52984(&StringLiteral_21277/*"no_expedition_{0}"*/);
    sub_B52984(&StringLiteral_9389/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_B52984(&StringLiteral_9387/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_B52984(&StringLiteral_9392/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_B52984(&StringLiteral_9390/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_B52984(&StringLiteral_9391/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_B52984(&StringLiteral_21280/*"no_operation_{0}"*/);
    sub_B52984(&StringLiteral_21279/*"no_harvest_{0}"*/);
    sub_B52984(&StringLiteral_21278/*"no_fatigue"*/);
    byte_42ACE9A = 1;
  }
  entity = 0LL;
  memset(&v107, 0, sizeof(v107));
  memset(&v106, 0, sizeof(v106));
  v105 = 0LL;
  memset(&v104, 0, sizeof(v104));
  v103 = 0;
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
  if ( !byte_42ACFAE )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42ACFAE = 1;
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
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9387/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v8, v9, (System_String_o *)StringLiteral_16479/*"ap_max"*/, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v6->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9392/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v11, v14, (System_String_o *)StringLiteral_22046/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9391/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v16, v17, (System_String_o *)StringLiteral_21278/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v109.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_25741128 = NetworkManager__getTime_25741128(v109, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B52A5C(Instance, v13);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v99 = 0LL;
        v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= max_length )
          {
            v97 = sub_B52A88(Instance);
            sub_B52A28(v97, 0LL);
          }
          v23 = EnableEntityList->m_Items[v22];
          if ( !v23 || !v21 )
            goto LABEL_160;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v21,
                                        &entity,
                                        v23->fields.id,
                                        (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
                Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
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
                  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v102,
                    v24,
                    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v107 = *(System_Collections_Generic_List_Enumerator_int__o *)v102;
                  while ( 1 )
                  {
                    v32 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                            &v107,
                            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v32 )
                      break;
                    if ( !Master_WarQuestSelectionMaster )
                      sub_B52A5C(v32, v33);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           Master_WarQuestSelectionMaster,
                                           v23->fields.id,
                                           v107.fields.current,
                                           0LL);
                    v35 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v38 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B52A5C(0LL, v37);
                      v26 = v35->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v27 = v26 - Time_25741128;
                      if ( v26 - Time_25741128 >= 1 && v26 < v23->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9390/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v29 = System_String__Format(v28, (Il2CppObject *)v38->fields.name, 0LL);
                        *(_DWORD *)v102 = v99;
                        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v102);
                        v31 = System_String__Format((System_String_o *)StringLiteral_21280/*"no_operation_{0}"*/, v30, 0LL);
                        NotificationPluginScript__SetLocalNotification(v27, v29, v31, 0LL);
                        LODWORD(v99) = v99 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v102[4 * SHIDWORD(v99) + 24] = 508;
                  v39 = ++v103;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v107,
                    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v39 )
                  {
                    if ( *(_DWORD *)&v102[4 * v39 + 20] == 508 )
                    {
                      v103 = v39 - 1;
                      HIDWORD(v99) = v39 - 1;
                    }
                    else
                    {
                      HIDWORD(v99) = v39;
                    }
                  }
                  else
                  {
                    HIDWORD(v99) = 0;
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
      HIDWORD(v99) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v110.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v40 = NetworkManager__getTime_25741128(v110, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v102,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v100 = 0;
        v106 = *(System_Collections_Generic_List_Enumerator_T__o *)v102;
        while ( 1 )
        {
          v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v106,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v67 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v106.fields.current;
          if ( !v106.fields.current )
            sub_B52A5C(v67, v68);
          monitor = (char *)v106.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v106.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B52A5C(0LL, v44);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v46 )
            sub_B52A5C(0LL, v47);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v46,
                                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B52A5C(0LL, v49);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v105,
                 current->fields.eventId,
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v51 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v51 )
              sub_B52A5C(0LL, v52);
            if ( !v105 )
              sub_B52A5C(v51, v52);
            v53 = clearedAt + v51->fields.cooltime < *(_QWORD *)&v105->fields.eventId;
          }
          else
          {
LABEL_108:
            v53 = 1;
          }
          v54 = &monitor[cooltime - v40];
          if ( v53 && (__int64)v54 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v56 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v56 )
                sub_B52A5C(0LL, v57);
              if ( clsQuestCheck__CheckQuestPlayableNow(v56, QuestEntity->fields.id, 0LL) )
              {
                v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v58 )
                  sub_B52A5C(0LL, v59);
                v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v58,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v60 )
                  sub_B52A5C(0LL, v61);
                v62 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v60,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v62 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v64 = System_String__Format(v63, (Il2CppObject *)v62->fields.name, 0LL);
                  *(_DWORD *)v102 = v100;
                  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v102);
                  v66 = System_String__Format((System_String_o *)StringLiteral_21279/*"no_harvest_{0}"*/, v65, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v54, v64, v66, 0LL);
                  ++v100;
                }
              }
            }
          }
        }
        *(_DWORD *)&v102[4 * SHIDWORD(v99) + 24] = 836;
        v69 = ++v103;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v106,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v69 )
        {
          v70 = v69 - 1;
          if ( *(_DWORD *)&v102[4 * v69 + 20] == 836 )
          {
            --v69;
            v103 = v70;
          }
        }
      }
      else
      {
        v69 = HIDWORD(v99);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v111.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v71 = NetworkManager__getTime_25741128(v111, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_160;
        v101 = v69;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v102,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v72 = 0;
        v104 = *(System_Collections_Generic_List_Enumerator_T__o *)v102;
        while ( 1 )
        {
          v73 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                   &v104,
                                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v73 & 1) == 0 )
            break;
          v75 = v104.fields.current;
          if ( !v104.fields.current )
            sub_B52A5C(v73, v74);
          klass = v104.fields.current[2].klass;
          if ( !klass )
            sub_B52A5C(v73, v74);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v78 = 0;
            do
            {
              if ( v78 >= (unsigned int)namespaze )
              {
                v98 = sub_B52A88(v73);
                sub_B52A28(v98, 0LL);
              }
              v79 = *((_QWORD *)&klass->_1.byval_arg.data + v78);
              if ( !v79 )
                sub_B52A5C(v73, v74);
              v80 = *(unsigned int *)(v79 + 28);
              v81 = v80 - v71;
              if ( v80 - v71 >= 1 )
              {
                v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v82 )
                  sub_B52A5C(0LL, v83);
                v84 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v82,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v84 )
                  sub_B52A5C(0LL, v85);
                v73 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         v84,
                                         (int32_t)v75[1].monitor,
                                         *(_DWORD *)(v79 + 16),
                                         0LL);
                v86 = v73;
                if ( v73 )
                {
                  v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v87 )
                    sub_B52A5C(0LL, v88);
                  v89 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v87,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v89 )
                    sub_B52A5C(0LL, v90);
                  v73 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           v89,
                                           (int32_t)v75[1].monitor,
                                           *(_DWORD *)(v79 + 20),
                                           0LL);
                  v91 = v73;
                  if ( v73 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v93 = System_String__Format_44563852(v92, v91[3], v86[3], 0LL);
                    *(_DWORD *)v102 = v72;
                    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v102);
                    v95 = System_String__Format((System_String_o *)StringLiteral_21277/*"no_expedition_{0}"*/, v94, 0LL);
                    NotificationPluginScript__SetLocalNotification(v81, v93, v95, 0LL);
                    ++v72;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v78;
            }
            while ( v78 < (int)namespaze );
          }
        }
        *(_DWORD *)&v102[4 * v101 + 24] = 1118;
        v96 = ++v103;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v104,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v96 && *(_DWORD *)&v102[4 * v96 + 20] == 1118 )
          v103 = v96 - 1;
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