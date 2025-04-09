void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_49BA41D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_49BA41D = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  __int64 v57; // x1
  __int64 v58; // x1
  NetworkManager_c *v59; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v61; // x19
  int64_t ActAllRecoverTime; // x0
  int32_t v63; // w20
  System_String_o *v64; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v66; // w20
  DataManager_o *Instance; // x0
  __int64 v68; // x1
  System_String_o *v69; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v71; // w19
  System_String_o *v72; // x0
  EventEntity_array *EnableEntityList; // x20
  int64_t Time_39104196; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x22
  int v77; // w27
  int v78; // w28
  EventEntity_o *v79; // x29
  System_Collections_Generic_List_int__o *v80; // x23
  Il2CppObject *Master_object; // x19
  int v82; // w26
  _BOOL8 v83; // x0
  __int64 v84; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v86; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v88; // x1
  EventCooltimeRewardEntity_o *v89; // x24
  int64_t v90; // x8
  int32_t v91; // w23
  System_String_o *v92; // x0
  System_String_o *v93; // x24
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x1
  System_String_o *v98; // x0
  int64_t v99; // x19
  _BOOL8 v100; // x0
  __int64 v101; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v105; // x1
  __int64 cooltime; // x23
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v110; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v112; // x0
  __int64 v113; // x1
  bool v114; // w8
  char *v115; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  Il2CppObject *v123; // x21
  System_String_o *v124; // x0
  System_String_o *v125; // x21
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  Il2CppObject *v129; // x1
  System_String_o *v130; // x0
  int64_t v131; // x19
  int v132; // w24
  Il2CppObject **v133; // x0
  __int64 v134; // x1
  Il2CppObject *v135; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v138; // w27
  __int64 v139; // x22
  __int64 v140; // x8
  int32_t v141; // w20
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  Il2CppObject **v146; // x21
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  Il2CppObject *v149; // x0
  __int64 v150; // x1
  Il2CppObject **v151; // x22
  System_String_o *v152; // x0
  System_String_o *v153; // x21
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  Il2CppObject *v157; // x1
  System_String_o *v158; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v161; // x20
  int v162; // w23
  _BOOL8 v163; // x0
  __int64 v164; // x1
  Il2CppClass *v165; // x26
  const char *v166; // x8
  int v167; // w27
  __int64 v168; // x8
  __int64 v169; // x9
  int32_t v170; // w21
  System_String_o *v171; // x0
  __int64 v172; // x1
  System_String_o *v173; // x22
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  Il2CppObject *v177; // x1
  System_String_o *v178; // x0
  int64_t v179; // x19
  System_Collections_Generic_List_object__o *v180; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v181; // x20
  int v182; // w23
  _BOOL8 v183; // x0
  __int64 v184; // x1
  Il2CppClass *v185; // x26
  const char *v186; // x8
  int v187; // w27
  __int64 v188; // x8
  __int64 v189; // x9
  int32_t v190; // w21
  System_String_o *v191; // x0
  __int64 v192; // x1
  System_String_o *v193; // x22
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  Il2CppObject *v197; // x1
  System_String_o *v198; // x0
  int v199; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v200; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v201; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v202; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v204; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v205; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v207; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  System_DateTime_o v209; // 0:x0.8
  System_DateTime_o v210; // 0:x0.8
  System_DateTime_o v211; // 0:x0.8

  if ( (byte_49BA41C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventTradeMaster___, v15);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v17);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_1B4CF90(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__, v32);
    sub_1B4CF90(&int_TypeInfo, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v38);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v39);
    sub_1B4CF90(&NetworkManager_TypeInfo, v40);
    sub_1B4CF90(&OptionManager_TypeInfo, v41);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_1B4CF90(&StringLiteral_16499/*"ap_max"*/, v44);
    sub_1B4CF90(&StringLiteral_9100/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v45);
    sub_1B4CF90(&StringLiteral_22706/*"rp_max"*/, v46);
    sub_1B4CF90(&StringLiteral_21820/*"no_expedition_{0}"*/, v47);
    sub_1B4CF90(&StringLiteral_9099/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, v48);
    sub_1B4CF90(&StringLiteral_9101/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v49);
    sub_1B4CF90(&StringLiteral_9098/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v50);
    sub_1B4CF90(&StringLiteral_9105/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v51);
    sub_1B4CF90(&StringLiteral_21819/*"no_craft_{0}"*/, v52);
    sub_1B4CF90(&StringLiteral_9102/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v53);
    sub_1B4CF90(&StringLiteral_9104/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v54);
    sub_1B4CF90(&StringLiteral_21823/*"no_operation_{0}"*/, v55);
    sub_1B4CF90(&StringLiteral_9103/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, v56);
    sub_1B4CF90(&StringLiteral_21822/*"no_harvest_{0}"*/, v57);
    sub_1B4CF90(&StringLiteral_21821/*"no_fatigue"*/, v58);
    byte_49BA41C = 1;
  }
  entity = 0LL;
  memset(&v207, 0, sizeof(v207));
  memset(&v206, 0, sizeof(v206));
  v205 = 0LL;
  memset(&v204, 0, sizeof(v204));
  memset(&v203, 0, sizeof(v203));
  v201 = 0LL;
  v202 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B8532 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, isFocus);
    byte_49B8532 = 1;
  }
  v59 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v59 = NetworkManager_TypeInfo;
  }
  if ( v59->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v61 = SelfUserGame;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v61, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v63 = ActAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9098/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v63, v64, (System_String_o *)StringLiteral_16499/*"ap_max"*/, 0LL);
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v61, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v66 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v61->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9105/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v66, v69, (System_String_o *)StringLiteral_22706/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_186;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v71 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_9104/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v71, v72, (System_String_o *)StringLiteral_21821/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v209.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_39104196 = NetworkManager__getTime_39104196(v209, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1B4D1EC(Instance, v68);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v77 = 0;
        v78 = 0;
        do
        {
          if ( v77 >= (unsigned int)max_length )
            sub_1B4D1F4(Instance, v68);
          v79 = EnableEntityList->m_Items[v77];
          if ( !v79 || !v76 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v76,
                                        &entity,
                                        v79->fields.id,
                                        (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v79->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v79->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_186;
          v80 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v200,
              v80,
              (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v82 = v78;
            v207 = v200;
            while ( 1 )
            {
              v83 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v207,
                      (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v83 )
                break;
              if ( !Master_object )
                sub_1B4D1EC(v83, v84);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v79->fields.id,
                                     (int32_t)v207.fields._current,
                                     0LL);
              v86 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v89 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1B4D1EC(0LL, v88);
                v90 = v86->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v91 = v90 - Time_39104196;
                if ( v90 - Time_39104196 >= 1 && v90 < v79->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_9102/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v93 = System_String__Format(v92, (Il2CppObject *)v89->fields.name, 0LL);
                  LODWORD(v200.fields._list) = v82;
                  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200, v94, v95, v96);
                  v98 = System_String__Format((System_String_o *)StringLiteral_21823/*"no_operation_{0}"*/, v97, 0LL);
                  NotificationPluginScript__SetLocalNotification(v91, v93, v98, 0LL);
                  ++v82;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v207,
              (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v82 = v78;
          }
          max_length = EnableEntityList->max_length;
          ++v77;
          v78 = v82;
        }
        while ( v77 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v210.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v99 = NetworkManager__getTime_39104196(v210, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v200,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v199 = 0;
        v206 = v200;
        while ( 1 )
        {
          v100 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v206,
                   (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v100 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v206.fields._current;
          if ( !v206.fields._current )
            sub_1B4D1EC(v100, v101);
          monitor = (char *)v206.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v206.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1B4D1EC(0LL, v105);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v107 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v107 )
            sub_1B4D1EC(0LL, v108);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v107,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1B4D1EC(0LL, v110);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v205,
                 current->fields.eventId,
                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v112 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v112 )
              sub_1B4D1EC(0LL, v113);
            if ( !v205 )
              sub_1B4D1EC(v112, v113);
            v114 = clearedAt + v112->fields.cooltime < (__int64)v205[6].klass;
          }
          else
          {
LABEL_92:
            v114 = 1;
          }
          v115 = &monitor[cooltime - v99];
          if ( v114 && (__int64)v115 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v117 = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v117 )
                sub_1B4D1EC(0LL, v118);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v117, QuestEntity->fields.id, 0LL) )
              {
                v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v119 )
                  sub_1B4D1EC(0LL, v120);
                v121 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v119,
                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v121 )
                  sub_1B4D1EC(0LL, v122);
                v123 = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v121,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_319D99C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v123 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_9101/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v125 = System_String__Format(v124, (Il2CppObject *)v123[2].klass, 0LL);
                  LODWORD(v200.fields._list) = v199;
                  v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200, v126, v127, v128);
                  v130 = System_String__Format((System_String_o *)StringLiteral_21822/*"no_harvest_{0}"*/, v129, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v115, v125, v130, 0LL);
                  ++v199;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v206,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v211.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v131 = NetworkManager__getTime_39104196(v211, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v200,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v132 = 0;
        v204 = v200;
        while ( 1 )
        {
          v133 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v204,
                                    (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v133 & 1) == 0 )
            break;
          v135 = v204.fields._current;
          if ( !v204.fields._current )
            sub_1B4D1EC(v133, v134);
          klass = v204.fields._current[2].klass;
          if ( !klass )
            sub_1B4D1EC(v133, v134);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v138 = 0;
            do
            {
              if ( v138 >= (unsigned int)namespaze )
                sub_1B4D1F4(v133, v134);
              v139 = *((_QWORD *)&klass->_1.byval_arg.data + v138);
              if ( !v139 )
                sub_1B4D1EC(v133, v134);
              v140 = *(unsigned int *)(v139 + 28);
              v141 = v140 - v131;
              if ( v140 - v131 >= 1 )
              {
                v142 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v142 )
                  sub_1B4D1EC(0LL, v143);
                v144 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v142,
                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v144 )
                  sub_1B4D1EC(0LL, v145);
                v133 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          (EventExpeditionMaster_o *)v144,
                                          (int32_t)v135[1].monitor,
                                          *(_DWORD *)(v139 + 16),
                                          0LL);
                v146 = v133;
                if ( v133 )
                {
                  v147 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v147 )
                    sub_1B4D1EC(0LL, v148);
                  v149 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v147,
                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v149 )
                    sub_1B4D1EC(0LL, v150);
                  v133 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            (EventExpeditionPieceMaster_o *)v149,
                                            (int32_t)v135[1].monitor,
                                            *(_DWORD *)(v139 + 20),
                                            0LL);
                  v151 = v133;
                  if ( v133 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v152 = LocalizationManager__Get((System_String_o *)StringLiteral_9100/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v153 = System_String__Format_61134760(v152, v151[3], v146[3], 0LL);
                    LODWORD(v200.fields._list) = v132;
                    v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200, v154, v155, v156);
                    v158 = System_String__Format((System_String_o *)StringLiteral_21820/*"no_expedition_{0}"*/, v157, 0LL);
                    NotificationPluginScript__SetLocalNotification(v141, v153, v158, 0LL);
                    ++v132;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v138;
            }
            while ( v138 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v204,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v161 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v200,
          EntityList,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v203 = v200;
        v162 = 0;
        while ( 1 )
        {
          v163 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v203,
                   (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v163 )
            break;
          if ( !v203.fields._current )
            sub_1B4D1EC(v163, v164);
          v165 = v203.fields._current[2].klass;
          if ( !v165 )
            sub_1B4D1EC(v163, v164);
          v166 = v165->_1.namespaze;
          if ( (int)v166 >= 1 )
          {
            v167 = 0;
            do
            {
              if ( v167 >= (unsigned int)v166 )
                sub_1B4D1F4(v163, v164);
              v168 = *((_QWORD *)&v165->_1.byval_arg.data + v167);
              if ( !v168 )
                sub_1B4D1EC(v163, v164);
              v169 = *(_QWORD *)(v168 + 48);
              v170 = v169 - Time;
              if ( v169 - Time >= 1 )
              {
                if ( !v161 )
                  sub_1B4D1EC(v163, v164);
                v163 = DataMasterBase_object__object__int___TryGetEntity(
                         v161,
                         &v202,
                         *(_DWORD *)(v168 + 20),
                         (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v163 )
                {
                  if ( !v202 )
                    sub_1B4D1EC(v163, v164);
                  if ( !LODWORD(v202[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v171 = LocalizationManager__Get((System_String_o *)StringLiteral_9103/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                    if ( !v202 )
                      sub_1B4D1EC(v171, v172);
                    v173 = System_String__Format(v171, (Il2CppObject *)v202[2].klass, 0LL);
                    LODWORD(v200.fields._list) = v162;
                    v177 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200, v174, v175, v176);
                    v178 = System_String__Format((System_String_o *)StringLiteral_21820/*"no_expedition_{0}"*/, v177, 0LL);
                    NotificationPluginScript__SetLocalNotification(v170, v173, v178, 0LL);
                    ++v162;
                  }
                }
              }
              LODWORD(v166) = v165->_1.namespaze;
              ++v167;
            }
            while ( v167 < (int)v166 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v203,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v179 = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v180 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v180 )
          goto LABEL_186;
        v181 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v200,
          v180,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v203 = v200;
        v182 = 0;
        while ( 1 )
        {
          v183 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v203,
                   (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v183 )
            break;
          if ( !v203.fields._current )
            sub_1B4D1EC(v183, v184);
          v185 = v203.fields._current[2].klass;
          if ( !v185 )
            sub_1B4D1EC(v183, v184);
          v186 = v185->_1.namespaze;
          if ( (int)v186 >= 1 )
          {
            v187 = 0;
            do
            {
              if ( v187 >= (unsigned int)v186 )
                sub_1B4D1F4(v183, v184);
              v188 = *((_QWORD *)&v185->_1.byval_arg.data + v187);
              if ( !v188 )
                sub_1B4D1EC(v183, v184);
              v189 = *(_QWORD *)(v188 + 48);
              v190 = v189 - v179;
              if ( v189 - v179 >= 1 )
              {
                if ( !v181 )
                  sub_1B4D1EC(v183, v184);
                v183 = DataMasterBase_object__object__int___TryGetEntity(
                         v181,
                         &v201,
                         *(_DWORD *)(v188 + 20),
                         (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v183 )
                {
                  if ( !v201 )
                    sub_1B4D1EC(v183, v184);
                  if ( LODWORD(v201[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v191 = LocalizationManager__Get((System_String_o *)StringLiteral_9099/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0LL);
                    if ( !v201 )
                      sub_1B4D1EC(v191, v192);
                    v193 = System_String__Format(v191, (Il2CppObject *)v201[2].klass, 0LL);
                    LODWORD(v200.fields._list) = v182;
                    v197 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200, v194, v195, v196);
                    v198 = System_String__Format((System_String_o *)StringLiteral_21819/*"no_craft_{0}"*/, v197, 0LL);
                    NotificationPluginScript__SetLocalNotification(v190, v193, v198, 0LL);
                    ++v182;
                  }
                }
              }
              LODWORD(v186) = v185->_1.namespaze;
              ++v187;
            }
            while ( v187 < (int)v186 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v203,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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