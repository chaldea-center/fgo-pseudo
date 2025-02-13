void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v4; // x23
  unsigned __int64 v5; // x25
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  struct System_Threading_CancellationTokenSource_o *v16; // x8
  DataManager_o *v17; // x20
  int v18; // w19
  int v19; // w26
  __int64 v20; // x29
  System_Object_array *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x22
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v66; // x20
  int32_t v67; // w21
  System_String_o *v68; // x22
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  __int64 v77; // x0
  __int128 v78; // [xsp+0h] [xbp-80h] BYREF
  int v79; // [xsp+10h] [xbp-70h] BYREF
  int v80; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v81; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BE0655 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6360/*"EventMission_"*/);
    sub_1C21E38(&StringLiteral_6385/*"EventTowerState_"*/);
    sub_1C21E38(&StringLiteral_12998/*"ShopItemFilter"*/);
    sub_1C21E38(&StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/);
    sub_1C21E38(&StringLiteral_3415/*"BulletinBoardMessageState"*/);
    sub_1C21E38(&StringLiteral_11423/*"RecoveryIdx"*/);
    sub_1C21E38(&StringLiteral_9344/*"MstMission"*/);
    sub_1C21E38(&StringLiteral_4855/*"CooltimeNotification"*/);
    sub_1C21E38(&StringLiteral_9345/*"MstMissionIndex"*/);
    sub_1C21E38(&StringLiteral_6516/*"ExtraMission"*/);
    sub_1C21E38(&StringLiteral_10948/*"PriorityIndex_"*/);
    sub_1C21E38(&StringLiteral_6779/*"FatigueNotiffication"*/);
    sub_1C21E38(&StringLiteral_8662/*"LotteryShopSkipState"*/);
    sub_1C21E38(&StringLiteral_8586/*"LimitedMission"*/);
    sub_1C21E38(&StringLiteral_11594/*"RewardType_"*/);
    sub_1C21E38(&StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1C21E38(&StringLiteral_6483/*"ExpeditionNotification"*/);
    sub_1C21E38(&StringLiteral_7387/*"HeelPortraitDetailDialogState"*/);
    sub_1C21E38(&StringLiteral_9281/*"MissionId_"*/);
    byte_4BE0655 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v4 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v4->fields._DispLog + v5);
      v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v7 = System_String__Concat_63115476((System_String_o *)StringLiteral_10948/*"PriorityIndex_"*/, v6, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0LL);
      v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v9 = System_String__Concat_63115476((System_String_o *)StringLiteral_9281/*"MissionId_"*/, v8, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0LL);
      v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v11 = System_String__Concat_63115476((System_String_o *)StringLiteral_6360/*"EventMission_"*/, v10, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0LL);
      v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_11594/*"RewardType_"*/, v12, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0LL);
      v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_6385/*"EventTowerState_"*/, v14, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v16 = Instance->fields.m_CancellationTokenSource;
        v17 = Instance;
        if ( v16 )
        {
          v18 = (_DWORD)v16 - 1;
          if ( (int)v16 >= 1 )
            break;
        }
      }
LABEL_33:
      v63 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v64 = System_String__Concat_63115476((System_String_o *)StringLiteral_11423/*"RecoveryIdx"*/, v63, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v66 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v67 = 0;
          do
          {
            v68 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v66,
                                          v67,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v69 = System_Int32__ToString((int)Instance + 16, 0LL);
            v70 = System_String__Concat_63126736((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v68, v69, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v70, 0LL);
          }
          while ( ++v67 < v66->fields._size );
        }
      }
      v71 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v72 = System_String__Concat_63115476((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v71, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v72, 0LL);
      v73 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v74 = System_String__Concat_63115476((System_String_o *)StringLiteral_7387/*"HeelPortraitDetailDialogState"*/, v73, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v74, 0LL);
      v75 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v76 = System_String__Concat_63115476((System_String_o *)StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/, v75, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v76, 0LL);
      LODWORD(m_CancellationTokenSource) = v4->fields.m_CancellationTokenSource;
      if ( (__int64)++v5 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v16 )
LABEL_43:
      sub_1C2209C(Instance, v2);
    v19 = 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)&v17->fields._DispLog + v19);
      v21 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
      v81 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v22, v23, v24);
      if ( !v21 )
        break;
      v31 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C21F74(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v21->max_length )
        goto LABEL_43;
      v21->m_Items[0] = (Il2CppObject *)v31;
      sub_1C21DDC((PartyOrganizationUtility_o *)v21->m_Items, v31, v25, v26, v27, v28, v29, v30);
      if ( !v20 )
        break;
      v80 = *(_DWORD *)(v20 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v32, v33, v34);
      v41 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C21F74(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_43;
      v21->m_Items[1] = (Il2CppObject *)v41;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
      v79 = *(_DWORD *)(v20 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v42, v43, v44);
      v51 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C21F74(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_43;
      v21->m_Items[2] = (Il2CppObject *)v51;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      v78 = *(_OWORD *)(v20 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v78,
                                    v52,
                                    v53,
                                    v54);
      v61 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C21F74(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v77 = sub_1C220B8(Instance);
          sub_1C21F60(v77, 0LL);
        }
      }
      if ( v21->max_length <= 3 )
        goto LABEL_43;
      v21->m_Items[3] = (Il2CppObject *)v61;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
      v62 = System_String__Format_63129984((System_String_o *)StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0LL);
      if ( v18 == v19 )
        goto LABEL_33;
      if ( (unsigned int)++v19 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1C22094(Instance, v2);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9344/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6516/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8586/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9345/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6779/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4855/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6483/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11423/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8662/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12998/*"ShopItemFilter"*/, 0LL);
}


void __fastcall EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataManager_o *v3; // x27
  unsigned int v4; // w25
  __int64 v5; // x19
  struct System_Threading_CancellationTokenSource_o *v6; // x8
  DataManager_o *v7; // x20
  int v8; // w26
  int v9; // w24
  __int64 v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Object_array *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x22
  System_String_o *v52; // x0
  __int64 v53; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v55; // [xsp+10h] [xbp-80h] BYREF
  int v56; // [xsp+24h] [xbp-6Ch] BYREF
  int v57; // [xsp+28h] [xbp-68h] BYREF
  int v58; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BE0685 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4BE0685 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v3 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v4 = 0;
        while ( 1 )
        {
          v5 = *((_QWORD *)&v3->fields._DispLog + (int)v4);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v5 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v5 + 16),
                                        0LL);
          if ( Instance )
          {
            v6 = Instance->fields.m_CancellationTokenSource;
            v7 = Instance;
            if ( v6 )
            {
              v8 = (_DWORD)v6 - 1;
              if ( (int)v6 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v4 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v4 >= LODWORD(v3->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v6 )
LABEL_37:
          sub_1C2209C(Instance, v2);
        v9 = 0;
        while ( 1 )
        {
          v10 = *((_QWORD *)&v7->fields._DispLog + v9);
          Instance = (DataManager_o *)sub_1C21EE0(object___TypeInfo, 4LL);
          if ( !v10 )
            break;
          v14 = (System_Object_array *)Instance;
          v58 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v11, v12, v13);
          if ( !v14 )
            break;
          v21 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C21F74(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v14->max_length )
            goto LABEL_37;
          v14->m_Items[0] = (Il2CppObject *)v21;
          sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, v21, v15, v16, v17, v18, v19, v20);
          v57 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v22, v23, v24);
          v31 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C21F74(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v14->max_length <= 1 )
            goto LABEL_37;
          v14->m_Items[1] = (Il2CppObject *)v31;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
          v56 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v32, v33, v34);
          v41 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C21F74(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v14->max_length <= 2 )
            goto LABEL_37;
          v14->m_Items[2] = (Il2CppObject *)v41;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
          v55 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v55,
                                        v42,
                                        v43,
                                        v44);
          v51 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C21F74(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v53 = sub_1C220B8(Instance);
              sub_1C21F60(v53, 0LL);
            }
          }
          if ( v14->max_length > 3 )
          {
            v14->m_Items[3] = (Il2CppObject *)v51;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
            v52 = System_String__Format_63129984((System_String_o *)StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v14, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v52, 0LL);
            if ( v8 == v9 )
              goto LABEL_35;
            if ( (unsigned int)++v9 < LODWORD(v7->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1C22094(Instance, v2);
      }
    }
  }
}


void __fastcall EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4BE0675 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11423/*"RecoveryIdx"*/);
    byte_4BE0675 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11423/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_63115476(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4BE0683 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/);
    byte_4BE0683 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_70827888(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4BE0678 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3415/*"BulletinBoardMessageState"*/);
    byte_4BE0678 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL);
}


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
  if ( (byte_4BE0676 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3415/*"BulletinBoardMessageState"*/);
    byte_4BE0676 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_63126736((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4BE0670 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4855/*"CooltimeNotification"*/);
    byte_4BE0670 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4855/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_4BE0681 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4971/*"CraftNotification"*/);
    byte_4BE0681 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4971/*"CraftNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4BE066C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6483/*"ExpeditionNotification"*/);
    byte_4BE066C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6483/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4BE066E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6779/*"FatigueNotiffication"*/);
    byte_4BE066E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6779/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4BE067D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7387/*"HeelPortraitDetailDialogState"*/);
    byte_4BE067D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_7387/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_70827888(v3, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetItemFilterKeyName(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = slot;
  v7 = eventId;
  if ( (byte_4BE067C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_12999/*"ShopItemFilter_"*/);
    byte_4BE067C = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_63128740(
           (System_String_o *)StringLiteral_12999/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16399/*"_"*/,
           v4,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4BE067A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8662/*"LotteryShopSkipState"*/);
    byte_4BE067A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8662/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4BE0672 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13153/*"SpotCooltimeNotification_"*/);
    byte_4BE0672 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_13153/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4BE067F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_14807/*"TradeNotification"*/);
    byte_4BE067F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14807/*"TradeNotification"*/, 0, 0LL) != 0;
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
  int32_t Int; // w19

  if ( (byte_4BE065B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4753/*"CompleteMission"*/);
    byte_4BE065B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4753/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4BDB297 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDB297 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4BE065D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5183/*"DailyMission"*/);
    byte_4BE065D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5183/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4BDF85F )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_70827320; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4BE0654 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10948/*"PriorityIndex_"*/);
    byte_4BE0654 = 1;
  }
  if ( !byte_4BD7361 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD7361 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_10948/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v3, 0LL);
    if ( !byte_4BD7361 )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD7361 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_70827320;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_70827320; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4BE0668 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6385/*"EventTowerState_"*/);
    byte_4BE0668 = 1;
  }
  if ( !byte_4BDB019 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDB019 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_6385/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v3, 0LL);
    if ( !byte_4BDB019 )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BDB019 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_70827320;
  }
}


void __fastcall EventRewardSaveData__LoadEventVoicePlayCount(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Object_array *v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x20
  System_String_o *v52; // x0
  int32_t Int; // w19
  __int64 v54; // x0
  int32_t v55; // [xsp+0h] [xbp-50h] BYREF
  int32_t v56; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BE066A & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4BE066A = 1;
  }
  v9 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
  v58 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v10, v11, v12);
  if ( !v9 )
    sub_1C22094(v13, v14);
  v21 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( !v9->max_length )
    goto LABEL_19;
  v9->m_Items[0] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9->m_Items, v21, v15, v16, v17, v18, v19, v20);
  v57 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v57, v22, v23, v24);
  v31 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = (Il2CppObject *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v56 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v56, v32, v33, v34);
  v41 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = (Il2CppObject *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v55 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v55, v42, v43, v44);
  v51 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_20:
      v54 = sub_1C220B8(v13);
      sub_1C21F60(v54, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
LABEL_19:
    sub_1C2209C(v13, v14);
  v9->m_Items[3] = (Il2CppObject *)v51;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v52 = System_String__Format_63129984((System_String_o *)StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v52, 0, 0LL);
  if ( !byte_4BE06DD )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4BE0661 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6516/*"ExtraMission"*/);
    byte_4BE0661 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6516/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4BDF861 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF861 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_70827320; // w19

  if ( !byte_4BD89BA )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD89BA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(ItemFilterKeyName, 0LL);
    if ( !byte_4BD89BA )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD89BA = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_70827320;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4BE0663 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8586/*"LimitedMission"*/);
    byte_4BE0663 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8586/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4BDF862 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF862 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_70827320; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4BE0657 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6360/*"EventMission_"*/);
    sub_1C21E38(&StringLiteral_9281/*"MissionId_"*/);
    byte_4BE0657 = 1;
  }
  if ( !byte_4BD927C )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD927C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_9281/*"MissionId_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v5, 0LL);
    if ( !byte_4BD927C )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD927C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_70827320;
  }
  if ( loadFilter )
  {
    if ( !byte_4BD927B )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD927B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    v8 = System_String__Concat_63115476((System_String_o *)StringLiteral_6360/*"EventMission_"*/, v7, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_70827320(v8, 0LL);
      if ( !byte_4BD927B )
      {
        sub_1C21E38(&EventRewardSaveData_TypeInfo);
        byte_4BD927B = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4BE0666 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9345/*"MstMissionIndex"*/);
    byte_4BE0666 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9345/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4BDEFF9 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDEFF9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_70827320; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4BE0673 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11423/*"RecoveryIdx"*/);
    byte_4BE0673 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11423/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0LL);
    v3 = System_String__Concat_63115476(v3, v4, 0LL);
  }
  if ( !byte_4BE06DE )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v3, 0LL);
    if ( !byte_4BE06DE )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BE06DE = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_70827320;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_70827320; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4BE0659 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11594/*"RewardType_"*/);
    byte_4BE0659 = 1;
  }
  if ( !byte_4BE06DB )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_11594/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v3, 0LL);
    if ( !byte_4BE06DB )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BE06DB = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_70827320;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4BE065F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9344/*"MstMission"*/);
    byte_4BE065F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9344/*"MstMission"*/, 0, 0LL);
  if ( !byte_4BDF860 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF860 = 1;
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
  if ( (byte_4BE0665 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5183/*"DailyMission"*/);
    sub_1C21E38(&StringLiteral_9344/*"MstMission"*/);
    sub_1C21E38(&StringLiteral_6516/*"ExtraMission"*/);
    sub_1C21E38(&StringLiteral_8586/*"LimitedMission"*/);
    byte_4BE0665 = 1;
  }
  if ( !byte_4BDF85B )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5183/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4BDF85C )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9344/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4BDF85D )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6516/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4BDF85E )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8586/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4BE065C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4753/*"CompleteMission"*/);
    byte_4BE065C = 1;
  }
  if ( !byte_4BDB296 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDB296 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4753/*"CompleteMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCurrentEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4BE0656 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8521/*"LastViewEventId_"*/);
    sub_1C21E38(&StringLiteral_10948/*"PriorityIndex_"*/);
    byte_4BE0656 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_8521/*"LastViewEventId_"*/, v2, 0LL);
  if ( !byte_4BE06DA )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_10948/*"PriorityIndex_"*/, v4, 0LL);
  if ( !byte_4BD7360 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD7360 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4BE065E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5183/*"DailyMission"*/);
    byte_4BE065E = 1;
  }
  if ( !byte_4BDF85B )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5183/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4BE0669 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6385/*"EventTowerState_"*/);
    byte_4BE0669 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_6385/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4BDB018 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDB018 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v3,
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveEventVoicePlayCount(
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Object_array *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x19
  System_String_o *v52; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v55; // w9
  __int64 v56; // x0
  int32_t v57; // [xsp+0h] [xbp-50h] BYREF
  int32_t v58; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BE066B & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4BE066B = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
  v60 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v60, v10, v11, v12);
  if ( !v9 )
    sub_1C22094(v13, v14);
  v21 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( !v9->max_length )
    goto LABEL_23;
  v9->m_Items[0] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9->m_Items, v21, v15, v16, v17, v18, v19, v20);
  v59 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v59, v22, v23, v24);
  v31 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = (Il2CppObject *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v58 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v32, v33, v34);
  v41 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = (Il2CppObject *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v57 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v57, v42, v43, v44);
  v51 = v13;
  if ( v13 )
  {
    v13 = sub_1C21F74(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_24:
      v56 = sub_1C220B8(v13);
      sub_1C21F60(v56, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
LABEL_23:
    sub_1C2209C(v13, v14);
  v9->m_Items[3] = (Il2CppObject *)v51;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v52 = System_String__Format_63129984((System_String_o *)StringLiteral_6408/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  if ( !byte_4BD9C3C )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD9C3C = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4BE06DD )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DD = 1;
    v55 = (unsigned __int8)byte_4BD9C3C;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v55 )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD9C3C = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v52, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4BE0662 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6516/*"ExtraMission"*/);
    byte_4BE0662 = 1;
  }
  if ( !byte_4BDF85D )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6516/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4BD89B7 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD89B7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4BE0664 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8586/*"LimitedMission"*/);
    byte_4BE0664 = 1;
  }
  if ( !byte_4BDF85E )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8586/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMissionData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4BE0658 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6360/*"EventMission_"*/);
    sub_1C21E38(&StringLiteral_9281/*"MissionId_"*/);
    byte_4BE0658 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_9281/*"MissionId_"*/, v2, 0LL);
  if ( !byte_4BE06D9 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06D9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_6360/*"EventMission_"*/, v4, 0LL);
  if ( !byte_4BE06D8 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06D8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4BE0667 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9345/*"MstMissionIndex"*/);
    byte_4BE0667 = 1;
  }
  if ( !byte_4BDEFF8 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDEFF8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9345/*"MstMissionIndex"*/,
    EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4BE065A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11594/*"RewardType_"*/);
    byte_4BE065A = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_11594/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4BE06DC )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4BE0660 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9344/*"MstMission"*/);
    byte_4BE0660 = 1;
  }
  if ( !byte_4BDF85C )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BDF85C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9344/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SetBoxGachaPlayedVoice(
        int32_t eventId,
        System_String_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4BE0684 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/);
    byte_4BE0684 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_8383/*"KeyBoxGachaPlayedVoice"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SetBulletInBoardLastMessageId(
        int32_t eventId,
        int32_t messageId,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4BE0679 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3415/*"BulletinBoardMessageState"*/);
    byte_4BE0679 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v5, messageId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


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
  if ( (byte_4BE0677 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3415/*"BulletinBoardMessageState"*/);
    byte_4BE0677 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_63126736((System_String_o *)StringLiteral_3415/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE0671 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_4855/*"CooltimeNotification"*/);
    byte_4BE0671 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4855/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE0682 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_4971/*"CraftNotification"*/);
    byte_4BE0682 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4971/*"CraftNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE066D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_6483/*"ExpeditionNotification"*/);
    byte_4BE066D = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6483/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE066F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_6779/*"FatigueNotiffication"*/);
    byte_4BE066F = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6779/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_4BE067E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7387/*"HeelPortraitDetailDialogState"*/);
    byte_4BE067E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_7387/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE067B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_8662/*"LotteryShopSkipState"*/);
    byte_4BE067B = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8662/*"LotteryShopSkipState"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4BE0674 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11423/*"RecoveryIdx"*/);
    byte_4BE0674 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11423/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_63115476(v5, v6, 0LL);
  }
  if ( !byte_4BE06DE )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE06DE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4BD7513 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BD7513 = 1;
    idx = EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, idx, 0LL);
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
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4BE0680 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C21E38(&StringLiteral_14807/*"TradeNotification"*/);
    byte_4BE0680 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14807/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4BE063C & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4BE063E & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4BE063A & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4BE0646 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0646 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4BE064E & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4BE064A & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4BE064C & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4BE0642 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0642 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4BE0638 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0638 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4BE0652 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0652 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4BE0650 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0650 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4BE0644 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0644 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4BE0636 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0636 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4BE0648 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0648 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4BE0634 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0634 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4BE0640 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0640 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE063D & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE063F & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE063B & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE063B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0647 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0647 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE064F & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE064B & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE064D & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE064D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0643 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0643 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0639 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0639 = 1;
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

  if ( (byte_4BE0653 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0653 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1C21DDC(
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
  if ( (byte_4BE0651 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0651 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0645 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0645 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0637 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0637 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0649 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0649 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0635 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0635 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4BE0641 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardSaveData_TypeInfo);
    byte_4BE0641 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}