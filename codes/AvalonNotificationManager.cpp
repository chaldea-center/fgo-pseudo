void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4184989 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_4184989 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
}


void __fastcall AvalonNotificationManager__Initialize(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonNotificationManager__OnApplicationFocus(
        AvalonNotificationManager_o *this,
        bool isFocus,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  NetworkManager_c *v50; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v52; // x19
  int64_t ActAllRecoverTime; // x0
  int32_t v54; // w20
  System_String_o *v55; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v57; // w20
  DataManager_o *Instance; // x0
  __int64 v59; // x1
  System_String_o *v60; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v62; // w19
  System_String_o *v63; // x0
  EventEntity_array *EnableEntityList; // x19
  int64_t Time_26270684; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x21
  unsigned int v68; // w28
  EventEntity_o *v69; // x25
  System_Collections_Generic_List_int__o *v70; // x23
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v72; // x8
  int32_t v73; // w23
  System_String_o *v74; // x0
  System_String_o *v75; // x24
  Il2CppObject *v76; // x1
  System_String_o *v77; // x0
  _BOOL8 v78; // x0
  __int64 v79; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v81; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v83; // x1
  EventCooltimeRewardEntity_o *v84; // x24
  int v85; // w26
  int64_t v86; // x19
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v90; // x1
  __int64 cooltime; // x28
  WebViewManager_o *v92; // x0
  __int64 v93; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v95; // x1
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v97; // x0
  __int64 v98; // x1
  bool v99; // w8
  char *v100; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v102; // x0
  __int64 v103; // x1
  WebViewManager_o *v104; // x0
  __int64 v105; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x0
  __int64 v107; // x1
  WarEntity_o *v108; // x21
  System_String_o *v109; // x0
  System_String_o *v110; // x21
  Il2CppObject *v111; // x1
  System_String_o *v112; // x0
  _BOOL8 v113; // x0
  __int64 v114; // x1
  int v115; // w20
  int v116; // w8
  int64_t v117; // x19
  int v118; // w24
  Il2CppObject **v119; // x0
  __int64 v120; // x1
  Il2CppObject *v121; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v124; // w26
  __int64 v125; // x22
  __int64 v126; // x8
  int32_t v127; // w20
  WebViewManager_o *v128; // x0
  __int64 v129; // x1
  EventExpeditionMaster_o *v130; // x0
  __int64 v131; // x1
  Il2CppObject **v132; // x21
  WebViewManager_o *v133; // x0
  __int64 v134; // x1
  EventExpeditionPieceMaster_o *v135; // x0
  __int64 v136; // x1
  Il2CppObject **v137; // x22
  System_String_o *v138; // x0
  System_String_o *v139; // x21
  Il2CppObject *v140; // x1
  System_String_o *v141; // x0
  int v142; // w20
  __int64 v143; // x0
  __int64 v144; // x0
  __int64 v145; // [xsp+0h] [xbp-E0h]
  int v146; // [xsp+0h] [xbp-E0h]
  int v147; // [xsp+4h] [xbp-DCh]
  _BYTE v148[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v149; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v151; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v152; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v153; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v155; // 0:x0.8
  System_DateTime_o v156; // 0:x0.8
  System_DateTime_o v157; // 0:x0.8

  if ( (byte_4184988 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v26);
    sub_B2C35C(&int_TypeInfo, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_B2C35C(&LocalizationManager_TypeInfo, v32);
    sub_B2C35C(&NetworkManager_TypeInfo, v33);
    sub_B2C35C(&OptionManager_TypeInfo, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v36);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v37);
    sub_B2C35C(&StringLiteral_16367/*"ap_max"*/, v38);
    sub_B2C35C(&StringLiteral_9331/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v39);
    sub_B2C35C(&StringLiteral_21862/*"rp_max"*/, v40);
    sub_B2C35C(&StringLiteral_21105/*"no_expedition_{0}"*/, v41);
    sub_B2C35C(&StringLiteral_9332/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v42);
    sub_B2C35C(&StringLiteral_9330/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v43);
    sub_B2C35C(&StringLiteral_9335/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v44);
    sub_B2C35C(&StringLiteral_9333/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v45);
    sub_B2C35C(&StringLiteral_9334/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v46);
    sub_B2C35C(&StringLiteral_21108/*"no_operation_{0}"*/, v47);
    sub_B2C35C(&StringLiteral_21107/*"no_harvest_{0}"*/, v48);
    sub_B2C35C(&StringLiteral_21106/*"no_fatigue"*/, v49);
    byte_4184988 = 1;
  }
  entity = 0LL;
  memset(&v153, 0, sizeof(v153));
  memset(&v152, 0, sizeof(v152));
  v151 = 0LL;
  memset(&v150, 0, sizeof(v150));
  v149 = 0;
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
  if ( !byte_4184A9C )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, isFocus);
    byte_4184A9C = 1;
  }
  v50 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v50 = NetworkManager_TypeInfo;
  }
  if ( v50->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v52 = SelfUserGame;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v52, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v54 = ActAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9330/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v54, v55, (System_String_o *)StringLiteral_16367/*"ap_max"*/, 0LL);
        }
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v52, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v57 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v52->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9335/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v57, v60, (System_String_o *)StringLiteral_21862/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_160;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v62 = FatigueAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9334/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v62, v63, (System_String_o *)StringLiteral_21106/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v155.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_26270684 = NetworkManager__getTime_26270684(v155, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B2C434(Instance, v59);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v145 = 0LL;
        v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v68 = 0;
        while ( 1 )
        {
          if ( v68 >= max_length )
          {
            v143 = sub_B2C460(Instance);
            sub_B2C400(v143, 0LL);
          }
          v69 = EnableEntityList->m_Items[v68];
          if ( !v69 || !v67 )
            goto LABEL_160;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v67,
                                        &entity,
                                        v69->fields.id,
                                        (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_160;
            Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v69->fields.id, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !Instance )
                  goto LABEL_160;
                Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                              (EventCooltimeRewardMaster_o *)Instance,
                                              v69->fields.id,
                                              0LL);
                if ( !Instance )
                  goto LABEL_160;
                v70 = (System_Collections_Generic_List_int__o *)Instance;
                if ( SLODWORD(Instance->fields.datalist) >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v148,
                    v70,
                    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v153 = *(System_Collections_Generic_List_Enumerator_int__o *)v148;
                  while ( 1 )
                  {
                    v78 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                            &v153,
                            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v78 )
                      break;
                    if ( !Master_WarQuestSelectionMaster )
                      sub_B2C434(v78, v79);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           Master_WarQuestSelectionMaster,
                                           v69->fields.id,
                                           v153.fields.current,
                                           0LL);
                    v81 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v84 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B2C434(0LL, v83);
                      v72 = v81->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v73 = v72 - Time_26270684;
                      if ( v72 - Time_26270684 >= 1 && v72 < v69->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9333/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v75 = System_String__Format(v74, (Il2CppObject *)v84->fields.name, 0LL);
                        *(_DWORD *)v148 = v145;
                        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v148);
                        v77 = System_String__Format((System_String_o *)StringLiteral_21108/*"no_operation_{0}"*/, v76, 0LL);
                        NotificationPluginScript__SetLocalNotification(v73, v75, v77, 0LL);
                        LODWORD(v145) = v145 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v148[4 * SHIDWORD(v145) + 24] = 508;
                  v85 = ++v149;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v153,
                    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v85 )
                  {
                    if ( *(_DWORD *)&v148[4 * v85 + 20] == 508 )
                    {
                      v149 = v85 - 1;
                      HIDWORD(v145) = v85 - 1;
                    }
                    else
                    {
                      HIDWORD(v145) = v85;
                    }
                  }
                  else
                  {
                    HIDWORD(v145) = 0;
                  }
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
          if ( (int)++v68 >= max_length )
            goto LABEL_91;
        }
      }
      HIDWORD(v145) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v156.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v86 = NetworkManager__getTime_26270684(v156, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v148,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v146 = 0;
        v152 = *(System_Collections_Generic_List_Enumerator_T__o *)v148;
        while ( 1 )
        {
          v113 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v152,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v113 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v152.fields.current;
          if ( !v152.fields.current )
            sub_B2C434(v113, v114);
          monitor = (char *)v152.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v152.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B2C434(0LL, v90);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v92 )
            sub_B2C434(0LL, v93);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v92,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B2C434(0LL, v95);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v151,
                 current->fields.eventId,
                 (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v97 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v97 )
              sub_B2C434(0LL, v98);
            if ( !v151 )
              sub_B2C434(v97, v98);
            v99 = clearedAt + v97->fields.cooltime < *(_QWORD *)&v151->fields.eventId;
          }
          else
          {
LABEL_108:
            v99 = 1;
          }
          v100 = &monitor[cooltime - v86];
          if ( v99 && (__int64)v100 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v102 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v102 )
                sub_B2C434(0LL, v103);
              if ( clsQuestCheck__CheckQuestPlayableNow(v102, QuestEntity->fields.id, 0LL) )
              {
                v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v104 )
                  sub_B2C434(0LL, v105);
                v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)v104,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v106 )
                  sub_B2C434(0LL, v107);
                v108 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v106,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v108 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_9332/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v110 = System_String__Format(v109, (Il2CppObject *)v108->fields.name, 0LL);
                  *(_DWORD *)v148 = v146;
                  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v148);
                  v112 = System_String__Format((System_String_o *)StringLiteral_21107/*"no_harvest_{0}"*/, v111, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v100, v110, v112, 0LL);
                  ++v146;
                }
              }
            }
          }
        }
        *(_DWORD *)&v148[4 * SHIDWORD(v145) + 24] = 836;
        v115 = ++v149;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v152,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v115 )
        {
          v116 = v115 - 1;
          if ( *(_DWORD *)&v148[4 * v115 + 20] == 836 )
          {
            --v115;
            v149 = v116;
          }
        }
      }
      else
      {
        v115 = HIDWORD(v145);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v157.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v117 = NetworkManager__getTime_26270684(v157, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_160;
        v147 = v115;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v148,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v118 = 0;
        v150 = *(System_Collections_Generic_List_Enumerator_T__o *)v148;
        while ( 1 )
        {
          v119 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v150,
                                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v119 & 1) == 0 )
            break;
          v121 = v150.fields.current;
          if ( !v150.fields.current )
            sub_B2C434(v119, v120);
          klass = v150.fields.current[2].klass;
          if ( !klass )
            sub_B2C434(v119, v120);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v124 = 0;
            do
            {
              if ( v124 >= (unsigned int)namespaze )
              {
                v144 = sub_B2C460(v119);
                sub_B2C400(v144, 0LL);
              }
              v125 = *((_QWORD *)&klass->_1.byval_arg.data + v124);
              if ( !v125 )
                sub_B2C434(v119, v120);
              v126 = *(unsigned int *)(v125 + 28);
              v127 = v126 - v117;
              if ( v126 - v117 >= 1 )
              {
                v128 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v128 )
                  sub_B2C434(0LL, v129);
                v130 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v128,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v130 )
                  sub_B2C434(0LL, v131);
                v119 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          v130,
                                          (int32_t)v121[1].monitor,
                                          *(_DWORD *)(v125 + 16),
                                          0LL);
                v132 = v119;
                if ( v119 )
                {
                  v133 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v133 )
                    sub_B2C434(0LL, v134);
                  v135 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v133,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v135 )
                    sub_B2C434(0LL, v136);
                  v119 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            v135,
                                            (int32_t)v121[1].monitor,
                                            *(_DWORD *)(v125 + 20),
                                            0LL);
                  v137 = v119;
                  if ( v119 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_9331/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v139 = System_String__Format_44301068(v138, v137[3], v132[3], 0LL);
                    *(_DWORD *)v148 = v118;
                    v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v148);
                    v141 = System_String__Format((System_String_o *)StringLiteral_21105/*"no_expedition_{0}"*/, v140, 0LL);
                    NotificationPluginScript__SetLocalNotification(v127, v139, v141, 0LL);
                    ++v118;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v124;
            }
            while ( v124 < (int)namespaze );
          }
        }
        *(_DWORD *)&v148[4 * v147 + 24] = 1118;
        v142 = ++v149;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v150,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v142 && *(_DWORD *)&v148[4 * v142 + 20] == 1118 )
          v149 = v142 - 1;
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