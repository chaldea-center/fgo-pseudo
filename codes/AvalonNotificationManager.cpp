void __fastcall AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B157B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__, method, v2);
    byte_4B157B9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x1
  __int64 v113; // x2
  NetworkManager_c *v114; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v116; // x1
  UserGameEntity_o *v117; // x19
  __int64 v118; // x1
  int64_t ActAllRecoverTime; // x0
  int32_t v120; // w20
  System_String_o *v121; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v123; // w20
  DataManager_o *Instance; // x0
  __int64 v125; // x1
  __int64 v126; // x1
  System_String_o *v127; // x0
  __int64 v128; // x1
  int64_t FatigueAllRecoverTime; // x0
  int32_t v130; // w19
  System_String_o *v131; // x0
  __int64 v132; // x1
  EventEntity_array *EnableEntityList; // x20
  int64_t Time_39269384; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v136; // x22
  int v137; // w27
  int v138; // w28
  EventEntity_o *v139; // x29
  System_Collections_Generic_List_int__o *v140; // x23
  Il2CppObject *Master_object; // x19
  int v142; // w26
  _BOOL8 v143; // x0
  __int64 v144; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v146; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v148; // x1
  EventCooltimeRewardEntity_o *v149; // x24
  int64_t v150; // x8
  int32_t v151; // w23
  System_String_o *v152; // x0
  System_String_o *v153; // x24
  Il2CppObject *v154; // x1
  System_String_o *v155; // x0
  __int64 v156; // x1
  int64_t v157; // x19
  _BOOL8 v158; // x0
  __int64 v159; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  char *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v163; // x1
  __int64 cooltime; // x23
  Il2CppObject *v165; // x0
  __int64 v166; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v168; // x1
  int64_t clearedAt; // x26
  EventQuestCooltimeEntity_o *v170; // x0
  __int64 v171; // x1
  bool v172; // w8
  char *v173; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v175; // x0
  __int64 v176; // x1
  Il2CppObject *v177; // x0
  __int64 v178; // x1
  Il2CppObject *v179; // x0
  __int64 v180; // x1
  __int64 v181; // x1
  Il2CppObject *v182; // x21
  System_String_o *v183; // x0
  System_String_o *v184; // x21
  Il2CppObject *v185; // x1
  System_String_o *v186; // x0
  __int64 v187; // x1
  int64_t v188; // x19
  int v189; // w24
  Il2CppObject **v190; // x0
  __int64 v191; // x1
  Il2CppObject *v192; // x28
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v195; // w27
  __int64 v196; // x22
  __int64 v197; // x8
  int32_t v198; // w20
  Il2CppObject *v199; // x0
  __int64 v200; // x1
  Il2CppObject *v201; // x0
  __int64 v202; // x1
  Il2CppObject **v203; // x21
  Il2CppObject *v204; // x0
  __int64 v205; // x1
  Il2CppObject *v206; // x0
  __int64 v207; // x1
  Il2CppObject **v208; // x22
  System_String_o *v209; // x0
  System_String_o *v210; // x21
  Il2CppObject *v211; // x1
  System_String_o *v212; // x0
  __int64 v213; // x1
  __int64 v214; // x1
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v217; // x20
  int v218; // w23
  _BOOL8 v219; // x0
  __int64 v220; // x1
  Il2CppClass *v221; // x26
  const char *v222; // x8
  int v223; // w27
  __int64 v224; // x8
  __int64 v225; // x9
  int32_t v226; // w21
  System_String_o *v227; // x0
  __int64 v228; // x1
  System_String_o *v229; // x22
  Il2CppObject *v230; // x1
  System_String_o *v231; // x0
  __int64 v232; // x1
  __int64 v233; // x1
  int64_t v234; // x19
  System_Collections_Generic_List_object__o *v235; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v236; // x20
  int v237; // w23
  _BOOL8 v238; // x0
  __int64 v239; // x1
  Il2CppClass *v240; // x26
  const char *v241; // x8
  int v242; // w27
  __int64 v243; // x8
  __int64 v244; // x9
  int32_t v245; // w21
  System_String_o *v246; // x0
  __int64 v247; // x1
  System_String_o *v248; // x22
  Il2CppObject *v249; // x1
  System_String_o *v250; // x0
  int v251; // [xsp+14h] [xbp-10Ch]
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+18h] [xbp-108h] BYREF
  Il2CppObject *v253; // [xsp+30h] [xbp-F0h] BYREF
  Il2CppObject *v254; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v255; // [xsp+40h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v256; // [xsp+60h] [xbp-C0h] BYREF
  Il2CppObject *v257; // [xsp+78h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v258; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v259; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  System_DateTime_o v261; // 0:x0.8
  System_DateTime_o v262; // 0:x0.8
  System_DateTime_o v263; // 0:x0.8

  if ( (byte_4B157B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionMaster___, isFocus, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, v26, v27);
    sub_1BCA7E0(&DataManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v30, v31);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v32, v33);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__, v54, v55);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__,
      v56,
      v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__, v60, v61);
    sub_1BCA7E0(&int_TypeInfo, v62, v63);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__, v64, v65);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__, v66, v67);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v68, v69);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__, v70, v71);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v72, v73);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v74, v75);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v76, v77);
    sub_1BCA7E0(&OptionManager_TypeInfo, v78, v79);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v80, v81);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v82, v83);
    sub_1BCA7E0(&StringLiteral_16974/*"ap_max"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_9404/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_23223/*"rp_max"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_22338/*"no_expedition_{0}"*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_9403/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, v92, v93);
    sub_1BCA7E0(&StringLiteral_9405/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v94, v95);
    sub_1BCA7E0(&StringLiteral_9402/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, v96, v97);
    sub_1BCA7E0(&StringLiteral_9409/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, v98, v99);
    sub_1BCA7E0(&StringLiteral_22337/*"no_craft_{0}"*/, v100, v101);
    sub_1BCA7E0(&StringLiteral_9406/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v102, v103);
    sub_1BCA7E0(&StringLiteral_9408/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, v104, v105);
    sub_1BCA7E0(&StringLiteral_22341/*"no_operation_{0}"*/, v106, v107);
    sub_1BCA7E0(&StringLiteral_9407/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, v108, v109);
    sub_1BCA7E0(&StringLiteral_22340/*"no_harvest_{0}"*/, v110, v111);
    sub_1BCA7E0(&StringLiteral_22339/*"no_fatigue"*/, v112, v113);
    byte_4B157B8 = 1;
  }
  entity = 0LL;
  memset(&v259, 0, sizeof(v259));
  memset(&v258, 0, sizeof(v258));
  v257 = 0LL;
  memset(&v256, 0, sizeof(v256));
  memset(&v255, 0, sizeof(v255));
  v253 = 0LL;
  v254 = 0LL;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0LL);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isFocus);
  if ( !byte_4B13950 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, isFocus, method);
    byte_4B13950 = 1;
  }
  v114 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isFocus);
    v114 = NetworkManager_TypeInfo;
  }
  if ( v114->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v117 = SelfUserGame;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v116);
      if ( OptionManager__GetLocalNotiffication(0LL) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v117, 0LL);
        if ( ActAllRecoverTime >= 1 )
        {
          v120 = ActAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
          v121 = LocalizationManager__Get((System_String_o *)StringLiteral_9402/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v120, v121, (System_String_o *)StringLiteral_16974/*"ap_max"*/, 0LL);
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v118);
      if ( OptionManager__GetRaidNotiffication(0LL) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v117, 0LL);
        if ( RpAllRecoverTime >= 1 )
        {
          v123 = RpAllRecoverTime;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_182;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_182;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v117->fields.rpRecoverAt, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v126);
            v127 = LocalizationManager__Get((System_String_o *)StringLiteral_9409/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0LL);
            NotificationPluginScript__SetLocalNotification(v123, v127, (System_String_o *)StringLiteral_23223/*"rp_max"*/, 0LL);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_182;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_182;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0LL);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v130 = FatigueAllRecoverTime;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
          v131 = LocalizationManager__Get((System_String_o *)StringLiteral_9408/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0LL);
          NotificationPluginScript__SetLocalNotification(v130, v131, (System_String_o *)StringLiteral_22339/*"no_fatigue"*/, 0LL);
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v128);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_182;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v132);
      v261.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
      Time_39269384 = NetworkManager__getTime_39269384(v261, 0LL);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_182:
        sub_1BCAA3C(Instance, v125);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v136 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v137 = 0;
        v138 = 0;
        do
        {
          if ( v137 >= (unsigned int)max_length )
            sub_1BCAA44(Instance, v125);
          v139 = EnableEntityList->m_Items[v137];
          if ( !v139 || !v136 )
            goto LABEL_182;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        v136,
                                        &entity,
                                        v139->fields.id,
                                        (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_182;
          Instance = (DataManager_o *)EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          Instance = (DataManager_o *)EventRewardSaveData__NeedSpotCooltimeNotification(v139->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v125);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
          if ( !Instance )
            goto LABEL_182;
          Instance = (DataManager_o *)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                        (EventCooltimeRewardMaster_o *)Instance,
                                        v139->fields.id,
                                        0LL);
          if ( !Instance )
            goto LABEL_182;
          v140 = (System_Collections_Generic_List_int__o *)Instance;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v125);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
            System_Collections_Generic_List_int___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v252,
              v140,
              (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
            v142 = v138;
            v259 = v252;
            while ( 1 )
            {
              v143 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                       (System_Collections_Generic_List_Enumerator_int__o *)&v259,
                       (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
              if ( !v143 )
                break;
              if ( !Master_object )
                sub_1BCAA3C(v143, v144);
              CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                     (UserEventCooltimeRewardMaster_o *)Master_object,
                                     v139->fields.id,
                                     (int32_t)v259.fields._current,
                                     0LL);
              v146 = CurrentLevelEntity;
              if ( CurrentLevelEntity )
              {
                EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                              CurrentLevelEntity,
                                              0LL);
                v149 = EventCooltimeRewardEntity;
                if ( !EventCooltimeRewardEntity )
                  sub_1BCAA3C(0LL, v148);
                v150 = v146->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                v151 = v150 - Time_39269384;
                if ( v150 - Time_39269384 >= 1 && v150 < v139->fields.endedAt )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v148);
                  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_9406/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0LL);
                  v153 = System_String__Format(v152, (Il2CppObject *)v149->fields.name, 0LL);
                  LODWORD(v252.fields._list) = v142;
                  v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
                  v155 = System_String__Format((System_String_o *)StringLiteral_22341/*"no_operation_{0}"*/, v154, 0LL);
                  NotificationPluginScript__SetLocalNotification(v151, v153, v155, 0LL);
                  ++v142;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v259,
              (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          }
          else
          {
LABEL_69:
            v142 = v138;
          }
          max_length = EnableEntityList->max_length;
          ++v137;
          v138 = v142;
        }
        while ( v137 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v156);
        v262.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v157 = NetworkManager__getTime_39269384(v262, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_182;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_182;
        Instance = (DataManager_o *)UserEventQuestCooltimeMaster__GetEntityList(
                                      (UserEventQuestCooltimeMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_182;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v252,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v251 = 0;
        v258 = v252;
        while ( 1 )
        {
          v158 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v258,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v158 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v258.fields._current;
          if ( !v258.fields._current )
            sub_1BCAA3C(v158, v159);
          monitor = (char *)v258.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v258.fields._current,
                           0LL);
          if ( !MasterEntity )
            sub_1BCAA3C(0LL, v163);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_92;
          v165 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v165 )
            sub_1BCAA3C(0LL, v166);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v165,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_1BCAA3C(0LL, v168);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v257,
                 current->fields.eventId,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v170 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0LL);
            if ( !v170 )
              sub_1BCAA3C(0LL, v171);
            if ( !v257 )
              sub_1BCAA3C(v170, v171);
            v172 = clearedAt + v170->fields.cooltime < (__int64)v257[6].klass;
          }
          else
          {
LABEL_92:
            v172 = 1;
          }
          v173 = &monitor[cooltime - v157];
          if ( v172 && (__int64)v173 > 0 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0LL);
            if ( QuestEntity )
            {
              v175 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v175 )
                sub_1BCAA3C(0LL, v176);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v175, QuestEntity->fields.id, 0LL) )
              {
                v177 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v177 )
                  sub_1BCAA3C(0LL, v178);
                v179 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v177,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v179 )
                  sub_1BCAA3C(0LL, v180);
                v182 = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)v179,
                         QuestEntity->fields.spotId,
                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v182 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v181);
                  v183 = LocalizationManager__Get((System_String_o *)StringLiteral_9405/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0LL);
                  v184 = System_String__Format(v183, (Il2CppObject *)v182[2].klass, 0LL);
                  LODWORD(v252.fields._list) = v251;
                  v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
                  v186 = System_String__Format((System_String_o *)StringLiteral_22340/*"no_harvest_{0}"*/, v185, 0LL);
                  NotificationPluginScript__SetLocalNotification((int32_t)v173, v184, v186, 0LL);
                  ++v251;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v258,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v187);
        v263.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
        v188 = NetworkManager__getTime_39269384(v263, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_182;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_182;
        Instance = (DataManager_o *)UserEventExpeditionMaster__GetEntityList(
                                      (UserEventExpeditionMaster_o *)Instance,
                                      0LL);
        if ( !Instance )
          goto LABEL_182;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v252,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v189 = 0;
        v256 = v252;
        while ( 1 )
        {
          v190 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v256,
                                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v190 & 1) == 0 )
            break;
          v192 = v256.fields._current;
          if ( !v256.fields._current )
            sub_1BCAA3C(v190, v191);
          klass = v256.fields._current[2].klass;
          if ( !klass )
            sub_1BCAA3C(v190, v191);
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
          {
            v195 = 0;
            do
            {
              if ( v195 >= (unsigned int)namespaze )
                sub_1BCAA44(v190, v191);
              v196 = *((_QWORD *)&klass->_1.byval_arg.data + v195);
              if ( !v196 )
                sub_1BCAA3C(v190, v191);
              v197 = *(unsigned int *)(v196 + 28);
              v198 = v197 - v188;
              if ( v197 - v188 >= 1 )
              {
                v199 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v199 )
                  sub_1BCAA3C(0LL, v200);
                v201 = DataManager__GetMasterData_object_(
                         (DataManager_o *)v199,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v201 )
                  sub_1BCAA3C(0LL, v202);
                v190 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                          (EventExpeditionMaster_o *)v201,
                                          (int32_t)v192[1].monitor,
                                          *(_DWORD *)(v196 + 16),
                                          0LL);
                v203 = v190;
                if ( v190 )
                {
                  v204 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v204 )
                    sub_1BCAA3C(0LL, v205);
                  v206 = DataManager__GetMasterData_object_(
                           (DataManager_o *)v204,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v206 )
                    sub_1BCAA3C(0LL, v207);
                  v190 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                            (EventExpeditionPieceMaster_o *)v206,
                                            (int32_t)v192[1].monitor,
                                            *(_DWORD *)(v196 + 20),
                                            0LL);
                  v208 = v190;
                  if ( v190 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v191);
                    v209 = LocalizationManager__Get((System_String_o *)StringLiteral_9404/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0LL);
                    v210 = System_String__Format_62415592(v209, v208[3], v203[3], 0LL);
                    LODWORD(v252.fields._list) = v189;
                    v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
                    v212 = System_String__Format((System_String_o *)StringLiteral_22338/*"no_expedition_{0}"*/, v211, 0LL);
                    NotificationPluginScript__SetLocalNotification(v198, v210, v212, 0LL);
                    ++v189;
                  }
                }
              }
              LODWORD(namespaze) = klass->_1.namespaze;
              ++v195;
            }
            while ( v195 < (int)namespaze );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v256,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v213);
        Time = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v214);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_182;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_182;
        v217 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v252,
          EntityList,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v255 = v252;
        v218 = 0;
        while ( 1 )
        {
          v219 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v255,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v219 )
            break;
          if ( !v255.fields._current )
            sub_1BCAA3C(v219, v220);
          v221 = v255.fields._current[2].klass;
          if ( !v221 )
            sub_1BCAA3C(v219, v220);
          v222 = v221->_1.namespaze;
          if ( (int)v222 >= 1 )
          {
            v223 = 0;
            do
            {
              if ( v223 >= (unsigned int)v222 )
                sub_1BCAA44(v219, v220);
              v224 = *((_QWORD *)&v221->_1.byval_arg.data + v223);
              if ( !v224 )
                sub_1BCAA3C(v219, v220);
              v225 = *(_QWORD *)(v224 + 48);
              v226 = v225 - Time;
              if ( v225 - Time >= 1 )
              {
                if ( !v217 )
                  sub_1BCAA3C(v219, v220);
                v219 = DataMasterBase_object__object__int___TryGetEntity(
                         v217,
                         &v254,
                         *(_DWORD *)(v224 + 20),
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v219 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v220);
                  v227 = LocalizationManager__Get((System_String_o *)StringLiteral_9407/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0LL);
                  if ( !v254 )
                    sub_1BCAA3C(v227, v228);
                  v229 = System_String__Format(v227, (Il2CppObject *)v254[1].monitor, 0LL);
                  LODWORD(v252.fields._list) = v218;
                  v230 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
                  v231 = System_String__Format((System_String_o *)StringLiteral_22338/*"no_expedition_{0}"*/, v230, 0LL);
                  NotificationPluginScript__SetLocalNotification(v226, v229, v231, 0LL);
                  ++v218;
                }
              }
              LODWORD(v222) = v221->_1.namespaze;
              ++v223;
            }
            while ( v223 < (int)v222 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v255,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v232);
        v234 = NetworkManager__getTime(0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v233);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_182;
        v235 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0LL);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v235 )
          goto LABEL_182;
        v236 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v252,
          v235,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v255 = v252;
        v237 = 0;
        while ( 1 )
        {
          v238 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v255,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v238 )
            break;
          if ( !v255.fields._current )
            sub_1BCAA3C(v238, v239);
          v240 = v255.fields._current[2].klass;
          if ( !v240 )
            sub_1BCAA3C(v238, v239);
          v241 = v240->_1.namespaze;
          if ( (int)v241 >= 1 )
          {
            v242 = 0;
            do
            {
              if ( v242 >= (unsigned int)v241 )
                sub_1BCAA44(v238, v239);
              v243 = *((_QWORD *)&v240->_1.byval_arg.data + v242);
              if ( !v243 )
                sub_1BCAA3C(v238, v239);
              v244 = *(_QWORD *)(v243 + 48);
              v245 = v244 - v234;
              if ( v244 - v234 >= 1 )
              {
                if ( !v236 )
                  sub_1BCAA3C(v238, v239);
                v238 = DataMasterBase_object__object__int___TryGetEntity(
                         v236,
                         &v253,
                         *(_DWORD *)(v243 + 20),
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v238 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v239);
                  v246 = LocalizationManager__Get((System_String_o *)StringLiteral_9403/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0LL);
                  if ( !v253 )
                    sub_1BCAA3C(v246, v247);
                  v248 = System_String__Format(v246, (Il2CppObject *)v253[1].monitor, 0LL);
                  LODWORD(v252.fields._list) = v237;
                  v249 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
                  v250 = System_String__Format((System_String_o *)StringLiteral_22337/*"no_craft_{0}"*/, v249, 0LL);
                  NotificationPluginScript__SetLocalNotification(v245, v248, v250, 0LL);
                  ++v237;
                }
              }
              LODWORD(v241) = v240->_1.namespaze;
              ++v242;
            }
            while ( v242 < (int)v241 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v255,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
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