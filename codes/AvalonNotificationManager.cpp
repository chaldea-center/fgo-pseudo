void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B0163F & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method);
    byte_4B0163F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  int64_t Time_40386056; // x21
  __int64 v75; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x22
  int v78; // w27
  int v79; // w28
  EventEntity_o *v80; // x29
  System_Collections_Generic_List_int__o *v81; // x23
  Il2CppObject *Master_object; // x19
  int v83; // w26
  _BOOL8 v84; // x0
  __int64 v85; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v87; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v89; // x1
  EventCooltimeRewardEntity_o *v90; // x24
  int64_t v91; // x8
  int32_t v92; // w23
  System_String_o *v93; // x0
  System_String_o *v94; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x1
  System_String_o *v99; // x0
  int64_t v100; // x19
  _BOOL8 v101; // x0
  __int64 v102; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v106; // x1
  __int64 cooltime; // x23
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v111; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v113; // x0
  __int64 v114; // x1
  bool v115; // w8
  char *v116; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v118; // x0
  __int64 v119; // x1
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  Il2CppObject *v124; // x21
  System_String_o *v125; // x0
  System_String_o *v126; // x21
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  Il2CppObject *v130; // x1
  System_String_o *v131; // x0
  int64_t v132; // x19
  int v133; // w24
  Il2CppObject **v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  Il2CppObject *v137; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v140; // w27
  __int64 v141; // x22
  __int64 v142; // x8
  int32_t v143; // w20
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  Il2CppObject *v146; // x0
  __int64 v147; // x1
  Il2CppObject **v148; // x21
  Il2CppObject *v149; // x0
  __int64 v150; // x1
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  Il2CppObject **v153; // x22
  System_String_o *v154; // x0
  System_String_o *v155; // x21
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  Il2CppObject *v159; // x1
  System_String_o *v160; // x0
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v163; // x20
  int v164; // w23
  _BOOL8 v165; // x0
  __int64 v166; // x1
  __int64 v167; // x2
  Il2CppClass *v168; // x26
  const char *v169; // x8
  int v170; // w27
  __int64 v171; // x8
  __int64 v172; // x9
  int32_t v173; // w21
  System_String_o *v174; // x0
  __int64 v175; // x1
  System_String_o *v176; // x22
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  Il2CppObject *v180; // x1
  System_String_o *v181; // x0
  int64_t v182; // x19
  System_Collections_Generic_List_object__o *v183; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v184; // x20
  int v185; // w23
  _BOOL8 v186; // x0
  __int64 v187; // x1
  __int64 v188; // x2
  Il2CppClass *v189; // x26
  const char *v190; // x8
  int v191; // w27
  __int64 v192; // x8
  __int64 v193; // x9
  int32_t v194; // w21
  System_String_o *v195; // x0
  __int64 v196; // x1
  System_String_o *v197; // x22
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  Il2CppObject *v201; // x1
  System_String_o *v202; // x0
  int v203; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v204; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v205; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v206; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v207; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v208; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v209; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  System_DateTime_o v213; // 0:x0.8
  System_DateTime_o v214; // 0:x0.8
  System_DateTime_o v215; // 0:x0.8

  if ( (byte_4B0163E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_SpotMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_EventDetailMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventTradeMaster___, v15);
    sub_1BC3008(&DataManager_TypeInfo, v16);
    sub_1BC3008(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v17);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v19);
    sub_1BC3008(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__, v27);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v28);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__, v32);
    sub_1BC3008(&int_TypeInfo, v33);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v38);
    sub_1BC3008(&LocalizationManager_TypeInfo, v39);
    sub_1BC3008(&NetworkManager_TypeInfo, v40);
    sub_1BC3008(&OptionManager_TypeInfo, v41);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_1BC3008(&StringLiteral_16658/*"ap_max"*/, v44);
    sub_1BC3008(&StringLiteral_9216/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v45);
    sub_1BC3008(&StringLiteral_22932/*"rp_max"*/, v46);
    sub_1BC3008(&StringLiteral_22038/*"no_expedition_{0}"*/, v47);
    sub_1BC3008(&StringLiteral_9215/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, v48);
    sub_1BC3008(&StringLiteral_9217/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v49);
    sub_1BC3008(&StringLiteral_9214/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v50);
    sub_1BC3008(&StringLiteral_9221/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v51);
    sub_1BC3008(&StringLiteral_22037/*"no_craft_{0}"*/, v52);
    sub_1BC3008(&StringLiteral_9218/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v53);
    sub_1BC3008(&StringLiteral_9220/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v54);
    sub_1BC3008(&StringLiteral_22041/*"no_operation_{0}"*/, v55);
    sub_1BC3008(&StringLiteral_9219/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, v56);
    sub_1BC3008(&StringLiteral_22040/*"no_harvest_{0}"*/, v57);
    sub_1BC3008(&StringLiteral_22039/*"no_fatigue"*/, v58);
    byte_4B0163E = 1;
  }
  entity = 0LL;
  memset(&v211, 0, sizeof(v211));
  memset(&v210, 0, sizeof(v210));
  v209 = 0LL;
  memset(&v208, 0, sizeof(v208));
  memset(&v207, 0, sizeof(v207));
  v205 = 0LL;
  v206 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFF61A )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, isFocus);
    byte_4AFF61A = 1;
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
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9214/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v63, v64, (System_String_o *)StringLiteral_16658/*"ap_max"*/, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_186;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v61->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v66, v69, (System_String_o *)StringLiteral_22932/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v71, v72, (System_String_o *)StringLiteral_22039/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_186;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v213.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_40386056 = NetworkManager__getTime_40386056(v213, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_186:
        sub_1BC3264(Instance, v68);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v78 = 0;
        v79 = 0;
        do
        {
          if ( v78 >= (unsigned int)max_length )
            sub_1BC326C(Instance, v68, v75);
          v80 = EnableEntityList->m_Items[v78];
          if ( !v80 || !v77 )
            goto LABEL_186;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v77,
                                        &entity,
                                        v80->fields.id,
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_186;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v80->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_186;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v80->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_186;
          v81 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v204,
              v81,
              (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v83 = v79;
            v211 = v204;
            while ( 1 )
            {
              v84 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                      (System_Collections_Generic_List_Enumerator_int__o *)&v211,
                      (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v84 )
                break;
              if ( !Master_object )
                sub_1BC3264(v84, v85);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v80->fields.id,
                                     (int32_t)v211.fields._current,
                                     0LL);
              v87 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v90 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1BC3264(0LL, v89);
                v91 = v87->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v92 = v91 - Time_40386056;
                if ( v91 - Time_40386056 >= 1 && v91 < v80->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_9218/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v94 = System_String__Format(v93, (Il2CppObject *)v90->fields.name, 0LL);
                  LODWORD(v204.fields._list) = v83;
                  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v95, v96, v97);
                  v99 = System_String__Format((System_String_o *)StringLiteral_22041/*"no_operation_{0}"*/, v98, 0LL);
                  NotificationPluginScript__SetLocalNotification(v92, v94, v99, 0LL);
                  ++v83;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v211,
              (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v83 = v79;
          }
          max_length = EnableEntityList->max_length;
          ++v78;
          v79 = v83;
        }
        while ( v78 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v214.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v100 = NetworkManager__getTime_40386056(v214, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v204,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v203 = 0;
        v210 = v204;
        while ( 1 )
        {
          v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v210,
                   (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v101 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v210.fields._current;
          if ( !v210.fields._current )
            sub_1BC3264(v101, v102);
          monitor = (char *)v210.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v210.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1BC3264(0LL, v106);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v108 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v108 )
            sub_1BC3264(0LL, v109);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v108,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1BC3264(0LL, v111);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v209,
                 current->fields.eventId,
                 (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v113 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v113 )
              sub_1BC3264(0LL, v114);
            if ( !v209 )
              sub_1BC3264(v113, v114);
            v115 = clearedAt + v113->fields.cooltime < (__int64)v209[6].klass;
          }
          else
          {
LABEL_92:
            v115 = 1;
          }
          v116 = &monitor[cooltime - v100];
          if ( v115 && (__int64)v116 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v118 = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v118 )
                sub_1BC3264(0LL, v119);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v118, QuestEntity->fields.id, 0LL) )
              {
                v120 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v120 )
                  sub_1BC3264(0LL, v121);
                v122 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v120,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v122 )
                  sub_1BC3264(0LL, v123);
                v124 = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v122,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_32AF070 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v124 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_9217/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v126 = System_String__Format(v125, (Il2CppObject *)v124[2].klass, 0LL);
                  LODWORD(v204.fields._list) = v203;
                  v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v127, v128, v129);
                  v131 = System_String__Format((System_String_o *)StringLiteral_22040/*"no_harvest_{0}"*/, v130, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v116, v126, v131, 0LL);
                  ++v203;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v210,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v215.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v132 = NetworkManager__getTime_40386056(v215, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_186;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_186;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v204,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v133 = 0;
        v208 = v204;
        while ( 1 )
        {
          v134 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v208,
                                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v134 & 1) == 0 )
            break;
          v137 = v208.fields._current;
          if ( !v208.fields._current )
            sub_1BC3264(v134, v135);
          klass = v208.fields._current[2].klass;
          if ( !klass )
            sub_1BC3264(v134, v135);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v140 = 0;
            do
            {
              if ( v140 >= (unsigned int)namespaze )
                sub_1BC326C(v134, v135, v136);
              v141 = *((_QWORD *)&klass->_1.byval_arg.data + v140);
              if ( !v141 )
                sub_1BC3264(v134, v135);
              v142 = *(unsigned int *)(v141 + 28);
              v143 = v142 - v132;
              if ( v142 - v132 >= 1 )
              {
                v144 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v144 )
                  sub_1BC3264(0LL, v145);
                v146 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v144,
                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v146 )
                  sub_1BC3264(0LL, v147);
                v134 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          (EventExpeditionMaster_o *)v146,
                                          (int32_t)v137[1].monitor,
                                          *(_DWORD *)(v141 + 16),
                                          0LL);
                v148 = v134;
                if ( v134 )
                {
                  v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v149 )
                    sub_1BC3264(0LL, v150);
                  v151 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v149,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v151 )
                    sub_1BC3264(0LL, v152);
                  v134 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            (EventExpeditionPieceMaster_o *)v151,
                                            (int32_t)v137[1].monitor,
                                            *(_DWORD *)(v141 + 20),
                                            0LL);
                  v153 = v134;
                  if ( v134 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v154 = LocalizationManager__Get((System_String_o *)StringLiteral_9216/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v155 = System_String__Format_62389940(v154, v153[3], v148[3], 0LL);
                    LODWORD(v204.fields._list) = v133;
                    v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v156, v157, v158);
                    v160 = System_String__Format((System_String_o *)StringLiteral_22038/*"no_expedition_{0}"*/, v159, 0LL);
                    NotificationPluginScript__SetLocalNotification(v143, v155, v160, 0LL);
                    ++v133;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v140;
            }
            while ( v140 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v208,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_186;
        v163 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v204,
          EntityList,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v207 = v204;
        v164 = 0;
        while ( 1 )
        {
          v165 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v207,
                   (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v165 )
            break;
          if ( !v207.fields._current )
            sub_1BC3264(v165, v166);
          v168 = v207.fields._current[2].klass;
          if ( !v168 )
            sub_1BC3264(v165, v166);
          v169 = v168->_1.namespaze;
          if ( (int)v169 >= 1 )
          {
            v170 = 0;
            do
            {
              if ( v170 >= (unsigned int)v169 )
                sub_1BC326C(v165, v166, v167);
              v171 = *((_QWORD *)&v168->_1.byval_arg.data + v170);
              if ( !v171 )
                sub_1BC3264(v165, v166);
              v172 = *(_QWORD *)(v171 + 48);
              v173 = v172 - Time;
              if ( v172 - Time >= 1 )
              {
                if ( !v163 )
                  sub_1BC3264(v165, v166);
                v165 = DataMasterBase_object__object__int___TryGetEntity(
                         v163,
                         &v206,
                         *(_DWORD *)(v171 + 20),
                         (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v165 )
                {
                  if ( !v206 )
                    sub_1BC3264(v165, v166);
                  if ( !LODWORD(v206[1].monitor) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v174 = LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                    if ( !v206 )
                      sub_1BC3264(v174, v175);
                    v176 = System_String__Format(v174, (Il2CppObject *)v206[2].klass, 0LL);
                    LODWORD(v204.fields._list) = v164;
                    v180 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v177, v178, v179);
                    v181 = System_String__Format((System_String_o *)StringLiteral_22038/*"no_expedition_{0}"*/, v180, 0LL);
                    NotificationPluginScript__SetLocalNotification(v173, v176, v181, 0LL);
                    ++v164;
                  }
                }
              }
              LODWORD(v169) = v168->_1.namespaze;
              ++v170;
            }
            while ( v170 < (int)v169 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v207,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v182 = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_186;
        v183 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v183 )
          goto LABEL_186;
        v184 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v204,
          v183,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v207 = v204;
        v185 = 0;
        while ( 1 )
        {
          v186 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v207,
                   (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v186 )
            break;
          if ( !v207.fields._current )
            sub_1BC3264(v186, v187);
          v189 = v207.fields._current[2].klass;
          if ( !v189 )
            sub_1BC3264(v186, v187);
          v190 = v189->_1.namespaze;
          if ( (int)v190 >= 1 )
          {
            v191 = 0;
            do
            {
              if ( v191 >= (unsigned int)v190 )
                sub_1BC326C(v186, v187, v188);
              v192 = *((_QWORD *)&v189->_1.byval_arg.data + v191);
              if ( !v192 )
                sub_1BC3264(v186, v187);
              v193 = *(_QWORD *)(v192 + 48);
              v194 = v193 - v182;
              if ( v193 - v182 >= 1 )
              {
                if ( !v184 )
                  sub_1BC3264(v186, v187);
                v186 = DataMasterBase_object__object__int___TryGetEntity(
                         v184,
                         &v205,
                         *(_DWORD *)(v192 + 20),
                         (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v186 )
                {
                  if ( !v205 )
                    sub_1BC3264(v186, v187);
                  if ( LODWORD(v205[1].monitor) == 1 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v195 = LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0LL);
                    if ( !v205 )
                      sub_1BC3264(v195, v196);
                    v197 = System_String__Format(v195, (Il2CppObject *)v205[2].klass, 0LL);
                    LODWORD(v204.fields._list) = v185;
                    v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v198, v199, v200);
                    v202 = System_String__Format((System_String_o *)StringLiteral_22037/*"no_craft_{0}"*/, v201, 0LL);
                    NotificationPluginScript__SetLocalNotification(v194, v197, v202, 0LL);
                    ++v185;
                  }
                }
              }
              LODWORD(v190) = v189->_1.namespaze;
              ++v191;
            }
            while ( v191 < (int)v190 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v207,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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