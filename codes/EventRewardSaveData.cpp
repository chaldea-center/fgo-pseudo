void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
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
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v33; // x23
  unsigned __int64 v34; // x25
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  struct System_Threading_CancellationTokenSource_o *v45; // x8
  DataManager_o *v46; // x20
  int v47; // w19
  int v48; // w26
  __int64 v49; // x29
  System_Object_array *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x22
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x22
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x22
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v95; // x20
  int32_t v96; // w21
  System_String_o *v97; // x22
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  __int64 v106; // x0
  __int128 v107; // [xsp+0h] [xbp-80h] BYREF
  int v108; // [xsp+10h] [xbp-70h] BYREF
  int v109; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v110; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B3B1F9 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1BD3458(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&int_TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_1BD3458(&object___TypeInfo, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BD3458(&StringLiteral_6324/*"EventMission_"*/, v11);
    sub_1BD3458(&StringLiteral_6349/*"EventTowerState_"*/, v12);
    sub_1BD3458(&StringLiteral_12925/*"ShopItemFilter"*/, v13);
    sub_1BD3458(&StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, v14);
    sub_1BD3458(&StringLiteral_3399/*"BulletinBoardMessageState"*/, v15);
    sub_1BD3458(&StringLiteral_11363/*"RecoveryIdx"*/, v16);
    sub_1BD3458(&StringLiteral_9297/*"MstMission"*/, v17);
    sub_1BD3458(&StringLiteral_4836/*"CooltimeNotification"*/, v18);
    sub_1BD3458(&StringLiteral_9298/*"MstMissionIndex"*/, v19);
    sub_1BD3458(&StringLiteral_6481/*"ExtraMission"*/, v20);
    sub_1BD3458(&StringLiteral_10891/*"PriorityIndex_"*/, v21);
    sub_1BD3458(&StringLiteral_6742/*"FatigueNotiffication"*/, v22);
    sub_1BD3458(&StringLiteral_8620/*"LotteryShopSkipState"*/, v23);
    sub_1BD3458(&StringLiteral_8547/*"LimitedMission"*/, v24);
    sub_1BD3458(&StringLiteral_11533/*"RewardType_"*/, v25);
    sub_1BD3458(&StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v26);
    sub_1BD3458(&StringLiteral_6448/*"ExpeditionNotification"*/, v27);
    sub_1BD3458(&StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, v28);
    sub_1BD3458(&StringLiteral_9234/*"MissionId_"*/, v29);
    byte_4B3B1F9 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v33 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v34 = 0LL;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v33->fields._DispLog + v34);
      v35 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v36 = System_String__Concat_62525248((System_String_o *)StringLiteral_10891/*"PriorityIndex_"*/, v35, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v36, 0LL);
      v37 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v38 = System_String__Concat_62525248((System_String_o *)StringLiteral_9234/*"MissionId_"*/, v37, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
      v39 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v40 = System_String__Concat_62525248((System_String_o *)StringLiteral_6324/*"EventMission_"*/, v39, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0LL);
      v41 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v42 = System_String__Concat_62525248((System_String_o *)StringLiteral_11533/*"RewardType_"*/, v41, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v42, 0LL);
      v43 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v44 = System_String__Concat_62525248((System_String_o *)StringLiteral_6349/*"EventTowerState_"*/, v43, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v45 = Instance->fields.m_CancellationTokenSource;
        v46 = Instance;
        if ( v45 )
        {
          v47 = (_DWORD)v45 - 1;
          if ( (int)v45 >= 1 )
            break;
        }
      }
LABEL_33:
      v92 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v93 = System_String__Concat_62525248((System_String_o *)StringLiteral_11363/*"RecoveryIdx"*/, v92, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v93, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v95 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v96 = 0;
          do
          {
            v97 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v95,
                                          v96,
                                          (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v98 = System_Int32__ToString((int)Instance + 16, 0LL);
            v99 = System_String__Concat_62536508((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v97, v98, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v99, 0LL);
          }
          while ( ++v96 < v95->fields._size );
        }
      }
      v100 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v101 = System_String__Concat_62525248((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v100, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v101, 0LL);
      v102 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v103 = System_String__Concat_62525248((System_String_o *)StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, v102, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v103, 0LL);
      v104 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v105 = System_String__Concat_62525248((System_String_o *)StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, v104, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v105, 0LL);
      LODWORD(m_CancellationTokenSource) = v33->fields.m_CancellationTokenSource;
      if ( (__int64)++v34 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v45 )
LABEL_43:
      sub_1BD36BC(Instance, v31);
    v48 = 0;
    while ( 1 )
    {
      v49 = *((_QWORD *)&v46->fields._DispLog + v48);
      v50 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 4LL);
      v110 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v51, v52, v53);
      if ( !v50 )
        break;
      v60 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BD3594(Instance, v50->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v50->max_length )
        goto LABEL_43;
      v50->m_Items[0] = (Il2CppObject *)v60;
      sub_1BD33FC((PartyOrganizationUtility_o *)v50->m_Items, v60, v54, v55, v56, v57, v58, v59);
      if ( !v49 )
        break;
      v109 = *(_DWORD *)(v49 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v61, v62, v63);
      v70 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BD3594(Instance, v50->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v50->max_length <= 1 )
        goto LABEL_43;
      v50->m_Items[1] = (Il2CppObject *)v70;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v50->m_Items[1], v70, v64, v65, v66, v67, v68, v69);
      v108 = *(_DWORD *)(v49 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v71, v72, v73);
      v80 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BD3594(Instance, v50->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v50->max_length <= 2 )
        goto LABEL_43;
      v50->m_Items[2] = (Il2CppObject *)v80;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v50->m_Items[2], v80, v74, v75, v76, v77, v78, v79);
      v107 = *(_OWORD *)(v49 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v107,
                                    v81,
                                    v82,
                                    v83);
      v90 = (int64_t)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BD3594(Instance, v50->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v106 = sub_1BD36D8(Instance);
          sub_1BD3580(v106, 0LL);
        }
      }
      if ( v50->max_length <= 3 )
        goto LABEL_43;
      v50->m_Items[3] = (Il2CppObject *)v90;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v50->m_Items[3], v90, v84, v85, v86, v87, v88, v89);
      v91 = System_String__Format_62539756((System_String_o *)StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v50, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v91, 0LL);
      if ( v47 == v48 )
        goto LABEL_33;
      if ( (unsigned int)++v48 >= LODWORD(v46->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1BD36B4(Instance, v31);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9297/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6481/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8547/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9298/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6742/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4836/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6448/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11363/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8620/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12925/*"ShopItemFilter"*/, 0LL);
}


void __fastcall EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataManager_o *v10; // x27
  unsigned int v11; // w25
  __int64 v12; // x19
  struct System_Threading_CancellationTokenSource_o *v13; // x8
  DataManager_o *v14; // x20
  int v15; // w26
  int v16; // w24
  __int64 v17; // x19
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Object_array *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x22
  System_String_o *v59; // x0
  __int64 v60; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v62; // [xsp+10h] [xbp-80h] BYREF
  int v63; // [xsp+24h] [xbp-6Ch] BYREF
  int v64; // [xsp+28h] [xbp-68h] BYREF
  int v65; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B3B229 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1BD3458(&int_TypeInfo, v3);
    sub_1BD3458(&object___TypeInfo, v4);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BD3458(&StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_4B3B229 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v10 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v11 = 0;
        while ( 1 )
        {
          v12 = *((_QWORD *)&v10->fields._DispLog + (int)v11);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v12 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v12 + 16),
                                        0LL);
          if ( Instance )
          {
            v13 = Instance->fields.m_CancellationTokenSource;
            v14 = Instance;
            if ( v13 )
            {
              v15 = (_DWORD)v13 - 1;
              if ( (int)v13 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v11 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v13 )
LABEL_37:
          sub_1BD36BC(Instance, v9);
        v16 = 0;
        while ( 1 )
        {
          v17 = *((_QWORD *)&v14->fields._DispLog + v16);
          Instance = (DataManager_o *)sub_1BD3500(object___TypeInfo, 4LL);
          if ( !v17 )
            break;
          v21 = (System_Object_array *)Instance;
          v65 = *(_DWORD *)(v17 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v18, v19, v20);
          if ( !v21 )
            break;
          v28 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BD3594(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v21->max_length )
            goto LABEL_37;
          v21->m_Items[0] = (Il2CppObject *)v28;
          sub_1BD33FC((PartyOrganizationUtility_o *)v21->m_Items, v28, v22, v23, v24, v25, v26, v27);
          v64 = *(_DWORD *)(v17 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v29, v30, v31);
          v38 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BD3594(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v21->max_length <= 1 )
            goto LABEL_37;
          v21->m_Items[1] = (Il2CppObject *)v38;
          sub_1BD33FC((PartyOrganizationUtility_o *)&v21->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
          v63 = *(_DWORD *)(v17 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v39, v40, v41);
          v48 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BD3594(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v21->max_length <= 2 )
            goto LABEL_37;
          v21->m_Items[2] = (Il2CppObject *)v48;
          sub_1BD33FC((PartyOrganizationUtility_o *)&v21->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
          v62 = *(_OWORD *)(v17 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v62,
                                        v49,
                                        v50,
                                        v51);
          v58 = (int64_t)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BD3594(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v60 = sub_1BD36D8(Instance);
              sub_1BD3580(v60, 0LL);
            }
          }
          if ( v21->max_length > 3 )
          {
            v21->m_Items[3] = (Il2CppObject *)v58;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v21->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
            v59 = System_String__Format_62539756((System_String_o *)StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v59, 0LL);
            if ( v15 == v16 )
              goto LABEL_35;
            if ( (unsigned int)++v16 < LODWORD(v14->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1BD36B4(Instance, v9);
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
  if ( (byte_4B3B219 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11363/*"RecoveryIdx"*/, method);
    byte_4B3B219 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11363/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_62525248(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B3B227 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, method);
    byte_4B3B227 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_70236548(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B3B21C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3399/*"BulletinBoardMessageState"*/, method);
    byte_4B3B21C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL);
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
  if ( (byte_4B3B21A & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3399/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4B3B21A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_62536508((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B214 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_4836/*"CooltimeNotification"*/, v1);
    byte_4B3B214 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4836/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B225 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_4952/*"CraftNotification"*/, v1);
    byte_4B3B225 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4952/*"CraftNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B210 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6448/*"ExpeditionNotification"*/, v1);
    byte_4B3B210 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6448/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B212 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6742/*"FatigueNotiffication"*/, v1);
    byte_4B3B212 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6742/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B3B221 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, method);
    byte_4B3B221 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_70236548(v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSaveData__GetItemFilterKeyName(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-28h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v7 = slot;
  v8 = eventId;
  if ( (byte_4B3B220 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_16309/*"_"*/, *(_QWORD *)&slot);
    sub_1BD3458(&StringLiteral_12926/*"ShopItemFilter_"*/, v3);
    byte_4B3B220 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62538512(
           (System_String_o *)StringLiteral_12926/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_16309/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B21E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8620/*"LotteryShopSkipState"*/, v1);
    byte_4B3B21E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8620/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4B3B216 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13080/*"SpotCooltimeNotification_"*/, method);
    byte_4B3B216 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_62525248((System_String_o *)StringLiteral_13080/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B223 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_14730/*"TradeNotification"*/, v1);
    byte_4B3B223 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14730/*"TradeNotification"*/, 0, 0LL) != 0;
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
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B1FF & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_4734/*"CompleteMission"*/, v1);
    byte_4B3B1FF = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4734/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4B35F2F )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B35F2F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B201 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5156/*"DailyMission"*/, v1);
    byte_4B3B201 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5156/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4B39BC8 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B39BC8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_70235980; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B3B1F8 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_10891/*"PriorityIndex_"*/, method);
    byte_4B3B1F8 = 1;
  }
  if ( !byte_4B320B4 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B320B4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_10891/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v3, 0LL);
    if ( !byte_4B320B4 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v4);
      byte_4B320B4 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_70235980;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_70235980; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B3B20C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6349/*"EventTowerState_"*/, method);
    byte_4B3B20C = 1;
  }
  if ( !byte_4B35CBE )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B35CBE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_6349/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v3, 0LL);
    if ( !byte_4B35CBE )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v4);
      byte_4B35CBE = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_70235980;
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
  __int64 v10; // x1
  System_Object_array *v11; // x19
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x20
  System_String_o *v54; // x0
  __int64 v55; // x1
  int32_t Int; // w19
  __int64 v57; // x0
  int32_t v58; // [xsp+0h] [xbp-50h] BYREF
  int32_t v59; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B3B20E & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1BD3458(&object___TypeInfo, v9);
    sub_1BD3458(&StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4B3B20E = 1;
  }
  v11 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 4LL);
  v61 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v61, v12, v13, v14);
  if ( !v11 )
    sub_1BD36B4(v15, v16);
  v23 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = (Il2CppObject *)v23;
  sub_1BD33FC((PartyOrganizationUtility_o *)v11->m_Items, v23, v17, v18, v19, v20, v21, v22);
  v60 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v60, v24, v25, v26);
  v33 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = (Il2CppObject *)v33;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v59 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v59, v34, v35, v36);
  v43 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = (Il2CppObject *)v43;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
  v58 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v44, v45, v46);
  v53 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_20:
      v57 = sub_1BD36D8(v15);
      sub_1BD3580(v57, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_19:
    sub_1BD36BC(v15, v16);
  v11->m_Items[3] = (Il2CppObject *)v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v54 = System_String__Format_62539756((System_String_o *)StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v54, 0, 0LL);
  if ( !byte_4B3B281 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v55);
    byte_4B3B281 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B205 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6481/*"ExtraMission"*/, v1);
    byte_4B3B205 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6481/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4B39BCA )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B39BCA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_70235980; // w19

  if ( !byte_4B336E4 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_4B336E4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(ItemFilterKeyName, 0LL);
    if ( !byte_4B336E4 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v6);
      byte_4B336E4 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_70235980;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B207 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8547/*"LimitedMission"*/, v1);
    byte_4B3B207 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8547/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4B39BCB )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B39BCB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t Int_70235980; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4B3B1FB & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6324/*"EventMission_"*/, loadFilter);
    sub_1BD3458(&StringLiteral_9234/*"MissionId_"*/, v4);
    byte_4B3B1FB = 1;
  }
  if ( !byte_4B33F34 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_4B33F34 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_62525248((System_String_o *)StringLiteral_9234/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v6, 0LL);
    if ( !byte_4B33F34 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v7);
      byte_4B33F34 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_70235980;
  }
  if ( loadFilter )
  {
    if ( !byte_4B33F33 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v7);
      byte_4B33F33 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_62525248((System_String_o *)StringLiteral_6324/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_70235980(v10, 0LL);
      if ( !byte_4B33F33 )
      {
        sub_1BD3458(&EventRewardSaveData_TypeInfo, v11);
        byte_4B33F33 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v12;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B20A & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9298/*"MstMissionIndex"*/, v1);
    byte_4B3B20A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9298/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4B39BC3 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B39BC3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_70235980; // w19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4B3B217 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11363/*"RecoveryIdx"*/, method);
    byte_4B3B217 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11363/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_62525248(v3, v4, 0LL);
  }
  if ( !byte_4B3B282 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B282 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v3, 0LL);
    if ( !byte_4B3B282 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v5);
      byte_4B3B282 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_70235980;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_70235980; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4B3B1FD & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11533/*"RewardType_"*/, method);
    byte_4B3B1FD = 1;
  }
  if ( !byte_4B3B27F )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B27F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62525248((System_String_o *)StringLiteral_11533/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v3, 0LL);
    if ( !byte_4B3B27F )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v4);
      byte_4B3B27F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_70235980;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4B3B203 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9297/*"MstMission"*/, v1);
    byte_4B3B203 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9297/*"MstMission"*/, 0, 0LL);
  if ( !byte_4B39BC9 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v2);
    byte_4B39BC9 = 1;
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_4B3B209 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5156/*"DailyMission"*/, v1);
    sub_1BD3458(&StringLiteral_9297/*"MstMission"*/, v2);
    sub_1BD3458(&StringLiteral_6481/*"ExtraMission"*/, v3);
    sub_1BD3458(&StringLiteral_8547/*"LimitedMission"*/, v4);
    byte_4B3B209 = 1;
  }
  if ( !byte_4B39BC4 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5156/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4B39BC5 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v5);
    byte_4B39BC5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9297/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4B39BC6 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v6);
    byte_4B39BC6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6481/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4B39BC7 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v7);
    byte_4B39BC7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8547/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B200 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_4734/*"CompleteMission"*/, v1);
    byte_4B3B200 = 1;
  }
  if ( !byte_4B35F2E )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B35F2E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4734/*"CompleteMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCurrentEventData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = eventId;
  if ( (byte_4B3B1FA & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8482/*"LastViewEventId_"*/, method);
    sub_1BD3458(&StringLiteral_10891/*"PriorityIndex_"*/, v2);
    byte_4B3B1FA = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_62525248((System_String_o *)StringLiteral_8482/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_4B3B27E )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v4);
    byte_4B3B27E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_62525248((System_String_o *)StringLiteral_10891/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_4B320B3 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v7);
    byte_4B320B3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B202 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5156/*"DailyMission"*/, v1);
    byte_4B3B202 = 1;
  }
  if ( !byte_4B39BC4 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5156/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B3B20D & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6349/*"EventTowerState_"*/, method);
    byte_4B3B20D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_62525248((System_String_o *)StringLiteral_6349/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4B35CBD )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v3);
    byte_4B35CBD = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v4,
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
  __int64 v10; // x1
  System_Object_array *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x19
  __int64 v54; // x1
  System_String_o *v55; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  __int64 v58; // x1
  int v59; // w9
  __int64 v60; // x0
  int32_t v61; // [xsp+0h] [xbp-50h] BYREF
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B3B20F & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1BD3458(&object___TypeInfo, v9);
    sub_1BD3458(&StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4B3B20F = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 4LL);
  v64 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v64, v12, v13, v14);
  if ( !v11 )
    sub_1BD36B4(v15, v16);
  v23 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = (Il2CppObject *)v23;
  sub_1BD33FC((PartyOrganizationUtility_o *)v11->m_Items, v23, v17, v18, v19, v20, v21, v22);
  v63 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v63, v24, v25, v26);
  v33 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = (Il2CppObject *)v33;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v62 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v62, v34, v35, v36);
  v43 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (Il2CppObject *)v43;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
  v61 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v61, v44, v45, v46);
  v53 = v15;
  if ( v15 )
  {
    v15 = sub_1BD3594(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_24:
      v60 = sub_1BD36D8(v15);
      sub_1BD3580(v60, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_23:
    sub_1BD36BC(v15, v16);
  v11->m_Items[3] = (Il2CppObject *)v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v11->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v55 = System_String__Format_62539756((System_String_o *)StringLiteral_6373/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_4B348E8 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v54);
    byte_4B348E8 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4B3B281 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v54);
    byte_4B3B281 = 1;
    v59 = (unsigned __int8)byte_4B348E8;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v59 )
    {
      sub_1BD3458(&EventRewardSaveData_TypeInfo, v58);
      byte_4B348E8 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v55, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B206 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6481/*"ExtraMission"*/, v1);
    byte_4B3B206 = 1;
  }
  if ( !byte_4B39BC6 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6481/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4B336E1 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v3);
    byte_4B336E1 = 1;
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

  if ( (byte_4B3B208 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8547/*"LimitedMission"*/, v1);
    byte_4B3B208 = 1;
  }
  if ( !byte_4B39BC7 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8547/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMissionData(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = eventId;
  if ( (byte_4B3B1FC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_6324/*"EventMission_"*/, method);
    sub_1BD3458(&StringLiteral_9234/*"MissionId_"*/, v2);
    byte_4B3B1FC = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_62525248((System_String_o *)StringLiteral_9234/*"MissionId_"*/, v3, 0LL);
  if ( !byte_4B3B27D )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v4);
    byte_4B3B27D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_62525248((System_String_o *)StringLiteral_6324/*"EventMission_"*/, v6, 0LL);
  if ( !byte_4B3B27C )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v7);
    byte_4B3B27C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B20B & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9298/*"MstMissionIndex"*/, v1);
    byte_4B3B20B = 1;
  }
  if ( !byte_4B39BC2 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9298/*"MstMissionIndex"*/,
    EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4B3B1FE & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11533/*"RewardType_"*/, method);
    byte_4B3B1FE = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_62525248((System_String_o *)StringLiteral_11533/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4B3B280 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v3);
    byte_4B3B280 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B204 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9297/*"MstMission"*/, v1);
    byte_4B3B204 = 1;
  }
  if ( !byte_4B39BC5 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B39BC5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9297/*"MstMission"*/,
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
  if ( (byte_4B3B228 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, saveData);
    byte_4B3B228 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62525248((System_String_o *)StringLiteral_8344/*"KeyBoxGachaPlayedVoice"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
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
  if ( (byte_4B3B21D & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3399/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_4B3B21D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62525248((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_4B3B21B & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3399/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4B3B21B = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_62536508((System_String_o *)StringLiteral_3399/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B215 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_4836/*"CooltimeNotification"*/, method);
    byte_4B3B215 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4836/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B226 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_4952/*"CraftNotification"*/, method);
    byte_4B3B226 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4952/*"CraftNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B211 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_6448/*"ExpeditionNotification"*/, method);
    byte_4B3B211 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6448/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B213 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_6742/*"FatigueNotiffication"*/, method);
    byte_4B3B213 = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6742/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_4B3B222 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_4B3B222 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62525248((System_String_o *)StringLiteral_7348/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B21F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_8620/*"LotteryShopSkipState"*/, method);
    byte_4B3B21F = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8620/*"LotteryShopSkipState"*/, v2, 0LL);
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
  if ( (byte_4B3B218 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11363/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_4B3B218 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11363/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_62525248(v5, v6, 0LL);
  }
  if ( !byte_4B3B282 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4B3B282 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = EventRecoveryIdx_k__BackingField;
  if ( !byte_4B3225A )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4B3225A = 1;
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
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4B3B224 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BD3458(&StringLiteral_14730/*"TradeNotification"*/, method);
    byte_4B3B224 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14730/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1E0 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1E0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1E2 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1E2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1DE & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1DE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1EA & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1EA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1F2 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1F2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1EE & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1EE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1F0 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1F0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1E6 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1E6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1DC & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1DC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1F6 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1F6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1F4 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1F4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1E8 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1E8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1DA & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1DA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1EC & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1EC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1D8 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1D8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3B1E4 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v1);
    byte_4B3B1E4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1E1 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1E1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1E3 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1DF & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1DF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1EB & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1EB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1F3 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1F3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1EF & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1EF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1F1 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1F1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1E7 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1E7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1DD & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1DD = 1;
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

  if ( (byte_4B3B1F7 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1F7 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1BD33FC(
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
  if ( (byte_4B3B1F5 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1F5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1E9 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1E9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1DB & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1DB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1ED & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1ED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1D9 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1D9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4B3B1E5 & 1) == 0 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, method);
    byte_4B3B1E5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}