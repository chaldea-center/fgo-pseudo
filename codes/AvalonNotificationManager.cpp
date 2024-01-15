void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F6E84 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_40F6E84 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v60; // x0
  WebViewManager_o *v61; // x0
  UserEventServantFatigueMaster_o *v62; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v64; // w19
  System_String_o *v65; // x0
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x19
  int64_t Time_23684488; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *IsSpotCooltime; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x21
  unsigned int v74; // w28
  EventEntity_o *v75; // x25
  EventCooltimeRewardMaster_o *v76; // x0
  System_Collections_Generic_List_int__o *v77; // x23
  UserEventCooltimeRewardMaster_o *v78; // x22
  int64_t v79; // x8
  int32_t v80; // w23
  System_String_o *v81; // x0
  System_String_o *v82; // x24
  Il2CppObject *v83; // x1
  System_String_o *v84; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v86; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  EventCooltimeRewardEntity_o *v88; // x24
  int v89; // w26
  int64_t v90; // x19
  WebViewManager_o *v91; // x0
  UserEventQuestCooltimeMaster_o *v92; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 cooltime; // x28
  WebViewManager_o *v98; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // x0
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v101; // x0
  bool v102; // w8
  char *v103; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v105; // x0
  WebViewManager_o *v106; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v107; // x0
  WarEntity_o *v108; // x21
  System_String_o *v109; // x0
  System_String_o *v110; // x21
  Il2CppObject *v111; // x1
  System_String_o *v112; // x0
  int v113; // w20
  int v114; // w8
  int64_t v115; // x19
  WebViewManager_o *v116; // x0
  UserEventExpeditionMaster_o *v117; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v118; // x0
  int v119; // w24
  Il2CppObject **v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  Il2CppObject *v123; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v126; // w26
  __int64 v127; // x22
  __int64 v128; // x8
  int32_t v129; // w20
  WebViewManager_o *v130; // x0
  EventExpeditionMaster_o *v131; // x0
  Il2CppObject **v132; // x21
  WebViewManager_o *v133; // x0
  EventExpeditionPieceMaster_o *v134; // x0
  Il2CppObject **v135; // x22
  System_String_o *v136; // x0
  System_String_o *v137; // x21
  Il2CppObject *v138; // x1
  System_String_o *v139; // x0
  int v140; // w20
  __int64 v141; // [xsp+0h] [xbp-E0h]
  int v142; // [xsp+0h] [xbp-E0h]
  int v143; // [xsp+4h] [xbp-DCh]
  _BYTE v144[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v145; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v147; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v148; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v149; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v151; // 0:x0.8
  System_DateTime_o v152; // 0:x0.8
  System_DateTime_o v153; // 0:x0.8

  if ( (byte_40F6E83 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v26);
    sub_B16FFC(&int_TypeInfo, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_B16FFC(&LocalizationManager_TypeInfo, v32);
    sub_B16FFC(&NetworkManager_TypeInfo, v33);
    sub_B16FFC(&OptionManager_TypeInfo, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v36);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v37);
    sub_B16FFC(&StringLiteral_16303/*"ap_max"*/, v38);
    sub_B16FFC(&StringLiteral_9301/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v39);
    sub_B16FFC(&StringLiteral_21770/*"rp_max"*/, v40);
    sub_B16FFC(&StringLiteral_21017/*"no_expedition_{0}"*/, v41);
    sub_B16FFC(&StringLiteral_9302/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v42);
    sub_B16FFC(&StringLiteral_9300/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v43);
    sub_B16FFC(&StringLiteral_9305/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v44);
    sub_B16FFC(&StringLiteral_9303/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v45);
    sub_B16FFC(&StringLiteral_9304/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v46);
    sub_B16FFC(&StringLiteral_21020/*"no_operation_{0}"*/, v47);
    sub_B16FFC(&StringLiteral_21019/*"no_harvest_{0}"*/, v48);
    sub_B16FFC(&StringLiteral_21018/*"no_fatigue"*/, v49);
    byte_40F6E83 = 1;
  }
  entity = 0LL;
  memset(&v149, 0, sizeof(v149));
  memset(&v148, 0, sizeof(v148));
  v147 = 0LL;
  memset(&v146, 0, sizeof(v146));
  v145 = 0;
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
  if ( !byte_40F6F91 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, isFocus);
    byte_40F6F91 = 1;
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
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9300/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v54, v55, (System_String_o *)StringLiteral_16303/*"ap_max"*/, 0LL);
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification(MasterData_WarQuestSelectionMaster, v52->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9305/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v57, v60, (System_String_o *)StringLiteral_21770/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v61 )
          goto LABEL_160;
        v62 = (UserEventServantFatigueMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v61,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !v62 )
          goto LABEL_160;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(v62, 0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v64 = FatigueAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9304/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v64, v65, (System_String_o *)StringLiteral_21018/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList(Master_WarQuestSelectionMaster, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v151.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_23684488 = NetworkManager__getTime_23684488(v151, 0LL);
      IsSpotCooltime = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B170D4();
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v141 = 0LL;
        v73 = IsSpotCooltime;
        v74 = 0;
        while ( 1 )
        {
          if ( v74 >= max_length )
          {
            sub_B17100(IsSpotCooltime, v70, v71);
            sub_B170A0();
          }
          v75 = EnableEntityList->m_Items[v74];
          if ( !v75 || !v73 )
            goto LABEL_160;
          IsSpotCooltime = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            v73,
                                                                            &entity,
                                                                            v75->fields.id,
                                                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsSpotCooltime & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_160;
            IsSpotCooltime = (DataMasterBase_WarMaster__WarEntity__int__o *)EventDetailEntity__IsSpotCooltime(
                                                                              (EventDetailEntity_o *)entity,
                                                                              0LL);
            if ( ((unsigned __int8)IsSpotCooltime & 1) != 0 )
            {
              IsSpotCooltime = (DataMasterBase_WarMaster__WarEntity__int__o *)EventRewardSaveData__NeedSpotCooltimeNotification(
                                                                                v75->fields.id,
                                                                                0LL);
              if ( ((unsigned __int8)IsSpotCooltime & 1) != 0 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v76 = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !v76 )
                  goto LABEL_160;
                IsSpotCooltime = (DataMasterBase_WarMaster__WarEntity__int__o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                                                                  v76,
                                                                                  v75->fields.id,
                                                                                  0LL);
                if ( !IsSpotCooltime )
                  goto LABEL_160;
                v77 = (System_Collections_Generic_List_int__o *)IsSpotCooltime;
                if ( SLODWORD(IsSpotCooltime->fields._MasterName_k__BackingField) >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  v78 = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v144,
                    v77,
                    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v149 = *(System_Collections_Generic_List_Enumerator_int__o *)v144;
                  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                            &v149,
                            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
                  {
                    if ( !v78 )
                      sub_B170D4();
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           v78,
                                           v75->fields.id,
                                           v149.fields.current,
                                           0LL);
                    v86 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v88 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B170D4();
                      v79 = v86->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v80 = v79 - Time_23684488;
                      if ( v79 - Time_23684488 >= 1 && v79 < v75->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v82 = System_String__Format(v81, (Il2CppObject *)v88->fields.name, 0LL);
                        *(_DWORD *)v144 = v141;
                        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v144);
                        v84 = System_String__Format((System_String_o *)StringLiteral_21020/*"no_operation_{0}"*/, v83, 0LL);
                        NotificationPluginScript__SetLocalNotification(v80, v82, v84, 0LL);
                        LODWORD(v141) = v141 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v144[4 * SHIDWORD(v141) + 24] = 508;
                  v89 = ++v145;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v149,
                    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v89 )
                  {
                    if ( *(_DWORD *)&v144[4 * v89 + 20] == 508 )
                    {
                      v145 = v89 - 1;
                      HIDWORD(v141) = v89 - 1;
                    }
                    else
                    {
                      HIDWORD(v141) = v89;
                    }
                  }
                  else
                  {
                    HIDWORD(v141) = 0;
                  }
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
          if ( (int)++v74 >= max_length )
            goto LABEL_91;
        }
      }
      HIDWORD(v141) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v152.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v90 = NetworkManager__getTime_23684488(v152, 0LL);
        v91 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v91 )
          goto LABEL_160;
        v92 = (UserEventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v91,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !v92 )
          goto LABEL_160;
        EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserEventQuestCooltimeMaster__GetEntityList(v92, 0LL);
        if ( !EntityList )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v144,
          EntityList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v142 = 0;
        v148 = *(System_Collections_Generic_List_Enumerator_T__o *)v144;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v148,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__) )
        {
          current = (UserEventQuestCooltimeEntity_o *)v148.fields.current;
          if ( !v148.fields.current )
            sub_B170D4();
          monitor = (char *)v148.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v148.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B170D4();
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v98 )
            sub_B170D4();
          v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v98,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v99 )
            sub_B170D4();
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v99,
                 &v147,
                 current->fields.eventId,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v101 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v101 )
              sub_B170D4();
            if ( !v147 )
              sub_B170D4();
            v102 = clearedAt + v101->fields.cooltime < *(_QWORD *)&v147->fields.eventId;
          }
          else
          {
LABEL_108:
            v102 = 1;
          }
          v103 = &monitor[cooltime - v90];
          if ( v102 && (__int64)v103 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v105 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v105 )
                sub_B170D4();
              if ( clsQuestCheck__CheckQuestPlayableNow(v105, QuestEntity->fields.id, 0LL) )
              {
                v106 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v106 )
                  sub_B170D4();
                v107 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)v106,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v107 )
                  sub_B170D4();
                v108 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v107,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_266F388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v108 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_9302/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v110 = System_String__Format(v109, (Il2CppObject *)v108->fields.name, 0LL);
                  *(_DWORD *)v144 = v142;
                  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v144);
                  v112 = System_String__Format((System_String_o *)StringLiteral_21019/*"no_harvest_{0}"*/, v111, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v103, v110, v112, 0LL);
                  ++v142;
                }
              }
            }
          }
        }
        *(_DWORD *)&v144[4 * SHIDWORD(v141) + 24] = 836;
        v113 = ++v145;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v148,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v113 )
        {
          v114 = v113 - 1;
          if ( *(_DWORD *)&v144[4 * v113 + 20] == 836 )
          {
            --v113;
            v145 = v114;
          }
        }
      }
      else
      {
        v113 = HIDWORD(v141);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v153.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v115 = NetworkManager__getTime_23684488(v153, 0LL);
        v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v116 )
          goto LABEL_160;
        v117 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v116,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !v117 )
          goto LABEL_160;
        v143 = v113;
        v118 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserEventExpeditionMaster__GetEntityList(
                                                                                                v117,
                                                                                                0LL);
        if ( !v118 )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v144,
          v118,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v119 = 0;
        v146 = *(System_Collections_Generic_List_Enumerator_T__o *)v144;
        while ( 1 )
        {
          v120 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v146,
                                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v120 & 1) == 0 )
            break;
          v123 = v146.fields.current;
          if ( !v146.fields.current )
            sub_B170D4();
          klass = v146.fields.current[2].klass;
          if ( !klass )
            sub_B170D4();
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v126 = 0;
            do
            {
              if ( v126 >= (unsigned int)namespaze )
              {
                sub_B17100(v120, v121, v122);
                sub_B170A0();
              }
              v127 = *((_QWORD *)&klass->_1.byval_arg.data + v126);
              if ( !v127 )
                sub_B170D4();
              v128 = *(unsigned int *)(v127 + 28);
              v129 = v128 - v115;
              if ( v128 - v115 >= 1 )
              {
                v130 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v130 )
                  sub_B170D4();
                v131 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v130,
                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v131 )
                  sub_B170D4();
                v120 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          v131,
                                          (int32_t)v123[1].monitor,
                                          *(_DWORD *)(v127 + 16),
                                          0LL);
                v132 = v120;
                if ( v120 )
                {
                  v133 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v133 )
                    sub_B170D4();
                  v134 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v133,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v134 )
                    sub_B170D4();
                  v120 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            v134,
                                            (int32_t)v123[1].monitor,
                                            *(_DWORD *)(v127 + 20),
                                            0LL);
                  v135 = v120;
                  if ( v120 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_9301/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v137 = System_String__Format_43739268(v136, v135[3], v132[3], 0LL);
                    *(_DWORD *)v144 = v119;
                    v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v144);
                    v139 = System_String__Format((System_String_o *)StringLiteral_21017/*"no_expedition_{0}"*/, v138, 0LL);
                    NotificationPluginScript__SetLocalNotification(v129, v137, v139, 0LL);
                    ++v119;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v126;
            }
            while ( v126 < (int)namespaze );
          }
        }
        *(_DWORD *)&v144[4 * v143 + 24] = 1118;
        v140 = ++v145;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v146,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v140 && *(_DWORD *)&v144[4 * v140 + 20] == 1118 )
          v145 = v140 - 1;
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