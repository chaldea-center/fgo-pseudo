void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  DataManager_o *Instance; // x0
  __int64 v58; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v60; // x29
  unsigned __int64 v61; // x25
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  struct System_Threading_CancellationTokenSource_o *v72; // x8
  DataManager_o *v73; // x20
  int v74; // w19
  int v75; // w24
  __int64 v76; // x27
  System_Object_array *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x22
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x22
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x22
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x22
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  __int64 v109; // x1
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v111; // x20
  int32_t v112; // w21
  System_String_o *v113; // x22
  System_String_o *v114; // x0
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  __int64 v120; // x0
  __int128 v121; // [xsp+0h] [xbp-80h] BYREF
  int v122; // [xsp+10h] [xbp-70h] BYREF
  int v123; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v124; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B1A204 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&object___TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_6312/*"EventMission_"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6337/*"EventTowerState_"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12906/*"ShopItemFilter"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3392/*"BulletinBoardMessageState"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11345/*"RecoveryIdx"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_9283/*"MstMission"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4828/*"CooltimeNotification"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_9284/*"MstMissionIndex"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_6468/*"ExtraMission"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_10874/*"PriorityIndex_"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_6729/*"FatigueNotiffication"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_8606/*"LotteryShopSkipState"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_8533/*"LimitedMission"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_11514/*"RewardType_"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_6435/*"ExpeditionNotification"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_9220/*"MissionId_"*/, v55, v56);
    byte_4B1A204 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v60 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v61 = 0LL;
    while ( 1 )
    {
      if ( v61 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v60->fields._DispLog + v61);
      v62 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v63 = System_String__Concat_62401220((System_String_o *)StringLiteral_10874/*"PriorityIndex_"*/, v62, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v63, 0LL);
      v64 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v65 = System_String__Concat_62401220((System_String_o *)StringLiteral_9220/*"MissionId_"*/, v64, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v65, 0LL);
      v66 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v67 = System_String__Concat_62401220((System_String_o *)StringLiteral_6312/*"EventMission_"*/, v66, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v67, 0LL);
      v68 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v69 = System_String__Concat_62401220((System_String_o *)StringLiteral_11514/*"RewardType_"*/, v68, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v69, 0LL);
      v70 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v71 = System_String__Concat_62401220((System_String_o *)StringLiteral_6337/*"EventTowerState_"*/, v70, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v71, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v72 = Instance->fields.m_CancellationTokenSource;
        v73 = Instance;
        if ( v72 )
        {
          v74 = (_DWORD)v72 - 1;
          if ( (int)v72 >= 1 )
            break;
        }
      }
LABEL_33:
      v107 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v108 = System_String__Concat_62401220((System_String_o *)StringLiteral_11345/*"RecoveryIdx"*/, v107, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v108, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v109);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v111 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v112 = 0;
          do
          {
            v113 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v111,
                                          v112,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v114 = System_Int32__ToString((int)Instance + 16, 0LL);
            v115 = System_String__Concat_62412480((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v113, v114, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v115, 0LL);
          }
          while ( ++v112 < v111->fields._size );
        }
      }
      v116 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v117 = System_String__Concat_62401220((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v116, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v117, 0LL);
      v118 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v119 = System_String__Concat_62401220((System_String_o *)StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, v118, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v119, 0LL);
      LODWORD(m_CancellationTokenSource) = v60->fields.m_CancellationTokenSource;
      if ( (__int64)++v61 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v72 )
LABEL_43:
      sub_1BCAA44(Instance, v58);
    v75 = 0;
    while ( 1 )
    {
      v76 = *((_QWORD *)&v73->fields._DispLog + v75);
      v77 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
      v124 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
      if ( !v77 )
        break;
      v84 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BCA91C(Instance, v77->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v77->max_length )
        goto LABEL_43;
      v77->m_Items[0] = (Il2CppObject *)v84;
      sub_1BCA784((PartyOrganizationUtility_o *)v77->m_Items, v84, v78, v79, v80, v81, v82, v83);
      if ( !v76 )
        break;
      v123 = *(_DWORD *)(v76 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
      v91 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BCA91C(Instance, v77->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v77->max_length <= 1 )
        goto LABEL_43;
      v77->m_Items[1] = (Il2CppObject *)v91;
      sub_1BCA784((PartyOrganizationUtility_o *)&v77->m_Items[1], v91, v85, v86, v87, v88, v89, v90);
      v122 = *(_DWORD *)(v76 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
      v98 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BCA91C(Instance, v77->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v77->max_length <= 2 )
        goto LABEL_43;
      v77->m_Items[2] = (Il2CppObject *)v98;
      sub_1BCA784((PartyOrganizationUtility_o *)&v77->m_Items[2], v98, v92, v93, v94, v95, v96, v97);
      v121 = *(_OWORD *)(v76 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v121);
      v105 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BCA91C(Instance, v77->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v120 = sub_1BCAA60(Instance);
          sub_1BCA908(v120, 0LL);
        }
      }
      if ( v77->max_length <= 3 )
        goto LABEL_43;
      v77->m_Items[3] = (Il2CppObject *)v105;
      sub_1BCA784((PartyOrganizationUtility_o *)&v77->m_Items[3], v105, v99, v100, v101, v102, v103, v104);
      v106 = System_String__Format_62415728((System_String_o *)StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v77, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v106, 0LL);
      if ( v74 == v75 )
        goto LABEL_33;
      if ( (unsigned int)++v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1BCAA3C(Instance, v58);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9283/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6468/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8533/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9284/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6729/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4828/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6435/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11345/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8606/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12906/*"ShopItemFilter"*/, 0LL);
}


void __fastcall EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x27
  unsigned int v18; // w25
  __int64 v19; // x19
  struct System_Threading_CancellationTokenSource_o *v20; // x8
  DataManager_o *v21; // x20
  int v22; // w26
  int v23; // w24
  __int64 v24; // x19
  System_Object_array *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x22
  System_String_o *v54; // x0
  __int64 v55; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v57; // [xsp+10h] [xbp-80h] BYREF
  int v58; // [xsp+24h] [xbp-6Ch] BYREF
  int v59; // [xsp+28h] [xbp-68h] BYREF
  int v60; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B1A232 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3, v4);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&object___TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v13, v14);
    byte_4B1A232 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v17 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v18 = 0;
        while ( 1 )
        {
          v19 = *((_QWORD *)&v17->fields._DispLog + (int)v18);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v19 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v19 + 16),
                                        0LL);
          if ( Instance )
          {
            v20 = Instance->fields.m_CancellationTokenSource;
            v21 = Instance;
            if ( v20 )
            {
              v22 = (_DWORD)v20 - 1;
              if ( (int)v20 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v18 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v20 )
LABEL_37:
          sub_1BCAA44(Instance, v16);
        v23 = 0;
        while ( 1 )
        {
          v24 = *((_QWORD *)&v21->fields._DispLog + v23);
          Instance = (DataManager_o *)sub_1BCA888(object___TypeInfo, 4LL);
          if ( !v24 )
            break;
          v25 = (System_Object_array *)Instance;
          v60 = *(_DWORD *)(v24 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
          if ( !v25 )
            break;
          v32 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BCA91C(Instance, v25->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v25->max_length )
            goto LABEL_37;
          v25->m_Items[0] = (Il2CppObject *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)v25->m_Items, v32, v26, v27, v28, v29, v30, v31);
          v59 = *(_DWORD *)(v24 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
          v39 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BCA91C(Instance, v25->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v25->max_length <= 1 )
            goto LABEL_37;
          v25->m_Items[1] = (Il2CppObject *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)&v25->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
          v58 = *(_DWORD *)(v24 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
          v46 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BCA91C(Instance, v25->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v25->max_length <= 2 )
            goto LABEL_37;
          v25->m_Items[2] = (Il2CppObject *)v46;
          sub_1BCA784((PartyOrganizationUtility_o *)&v25->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
          v57 = *(_OWORD *)(v24 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v57);
          v53 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BCA91C(Instance, v25->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v55 = sub_1BCAA60(Instance);
              sub_1BCA908(v55, 0LL);
            }
          }
          if ( v25->max_length > 3 )
          {
            v25->m_Items[3] = (Il2CppObject *)v53;
            sub_1BCA784((PartyOrganizationUtility_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
            v54 = System_String__Format_62415728((System_String_o *)StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v25, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v54, 0LL);
            if ( v22 == v23 )
              goto LABEL_35;
            if ( (unsigned int)++v23 < LODWORD(v21->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1BCAA3C(Instance, v16);
      }
    }
  }
}


void __fastcall EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B1A224 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11345/*"RecoveryIdx"*/, method, v2);
    byte_4B1A224 = 1;
  }
  v4 = (System_String_o *)StringLiteral_11345/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v5 = System_Int32__ToString((int32_t)&v6, 0LL);
    v4 = System_String__Concat_62401220(v4, v5, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4B1A227 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3392/*"BulletinBoardMessageState"*/, method, v2);
    byte_4B1A227 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v6, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v3, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v4, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSaveData__GetBulletInBoardMessageState(
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = id;
  v8 = eventId;
  if ( (byte_4B1A225 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3392/*"BulletinBoardMessageState"*/, *(_QWORD *)&id, method);
    byte_4B1A225 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_62412480((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A21F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4828/*"CooltimeNotification"*/, v1, v2);
    byte_4B1A21F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4828/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A230 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4944/*"CraftNotification"*/, v1, v2);
    byte_4B1A230 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4944/*"CraftNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A21B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6435/*"ExpeditionNotification"*/, v1, v2);
    byte_4B1A21B = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6435/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A21D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6729/*"FatigueNotiffication"*/, v1, v2);
    byte_4B1A21D = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6729/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4B1A22C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, method, v2);
    byte_4B1A22C = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v6, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, v3, 0LL);
  return UnityEngine_PlayerPrefs__GetString_70112520(v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSaveData__GetItemFilterKeyName(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v8 = slot;
  v9 = eventId;
  if ( (byte_4B1A22B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, *(_QWORD *)&slot, method);
    sub_1BCA7E0(&StringLiteral_12907/*"ShopItemFilter_"*/, v3, v4);
    byte_4B1A22B = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  return System_String__Concat_62414484(
           (System_String_o *)StringLiteral_12907/*"ShopItemFilter_"*/,
           v5,
           (System_String_o *)StringLiteral_16290/*"_"*/,
           v6,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A229 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8606/*"LotteryShopSkipState"*/, v1, v2);
    byte_4B1A229 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8606/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B1A221 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13061/*"SpotCooltimeNotification_"*/, method, v2);
    byte_4B1A221 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_13061/*"SpotCooltimeNotification_"*/, v3, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A22E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_14711/*"TradeNotification"*/, v1, v2);
    byte_4B1A22E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14711/*"TradeNotification"*/, 0, 0LL) != 0;
}


void __fastcall EventRewardSaveData__LoadAllMissionData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  EventRewardSaveData__LoadDailyMissionData(method);
  EventRewardSaveData__LoadWeeklyMissionData(v1);
  EventRewardSaveData__LoadExtraMissionData(v2);
  EventRewardSaveData__LoadLimitedMissionData(v3);
}


void __fastcall EventRewardSaveData__LoadCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A20A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4726/*"CompleteMission"*/, v1, v2);
    byte_4B1A20A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4726/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4B14F96 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B14F96 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A20C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5148/*"DailyMission"*/, v1, v2);
    byte_4B1A20C = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5148/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4B18BED )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B18BED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t Int_70111952; // w19
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = eventId;
  if ( (byte_4B1A203 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10874/*"PriorityIndex_"*/, method, v2);
    byte_4B1A203 = 1;
  }
  if ( !byte_4B11132 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B11132 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_10874/*"PriorityIndex_"*/, v3, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v4, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v4, 0LL);
    if ( !byte_4B11132 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v5, v6);
      byte_4B11132 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_70111952;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t Int_70111952; // w19
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = eventId;
  if ( (byte_4B1A217 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6337/*"EventTowerState_"*/, method, v2);
    byte_4B1A217 = 1;
  }
  if ( !byte_4B14D26 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B14D26 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_6337/*"EventTowerState_"*/, v3, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v4, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v4, 0LL);
    if ( !byte_4B14D26 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v5, v6);
      byte_4B14D26 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_70111952;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadEventVoicePlayCount(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Object_array *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x20
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t Int; // w19
  __int64 v48; // x0
  int32_t v49; // [xsp+0h] [xbp-50h] BYREF
  int32_t v50; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v51; // [xsp+8h] [xbp-48h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A219 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&slot, *(_QWORD *)&idx);
    sub_1BCA7E0(&object___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, v12);
    byte_4B1A219 = 1;
  }
  v13 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
  v52 = eventId;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v52);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v22 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_20;
  }
  if ( !v13->max_length )
    goto LABEL_19;
  v13->m_Items[0] = (Il2CppObject *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)v13->m_Items, v22, v16, v17, v18, v19, v20, v21);
  v51 = slot;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v29 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_20;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_19;
  v13->m_Items[1] = (Il2CppObject *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  v50 = idx;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v36 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_20;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_19;
  v13->m_Items[2] = (Il2CppObject *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  v49 = svtId;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v43 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_20:
      v48 = sub_1BCAA60(v14);
      sub_1BCA908(v48, 0LL);
    }
  }
  if ( v13->max_length <= 3 )
LABEL_19:
    sub_1BCAA44(v14, v15);
  v13->m_Items[3] = (Il2CppObject *)v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v44 = System_String__Format_62415728((System_String_o *)StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v13, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v44, 0, 0LL);
  if ( !byte_4B1A28A )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v45, v46);
    byte_4B1A28A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A210 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6468/*"ExtraMission"*/, v1, v2);
    byte_4B1A210 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6468/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4B18BEF )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B18BEF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Int_70111952; // w19

  if ( !byte_4B1275A )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot, method);
    byte_4B1275A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(ItemFilterKeyName, 0LL);
    if ( !byte_4B1275A )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v6, v7);
      byte_4B1275A = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_70111952;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A212 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8533/*"LimitedMission"*/, v1, v2);
    byte_4B1A212 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8533/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4B18BF0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B18BF0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Int_70111952; // w20
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w19
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = eventId;
  if ( (byte_4B1A206 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6312/*"EventMission_"*/, loadFilter, method);
    sub_1BCA7E0(&StringLiteral_9220/*"MissionId_"*/, v4, v5);
    byte_4B1A206 = 1;
  }
  if ( !byte_4B12FAA )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, loadFilter, method);
    byte_4B12FAA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v6 = System_Int32__ToString((int32_t)&v16, 0LL);
  v7 = System_String__Concat_62401220((System_String_o *)StringLiteral_9220/*"MissionId_"*/, v6, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v7, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v7, 0LL);
    if ( !byte_4B12FAA )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v8, v9);
      byte_4B12FAA = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_70111952;
  }
  if ( loadFilter )
  {
    if ( !byte_4B12FA9 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v8, v9);
      byte_4B12FA9 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v11 = System_Int32__ToString((int32_t)&v16, 0LL);
    v12 = System_String__Concat_62401220((System_String_o *)StringLiteral_6312/*"EventMission_"*/, v11, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v12, 0LL) )
    {
      v15 = UnityEngine_PlayerPrefs__GetInt_70111952(v12, 0LL);
      if ( !byte_4B12FA9 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v13, v14);
        byte_4B12FA9 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v15;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A215 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9284/*"MstMissionIndex"*/, v1, v2);
    byte_4B1A215 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9284/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4B18BE8 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B18BE8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Int_70111952; // w19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = eventId;
  if ( (byte_4B1A222 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11345/*"RecoveryIdx"*/, method, v2);
    byte_4B1A222 = 1;
  }
  v4 = (System_String_o *)StringLiteral_11345/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v5 = System_Int32__ToString((int32_t)&v9, 0LL);
    v4 = System_String__Concat_62401220(v4, v5, 0LL);
  }
  if ( !byte_4B1A28B )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A28B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v4, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v4, 0LL);
    if ( !byte_4B1A28B )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v6, v7);
      byte_4B1A28B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_70111952;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t Int_70111952; // w19
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = eventId;
  if ( (byte_4B1A208 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11514/*"RewardType_"*/, method, v2);
    byte_4B1A208 = 1;
  }
  if ( !byte_4B1A288 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A288 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_11514/*"RewardType_"*/, v3, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v4, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v4, 0LL);
    if ( !byte_4B1A288 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v5, v6);
      byte_4B1A288 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_70111952;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Int; // w19

  if ( (byte_4B1A20E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9283/*"MstMission"*/, v1, v2);
    byte_4B1A20E = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9283/*"MstMission"*/, 0, 0LL);
  if ( !byte_4B18BEE )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B18BEE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = Int;
}


bool __fastcall EventRewardSaveData__NeedSpotCooltimeNotification(int32_t eventId, const MethodInfo *method)
{
  System_String_o *SpotCooltimeNotificationKey; // x0

  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, method);
  return UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0LL) != 0;
}


void __fastcall EventRewardSaveData__SaveAllMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_4B1A214 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5148/*"DailyMission"*/, v1, v2);
    sub_1BCA7E0(&StringLiteral_9283/*"MstMission"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_6468/*"ExtraMission"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_8533/*"LimitedMission"*/, v7, v8);
    byte_4B1A214 = 1;
  }
  if ( !byte_4B18BE9 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BE9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5148/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4B18BEA )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v9, v10);
    byte_4B18BEA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9283/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4B18BEB )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v11, v12);
    byte_4B18BEB = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6468/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4B18BEC )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v13, v14);
    byte_4B18BEC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8533/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A20B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4726/*"CompleteMission"*/, v1, v2);
    byte_4B1A20B = 1;
  }
  if ( !byte_4B14F95 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B14F95 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4726/*"CompleteMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCurrentEventData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4B1A205 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8468/*"LastViewEventId_"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_10874/*"PriorityIndex_"*/, v3, v4);
    byte_4B1A205 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_8468/*"LastViewEventId_"*/, v5, 0LL);
  if ( !byte_4B1A287 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v6, v7);
    byte_4B1A287 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_62401220((System_String_o *)StringLiteral_10874/*"PriorityIndex_"*/, v9, 0LL);
  if ( !byte_4B11131 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v10, v11);
    byte_4B11131 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v12, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A20D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5148/*"DailyMission"*/, v1, v2);
    byte_4B1A20D = 1;
  }
  if ( !byte_4B18BE9 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BE9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5148/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveEventTowerState(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_4B1A218 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6337/*"EventTowerState_"*/, method, v2);
    byte_4B1A218 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_62401220((System_String_o *)StringLiteral_6337/*"EventTowerState_"*/, v3, 0LL);
  if ( !byte_4B14D25 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v4, v5);
    byte_4B14D25 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v6,
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SaveEventVoicePlayCount(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Object_array *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  __int64 v49; // x1
  __int64 v50; // x2
  int v51; // w9
  __int64 v52; // x0
  int32_t v53; // [xsp+0h] [xbp-50h] BYREF
  int32_t v54; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v55; // [xsp+8h] [xbp-48h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A21A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&slot, *(_QWORD *)&idx);
    sub_1BCA7E0(&object___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, v12);
    byte_4B1A21A = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v13 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
  v56 = eventId;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v22 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_24;
  }
  if ( !v13->max_length )
    goto LABEL_23;
  v13->m_Items[0] = (Il2CppObject *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)v13->m_Items, v22, v16, v17, v18, v19, v20, v21);
  v55 = slot;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v29 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_24;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_23;
  v13->m_Items[1] = (Il2CppObject *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  v54 = idx;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v36 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_24;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_23;
  v13->m_Items[2] = (Il2CppObject *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  v53 = svtId;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v43 = v14;
  if ( v14 )
  {
    v14 = sub_1BCA91C(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_24:
      v52 = sub_1BCAA60(v14);
      sub_1BCA908(v52, 0LL);
    }
  }
  if ( v13->max_length <= 3 )
LABEL_23:
    sub_1BCAA44(v14, v15);
  v13->m_Items[3] = (Il2CppObject *)v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v46 = System_String__Format_62415728((System_String_o *)StringLiteral_6361/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v13, 0LL);
  if ( !byte_4B13958 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v44, v45);
    byte_4B13958 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4B1A28A )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v44, v45);
    byte_4B1A28A = 1;
    v51 = (unsigned __int8)byte_4B13958;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v51 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v49, v50);
      byte_4B13958 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v46, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A211 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6468/*"ExtraMission"*/, v1, v2);
    byte_4B1A211 = 1;
  }
  if ( !byte_4B18BEB )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BEB = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6468/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4B12757 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v3, v4);
    byte_4B12757 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A213 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8533/*"LimitedMission"*/, v1, v2);
    byte_4B1A213 = 1;
  }
  if ( !byte_4B18BEC )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BEC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8533/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMissionData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4B1A207 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6312/*"EventMission_"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9220/*"MissionId_"*/, v3, v4);
    byte_4B1A207 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_9220/*"MissionId_"*/, v5, 0LL);
  if ( !byte_4B1A286 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v6, v7);
    byte_4B1A286 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_62401220((System_String_o *)StringLiteral_6312/*"EventMission_"*/, v9, 0LL);
  if ( !byte_4B1A285 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v10, v11);
    byte_4B1A285 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v12, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A216 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9284/*"MstMissionIndex"*/, v1, v2);
    byte_4B1A216 = 1;
  }
  if ( !byte_4B18BE7 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BE7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9284/*"MstMissionIndex"*/,
    EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_4B1A209 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11514/*"RewardType_"*/, method, v2);
    byte_4B1A209 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_62401220((System_String_o *)StringLiteral_11514/*"RewardType_"*/, v3, 0LL);
  if ( !byte_4B1A289 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v4, v5);
    byte_4B1A289 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v6, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A20F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9283/*"MstMission"*/, v1, v2);
    byte_4B1A20F = 1;
  }
  if ( !byte_4B18BEA )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B18BEA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9283/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetBulletInBoardLastMessageId(
        int32_t eventId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B1A228 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3392/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId, method);
    byte_4B1A228 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62401220((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v5, messageId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetBulletInBoardMessageState(
        int32_t eventId,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v8 = id;
  v9 = eventId;
  if ( (byte_4B1A226 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3392/*"BulletinBoardMessageState"*/, *(_QWORD *)&id, isShow);
    byte_4B1A226 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_62412480((System_String_o *)StringLiteral_3392/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A220 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_4828/*"CooltimeNotification"*/, method, v2);
    byte_4B1A220 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4828/*"CooltimeNotification"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A231 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_4944/*"CraftNotification"*/, method, v2);
    byte_4B1A231 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4944/*"CraftNotification"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A21C & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_6435/*"ExpeditionNotification"*/, method, v2);
    byte_4B1A21C = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6435/*"ExpeditionNotification"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A21E & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_6729/*"FatigueNotiffication"*/, method, v2);
    byte_4B1A21E = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6729/*"FatigueNotiffication"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetHeelPortraitDetailDialogState(
        int32_t eventId,
        System_String_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B1A22D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, saveData, method);
    byte_4B1A22D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62401220((System_String_o *)StringLiteral_7335/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A22A & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_8606/*"LotteryShopSkipState"*/, method, v2);
    byte_4B1A22A = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8606/*"LotteryShopSkipState"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  int32_t EventRecoveryIdx_k__BackingField; // w19
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  EventRecoveryIdx_k__BackingField = idx;
  if ( (byte_4B1A223 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11345/*"RecoveryIdx"*/, *(_QWORD *)&idx, method);
    byte_4B1A223 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11345/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_62401220(v5, v6, 0LL);
  }
  if ( !byte_4B1A28B )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx, method);
    byte_4B1A28B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = EventRecoveryIdx_k__BackingField;
  if ( !byte_4B112D6 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx, method);
    byte_4B112D6 = 1;
    EventRecoveryIdx_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRecoveryIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetSpotCooltimeNotification(int32_t eventId, bool value, const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_String_o *SpotCooltimeNotificationKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x0

  v4 = value;
  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, (const MethodInfo *)value);
  if ( (UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0LL) != 0) != v4 )
  {
    v7 = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, v6);
    UnityEngine_PlayerPrefs__SetInt(v7, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetTradeNotification(bool setValue, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v3; // w19

  v3 = setValue;
  if ( (byte_4B1A22F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BCA7E0(&StringLiteral_14711/*"TradeNotification"*/, method, v2);
    byte_4B1A22F = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v3 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14711/*"TradeNotification"*/, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1EB & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1EB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1ED & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1ED = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1E9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1E9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1F5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1F5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1FD & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1FD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1F9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1F9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1FB & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1FB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1F1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1F1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1E7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1E7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A201 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A201 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1FF & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1FF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1F3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1F3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1E5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1E5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1F7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1F7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1E3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1E3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A1EF & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v1, v2);
    byte_4B1A1EF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1EC & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1EC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1EE & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1EE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1EA & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1EA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1F6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1F6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1FE & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1FE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1FA & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1FA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1FC & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1F2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1F2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1E8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1E8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_HeelPortraitDetailDialogState(
        System_String_o *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4B1A202 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A202 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A200 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A200 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1F4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1F4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1E6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1E6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1F8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1F8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1E4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1E4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1F0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A1F0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}