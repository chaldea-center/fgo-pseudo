void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_42115D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_42115D1 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  System_String_o *v59; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v61; // w19
  System_String_o *v62; // x0
  EventEntity_array *EnableEntityList; // x19
  int64_t Time_25503776; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x21
  unsigned int v67; // w28
  EventEntity_o *v68; // x25
  System_Collections_Generic_List_int__o *v69; // x23
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v71; // x8
  int32_t v72; // w23
  System_String_o *v73; // x0
  System_String_o *v74; // x24
  Il2CppObject *v75; // x1
  System_String_o *v76; // x0
  _BOOL8 v77; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v79; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  EventCooltimeRewardEntity_o *v81; // x24
  int v82; // w26
  int64_t v83; // x19
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 cooltime; // x28
  WebViewManager_o *v88; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v91; // x0
  bool v92; // w8
  char *v93; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v95; // x0
  WebViewManager_o *v96; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v97; // x0
  WarEntity_o *v98; // x21
  System_String_o *v99; // x0
  System_String_o *v100; // x21
  Il2CppObject *v101; // x1
  System_String_o *v102; // x0
  _BOOL8 v103; // x0
  int v104; // w20
  int v105; // w8
  int64_t v106; // x19
  int v107; // w24
  Il2CppObject **v108; // x0
  Il2CppObject *v109; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v112; // w26
  __int64 v113; // x22
  __int64 v114; // x8
  int32_t v115; // w20
  WebViewManager_o *v116; // x0
  EventExpeditionMaster_o *v117; // x0
  Il2CppObject **v118; // x21
  WebViewManager_o *v119; // x0
  EventExpeditionPieceMaster_o *v120; // x0
  Il2CppObject **v121; // x22
  System_String_o *v122; // x0
  System_String_o *v123; // x21
  Il2CppObject *v124; // x1
  System_String_o *v125; // x0
  int v126; // w20
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // [xsp+0h] [xbp-E0h]
  int v130; // [xsp+0h] [xbp-E0h]
  int v131; // [xsp+4h] [xbp-DCh]
  _BYTE v132[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v133; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v134; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v135; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v137; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v139; // 0:x0.8
  System_DateTime_o v140; // 0:x0.8
  System_DateTime_o v141; // 0:x0.8

  if ( (byte_42115D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v26);
    sub_B0D8A4(&int_TypeInfo, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v32);
    sub_B0D8A4(&NetworkManager_TypeInfo, v33);
    sub_B0D8A4(&OptionManager_TypeInfo, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v36);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v37);
    sub_B0D8A4(&StringLiteral_16416/*"ap_max"*/, v38);
    sub_B0D8A4(&StringLiteral_9354/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v39);
    sub_B0D8A4(&StringLiteral_21935/*"rp_max"*/, v40);
    sub_B0D8A4(&StringLiteral_21174/*"no_expedition_{0}"*/, v41);
    sub_B0D8A4(&StringLiteral_9355/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v42);
    sub_B0D8A4(&StringLiteral_9353/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v43);
    sub_B0D8A4(&StringLiteral_9358/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v44);
    sub_B0D8A4(&StringLiteral_9356/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v45);
    sub_B0D8A4(&StringLiteral_9357/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v46);
    sub_B0D8A4(&StringLiteral_21177/*"no_operation_{0}"*/, v47);
    sub_B0D8A4(&StringLiteral_21176/*"no_harvest_{0}"*/, v48);
    sub_B0D8A4(&StringLiteral_21175/*"no_fatigue"*/, v49);
    byte_42115D0 = 1;
  }
  entity = 0LL;
  memset(&v137, 0, sizeof(v137));
  memset(&v136, 0, sizeof(v136));
  v135 = 0LL;
  memset(&v134, 0, sizeof(v134));
  v133 = 0;
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
  if ( !byte_42116E4 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, isFocus);
    byte_42116E4 = 1;
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
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9353/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v54, v55, (System_String_o *)StringLiteral_16416/*"ap_max"*/, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v52->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9358/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v57, v59, (System_String_o *)StringLiteral_21935/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_160;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v61 = FatigueAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9357/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v61, v62, (System_String_o *)StringLiteral_21175/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v139.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_25503776 = NetworkManager__getTime_25503776(v139, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B0D97C(Instance);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v129 = 0LL;
        v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v67 = 0;
        while ( 1 )
        {
          if ( v67 >= max_length )
          {
            v127 = sub_B0D9A8(Instance);
            sub_B0D948(v127, 0LL);
          }
          v68 = EnableEntityList->m_Items[v67];
          if ( !v68 || !v66 )
            goto LABEL_160;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v66,
                                        &entity,
                                        v68->fields.id,
                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_160;
            Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v68->fields.id, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !Instance )
                  goto LABEL_160;
                Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                              (EventCooltimeRewardMaster_o *)Instance,
                                              v68->fields.id,
                                              0LL);
                if ( !Instance )
                  goto LABEL_160;
                v69 = (System_Collections_Generic_List_int__o *)Instance;
                if ( SLODWORD(Instance->fields.datalist) >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v132,
                    v69,
                    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v137 = *(System_Collections_Generic_List_Enumerator_int__o *)v132;
                  while ( 1 )
                  {
                    v77 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                            &v137,
                            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v77 )
                      break;
                    if ( !Master_WarQuestSelectionMaster )
                      sub_B0D97C(v77);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           Master_WarQuestSelectionMaster,
                                           v68->fields.id,
                                           v137.fields.current,
                                           0LL);
                    v79 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v81 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B0D97C(0LL);
                      v71 = v79->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v72 = v71 - Time_25503776;
                      if ( v71 - Time_25503776 >= 1 && v71 < v68->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9356/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v74 = System_String__Format(v73, (Il2CppObject *)v81->fields.name, 0LL);
                        *(_DWORD *)v132 = v129;
                        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v132);
                        v76 = System_String__Format((System_String_o *)StringLiteral_21177/*"no_operation_{0}"*/, v75, 0LL);
                        NotificationPluginScript__SetLocalNotification(v72, v74, v76, 0LL);
                        LODWORD(v129) = v129 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v132[4 * SHIDWORD(v129) + 24] = 508;
                  v82 = ++v133;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v137,
                    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v82 )
                  {
                    if ( *(_DWORD *)&v132[4 * v82 + 20] == 508 )
                    {
                      v133 = v82 - 1;
                      HIDWORD(v129) = v82 - 1;
                    }
                    else
                    {
                      HIDWORD(v129) = v82;
                    }
                  }
                  else
                  {
                    HIDWORD(v129) = 0;
                  }
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
          if ( (int)++v67 >= max_length )
            goto LABEL_91;
        }
      }
      HIDWORD(v129) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v140.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v83 = NetworkManager__getTime_25503776(v140, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v132,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v130 = 0;
        v136 = *(System_Collections_Generic_List_Enumerator_T__o *)v132;
        while ( 1 )
        {
          v103 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v136,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v103 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v136.fields.current;
          if ( !v136.fields.current )
            sub_B0D97C(v103);
          monitor = (char *)v136.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v136.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B0D97C(0LL);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v88 )
            sub_B0D97C(0LL);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v88,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B0D97C(0LL);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v135,
                 current->fields.eventId,
                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v91 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v91 )
              sub_B0D97C(0LL);
            if ( !v135 )
              sub_B0D97C(v91);
            v92 = clearedAt + v91->fields.cooltime < *(_QWORD *)&v135->fields.eventId;
          }
          else
          {
LABEL_108:
            v92 = 1;
          }
          v93 = &monitor[cooltime - v83];
          if ( v92 && (__int64)v93 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v95 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v95 )
                sub_B0D97C(0LL);
              if ( clsQuestCheck__CheckQuestPlayableNow(v95, QuestEntity->fields.id, 0LL) )
              {
                v96 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v96 )
                  sub_B0D97C(0LL);
                v97 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v96,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v97 )
                  sub_B0D97C(0LL);
                v98 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v97,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v98 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_9355/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v100 = System_String__Format(v99, (Il2CppObject *)v98->fields.name, 0LL);
                  *(_DWORD *)v132 = v130;
                  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v132);
                  v102 = System_String__Format((System_String_o *)StringLiteral_21176/*"no_harvest_{0}"*/, v101, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v93, v100, v102, 0LL);
                  ++v130;
                }
              }
            }
          }
        }
        *(_DWORD *)&v132[4 * SHIDWORD(v129) + 24] = 836;
        v104 = ++v133;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v136,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v104 )
        {
          v105 = v104 - 1;
          if ( *(_DWORD *)&v132[4 * v104 + 20] == 836 )
          {
            --v104;
            v133 = v105;
          }
        }
      }
      else
      {
        v104 = HIDWORD(v129);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v141.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v106 = NetworkManager__getTime_25503776(v141, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_160;
        v131 = v104;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v132,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v107 = 0;
        v134 = *(System_Collections_Generic_List_Enumerator_T__o *)v132;
        while ( 1 )
        {
          v108 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v134,
                                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v108 & 1) == 0 )
            break;
          v109 = v134.fields.current;
          if ( !v134.fields.current )
            sub_B0D97C(v108);
          klass = v134.fields.current[2].klass;
          if ( !klass )
            sub_B0D97C(v108);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v112 = 0;
            do
            {
              if ( v112 >= (unsigned int)namespaze )
              {
                v128 = sub_B0D9A8(v108);
                sub_B0D948(v128, 0LL);
              }
              v113 = *((_QWORD *)&klass->_1.byval_arg.data + v112);
              if ( !v113 )
                sub_B0D97C(v108);
              v114 = *(unsigned int *)(v113 + 28);
              v115 = v114 - v106;
              if ( v114 - v106 >= 1 )
              {
                v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v116 )
                  sub_B0D97C(0LL);
                v117 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v116,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v117 )
                  sub_B0D97C(0LL);
                v108 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          v117,
                                          (int32_t)v109[1].monitor,
                                          *(_DWORD *)(v113 + 16),
                                          0LL);
                v118 = v108;
                if ( v108 )
                {
                  v119 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v119 )
                    sub_B0D97C(0LL);
                  v120 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v119,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v120 )
                    sub_B0D97C(0LL);
                  v108 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            v120,
                                            (int32_t)v109[1].monitor,
                                            *(_DWORD *)(v113 + 20),
                                            0LL);
                  v121 = v108;
                  if ( v108 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v123 = System_String__Format_43845440(v122, v121[3], v118[3], 0LL);
                    *(_DWORD *)v132 = v107;
                    v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v132);
                    v125 = System_String__Format((System_String_o *)StringLiteral_21174/*"no_expedition_{0}"*/, v124, 0LL);
                    NotificationPluginScript__SetLocalNotification(v115, v123, v125, 0LL);
                    ++v107;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v112;
            }
            while ( v112 < (int)namespaze );
          }
        }
        *(_DWORD *)&v132[4 * v131 + 24] = 1118;
        v126 = ++v133;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v134,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v126 && *(_DWORD *)&v132[4 * v126 + 20] == 1118 )
          v133 = v126 - 1;
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