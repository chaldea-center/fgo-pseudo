void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FE12F & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_49FE12F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  __int64 v66; // x1
  System_String_o *v67; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v69; // w19
  System_String_o *v70; // x0
  EventEntity_array *EnableEntityList; // x20
  int64_t Time_38166364; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x22
  int v75; // w27
  int v76; // w25
  EventEntity_o *v77; // x29
  System_Collections_Generic_List_int__o *v78; // x23
  Il2CppObject *Master_object; // x19
  int v80; // w26
  _BOOL8 v81; // x0
  __int64 v82; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v84; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v86; // x1
  EventCooltimeRewardEntity_o *v87; // x24
  int64_t v88; // x8
  int32_t v89; // w23
  System_String_o *v90; // x0
  System_String_o *v91; // x24
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x1
  System_String_o *v96; // x0
  int64_t v97; // x19
  _BOOL8 v98; // x0
  __int64 v99; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v103; // x1
  __int64 cooltime; // x25
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v108; // x1
  int64_t clearedAt; // x27
  EventQuestCooltimeEntity_o *v110; // x0
  __int64 v111; // x1
  bool v112; // w8
  char *v113; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  Il2CppObject *v121; // x21
  System_String_o *v122; // x0
  System_String_o *v123; // x21
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  Il2CppObject *v127; // x1
  System_String_o *v128; // x0
  int64_t v129; // x19
  int v130; // w24
  Il2CppObject **v131; // x0
  __int64 v132; // x1
  Il2CppObject *v133; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v136; // w27
  __int64 v137; // x22
  __int64 v138; // x8
  int32_t v139; // w20
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  Il2CppObject **v144; // x21
  Il2CppObject *v145; // x0
  __int64 v146; // x1
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  Il2CppObject **v149; // x22
  System_String_o *v150; // x0
  System_String_o *v151; // x21
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  Il2CppObject *v155; // x1
  System_String_o *v156; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v159; // x20
  int v160; // w23
  _BOOL8 v161; // x0
  __int64 v162; // x1
  Il2CppClass *v163; // x26
  const char *v164; // x8
  int v165; // w27
  __int64 v166; // x8
  __int64 v167; // x9
  int32_t v168; // w21
  System_String_o *v169; // x0
  __int64 v170; // x1
  System_String_o *v171; // x22
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  Il2CppObject *v175; // x1
  System_String_o *v176; // x0
  int v177; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_object__o v178; // [xsp+10h] [xbp-100h] BYREF
  Il2CppObject *v179; // [xsp+28h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+30h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v181; // [xsp+50h] [xbp-C0h] BYREF
  Il2CppObject *v182; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v183; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v184; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF
  System_DateTime_o v186; // 0:x0.8
  System_DateTime_o v187; // 0:x0.8
  System_DateTime_o v188; // 0:x0.8

  if ( (byte_49FE12E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v13);
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v14);
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventTradeMaster___, v15);
    sub_1B64A00(&DataManager_TypeInfo, v16);
    sub_1B64A00(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v17);
    sub_1B64A00(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_1B64A00(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__, v32);
    sub_1B64A00(&int_TypeInfo, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__, v34);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v35);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v37);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v38);
    sub_1B64A00(&LocalizationManager_TypeInfo, v39);
    sub_1B64A00(&NetworkManager_TypeInfo, v40);
    sub_1B64A00(&OptionManager_TypeInfo, v41);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B64A00(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_1B64A00(&StringLiteral_16740/*"ap_max"*/, v44);
    sub_1B64A00(&StringLiteral_9233/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v45);
    sub_1B64A00(&StringLiteral_22884/*"rp_max"*/, v46);
    sub_1B64A00(&StringLiteral_22015/*"no_expedition_{0}"*/, v47);
    sub_1B64A00(&StringLiteral_9234/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v48);
    sub_1B64A00(&StringLiteral_9232/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v49);
    sub_1B64A00(&StringLiteral_9238/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v50);
    sub_1B64A00(&StringLiteral_9235/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v51);
    sub_1B64A00(&StringLiteral_9237/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v52);
    sub_1B64A00(&StringLiteral_22018/*"no_operation_{0}"*/, v53);
    sub_1B64A00(&StringLiteral_9236/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, v54);
    sub_1B64A00(&StringLiteral_22017/*"no_harvest_{0}"*/, v55);
    sub_1B64A00(&StringLiteral_22016/*"no_fatigue"*/, v56);
    byte_49FE12E = 1;
  }
  entity = 0LL;
  memset(&v184, 0, sizeof(v184));
  memset(&v183, 0, sizeof(v183));
  v182 = 0LL;
  memset(&v181, 0, sizeof(v181));
  memset(&v180, 0, sizeof(v180));
  v179 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49FC31D )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, isFocus);
    byte_49FC31D = 1;
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
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v61, v62, (System_String_o *)StringLiteral_16740/*"ap_max"*/, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_157;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_157;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v59->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v64, v67, (System_String_o *)StringLiteral_22884/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_157;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v69 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v69, v70, (System_String_o *)StringLiteral_22016/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_157;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v186.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_38166364 = NetworkManager__getTime_38166364(v186, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_157:
        sub_1B64C5C(Instance, v66);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v75 = 0;
        v76 = 0;
        do
        {
          if ( v75 >= (unsigned int)max_length )
            sub_1B64C64(Instance, v66);
          v77 = EnableEntityList->m_Items[v75];
          if ( !v77 || !v74 )
            goto LABEL_157;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v74,
                                        &entity,
                                        v77->fields.id,
                                        (const MethodInfo_30D67EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
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
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v178,
              v78,
              (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v80 = v76;
            v184 = v178;
            while ( 1 )
            {
              v81 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v184,
                      (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v81 )
                break;
              if ( !Master_object )
                sub_1B64C5C(v81, v82);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v77->fields.id,
                                     (int32_t)v184.fields._current,
                                     0LL);
              v84 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v87 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1B64C5C(0LL, v86);
                v88 = v84->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v89 = v88 - Time_38166364;
                if ( v88 - Time_38166364 >= 1 && v88 < v77->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v91 = System_String__Format(v90, (Il2CppObject *)v87->fields.name, 0LL);
                  LODWORD(v178.fields._list) = v80;
                  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v92, v93, v94);
                  v96 = System_String__Format((System_String_o *)StringLiteral_22018/*"no_operation_{0}"*/, v95, 0LL);
                  NotificationPluginScript__SetLocalNotification(v89, v91, v96, 0LL);
                  ++v80;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v184,
              (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
        v187.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v97 = NetworkManager__getTime_38166364(v187, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v177 = 0;
        v183 = v178;
        while ( 1 )
        {
          v98 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v183,
                  (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v98 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v183.fields._current;
          if ( !v183.fields._current )
            sub_1B64C5C(v98, v99);
          monitor = (char *)v183.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v183.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1B64C5C(0LL, v103);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v105 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v105 )
            sub_1B64C5C(0LL, v106);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v105,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1B64C5C(0LL, v108);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v182,
                 current->fields.eventId,
                 (const MethodInfo_30D67EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v110 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v110 )
              sub_1B64C5C(0LL, v111);
            if ( !v182 )
              sub_1B64C5C(v110, v111);
            v112 = clearedAt + v110->fields.cooltime < (__int64)v182[6].klass;
          }
          else
          {
LABEL_92:
            v112 = 1;
          }
          v113 = &monitor[cooltime - v97];
          if ( v112 && (__int64)v113 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v115 = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v115 )
                sub_1B64C5C(0LL, v116);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v115, QuestEntity->fields.id, 0LL) )
              {
                v117 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v117 )
                  sub_1B64C5C(0LL, v118);
                v119 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v117,
                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v119 )
                  sub_1B64C5C(0LL, v120);
                v121 = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v119,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_30D6798 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v121 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_9234/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v123 = System_String__Format(v122, (Il2CppObject *)v121[2].klass, 0LL);
                  LODWORD(v178.fields._list) = v177;
                  v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v124, v125, v126);
                  v128 = System_String__Format((System_String_o *)StringLiteral_22017/*"no_harvest_{0}"*/, v127, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v113, v123, v128, 0LL);
                  ++v177;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v183,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v188.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v129 = NetworkManager__getTime_38166364(v188, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_157;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_157;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v130 = 0;
        v181 = v178;
        while ( 1 )
        {
          v131 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v181,
                                    (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v131 & 1) == 0 )
            break;
          v133 = v181.fields._current;
          if ( !v181.fields._current )
            sub_1B64C5C(v131, v132);
          klass = v181.fields._current[2].klass;
          if ( !klass )
            sub_1B64C5C(v131, v132);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v136 = 0;
            do
            {
              if ( v136 >= (unsigned int)namespaze )
                sub_1B64C64(v131, v132);
              v137 = *((_QWORD *)&klass->_1.byval_arg.data + v136);
              if ( !v137 )
                sub_1B64C5C(v131, v132);
              v138 = *(unsigned int *)(v137 + 28);
              v139 = v138 - v129;
              if ( v138 - v129 >= 1 )
              {
                v140 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v140 )
                  sub_1B64C5C(0LL, v141);
                v142 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v140,
                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v142 )
                  sub_1B64C5C(0LL, v143);
                v131 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          (EventExpeditionMaster_o *)v142,
                                          (int32_t)v133[1].monitor,
                                          *(_DWORD *)(v137 + 16),
                                          0LL);
                v144 = v131;
                if ( v131 )
                {
                  v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v145 )
                    sub_1B64C5C(0LL, v146);
                  v147 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v145,
                           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v147 )
                    sub_1B64C5C(0LL, v148);
                  v131 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            (EventExpeditionPieceMaster_o *)v147,
                                            (int32_t)v133[1].monitor,
                                            *(_DWORD *)(v137 + 20),
                                            0LL);
                  v149 = v131;
                  if ( v131 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v150 = LocalizationManager__Get((System_String_o *)StringLiteral_9233/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v151 = System_String__Format_61399508(v150, v149[3], v144[3], 0LL);
                    LODWORD(v178.fields._list) = v130;
                    v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v152, v153, v154);
                    v156 = System_String__Format((System_String_o *)StringLiteral_22015/*"no_expedition_{0}"*/, v155, 0LL);
                    NotificationPluginScript__SetLocalNotification(v139, v151, v156, 0LL);
                    ++v130;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v136;
            }
            while ( v136 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v181,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_157;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_157;
        v159 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          EntityList,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v180 = v178;
        v160 = 0;
        while ( 1 )
        {
          v161 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v180,
                   (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v161 )
            break;
          if ( !v180.fields._current )
            sub_1B64C5C(v161, v162);
          v163 = v180.fields._current[2].klass;
          if ( !v163 )
            sub_1B64C5C(v161, v162);
          v164 = v163->_1.namespaze;
          if ( (int)v164 >= 1 )
          {
            v165 = 0;
            do
            {
              if ( v165 >= (unsigned int)v164 )
                sub_1B64C64(v161, v162);
              v166 = *((_QWORD *)&v163->_1.byval_arg.data + v165);
              if ( !v166 )
                sub_1B64C5C(v161, v162);
              v167 = *(_QWORD *)(v166 + 48);
              v168 = v167 - Time;
              if ( v167 - Time >= 1 )
              {
                if ( !v159 )
                  sub_1B64C5C(v161, v162);
                v161 = DataMasterBase_object__object__int___TryGetEntity(
                         v159,
                         &v179,
                         *(_DWORD *)(v166 + 20),
                         (const MethodInfo_30D67EC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v161 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v169 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                  if ( !v179 )
                    sub_1B64C5C(v169, v170);
                  v171 = System_String__Format(v169, (Il2CppObject *)v179[1].monitor, 0LL);
                  LODWORD(v178.fields._list) = v160;
                  v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v172, v173, v174);
                  v176 = System_String__Format((System_String_o *)StringLiteral_22015/*"no_expedition_{0}"*/, v175, 0LL);
                  NotificationPluginScript__SetLocalNotification(v168, v171, v176, 0LL);
                  ++v160;
                }
              }
              LODWORD(v164) = v163->_1.namespaze;
              ++v165;
            }
            while ( v165 < (int)v164 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v180,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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