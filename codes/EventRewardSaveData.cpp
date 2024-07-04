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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v32; // x29
  unsigned __int64 v33; // x25
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  struct System_Threading_CancellationTokenSource_o *v44; // x8
  DataManager_o *v45; // x20
  int v46; // w19
  int v47; // w24
  __int64 v48; // x27
  System_Object_array *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x22
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v78; // x20
  int32_t v79; // w21
  System_String_o *v80; // x22
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  __int64 v87; // x0
  __int128 v88; // [xsp+0h] [xbp-80h] BYREF
  int v89; // [xsp+10h] [xbp-70h] BYREF
  int v90; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v91; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E6520 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&int_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_1B00CCC(&object___TypeInfo, v8);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_6128/*"EventMission_"*/, v11);
    sub_1B00CCC(&StringLiteral_6153/*"EventTowerState_"*/, v12);
    sub_1B00CCC(&StringLiteral_12535/*"ShopItemFilter"*/, v13);
    sub_1B00CCC(&StringLiteral_3328/*"BulletinBoardMessageState"*/, v14);
    sub_1B00CCC(&StringLiteral_11021/*"RecoveryIdx"*/, v15);
    sub_1B00CCC(&StringLiteral_9050/*"MstMission"*/, v16);
    sub_1B00CCC(&StringLiteral_4707/*"CooltimeNotification"*/, v17);
    sub_1B00CCC(&StringLiteral_9051/*"MstMissionIndex"*/, v18);
    sub_1B00CCC(&StringLiteral_6280/*"ExtraMission"*/, v19);
    sub_1B00CCC(&StringLiteral_10605/*"PriorityIndex_"*/, v20);
    sub_1B00CCC(&StringLiteral_6546/*"FatigueNotiffication"*/, v21);
    sub_1B00CCC(&StringLiteral_8387/*"LotteryShopSkipState"*/, v22);
    sub_1B00CCC(&StringLiteral_8315/*"LimitedMission"*/, v23);
    sub_1B00CCC(&StringLiteral_11190/*"RewardType_"*/, v24);
    sub_1B00CCC(&StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v25);
    sub_1B00CCC(&StringLiteral_6247/*"ExpeditionNotification"*/, v26);
    sub_1B00CCC(&StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, v27);
    sub_1B00CCC(&StringLiteral_8987/*"MissionId_"*/, v28);
    byte_48E6520 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v32 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v32->fields._DispLog + v33);
      v34 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v35 = System_String__Concat_60325748((System_String_o *)StringLiteral_10605/*"PriorityIndex_"*/, v34, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
      v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v37 = System_String__Concat_60325748((System_String_o *)StringLiteral_8987/*"MissionId_"*/, v36, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v37, 0LL);
      v38 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v39 = System_String__Concat_60325748((System_String_o *)StringLiteral_6128/*"EventMission_"*/, v38, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v39, 0LL);
      v40 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v41 = System_String__Concat_60325748((System_String_o *)StringLiteral_11190/*"RewardType_"*/, v40, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v41, 0LL);
      v42 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v43 = System_String__Concat_60325748((System_String_o *)StringLiteral_6153/*"EventTowerState_"*/, v42, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v43, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v44 = Instance->fields.m_CancellationTokenSource;
        v45 = Instance;
        if ( v44 )
        {
          v46 = (_DWORD)v44 - 1;
          if ( (int)v44 >= 1 )
            break;
        }
      }
LABEL_33:
      v75 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v76 = System_String__Concat_60325748((System_String_o *)StringLiteral_11021/*"RecoveryIdx"*/, v75, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v76, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v78 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v79 = 0;
          do
          {
            v80 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v78,
                                          v79,
                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v81 = System_Int32__ToString((int)Instance + 16, 0LL);
            v82 = System_String__Concat_60337008((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v80, v81, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v82, 0LL);
          }
          while ( ++v79 < v78->fields._size );
        }
      }
      v83 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v84 = System_String__Concat_60325748((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v83, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v84, 0LL);
      v85 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v86 = System_String__Concat_60325748((System_String_o *)StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, v85, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v86, 0LL);
      LODWORD(m_CancellationTokenSource) = v32->fields.m_CancellationTokenSource;
      if ( (__int64)++v33 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v44 )
LABEL_43:
      sub_1B00F30(Instance, v30);
    v47 = 0;
    while ( 1 )
    {
      v48 = *((_QWORD *)&v45->fields._DispLog + v47);
      v49 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 4LL);
      v91 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v50, v51, v52);
      if ( !v49 )
        break;
      v55 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B00E08(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v49->max_length )
        goto LABEL_43;
      v49->m_Items[0] = v55;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)v49->m_Items, (int32_t)v55, v53, v54);
      if ( !v48 )
        break;
      v90 = *(_DWORD *)(v48 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v56, v57, v58);
      v61 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B00E08(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v49->max_length <= 1 )
        goto LABEL_43;
      v49->m_Items[1] = v61;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v49->m_Items[1], (int32_t)v61, v59, v60);
      v89 = *(_DWORD *)(v48 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v62, v63, v64);
      v67 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B00E08(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v49->max_length <= 2 )
        goto LABEL_43;
      v49->m_Items[2] = v67;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v49->m_Items[2], (int32_t)v67, v65, v66);
      v88 = *(_OWORD *)(v48 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v88,
                                    v68,
                                    v69,
                                    v70);
      v73 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B00E08(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v87 = sub_1B00F4C(Instance);
          sub_1B00DF4(v87, 0LL);
        }
      }
      if ( v49->max_length <= 3 )
        goto LABEL_43;
      v49->m_Items[3] = v73;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v49->m_Items[3], (int32_t)v73, v71, v72);
      v74 = System_String__Format_60340256((System_String_o *)StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v49, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v74, 0LL);
      if ( v46 == v47 )
        goto LABEL_33;
      if ( (unsigned int)++v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1B00F28(Instance, v30);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9050/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6280/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8315/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9051/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6546/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4707/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6247/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11021/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8387/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12535/*"ShopItemFilter"*/, 0LL);
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
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x22
  System_String_o *v43; // x0
  __int64 v44; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v46; // [xsp+10h] [xbp-80h] BYREF
  int v47; // [xsp+24h] [xbp-6Ch] BYREF
  int v48; // [xsp+28h] [xbp-68h] BYREF
  int v49; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_48E654C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1B00CCC(&int_TypeInfo, v3);
    sub_1B00CCC(&object___TypeInfo, v4);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B00CCC(&StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_48E654C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          sub_1B00F30(Instance, v9);
        v16 = 0;
        while ( 1 )
        {
          v17 = *((_QWORD *)&v14->fields._DispLog + v16);
          Instance = (DataManager_o *)sub_1B00D74(object___TypeInfo, 4LL);
          if ( !v17 )
            break;
          v21 = (System_Object_array *)Instance;
          v49 = *(_DWORD *)(v17 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v18, v19, v20);
          if ( !v21 )
            break;
          v24 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B00E08(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v21->max_length )
            goto LABEL_37;
          v21->m_Items[0] = v24;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)v24, v22, v23);
          v48 = *(_DWORD *)(v17 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v25, v26, v27);
          v30 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B00E08(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v21->max_length <= 1 )
            goto LABEL_37;
          v21->m_Items[1] = v30;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v30, v28, v29);
          v47 = *(_DWORD *)(v17 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v31, v32, v33);
          v36 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B00E08(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v21->max_length <= 2 )
            goto LABEL_37;
          v21->m_Items[2] = v36;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], (int32_t)v36, v34, v35);
          v46 = *(_OWORD *)(v17 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v46,
                                        v37,
                                        v38,
                                        v39);
          v42 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B00E08(Instance, v21->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v44 = sub_1B00F4C(Instance);
              sub_1B00DF4(v44, 0LL);
            }
          }
          if ( v21->max_length > 3 )
          {
            v21->m_Items[3] = v42;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v42, v40, v41);
            v43 = System_String__Format_60340256((System_String_o *)StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v43, 0LL);
            if ( v15 == v16 )
              goto LABEL_35;
            if ( (unsigned int)++v16 < LODWORD(v14->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1B00F28(Instance, v9);
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
  if ( (byte_48E6540 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11021/*"RecoveryIdx"*/, method);
    byte_48E6540 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11021/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_60325748(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_48E6543 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3328/*"BulletinBoardMessageState"*/, method);
    byte_48E6543 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_60325748((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  if ( (byte_48E6541 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3328/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_48E6541 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_60337008((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E653B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4707/*"CooltimeNotification"*/, v1);
    byte_48E653B = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4707/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6537 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6247/*"ExpeditionNotification"*/, v1);
    byte_48E6537 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6247/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6539 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6546/*"FatigueNotiffication"*/, v1);
    byte_48E6539 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6546/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_48E6548 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, method);
    byte_48E6548 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_60325748((System_String_o *)StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_68035932(v3, 0LL);
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
  if ( (byte_48E6547 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_15891/*"_"*/, *(_QWORD *)&slot);
    sub_1B00CCC(&StringLiteral_12536/*"ShopItemFilter_"*/, v3);
    byte_48E6547 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_60339012(
           (System_String_o *)StringLiteral_12536/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_15891/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6545 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8387/*"LotteryShopSkipState"*/, v1);
    byte_48E6545 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8387/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_48E653D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12685/*"SpotCooltimeNotification_"*/, method);
    byte_48E653D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_60325748((System_String_o *)StringLiteral_12685/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E654A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_14321/*"TradeNotification"*/, v1);
    byte_48E654A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14321/*"TradeNotification"*/, 0, 0LL) != 0;
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

  if ( (byte_48E6526 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4607/*"CompleteMission"*/, v1);
    byte_48E6526 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4607/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_48E172D )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E172D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_48E6528 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5020/*"DailyMission"*/, v1);
    byte_48E6528 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5020/*"DailyMission"*/, 0, 0LL);
  if ( !byte_48E52E9 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E52E9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_68035364; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_48E651F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10605/*"PriorityIndex_"*/, method);
    byte_48E651F = 1;
  }
  if ( !byte_48DF7B9 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48DF7B9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_60325748((System_String_o *)StringLiteral_10605/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(v3, 0LL);
    if ( !byte_48DF7B9 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v4);
      byte_48DF7B9 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_68035364;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_68035364; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_48E6533 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6153/*"EventTowerState_"*/, method);
    byte_48E6533 = 1;
  }
  if ( !byte_48E140D )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E140D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_60325748((System_String_o *)StringLiteral_6153/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(v3, 0LL);
    if ( !byte_48E140D )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v4);
      byte_48E140D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_68035364;
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
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x20
  System_String_o *v38; // x0
  __int64 v39; // x1
  int32_t Int; // w19
  __int64 v41; // x0
  int32_t v42; // [xsp+0h] [xbp-50h] BYREF
  int32_t v43; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E6535 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1B00CCC(&object___TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_48E6535 = 1;
  }
  v11 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 4LL);
  v45 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v12, v13, v14);
  if ( !v11 )
    sub_1B00F28(v15, v16);
  v19 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v11->m_Items, (int32_t)v19, v17, v18);
  v44 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v20, v21, v22);
  v25 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = v25;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v25, v23, v24);
  v43 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v26, v27, v28);
  v31 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], (int32_t)v31, v29, v30);
  v42 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
  v37 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_20:
      v41 = sub_1B00F4C(v15);
      sub_1B00DF4(v41, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_19:
    sub_1B00F30(v15, v16);
  v11->m_Items[3] = v37;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v37, v35, v36);
  v38 = System_String__Format_60340256((System_String_o *)StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v38, 0, 0LL);
  if ( !byte_48E656B )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v39);
    byte_48E656B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_48E652C & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6280/*"ExtraMission"*/, v1);
    byte_48E652C = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6280/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_48E52EB )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E52EB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_68035364; // w19

  if ( !byte_48DEFF1 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_48DEFF1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(ItemFilterKeyName, 0LL);
    if ( !byte_48DEFF1 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v6);
      byte_48DEFF1 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_68035364;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_48E652E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8315/*"LimitedMission"*/, v1);
    byte_48E652E = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8315/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_48E52EC )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E52EC = 1;
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
  int32_t Int_68035364; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_48E6522 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6128/*"EventMission_"*/, loadFilter);
    sub_1B00CCC(&StringLiteral_8987/*"MissionId_"*/, v4);
    byte_48E6522 = 1;
  }
  if ( !byte_48DF7B8 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_48DF7B8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_60325748((System_String_o *)StringLiteral_8987/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(v6, 0LL);
    if ( !byte_48DF7B8 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v7);
      byte_48DF7B8 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_68035364;
  }
  if ( loadFilter )
  {
    if ( !byte_48DF7B7 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v7);
      byte_48DF7B7 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_60325748((System_String_o *)StringLiteral_6128/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_68035364(v10, 0LL);
      if ( !byte_48DF7B7 )
      {
        sub_1B00CCC(&EventRewardSaveData_TypeInfo, v11);
        byte_48DF7B7 = 1;
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

  if ( (byte_48E6531 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9051/*"MstMissionIndex"*/, v1);
    byte_48E6531 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9051/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_48E4A67 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E4A67 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_68035364; // w19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_48E653E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11021/*"RecoveryIdx"*/, method);
    byte_48E653E = 1;
  }
  v3 = (System_String_o *)StringLiteral_11021/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_60325748(v3, v4, 0LL);
  }
  if ( !byte_48E656C )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E656C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(v3, 0LL);
    if ( !byte_48E656C )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v5);
      byte_48E656C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_68035364;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_68035364; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_48E6524 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11190/*"RewardType_"*/, method);
    byte_48E6524 = 1;
  }
  if ( !byte_48E6569 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6569 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_60325748((System_String_o *)StringLiteral_11190/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_68035364 = UnityEngine_PlayerPrefs__GetInt_68035364(v3, 0LL);
    if ( !byte_48E6569 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v4);
      byte_48E6569 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_68035364;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_48E652A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9050/*"MstMission"*/, v1);
    byte_48E652A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9050/*"MstMission"*/, 0, 0LL);
  if ( !byte_48E52EA )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v2);
    byte_48E52EA = 1;
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

  if ( (byte_48E6530 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5020/*"DailyMission"*/, v1);
    sub_1B00CCC(&StringLiteral_9050/*"MstMission"*/, v2);
    sub_1B00CCC(&StringLiteral_6280/*"ExtraMission"*/, v3);
    sub_1B00CCC(&StringLiteral_8315/*"LimitedMission"*/, v4);
    byte_48E6530 = 1;
  }
  if ( !byte_48E52E5 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E52E5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5020/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_48E52E6 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v5);
    byte_48E52E6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9050/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_48E52E7 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v6);
    byte_48E52E7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6280/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_48E52E8 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v7);
    byte_48E52E8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8315/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6527 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4607/*"CompleteMission"*/, v1);
    byte_48E6527 = 1;
  }
  if ( !byte_48E172C )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E172C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4607/*"CompleteMission"*/,
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
  if ( (byte_48E6521 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8250/*"LastViewEventId_"*/, method);
    sub_1B00CCC(&StringLiteral_10605/*"PriorityIndex_"*/, v2);
    byte_48E6521 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_8250/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_48E6567 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v4);
    byte_48E6567 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_60325748((System_String_o *)StringLiteral_10605/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_48E6568 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v7);
    byte_48E6568 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6529 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5020/*"DailyMission"*/, v1);
    byte_48E6529 = 1;
  }
  if ( !byte_48E52E5 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E52E5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5020/*"DailyMission"*/,
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
  if ( (byte_48E6534 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6153/*"EventTowerState_"*/, method);
    byte_48E6534 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_60325748((System_String_o *)StringLiteral_6153/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_48E140C )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v3);
    byte_48E140C = 1;
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
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x19
  __int64 v38; // x1
  System_String_o *v39; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  __int64 v42; // x1
  int v43; // w9
  __int64 v44; // x0
  int32_t v45; // [xsp+0h] [xbp-50h] BYREF
  int32_t v46; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v47; // [xsp+8h] [xbp-48h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E6536 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1B00CCC(&object___TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_48E6536 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 4LL);
  v48 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v12, v13, v14);
  if ( !v11 )
    sub_1B00F28(v15, v16);
  v19 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v11->m_Items, (int32_t)v19, v17, v18);
  v47 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v20, v21, v22);
  v25 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = v25;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v25, v23, v24);
  v46 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v26, v27, v28);
  v31 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], (int32_t)v31, v29, v30);
  v45 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v32, v33, v34);
  v37 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1B00E08(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_24:
      v44 = sub_1B00F4C(v15);
      sub_1B00DF4(v44, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_23:
    sub_1B00F30(v15, v16);
  v11->m_Items[3] = v37;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v37, v35, v36);
  v39 = System_String__Format_60340256((System_String_o *)StringLiteral_6175/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_48E00BA )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v38);
    byte_48E00BA = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_48E656B )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v38);
    byte_48E656B = 1;
    v43 = (unsigned __int8)byte_48E00BA;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v43 )
    {
      sub_1B00CCC(&EventRewardSaveData_TypeInfo, v42);
      byte_48E00BA = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v39, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E652D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6280/*"ExtraMission"*/, v1);
    byte_48E652D = 1;
  }
  if ( !byte_48E52E7 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E52E7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6280/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_48DEFF0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v3);
    byte_48DEFF0 = 1;
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

  if ( (byte_48E652F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8315/*"LimitedMission"*/, v1);
    byte_48E652F = 1;
  }
  if ( !byte_48E52E8 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E52E8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8315/*"LimitedMission"*/,
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
  if ( (byte_48E6523 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6128/*"EventMission_"*/, method);
    sub_1B00CCC(&StringLiteral_8987/*"MissionId_"*/, v2);
    byte_48E6523 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_8987/*"MissionId_"*/, v3, 0LL);
  if ( !byte_48E6566 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v4);
    byte_48E6566 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_60325748((System_String_o *)StringLiteral_6128/*"EventMission_"*/, v6, 0LL);
  if ( !byte_48E6565 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v7);
    byte_48E6565 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6532 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9051/*"MstMissionIndex"*/, v1);
    byte_48E6532 = 1;
  }
  if ( !byte_48E4A66 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E4A66 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9051/*"MstMissionIndex"*/,
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
  if ( (byte_48E6525 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11190/*"RewardType_"*/, method);
    byte_48E6525 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_60325748((System_String_o *)StringLiteral_11190/*"RewardType_"*/, v2, 0LL);
  if ( !byte_48E656A )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v3);
    byte_48E656A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E652B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9050/*"MstMission"*/, v1);
    byte_48E652B = 1;
  }
  if ( !byte_48E52E6 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E52E6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9050/*"MstMission"*/,
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
  if ( (byte_48E6544 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3328/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_48E6544 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_48E6542 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3328/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_48E6542 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_60337008((System_String_o *)StringLiteral_3328/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_48E653C & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B00CCC(&StringLiteral_4707/*"CooltimeNotification"*/, method);
    byte_48E653C = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4707/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_48E6538 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B00CCC(&StringLiteral_6247/*"ExpeditionNotification"*/, method);
    byte_48E6538 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6247/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_48E653A & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B00CCC(&StringLiteral_6546/*"FatigueNotiffication"*/, method);
    byte_48E653A = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6546/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_48E6549 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_48E6549 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_7133/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_48E6546 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B00CCC(&StringLiteral_8387/*"LotteryShopSkipState"*/, method);
    byte_48E6546 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8387/*"LotteryShopSkipState"*/, v2, 0LL);
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
  if ( (byte_48E653F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11021/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_48E653F = 1;
  }
  v5 = (System_String_o *)StringLiteral_11021/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_60325748(v5, v6, 0LL);
  }
  if ( !byte_48E656C )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_48E656C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = EventRecoveryIdx_k__BackingField;
  if ( !byte_48E656D )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_48E656D = 1;
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
  if ( (byte_48E654B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B00CCC(&StringLiteral_14321/*"TradeNotification"*/, method);
    byte_48E654B = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14321/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6507 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6507 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6509 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6509 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6505 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6505 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6511 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6511 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6519 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6519 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6515 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6515 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6517 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6517 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E650D & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E650D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6503 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6503 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E651D & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E651D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E651B & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E651B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E650F & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E650F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6501 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6501 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6513 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E6513 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E64FF & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E64FF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E650B & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, v1);
    byte_48E650B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6508 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6508 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E650A & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E650A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6506 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6506 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6512 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6512 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E651A & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E651A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6516 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6516 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6518 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6518 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E650E & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E650E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6504 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6504 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_HeelPortraitDetailDialogState(
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_48E651E & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E651E = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E651C & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E651C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6510 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6510 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6502 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6502 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6514 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6514 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E6500 & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E6500 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_48E650C & 1) == 0 )
  {
    sub_1B00CCC(&EventRewardSaveData_TypeInfo, method);
    byte_48E650C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}