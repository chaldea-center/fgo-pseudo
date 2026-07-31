void AvalonNotificationManager___ctor(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  if ( (byte_5937C39 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
    byte_5937C39 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_AvalonNotificationManager___ctor__);
}


void AvalonNotificationManager__Initialize(AvalonNotificationManager_o *this, const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0);
}


// local variable allocation has failed, the output may be wrong!
void AvalonNotificationManager__OnApplicationFocus(
        AvalonNotificationManager_o *this,
        bool isFocus,
        const MethodInfo *method)
{
  NetworkManager_c *v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  UserGameEntity_o *v7; // x19
  __int64 v8; // x1
  int64_t ActAllRecoverTime; // x0
  int32_t v10; // w20
  System_String_o *v11; // x0
  int64_t RpAllRecoverTime; // x0
  int32_t v13; // w20
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x1
  int64_t FatigueAllRecoverTime; // x0
  int32_t v20; // w19
  System_String_o *v21; // x0
  __int64 v22; // x1
  EventEntity_array *EnableEntityList; // x20
  System_DateTime_o v24; // x0
  int64_t Time_48310584; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  unsigned int v28; // w27
  EventEntity_o *v29; // x25
  System_Collections_Generic_List_int__o *v30; // x23
  Il2CppObject *Master_object; // x19
  _BOOL8 v32; // x0
  __int64 v33; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v35; // x23
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  __int64 v37; // x1
  EventCooltimeRewardEntity_o *v38; // x24
  int64_t v39; // x8
  int32_t v40; // w23
  System_String_o *v41; // x0
  System_String_o *v42; // x24
  Il2CppObject *v43; // x1
  System_String_o *v44; // x0
  __int64 v45; // x1
  System_DateTime_o v46; // x0
  int64_t v47; // x19
  __int128 v48; // q0
  _BOOL8 v49; // x0
  __int64 v50; // x1
  UserEventQuestCooltimeEntity_o *current; // x21
  void *monitor; // x20
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  __int64 v54; // x1
  __int64 cooltime; // x26
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v59; // x1
  int64_t clearedAt; // x27
  EventQuestCooltimeEntity_o *v61; // x0
  __int64 v62; // x1
  bool v63; // w8
  __int64 v64; // x20
  QuestEntity_o *QuestEntity; // x21
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x1
  Il2CppObject *v73; // x21
  System_String_o *v74; // x0
  System_String_o *v75; // x21
  Il2CppObject *v76; // x1
  System_String_o *v77; // x0
  __int64 v78; // x1
  System_DateTime_o v79; // x0
  int64_t v80; // x19
  int v81; // w24
  Il2CppObject **v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x29
  Il2CppClass *klass; // x28
  int namespaze; // w8
  int i; // w27
  __int64 v88; // x22
  __int64 v89; // x8
  int32_t v90; // w20
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  Il2CppObject **v95; // x21
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  Il2CppObject **v100; // x22
  System_String_o *v101; // x0
  System_String_o *v102; // x21
  Il2CppObject *v103; // x1
  System_String_o *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x1
  int64_t Time; // x19
  System_Collections_Generic_List_object__o *EntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v109; // x20
  int v110; // w23
  _BOOL8 v111; // x0
  __int64 v112; // x1
  Il2CppClass *v113; // x29
  int v114; // w8
  int j; // w26
  __int64 v116; // x8
  __int64 v117; // x9
  int32_t v118; // w21
  System_String_o *v119; // x0
  __int64 v120; // x1
  System_String_o *v121; // x22
  Il2CppObject *v122; // x1
  System_String_o *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x1
  int64_t v126; // x19
  System_Collections_Generic_List_object__o *v127; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v128; // x20
  int v129; // w23
  _BOOL8 v130; // x0
  __int64 v131; // x1
  Il2CppClass *v132; // x29
  int v133; // w8
  int k; // w26
  __int64 v135; // x8
  __int64 v136; // x9
  int32_t v137; // w21
  System_String_o *v138; // x0
  __int64 v139; // x1
  System_String_o *v140; // x22
  Il2CppObject *v141; // x1
  System_String_o *v142; // x0
  __int64 v143; // x1
  BalanceConfig_c *v144; // x0
  int32_t RequestTopLoginResetTime1; // w21
  System_DateTime_o v146; // x1
  float LoginNotificationHourSetting; // s0
  __int64 v148; // x1
  int32_t LoginNotificationHour; // w19
  System_DateTime_o v150; // x0
  NetworkManager_c *v151; // x0
  bool v152; // w20
  __int64 v153; // x1
  Il2CppObject *v154; // x20
  long double v155; // q0
  Il2CppClass *v156; // x20
  System_DateTime_o v157; // x1
  System_DateTime_o v158; // x0
  int32_t Day; // w20
  System_DateTime_o v160; // x0
  System_DateTime_o v161; // x0
  int64_t NextDayTime_48312424; // x0
  __int64 v163; // x1
  NetworkManager_c *v164; // x8
  bool v165; // cc
  int64_t v166; // x19
  int v167; // w21
  __int64 v168; // x1
  int64_t v169; // x19
  System_String_o *v170; // x20
  Il2CppObject *v171; // x0
  System_String_o *v172; // x0
  NetworkManager_c *v173; // x0
  int v174; // [xsp+14h] [xbp-12Ch]
  int v175; // [xsp+18h] [xbp-128h]
  int v176; // [xsp+18h] [xbp-128h]
  int v177; // [xsp+1Ch] [xbp-124h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v178; // [xsp+20h] [xbp-120h] BYREF
  uint64_t v179; // [xsp+38h] [xbp-108h] BYREF
  Il2CppObject *v180; // [xsp+40h] [xbp-100h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-F8h] BYREF
  Il2CppObject *v182; // [xsp+50h] [xbp-F0h] BYREF
  Il2CppObject *v183; // [xsp+58h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v184; // [xsp+60h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v185; // [xsp+80h] [xbp-C0h] BYREF
  Il2CppObject *v186; // [xsp+98h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v187; // [xsp+A0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v188; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-68h] BYREF

  if ( (byte_5937C38 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventExpeditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserLoginMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&StringLiteral_17482/*"ap_max"*/);
    sub_21FFC50(&StringLiteral_9670/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_24321/*"rp_max"*/);
    sub_21FFC50(&StringLiteral_23332/*"no_expedition_{0}"*/);
    sub_21FFC50(&StringLiteral_9669/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9671/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9668/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9676/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_23331/*"no_craft_{0}"*/);
    sub_21FFC50(&StringLiteral_9672/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9675/*"NOTIFICATION_LOGIN_REMINDER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9674/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_23335/*"no_operation_{0}"*/);
    sub_21FFC50(&StringLiteral_9673/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_23334/*"no_harvest_{0}"*/);
    sub_21FFC50(&StringLiteral_23333/*"no_fatigue"*/);
    sub_21FFC50(&StringLiteral_22379/*"login_reminder_{0}"*/);
    byte_5937C38 = 1;
  }
  memset(&v188, 0, sizeof(v188));
  entity = 0;
  memset(&v187, 0, sizeof(v187));
  v186 = 0;
  memset(&v185, 0, sizeof(v185));
  memset(&v184, 0, sizeof(v184));
  v182 = 0;
  v183 = 0;
  v180 = 0;
  dateData = 0;
  v179 = 0;
  if ( isFocus )
  {
    NotificationPluginScript__ClearAll(0);
    return;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isFocus);
  if ( !byte_5935B46 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5935B46 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isFocus);
    v4 = NetworkManager_TypeInfo;
  }
  if ( v4->static_fields->isLogin )
  {
    NotificationPluginScript__ClearAll(0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v7 = SelfUserGame;
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6);
      if ( OptionManager__GetLocalNotiffication(0) )
      {
        ActAllRecoverTime = UserGameEntity__getActAllRecoverTime(v7, 0);
        if ( ActAllRecoverTime >= 1 )
        {
          v10 = ActAllRecoverTime;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
          v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"NOTIFICATION_AP_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v10, v11, (System_String_o *)StringLiteral_17482/*"ap_max"*/, 0);
        }
      }
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8);
      if ( OptionManager__GetRaidNotiffication(0) )
      {
        RpAllRecoverTime = UserGameEntity__getRpAllRecoverTime(v7, 0);
        if ( RpAllRecoverTime >= 1 )
        {
          v13 = RpAllRecoverTime;
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_231;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !Instance )
            goto LABEL_231;
          if ( EventMaster__IsBPNotification((EventMaster_o *)Instance, v7->fields.rpRecoverAt, 0) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
            v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9676/*"NOTIFICATION_RP_RECOVER_MESSAGE"*/, 0);
            NotificationPluginScript__SetLocalNotification(v13, v17, (System_String_o *)StringLiteral_24321/*"rp_max"*/, 0);
          }
        }
      }
      if ( EventRewardSaveData__GetFatigueNotification(0) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_231;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !Instance )
          goto LABEL_231;
        FatigueAllRecoverTime = UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
                                  (UserEventServantFatigueMaster_o *)Instance,
                                  0);
        if ( FatigueAllRecoverTime >= 1 )
        {
          v20 = FatigueAllRecoverTime;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9674/*"NOTIFICATION_FATIGUE_RECOVER_MESSAGE"*/, 0);
          NotificationPluginScript__SetLocalNotification(v20, v21, (System_String_o *)StringLiteral_23333/*"no_fatigue"*/, 0);
        }
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !Instance )
        goto LABEL_231;
      EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
      v24.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
      Time_48310584 = NetworkManager__getTime_48310584(v24, 0);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
      if ( !EnableEntityList )
LABEL_231:
        sub_21FFECC(Instance, v15);
      max_length = EnableEntityList->max_length;
      if ( max_length >= 1 )
      {
        v174 = 0;
        v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v28 = 0;
        do
        {
          if ( v28 >= max_length )
            sub_21FFED4(Instance);
          v29 = EnableEntityList->m_Items[v28];
          if ( !v29 || !v27 )
            goto LABEL_231;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       v27,
                       &entity,
                       v29->fields.id,
                       (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (int64_t)entity;
            if ( !entity )
              goto LABEL_231;
            Instance = EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = EventRewardSaveData__NeedSpotCooltimeNotification(v29->fields.id, 0);
              if ( (Instance & 1) != 0 )
              {
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
                Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
                if ( !Instance )
                  goto LABEL_231;
                Instance = (int64_t)EventCooltimeRewardMaster__GetSpotIdListByEventId(
                                      (EventCooltimeRewardMaster_o *)Instance,
                                      v29->fields.id,
                                      0);
                if ( !Instance )
                  goto LABEL_231;
                v30 = (System_Collections_Generic_List_int__o *)Instance;
                if ( *(int *)(Instance + 24) >= 1 )
                {
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
                  System_Collections_Generic_List_int___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v178,
                    v30,
                    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
                  v188 = v178;
                  v175 = v174;
                  v178.fields._list = 0;
                  *(_QWORD *)&v178.fields._index = &v188;
                  while ( 1 )
                  {
                    v32 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                            (System_Collections_Generic_List_Enumerator_int__o *)&v188,
                            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
                    if ( !v32 )
                      break;
                    if ( !Master_object )
                      sub_21FFECC(v32, v33);
                    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                           (UserEventCooltimeRewardMaster_o *)Master_object,
                                           v29->fields.id,
                                           (int32_t)v188.fields._current,
                                           0);
                    v35 = CurrentLevelEntity;
                    if ( CurrentLevelEntity )
                    {
                      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                                    CurrentLevelEntity,
                                                    0);
                      v38 = EventCooltimeRewardEntity;
                      if ( !EventCooltimeRewardEntity )
                        sub_21FFECC(0, v37);
                      v39 = v35->fields.collectedAt + EventCooltimeRewardEntity->fields.cooltime;
                      v40 = v39 - Time_48310584;
                      if ( v39 - Time_48310584 >= 1 && v39 < v29->fields.endedAt )
                      {
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
                        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, 0);
                        v42 = System_String__Format(v41, (Il2CppObject *)v38->fields.name, 0);
                        v177 = v175;
                        v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
                        v44 = System_String__Format((System_String_o *)StringLiteral_23335/*"no_operation_{0}"*/, v43, 0);
                        NotificationPluginScript__SetLocalNotification(v40, v42, v44, 0);
                        ++v175;
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_int___Dispose(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v188,
                    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
                  v174 = v175;
                }
              }
            }
          }
          max_length = EnableEntityList->max_length;
        }
        while ( (int)++v28 < max_length );
      }
      if ( EventRewardSaveData__GetCooltimeNotification(0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
        v46.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v47 = NetworkManager__getTime_48310584(v46, 0);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_231;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
        if ( !Instance )
          goto LABEL_231;
        Instance = (int64_t)UserEventQuestCooltimeMaster__GetEntityList((UserEventQuestCooltimeMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_231;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserEventQuestCooltimeEntity__GetEnumerator__);
        v176 = 0;
        v48 = *(_OWORD *)&v178.fields._list;
        v187.fields._current = v178.fields._current;
        v178.fields._list = 0;
        *(_QWORD *)&v178.fields._index = &v187;
        *(_OWORD *)&v187.fields._list = v48;
        while ( 1 )
        {
          v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v187,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__MoveNext__);
          if ( !v49 )
            break;
          current = (UserEventQuestCooltimeEntity_o *)v187.fields._current;
          if ( !v187.fields._current )
            sub_21FFECC(v49, v50);
          monitor = v187.fields._current[2].monitor;
          MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(
                           (UserEventQuestCooltimeEntity_o *)v187.fields._current,
                           0);
          if ( !MasterEntity )
            sub_21FFECC(0, v54);
          cooltime = MasterEntity->fields.cooltime;
          if ( current->fields.eventId < 1 )
            goto LABEL_91;
          v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v56 )
            sub_21FFECC(0, v57);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)v56,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !MasterData_object )
            sub_21FFECC(0, v59);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &v186,
                 current->fields.eventId,
                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            clearedAt = current->fields.clearedAt;
            v61 = UserEventQuestCooltimeEntity__GetMasterEntity(current, 0);
            if ( !v61 )
              sub_21FFECC(0, v62);
            if ( !v186 )
              sub_21FFECC(v61, v62);
            v63 = clearedAt + v61->fields.cooltime >= (__int64)v186[6].klass;
          }
          else
          {
LABEL_91:
            v63 = 0;
          }
          v64 = (__int64)monitor + cooltime - v47;
          if ( v64 >= 1 && !v63 )
          {
            QuestEntity = UserEventQuestCooltimeEntity__GetQuestEntity(current, 0);
            if ( QuestEntity )
            {
              v66 = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !v66 )
                sub_21FFECC(0, v67);
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v66, QuestEntity->fields.id, 0, 0) )
              {
                v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v68 )
                  sub_21FFECC(0, v69);
                v70 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v68,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SpotMaster___);
                if ( !v70 )
                  sub_21FFECC(0, v71);
                v73 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v70,
                        QuestEntity->fields.spotId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
                if ( v73 )
                {
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9671/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, 0);
                  v75 = System_String__Format(v74, (Il2CppObject *)v73[2].klass, 0);
                  v177 = v176;
                  v76 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
                  v77 = System_String__Format((System_String_o *)StringLiteral_23334/*"no_harvest_{0}"*/, v76, 0);
                  NotificationPluginScript__SetLocalNotification(v64, v75, v77, 0);
                  ++v176;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v187,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserEventQuestCooltimeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetExpeditionNotification(0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v78);
        v79.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
        v80 = NetworkManager__getTime_48310584(v79, 0);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_231;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
        if ( !Instance )
          goto LABEL_231;
        Instance = (int64_t)UserEventExpeditionMaster__GetEntityList((UserEventExpeditionMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_231;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserEventExpeditionEntity__GetEnumerator__);
        v81 = 0;
        v185 = v178;
        v178.fields._list = 0;
        *(_QWORD *)&v178.fields._index = &v185;
        while ( 1 )
        {
          v82 = (Il2CppObject **)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                   &v185,
                                   (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__MoveNext__);
          if ( ((unsigned __int8)v82 & 1) == 0 )
            break;
          v84 = v185.fields._current;
          if ( !v185.fields._current )
            sub_21FFECC(v82, v83);
          klass = v185.fields._current[2].klass;
          if ( !klass )
            sub_21FFECC(v82, v83);
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze >= 1 )
          {
            for ( i = 0; i < namespaze; ++i )
            {
              if ( i >= (unsigned int)namespaze )
                sub_21FFED4(v82);
              v88 = *((_QWORD *)&klass->_1.byval_arg.data + i);
              if ( !v88 )
                sub_21FFECC(v82, v83);
              v89 = *(unsigned int *)(v88 + 28);
              v90 = v89 - v80;
              if ( v89 - v80 >= 1 )
              {
                v91 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v91 )
                  sub_21FFECC(0, v92);
                v93 = DataManager__GetMasterData_object_(
                        (DataManager_o *)v91,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventExpeditionMaster___);
                if ( !v93 )
                  sub_21FFECC(0, v94);
                v82 = (Il2CppObject **)EventExpeditionMaster__GetEntity(
                                         (EventExpeditionMaster_o *)v93,
                                         (int32_t)v84[1].monitor,
                                         *(_DWORD *)(v88 + 16),
                                         0);
                v95 = v82;
                if ( v82 )
                {
                  v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v96 )
                    sub_21FFECC(0, v97);
                  v98 = DataManager__GetMasterData_object_(
                          (DataManager_o *)v96,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
                  if ( !v98 )
                    sub_21FFECC(0, v99);
                  v82 = (Il2CppObject **)EventExpeditionPieceMaster__GetEntity(
                                           (EventExpeditionPieceMaster_o *)v98,
                                           (int32_t)v84[1].monitor,
                                           *(_DWORD *)(v88 + 20),
                                           0);
                  v100 = v82;
                  if ( v82 )
                  {
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83);
                    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_9670/*"NOTIFICATION_COMPLETE_EXPEDITION_MESSAGE"*/, 0);
                    v102 = System_String__Format_75484576(v101, v100[3], v95[3], 0);
                    v177 = v81;
                    v103 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
                    v104 = System_String__Format((System_String_o *)StringLiteral_23332/*"no_expedition_{0}"*/, v103, 0);
                    NotificationPluginScript__SetLocalNotification(v90, v102, v104, 0);
                    ++v81;
                  }
                }
              }
              namespaze = (int)klass->_1.namespaze;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v185,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserEventExpeditionEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetTradeNotification(0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v105);
        Time = NetworkManager__getTime(0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v106);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_231;
        EntityList = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                                    (UserEventTradeMaster_o *)Instance,
                                                                    0);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !EntityList )
          goto LABEL_231;
        v109 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          EntityList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v184 = v178;
        v110 = 0;
        v178.fields._list = 0;
        *(_QWORD *)&v178.fields._index = &v184;
        while ( 1 )
        {
          v111 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v184,
                   (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v111 )
            break;
          if ( !v184.fields._current )
            sub_21FFECC(v111, v112);
          v113 = v184.fields._current[2].klass;
          if ( !v113 )
            sub_21FFECC(v111, v112);
          v114 = (int)v113->_1.namespaze;
          if ( v114 >= 1 )
          {
            for ( j = 0; j < v114; ++j )
            {
              if ( j >= (unsigned int)v114 )
                sub_21FFED4(v111);
              v116 = *((_QWORD *)&v113->_1.byval_arg.data + j);
              if ( !v116 )
                sub_21FFECC(v111, v112);
              v117 = *(_QWORD *)(v116 + 48);
              v118 = v117 - Time;
              if ( v117 - Time >= 1 )
              {
                if ( !v109 )
                  sub_21FFECC(v111, v112);
                v111 = DataMasterBase_object__object__int___TryGetEntity(
                         v109,
                         &v183,
                         *(_DWORD *)(v116 + 20),
                         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v111 )
                {
                  if ( !v183 )
                    sub_21FFECC(v111, v112);
                  if ( !LODWORD(v183[1].monitor) )
                  {
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v112);
                    v119 = LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"NOTIFICATION_COMPLETE_TRADE_MESSAGE"*/, 0);
                    if ( !v183 )
                      sub_21FFECC(v119, v120);
                    v121 = System_String__Format(v119, (Il2CppObject *)v183[2].klass, 0);
                    v177 = v110;
                    v122 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
                    v123 = System_String__Format((System_String_o *)StringLiteral_23332/*"no_expedition_{0}"*/, v122, 0);
                    NotificationPluginScript__SetLocalNotification(v118, v121, v123, 0);
                    ++v110;
                  }
                }
              }
              v114 = (int)v113->_1.namespaze;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v184,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( EventRewardSaveData__GetCraftNotification(0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v124);
        v126 = NetworkManager__getTime(0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v125);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
        if ( !Instance )
          goto LABEL_231;
        v127 = (System_Collections_Generic_List_object__o *)UserEventTradeMaster__GetEntityList(
                                                              (UserEventTradeMaster_o *)Instance,
                                                              0);
        Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
        if ( !v127 )
          goto LABEL_231;
        v128 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v178,
          v127,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserEventTradeEntity__GetEnumerator__);
        v184 = v178;
        v129 = 0;
        v178.fields._list = 0;
        *(_QWORD *)&v178.fields._index = &v184;
        while ( 1 )
        {
          v130 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v184,
                   (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__MoveNext__);
          if ( !v130 )
            break;
          if ( !v184.fields._current )
            sub_21FFECC(v130, v131);
          v132 = v184.fields._current[2].klass;
          if ( !v132 )
            sub_21FFECC(v130, v131);
          v133 = (int)v132->_1.namespaze;
          if ( v133 >= 1 )
          {
            for ( k = 0; k < v133; ++k )
            {
              if ( k >= (unsigned int)v133 )
                sub_21FFED4(v130);
              v135 = *((_QWORD *)&v132->_1.byval_arg.data + k);
              if ( !v135 )
                sub_21FFECC(v130, v131);
              v136 = *(_QWORD *)(v135 + 48);
              v137 = v136 - v126;
              if ( v136 - v126 >= 1 )
              {
                if ( !v128 )
                  sub_21FFECC(v130, v131);
                v130 = DataMasterBase_object__object__int___TryGetEntity(
                         v128,
                         &v182,
                         *(_DWORD *)(v135 + 20),
                         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
                if ( v130 )
                {
                  if ( !v182 )
                    sub_21FFECC(v130, v131);
                  if ( LODWORD(v182[1].monitor) == 1 )
                  {
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
                    v138 = LocalizationManager__Get((System_String_o *)StringLiteral_9669/*"NOTIFICATION_COMPLETE_CRAFT_MESSAGE"*/, 0);
                    if ( !v182 )
                      sub_21FFECC(v138, v139);
                    v140 = System_String__Format(v138, (Il2CppObject *)v182[2].klass, 0);
                    v177 = v129;
                    v141 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v177);
                    v142 = System_String__Format((System_String_o *)StringLiteral_23331/*"no_craft_{0}"*/, v141, 0);
                    NotificationPluginScript__SetLocalNotification(v137, v140, v142, 0);
                    ++v129;
                  }
                }
              }
              v133 = (int)v132->_1.namespaze;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v184,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserEventTradeEntity__Dispose__);
      }
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v124);
      if ( OptionManager__GetLoginNotificationSetting(0) )
      {
        v144 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v143);
          v144 = BalanceConfig_TypeInfo;
        }
        RequestTopLoginResetTime1 = v144->static_fields->RequestTopLoginResetTime1;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v143);
        dateData = NetworkManager__getServerDateTime(0).fields._dateData;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v146.fields._dateData);
        LoginNotificationHourSetting = OptionManager__GetLoginNotificationHourSetting(0);
        LoginNotificationHour = SetLoginNotificationControl__GetLoginNotificationHour(LoginNotificationHourSetting, 0);
        if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v148);
        v150.fields._dateData = (uint64_t)&dateData;
        if ( System_DateTime__get_Hour(v150, 0) >= RequestTopLoginResetTime1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
          v154 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserLoginMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v155 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v153);
          Instance = sub_23D80E0(0, v155);
          if ( !v154 )
            goto LABEL_231;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v154,
                       &v180,
                       Instance,
                       (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long__TryGetEntity__);
          if ( (Instance & 1) == 0 )
            goto LABEL_213;
          if ( !v180 )
            goto LABEL_231;
          v156 = v180[2].klass;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
          v179 = NetworkManager__getServerDateTime_48311712((int64_t)v156, 0).fields._dateData;
          if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v157.fields._dateData);
          v158.fields._dateData = (uint64_t)&dateData;
          Day = System_DateTime__get_Day(v158, 0);
          v160.fields._dateData = (uint64_t)&v179;
          if ( Day == System_DateTime__get_Day(v160, 0) )
          {
            if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v15);
            v161.fields._dateData = (uint64_t)&v179;
            v152 = System_DateTime__get_Hour(v161, 0) >= RequestTopLoginResetTime1;
          }
          else
          {
LABEL_213:
            v152 = 0;
          }
          v151 = NetworkManager_TypeInfo;
        }
        else
        {
          v151 = NetworkManager_TypeInfo;
          v152 = 0;
        }
        if ( !*(&v151->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v151, v15);
        NextDayTime_48312424 = NetworkManager__getNextDayTime_48312424(LoginNotificationHour, v152, 0);
        v164 = NetworkManager_TypeInfo;
        v165 = LoginNotificationHour <= RequestTopLoginResetTime1;
        v166 = NextDayTime_48312424;
        if ( v165 )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v163);
            v164 = NetworkManager_TypeInfo;
          }
          v166 += v164->static_fields->OneDayTime;
        }
        if ( !*(&v164->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v164, v163);
        v167 = 0;
        v169 = v166 - NetworkManager__getTime(0);
        do
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v168);
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_9675/*"NOTIFICATION_LOGIN_REMINDER_MESSAGE"*/, 0);
          LODWORD(v178.fields._list) = v167;
          v171 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v178);
          v172 = System_String__Format((System_String_o *)StringLiteral_22379/*"login_reminder_{0}"*/, v171, 0);
          NotificationPluginScript__SetLocalNotification(v169, v170, v172, 0);
          v173 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v168);
            v173 = NetworkManager_TypeInfo;
          }
          ++v167;
          v169 += v173->static_fields->OneDayTime;
        }
        while ( v167 != 13 );
      }
    }
  }
}


void AvalonNotificationManager__SetRemotePushState(
        AvalonNotificationManager_o *this,
        bool isSend,
        const MethodInfo *method)
{
  NotificationPluginScript__ClearAll(0);
}