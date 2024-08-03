void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FBA17 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_49FBA17 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  NetworkManager_c *v57; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v59; // x19
  int64_t ActAllRecoverTime; // x0
  int32_t v61; // w20
  System_String_o *v62; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v64; // w20
  DataManager_o *Instance; // x0
  System_String_o *v66; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v68; // w19
  System_String_o *v69; // x0
  EventEntity_array *EnableEntityList; // x20
  int64_t Time_38161648; // x21
  __int64 v72; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x22
  int v75; // w27
  int v76; // w25
  EventEntity_o *v77; // x29
  System_Collections_Generic_List_int__o *v78; // x23
  Il2CppObject *Master_object; // x19
  int v80; // w26
  _BOOL8 v81; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v83; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  EventCooltimeRewardEntity_o *v85; // x24
  int64_t v86; // x8
  int32_t v87; // w23
  System_String_o *v88; // x0
  System_String_o *v89; // x24
  Il2CppObject *v90; // x1
  System_String_o *v91; // x0
  int64_t v92; // x19
  _BOOL8 v93; // x0
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 cooltime; // x25
  Il2CppObject *v98; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t clearedAt; // x27
  EventQuestCooltimeEntity_o *v101; // x0
  bool v102; // w8
  char *v103; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v105; // x0
  Il2CppObject *v106; // x0
  Il2CppObject *v107; // x0
  Il2CppObject *v108; // x21
  System_String_o *v109; // x0
  System_String_o *v110; // x21
  Il2CppObject *v111; // x1
  System_String_o *v112; // x0
  int64_t v113; // x19
  int v114; // w24
  Il2CppObject **v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v120; // w27
  __int64 v121; // x22
  __int64 v122; // x8
  int32_t v123; // w20
  Il2CppObject *v124; // x0
  Il2CppObject *v125; // x0
  Il2CppObject **v126; // x21
  Il2CppObject *v127; // x0
  Il2CppObject *v128; // x0
  Il2CppObject **v129; // x22
  System_String_o *v130; // x0
  System_String_o *v131; // x21
  Il2CppObject *v132; // x1
  System_String_o *v133; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v136; // x20
  int v137; // w23
  _BOOL8 v138; // x0
  __int64 v139; // x1
  Il2CppClass *v140; // x26
  const char *v141; // x8
  int v142; // w27
  __int64 v143; // x8
  __int64 v144; // x9
  int32_t v145; // w21
  System_String_o *v146; // x0
  System_String_o *v147; // x22
  Il2CppObject *v148; // x1
  System_String_o *v149; // x0
  int v150; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+10h] [xbp-100h] BYREF
  Il2CppObject *v152; // [xsp+28h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+30h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+50h] [xbp-C0h] BYREF
  Il2CppObject *v155; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v156; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v157; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF
  System_DateTime_o v159; // 0:x0.8
  System_DateTime_o v160; // 0:x0.8
  System_DateTime_o v161; // 0:x0.8

  if ( (byte_49FBA16 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventTradeMaster___, v15);
    sub_1B640C8(&DataManager_TypeInfo, v16);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v17);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__, v32);
    sub_1B640C8(&int_TypeInfo, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v38);
    sub_1B640C8(&LocalizationManager_TypeInfo, v39);
    sub_1B640C8(&NetworkManager_TypeInfo, v40);
    sub_1B640C8(&OptionManager_TypeInfo, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_1B640C8(&StringLiteral_16737/*"ap_max"*/, v44);
    sub_1B640C8(&StringLiteral_9230/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v45);
    sub_1B640C8(&StringLiteral_22881/*"rp_max"*/, v46);
    sub_1B640C8(&StringLiteral_22012/*"no_expedition_{0}"*/, v47);
    sub_1B640C8(&StringLiteral_9231/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v48);
    sub_1B640C8(&StringLiteral_9229/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v49);
    sub_1B640C8(&StringLiteral_9235/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v50);
    sub_1B640C8(&StringLiteral_9232/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v51);
    sub_1B640C8(&StringLiteral_9234/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v52);
    sub_1B640C8(&StringLiteral_22015/*"no_operation_{0}"*/, v53);
    sub_1B640C8(&StringLiteral_9233/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, v54);
    sub_1B640C8(&StringLiteral_22014/*"no_harvest_{0}"*/, v55);
    sub_1B640C8(&StringLiteral_22013/*"no_fatigue"*/, v56);
    byte_49FBA16 = 1;
  }
  entity = 0LL;
  memset(&v157, 0, sizeof(v157));
  memset(&v156, 0, sizeof(v156));
  v155 = 0LL;
  memset(&v154, 0, sizeof(v154));
  memset(&v153, 0, sizeof(v153));
  v152 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F9C08 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, isFocus);
    byte_49F9C08 = 1;
  }
  v57 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v57 = NetworkManager_TypeInfo;
  }
  if ( v57->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v59 = SelfUserGame;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v59, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v61 = ActAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9229/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v61, v62, (System_String_o *)StringLiteral_16737/*"ap_max"*/, 0LL);
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v59, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v64 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_157;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_157;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v59->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v64, v66, (System_String_o *)StringLiteral_22881/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_157;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v68 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9234/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v68, v69, (System_String_o *)StringLiteral_22013/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_157;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v159.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_38161648 = NetworkManager__getTime_38161648(v159, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_157:
        sub_1B64324(Instance);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v75 = 0;
        v76 = 0;
        do
        {
          if ( v75 >= (unsigned int)max_length )
            sub_1B6432C(Instance, v72);
          v77 = EnableEntityList->m_Items[v75];
          if ( !v77 || !v74 )
            goto LABEL_157;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v74,
                                        &entity,
                                        v77->fields.id,
                                        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_157;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v77->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_157;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v77->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_157;
          v78 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v151,
              v78,
              (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v80 = v76;
            v157 = v151;
            while ( 1 )
            {
              v81 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v157,
                      (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v81 )
                break;
              if ( !Master_object )
                sub_1B64324(v81);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v77->fields.id,
                                     (int32_t)v157.fields._current,
                                     0LL);
              v83 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v85 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1B64324(0LL);
                v86 = v83->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v87 = v86 - Time_38161648;
                if ( v86 - Time_38161648 >= 1 && v86 < v77->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v89 = System_String__Format(v88, (Il2CppObject *)v85->fields.name, 0LL);
                  LODWORD(v151.fields._list) = v80;
                  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
                  v91 = System_String__Format((System_String_o *)StringLiteral_22015/*"no_operation_{0}"*/, v90, 0LL);
                  NotificationPluginScript__SetLocalNotification(v87, v89, v91, 0LL);
                  ++v80;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v157,
              (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v80 = v76;
          }
          max_length = EnableEntityList->max_length;
          ++v75;
          v76 = v80;
        }
        while ( v75 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v160.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v92 = NetworkManager__getTime_38161648(v160, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v150 = 0;
        v156 = v151;
        while ( 1 )
        {
          v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v156,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v93 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v156.fields._current;
          if ( !v156.fields._current )
            sub_1B64324(v93);
          monitor = (char *)v156.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v156.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1B64324(0LL);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v98 )
            sub_1B64324(0LL);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v98,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1B64324(0LL);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v155,
                 current->fields.eventId,
                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v101 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v101 )
              sub_1B64324(0LL);
            if ( !v155 )
              sub_1B64324(v101);
            v102 = clearedAt + v101->fields.cooltime < (__int64)v155[6].klass;
          }
          else
          {
LABEL_92:
            v102 = 1;
          }
          v103 = &monitor[cooltime - v92];
          if ( v102 && (__int64)v103 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v105 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v105 )
                sub_1B64324(0LL);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v105, QuestEntity->fields.id, 0LL) )
              {
                v106 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v106 )
                  sub_1B64324(0LL);
                v107 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v106,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v107 )
                  sub_1B64324(0LL);
                v108 = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v107,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v108 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v110 = System_String__Format(v109, (Il2CppObject *)v108[2].klass, 0LL);
                  LODWORD(v151.fields._list) = v150;
                  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
                  v112 = System_String__Format((System_String_o *)StringLiteral_22014/*"no_harvest_{0}"*/, v111, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v103, v110, v112, 0LL);
                  ++v150;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v156,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v161.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v113 = NetworkManager__getTime_38161648(v161, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v114 = 0;
        v154 = v151;
        while ( 1 )
        {
          v115 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v154,
                                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v115 & 1) == 0 )
            break;
          v117 = v154.fields._current;
          if ( !v154.fields._current )
            sub_1B64324(v115);
          klass = v154.fields._current[2].klass;
          if ( !klass )
            sub_1B64324(v115);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v120 = 0;
            do
            {
              if ( v120 >= (unsigned int)namespaze )
                sub_1B6432C(v115, v116);
              v121 = *((_QWORD *)&klass->_1.byval_arg.data + v120);
              if ( !v121 )
                sub_1B64324(v115);
              v122 = *(unsigned int *)(v121 + 28);
              v123 = v122 - v113;
              if ( v122 - v113 >= 1 )
              {
                v124 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v124 )
                  sub_1B64324(0LL);
                v125 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v124,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v125 )
                  sub_1B64324(0LL);
                v115 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          (EventExpeditionMaster_o *)v125,
                                          (int32_t)v117[1].monitor,
                                          *(_DWORD *)(v121 + 16),
                                          0LL);
                v126 = v115;
                if ( v115 )
                {
                  v127 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v127 )
                    sub_1B64324(0LL);
                  v128 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v127,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v128 )
                    sub_1B64324(0LL);
                  v115 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            (EventExpeditionPieceMaster_o *)v128,
                                            (int32_t)v117[1].monitor,
                                            *(_DWORD *)(v121 + 20),
                                            0LL);
                  v129 = v115;
                  if ( v115 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v130 = LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v131 = System_String__Format_61389768(v130, v129[3], v126[3], 0LL);
                    LODWORD(v151.fields._list) = v114;
                    v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
                    v133 = System_String__Format((System_String_o *)StringLiteral_22012/*"no_expedition_{0}"*/, v132, 0LL);
                    NotificationPluginScript__SetLocalNotification(v123, v131, v133, 0LL);
                    ++v114;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v120;
            }
            while ( v120 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v154,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_157;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_157;
        v136 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          EntityList,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v153 = v151;
        v137 = 0;
        while ( 1 )
        {
          v138 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v153,
                   (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v138 )
            break;
          if ( !v153.fields._current )
            sub_1B64324(v138);
          v140 = v153.fields._current[2].klass;
          if ( !v140 )
            sub_1B64324(v138);
          v141 = v140->_1.namespaze;
          if ( (int)v141 >= 1 )
          {
            v142 = 0;
            do
            {
              if ( v142 >= (unsigned int)v141 )
                sub_1B6432C(v138, v139);
              v143 = *((_QWORD *)&v140->_1.byval_arg.data + v142);
              if ( !v143 )
                sub_1B64324(v138);
              v144 = *(_QWORD *)(v143 + 48);
              v145 = v144 - Time;
              if ( v144 - Time >= 1 )
              {
                if ( !v136 )
                  sub_1B64324(v138);
                v138 = DataMasterBase_object__object__int___TryGetEntity(
                         v136,
                         &v152,
                         *(_DWORD *)(v143 + 20),
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v138 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_9233/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                  if ( !v152 )
                    sub_1B64324(v146);
                  v147 = System_String__Format(v146, (Il2CppObject *)v152[1].monitor, 0LL);
                  LODWORD(v151.fields._list) = v137;
                  v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
                  v149 = System_String__Format((System_String_o *)StringLiteral_22012/*"no_expedition_{0}"*/, v148, 0LL);
                  NotificationPluginScript__SetLocalNotification(v145, v147, v149, 0LL);
                  ++v137;
                }
              }
              LODWORD(v141) = v140->_1.namespaze;
              ++v142;
            }
            while ( v142 < (int)v141 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v153,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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