void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E65C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E65C0 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  char v41; // w1
  int v42; // w2
  __int64 v43; // x3
  char v44; // w1
  int v45; // w2
  __int64 v46; // x3
  char v47; // w1
  int v48; // w2
  __int64 v49; // x3
  char v50; // w1
  int v51; // w2
  __int64 v52; // x3
  char v53; // w1
  int v54; // w2
  __int64 v55; // x3
  char v56; // w1
  int v57; // w2
  __int64 v58; // x3
  char v59; // w1
  int v60; // w2
  __int64 v61; // x3
  char v62; // w1
  int v63; // w2
  __int64 v64; // x3
  char v65; // w1
  int v66; // w2
  __int64 v67; // x3
  char v68; // w1
  int v69; // w2
  __int64 v70; // x3
  char v71; // w1
  int v72; // w2
  __int64 v73; // x3
  char v74; // w1
  int v75; // w2
  __int64 v76; // x3
  char v77; // w1
  int v78; // w2
  __int64 v79; // x3
  char v80; // w1
  int v81; // w2
  __int64 v82; // x3
  char v83; // w1
  int v84; // w2
  __int64 v85; // x3
  char v86; // w1
  int v87; // w2
  __int64 v88; // x3
  char v89; // w1
  int v90; // w2
  __int64 v91; // x3
  char v92; // w1
  int v93; // w2
  __int64 v94; // x3
  char v95; // w1
  int v96; // w2
  __int64 v97; // x3
  char v98; // w1
  int v99; // w2
  __int64 v100; // x3
  char v101; // w1
  int v102; // w2
  __int64 v103; // x3
  char v104; // w1
  int v105; // w2
  __int64 v106; // x3
  char v107; // w1
  int v108; // w2
  __int64 v109; // x3
  char v110; // w1
  int v111; // w2
  __int64 v112; // x3
  char v113; // w1
  int v114; // w2
  __int64 v115; // x3
  char v116; // w1
  int v117; // w2
  __int64 v118; // x3
  char v119; // w1
  int v120; // w2
  __int64 v121; // x3
  char v122; // w1
  int v123; // w2
  __int64 v124; // x3
  char v125; // w1
  int v126; // w2
  __int64 v127; // x3
  char v128; // w1
  int v129; // w2
  __int64 v130; // x3
  char v131; // w1
  int v132; // w2
  __int64 v133; // x3
  char v134; // w1
  int v135; // w2
  __int64 v136; // x3
  char v137; // w1
  int v138; // w2
  __int64 v139; // x3
  char v140; // w1
  int v141; // w2
  __int64 v142; // x3
  NetworkManager_c *v143; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v145; // x19
  int64_t ActAllRecoverTime; // x0
  int32_t v147; // w20
  System_String_o *v148; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v150; // w20
  DataManager_o *Instance; // x0
  __int64 v152; // x1
  System_String_o *v153; // x0
  int64_t FatigueAllRecoverTime; // x0
  int32_t v155; // w19
  System_String_o *v156; // x0
  EventEntity_array *EnableEntityList; // x19
  int64_t Time_26076684; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v160; // x21
  unsigned int v161; // w28
  EventEntity_o *v162; // x25
  System_Collections_Generic_List_int__o *v163; // x23
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t v165; // x8
  int32_t v166; // w23
  System_String_o *v167; // x0
  System_String_o *v168; // x24
  Il2CppObject *v169; // x1
  System_String_o *v170; // x0
  _BOOL8 v171; // x0
  __int64 v172; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v174; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v176; // x1
  EventCooltimeRewardEntity_o *v177; // x24
  int v178; // w26
  int64_t v179; // x19
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v183; // x1
  __int64 cooltime; // x28
  WebViewManager_o *v185; // x0
  __int64 v186; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v188; // x1
  int64_t clearedAt; // x25
  EventQuestCooltimeEntity_o *v190; // x0
  __int64 v191; // x1
  bool v192; // w8
  char *v193; // x20
  QuestEntity_o *QuestEntity; // x21
  clsQuestCheck_o *v195; // x0
  __int64 v196; // x1
  WebViewManager_o *v197; // x0
  __int64 v198; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v199; // x0
  __int64 v200; // x1
  WarEntity_o *v201; // x21
  System_String_o *v202; // x0
  System_String_o *v203; // x21
  Il2CppObject *v204; // x1
  System_String_o *v205; // x0
  _BOOL8 v206; // x0
  __int64 v207; // x1
  int v208; // w20
  int v209; // w8
  int64_t v210; // x19
  int v211; // w24
  Il2CppObject **v212; // x0
  __int64 v213; // x1
  Il2CppObject *v214; // x28
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  int v217; // w26
  __int64 v218; // x22
  __int64 v219; // x8
  int32_t v220; // w20
  WebViewManager_o *v221; // x0
  __int64 v222; // x1
  EventExpeditionMaster_o *v223; // x0
  __int64 v224; // x1
  Il2CppObject **v225; // x21
  WebViewManager_o *v226; // x0
  __int64 v227; // x1
  EventExpeditionPieceMaster_o *v228; // x0
  __int64 v229; // x1
  Il2CppObject **v230; // x22
  System_String_o *v231; // x0
  System_String_o *v232; // x21
  Il2CppObject *v233; // x1
  System_String_o *v234; // x0
  int v235; // w20
  __int64 v236; // x0
  __int64 v237; // x0
  __int64 v238; // [xsp+0h] [xbp-E0h]
  int v239; // [xsp+0h] [xbp-E0h]
  int v240; // [xsp+4h] [xbp-DCh]
  _BYTE v241[36]; // [xsp+8h] [xbp-D8h] BYREF
  int v242; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v243; // [xsp+30h] [xbp-B0h] BYREF
  WarEntity_o *v244; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v245; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v246; // [xsp+70h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  System_DateTime_o v248; // 0:x0.8
  System_DateTime_o v249; // 0:x0.8
  System_DateTime_o v250; // 0:x0.8

  if ( (byte_42E65BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v32, v33, v34);
    sub_B5D5C4(&DataManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v41, v42, v43);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v47, v48, v49);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__,
      v50,
      v51,
      v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v59, v60, v61);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__,
      v62,
      v63,
      v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v65, v66, v67);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__,
      v68,
      v69,
      v70);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__,
      v71,
      v72,
      v73);
    sub_B5D5C4(&int_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v83, v84, v85);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v86, v87, v88);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&NetworkManager_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&OptionManager_TypeInfo, v95, v96, v97);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v98, v99, v100);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v101, v102, v103);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_16565/*"ap_max"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_9426/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_22160/*"rp_max"*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_21383/*"no_expedition_{0}"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_9427/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_9425/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_9430/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_9428/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_9429/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v131, v132, v133);
    sub_B5D5C4(&StringLiteral_21386/*"no_operation_{0}"*/, v134, v135, v136);
    sub_B5D5C4(&StringLiteral_21385/*"no_harvest_{0}"*/, v137, v138, v139);
    sub_B5D5C4(&StringLiteral_21384/*"no_fatigue"*/, v140, v141, v142);
    byte_42E65BF = 1;
  }
  entity = 0LL;
  memset(&v246, 0, sizeof(v246));
  memset(&v245, 0, sizeof(v245));
  v244 = 0LL;
  memset(&v243, 0, sizeof(v243));
  v242 = 0;
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
  if ( !byte_42E665F )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, isFocus, (_DWORD)method, v3);
    byte_42E665F = 1;
  }
  v143 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v143 = NetworkManager_TypeInfo;
  }
  if ( v143->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v145 = SelfUserGame;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v145, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v147 = ActAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v148 = LocalizationManager__Get((System_String_o *)StringLiteral_9425/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v147, v148, (System_String_o *)StringLiteral_16565/*"ap_max"*/, 0LL);
        }
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v145, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v150 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_160;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_160;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v145->fields.rpRecoverAt, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v153 = LocalizationManager__Get((System_String_o *)StringLiteral_9430/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v150, v153, (System_String_o *)StringLiteral_22160/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_160;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v155 = FatigueAllRecoverTime;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_9429/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v155, v156, (System_String_o *)StringLiteral_21384/*"no_fatigue"*/, 0LL);
        }
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_160;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v248.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
      Time_26076684 = NetworkManager__getTime_26076684(v248, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_160:
        sub_B5D69C(Instance, v152);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v238 = 0LL;
        v160 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v161 = 0;
        while ( 1 )
        {
          if ( v161 >= max_length )
          {
            v236 = sub_B5D6C8(Instance);
            sub_B5D668(v236, 0LL);
          }
          v162 = EnableEntityList->m_Items[v161];
          if ( !v162 || !v160 )
            goto LABEL_160;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v160,
                                        &entity,
                                        v162->fields.id,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_160;
            Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v162->fields.id, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !Instance )
                  goto LABEL_160;
                Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                              (EventCooltimeRewardMaster_o *)Instance,
                                              v162->fields.id,
                                              0LL);
                if ( !Instance )
                  goto LABEL_160;
                v163 = (System_Collections_Generic_List_int__o *)Instance;
                if ( SLODWORD(Instance->fields.datalist) >= 1 )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)v241,
                    v163,
                    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v246 = *(System_Collections_Generic_List_Enumerator_int__o *)v241;
                  while ( 1 )
                  {
                    v171 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                             &v246,
                             (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v171 )
                      break;
                    if ( !Master_WarQuestSelectionMaster )
                      sub_B5D69C(v171, v172);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           Master_WarQuestSelectionMaster,
                                           v162->fields.id,
                                           v246.fields.current,
                                           0LL);
                    v174 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0LL);
                      v177 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_B5D69C(0LL, v176);
                      v165 = v174->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v166 = v165 - Time_26076684;
                      if ( v165 - Time_26076684 >= 1 && v165 < v162->fields.endedAt )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v167 = LocalizationManager__Get((System_String_o *)StringLiteral_9428/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                        v168 = System_String__Format(v167, (Il2CppObject *)v177->fields.name, 0LL);
                        *(_DWORD *)v241 = v238;
                        v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v241);
                        v170 = System_String__Format((System_String_o *)StringLiteral_21386/*"no_operation_{0}"*/, v169, 0LL);
                        NotificationPluginScript__SetLocalNotification(v166, v168, v170, 0LL);
                        LODWORD(v238) = v238 + 1;
                      }
                    }
                  }
                  *(_DWORD *)&v241[4 * SHIDWORD(v238) + 24] = 508;
                  v178 = ++v242;
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    &v246,
                    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  if ( v178 )
                  {
                    if ( *(_DWORD *)&v241[4 * v178 + 20] == 508 )
                    {
                      v242 = v178 - 1;
                      HIDWORD(v238) = v178 - 1;
                    }
                    else
                    {
                      HIDWORD(v238) = v178;
                    }
                  }
                  else
                  {
                    HIDWORD(v238) = 0;
                  }
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
          if ( (int)++v161 >= max_length )
            goto LABEL_91;
        }
      }
      HIDWORD(v238) = 0;
LABEL_91:
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v249.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v179 = NetworkManager__getTime_26076684(v249, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v241,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v239 = 0;
        v245 = *(System_Collections_Generic_List_Enumerator_T__o *)v241;
        while ( 1 )
        {
          v206 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v245,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v206 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v245.fields.current;
          if ( !v245.fields.current )
            sub_B5D69C(v206, v207);
          monitor = (char *)v245.fields.current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v245.fields.current,
                           0LL);
          if ( !MasterEntity )
            sub_B5D69C(0LL, v183);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_108;
          v185 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v185 )
            sub_B5D69C(0LL, v186);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v185,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B5D69C(0LL, v188);
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &v244,
                 current->fields.eventId,
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v190 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v190 )
              sub_B5D69C(0LL, v191);
            if ( !v244 )
              sub_B5D69C(v190, v191);
            v192 = clearedAt + v190->fields.cooltime < *(_QWORD *)&v244->fields.eventId;
          }
          else
          {
LABEL_108:
            v192 = 1;
          }
          v193 = &monitor[cooltime - v179];
          if ( v192 && (__int64)v193 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v195 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v195 )
                sub_B5D69C(0LL, v196);
              if ( clsQuestCheck__CheckQuestPlayableNow(v195, QuestEntity->fields.id, 0LL) )
              {
                v197 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v197 )
                  sub_B5D69C(0LL, v198);
                v199 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)v197,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v199 )
                  sub_B5D69C(0LL, v200);
                v201 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v199,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v201 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v202 = LocalizationManager__Get((System_String_o *)StringLiteral_9427/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v203 = System_String__Format(v202, (Il2CppObject *)v201->fields.name, 0LL);
                  *(_DWORD *)v241 = v239;
                  v204 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v241);
                  v205 = System_String__Format((System_String_o *)StringLiteral_21385/*"no_harvest_{0}"*/, v204, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v193, v203, v205, 0LL);
                  ++v239;
                }
              }
            }
          }
        }
        *(_DWORD *)&v241[4 * SHIDWORD(v238) + 24] = 836;
        v208 = ++v242;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v245,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
        if ( v208 )
        {
          v209 = v208 - 1;
          if ( *(_DWORD *)&v241[4 * v208 + 20] == 836 )
          {
            --v208;
            v242 = v209;
          }
        }
      }
      else
      {
        v208 = HIDWORD(v238);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v250.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
        v210 = NetworkManager__getTime_26076684(v250, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_160;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_160;
        v240 = v208;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_160;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v241,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v211 = 0;
        v243 = *(System_Collections_Generic_List_Enumerator_T__o *)v241;
        while ( 1 )
        {
          v212 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v243,
                                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v212 & 1) == 0 )
            break;
          v214 = v243.fields.current;
          if ( !v243.fields.current )
            sub_B5D69C(v212, v213);
          klass = v243.fields.current[2].klass;
          if ( !klass )
            sub_B5D69C(v212, v213);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v217 = 0;
            do
            {
              if ( v217 >= (unsigned int)namespaze )
              {
                v237 = sub_B5D6C8(v212);
                sub_B5D668(v237, 0LL);
              }
              v218 = *((_QWORD *)&klass->_1.byval_arg.data + v217);
              if ( !v218 )
                sub_B5D69C(v212, v213);
              v219 = *(unsigned int *)(v218 + 28);
              v220 = v219 - v210;
              if ( v219 - v210 >= 1 )
              {
                v221 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v221 )
                  sub_B5D69C(0LL, v222);
                v223 = (EventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v221,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v223 )
                  sub_B5D69C(0LL, v224);
                v212 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          v223,
                                          (int32_t)v214[1].monitor,
                                          *(_DWORD *)(v218 + 16),
                                          0LL);
                v225 = v212;
                if ( v212 )
                {
                  v226 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v226 )
                    sub_B5D69C(0LL, v227);
                  v228 = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v226,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v228 )
                    sub_B5D69C(0LL, v229);
                  v212 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            v228,
                                            (int32_t)v214[1].monitor,
                                            *(_DWORD *)(v218 + 20),
                                            0LL);
                  v230 = v212;
                  if ( v212 )
                  {
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v231 = LocalizationManager__Get((System_String_o *)StringLiteral_9426/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v232 = System_String__Format_44573324(v231, v230[3], v225[3], 0LL);
                    *(_DWORD *)v241 = v211;
                    v233 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v241);
                    v234 = System_String__Format((System_String_o *)StringLiteral_21383/*"no_expedition_{0}"*/, v233, 0LL);
                    NotificationPluginScript__SetLocalNotification(v220, v232, v234, 0LL);
                    ++v211;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v217;
            }
            while ( v217 < (int)namespaze );
          }
        }
        *(_DWORD *)&v241[4 * v240 + 24] = 1118;
        v235 = ++v242;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v243,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
        if ( v235 && *(_DWORD *)&v241[4 * v235 + 20] == 1118 )
          v242 = v235 - 1;
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