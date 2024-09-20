void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v4; // x29
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
  int v19; // w24
  __int64 v20; // x27
  System_Object_array *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v50; // x20
  int32_t v51; // w21
  System_String_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  __int64 v59; // x0
  __int128 v60; // [xsp+0h] [xbp-80h] BYREF
  int v61; // [xsp+10h] [xbp-70h] BYREF
  int v62; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v63; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5F013 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6192/*"EventMission_"*/);
    sub_1B885B0(&StringLiteral_6217/*"EventTowerState_"*/);
    sub_1B885B0(&StringLiteral_12748/*"ShopItemFilter"*/);
    sub_1B885B0(&StringLiteral_3367/*"BulletinBoardMessageState"*/);
    sub_1B885B0(&StringLiteral_11208/*"RecoveryIdx"*/);
    sub_1B885B0(&StringLiteral_9153/*"MstMission"*/);
    sub_1B885B0(&StringLiteral_4760/*"CooltimeNotification"*/);
    sub_1B885B0(&StringLiteral_9154/*"MstMissionIndex"*/);
    sub_1B885B0(&StringLiteral_6345/*"ExtraMission"*/);
    sub_1B885B0(&StringLiteral_10739/*"PriorityIndex_"*/);
    sub_1B885B0(&StringLiteral_6609/*"FatigueNotiffication"*/);
    sub_1B885B0(&StringLiteral_8480/*"LotteryShopSkipState"*/);
    sub_1B885B0(&StringLiteral_8408/*"LimitedMission"*/);
    sub_1B885B0(&StringLiteral_11377/*"RewardType_"*/);
    sub_1B885B0(&StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1B885B0(&StringLiteral_6312/*"ExpeditionNotification"*/);
    sub_1B885B0(&StringLiteral_7210/*"HeelPortraitDetailDialogState"*/);
    sub_1B885B0(&StringLiteral_9090/*"MissionId_"*/);
    byte_4A5F013 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
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
      v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_10739/*"PriorityIndex_"*/, v6, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0LL);
      v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v9 = System_String__Concat_61707032((System_String_o *)StringLiteral_9090/*"MissionId_"*/, v8, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0LL);
      v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v10, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0LL);
      v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_11377/*"RewardType_"*/, v12, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0LL);
      v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v15 = System_String__Concat_61707032((System_String_o *)StringLiteral_6217/*"EventTowerState_"*/, v14, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
      v47 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v48 = System_String__Concat_61707032((System_String_o *)StringLiteral_11208/*"RecoveryIdx"*/, v47, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v48, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v50 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v51 = 0;
          do
          {
            v52 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v50,
                                          v51,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v53 = System_Int32__ToString((int)Instance + 16, 0LL);
            v54 = System_String__Concat_61718292((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v52, v53, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v54, 0LL);
          }
          while ( ++v51 < v50->fields._size );
        }
      }
      v55 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v56 = System_String__Concat_61707032((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v55, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v56, 0LL);
      v57 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v58 = System_String__Concat_61707032((System_String_o *)StringLiteral_7210/*"HeelPortraitDetailDialogState"*/, v57, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v58, 0LL);
      LODWORD(m_CancellationTokenSource) = v4->fields.m_CancellationTokenSource;
      if ( (__int64)++v5 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v16 )
LABEL_43:
      sub_1B88814(Instance, v2);
    v19 = 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)&v17->fields._DispLog + v19);
      v21 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
      v63 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v22, v23, v24);
      if ( !v21 )
        break;
      v27 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v21->max_length )
        goto LABEL_43;
      v21->m_Items[0] = v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)v27, v25, v26);
      if ( !v20 )
        break;
      v62 = *(_DWORD *)(v20 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v28, v29, v30);
      v33 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_43;
      v21->m_Items[1] = v33;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v33, v31, v32);
      v61 = *(_DWORD *)(v20 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v34, v35, v36);
      v39 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_43;
      v21->m_Items[2] = v39;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], (int32_t)v39, v37, v38);
      v60 = *(_OWORD *)(v20 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v60,
                                    v40,
                                    v41,
                                    v42);
      v45 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B886EC(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v59 = sub_1B88830(Instance);
          sub_1B886D8(v59, 0LL);
        }
      }
      if ( v21->max_length <= 3 )
        goto LABEL_43;
      v21->m_Items[3] = v45;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v45, v43, v44);
      v46 = System_String__Format_61721540((System_String_o *)StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v46, 0LL);
      if ( v18 == v19 )
        goto LABEL_33;
      if ( (unsigned int)++v19 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1B8880C(Instance, v2);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9153/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6345/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8408/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9154/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6609/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4760/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6312/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11208/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8480/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12748/*"ShopItemFilter"*/, 0LL);
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
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x22
  System_String_o *v36; // x0
  __int64 v37; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v39; // [xsp+10h] [xbp-80h] BYREF
  int v40; // [xsp+24h] [xbp-6Ch] BYREF
  int v41; // [xsp+28h] [xbp-68h] BYREF
  int v42; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5F03F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4A5F03F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          sub_1B88814(Instance, v2);
        v9 = 0;
        while ( 1 )
        {
          v10 = *((_QWORD *)&v7->fields._DispLog + v9);
          Instance = (DataManager_o *)sub_1B88658(object___TypeInfo, 4LL);
          if ( !v10 )
            break;
          v14 = (System_Object_array *)Instance;
          v42 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v11, v12, v13);
          if ( !v14 )
            break;
          v17 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B886EC(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v14->max_length )
            goto LABEL_37;
          v14->m_Items[0] = v17;
          sub_1B88554((ServantStatusBattleListViewItem_o *)v14->m_Items, (int32_t)v17, v15, v16);
          v41 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v18, v19, v20);
          v23 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B886EC(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v14->max_length <= 1 )
            goto LABEL_37;
          v14->m_Items[1] = v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[1], (int32_t)v23, v21, v22);
          v40 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v24, v25, v26);
          v29 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B886EC(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v14->max_length <= 2 )
            goto LABEL_37;
          v14->m_Items[2] = v29;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[2], (int32_t)v29, v27, v28);
          v39 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v39,
                                        v30,
                                        v31,
                                        v32);
          v35 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B886EC(Instance, v14->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v37 = sub_1B88830(Instance);
              sub_1B886D8(v37, 0LL);
            }
          }
          if ( v14->max_length > 3 )
          {
            v14->m_Items[3] = v35;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[3], (int32_t)v35, v33, v34);
            v36 = System_String__Format_61721540((System_String_o *)StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v14, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v36, 0LL);
            if ( v8 == v9 )
              goto LABEL_35;
            if ( (unsigned int)++v9 < LODWORD(v7->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1B8880C(Instance, v2);
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
  if ( (byte_4A5F033 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11208/*"RecoveryIdx"*/);
    byte_4A5F033 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11208/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_61707032(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4A5F036 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3367/*"BulletinBoardMessageState"*/);
    byte_4A5F036 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  if ( (byte_4A5F034 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3367/*"BulletinBoardMessageState"*/);
    byte_4A5F034 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_61718292((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4A5F02E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4760/*"CooltimeNotification"*/);
    byte_4A5F02E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4760/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4A5F02A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6312/*"ExpeditionNotification"*/);
    byte_4A5F02A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6312/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4A5F02C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6609/*"FatigueNotiffication"*/);
    byte_4A5F02C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6609/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4A5F03B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7210/*"HeelPortraitDetailDialogState"*/);
    byte_4A5F03B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_7210/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_69417656(v3, 0LL);
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
  if ( (byte_4A5F03A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_12749/*"ShopItemFilter_"*/);
    byte_4A5F03A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_61720296(
           (System_String_o *)StringLiteral_12749/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16123/*"_"*/,
           v4,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4A5F038 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8480/*"LotteryShopSkipState"*/);
    byte_4A5F038 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8480/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4A5F030 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12901/*"SpotCooltimeNotification_"*/);
    byte_4A5F030 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_12901/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4A5F03D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_14546/*"TradeNotification"*/);
    byte_4A5F03D = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14546/*"TradeNotification"*/, 0, 0LL) != 0;
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

  if ( (byte_4A5F019 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4658/*"CompleteMission"*/);
    byte_4A5F019 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4658/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4A5A01D )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5A01D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4A5F01B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5074/*"DailyMission"*/);
    byte_4A5F01B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5074/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4A5DC62 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC62 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_69417088; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4A5F012 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10739/*"PriorityIndex_"*/);
    byte_4A5F012 = 1;
  }
  if ( !byte_4A57FF8 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_10739/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v3, 0LL);
    if ( !byte_4A57FF8 )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A57FF8 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_69417088;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_69417088; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4A5F026 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6217/*"EventTowerState_"*/);
    byte_4A5F026 = 1;
  }
  if ( !byte_4A59CCC )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A59CCC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_6217/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v3, 0LL);
    if ( !byte_4A59CCC )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A59CCC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_69417088;
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
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x20
  System_String_o *v36; // x0
  int32_t Int; // w19
  __int64 v38; // x0
  int32_t v39; // [xsp+0h] [xbp-50h] BYREF
  int32_t v40; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5F028 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4A5F028 = 1;
  }
  v9 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
  v42 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v10, v11, v12);
  if ( !v9 )
    sub_1B8880C(v13, v14);
  v17 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( !v9->max_length )
    goto LABEL_19;
  v9->m_Items[0] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v17, v15, v16);
  v41 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v41, v18, v19, v20);
  v23 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[1], (int32_t)v23, v21, v22);
  v40 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v40, v24, v25, v26);
  v29 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[2], (int32_t)v29, v27, v28);
  v39 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v39, v30, v31, v32);
  v35 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_20:
      v38 = sub_1B88830(v13);
      sub_1B886D8(v38, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
LABEL_19:
    sub_1B88814(v13, v14);
  v9->m_Items[3] = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[3], (int32_t)v35, v33, v34);
  v36 = System_String__Format_61721540((System_String_o *)StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v36, 0, 0LL);
  if ( !byte_4A5F05E )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4A5F01F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6345/*"ExtraMission"*/);
    byte_4A5F01F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6345/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4A5DC64 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC64 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_69417088; // w19

  if ( !byte_4A577EB )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A577EB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(ItemFilterKeyName, 0LL);
    if ( !byte_4A577EB )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A577EB = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_69417088;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4A5F021 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8408/*"LimitedMission"*/);
    byte_4A5F021 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8408/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4A5DC65 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC65 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_69417088; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4A5F015 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6192/*"EventMission_"*/);
    sub_1B885B0(&StringLiteral_9090/*"MissionId_"*/);
    byte_4A5F015 = 1;
  }
  if ( !byte_4A57FF7 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_9090/*"MissionId_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v5, 0LL);
    if ( !byte_4A57FF7 )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A57FF7 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_69417088;
  }
  if ( loadFilter )
  {
    if ( !byte_4A57FF6 )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A57FF6 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v7, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_69417088(v8, 0LL);
      if ( !byte_4A57FF6 )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A57FF6 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4A5F024 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9154/*"MstMissionIndex"*/);
    byte_4A5F024 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9154/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4A5DC5D )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_69417088; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4A5F031 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11208/*"RecoveryIdx"*/);
    byte_4A5F031 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11208/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0LL);
    v3 = System_String__Concat_61707032(v3, v4, 0LL);
  }
  if ( !byte_4A5F05F )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v3, 0LL);
    if ( !byte_4A5F05F )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A5F05F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_69417088;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_69417088; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4A5F017 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11377/*"RewardType_"*/);
    byte_4A5F017 = 1;
  }
  if ( !byte_4A5F05C )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_11377/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v3, 0LL);
    if ( !byte_4A5F05C )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A5F05C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_69417088;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4A5F01D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9153/*"MstMission"*/);
    byte_4A5F01D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9153/*"MstMission"*/, 0, 0LL);
  if ( !byte_4A5DC63 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC63 = 1;
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
  if ( (byte_4A5F023 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5074/*"DailyMission"*/);
    sub_1B885B0(&StringLiteral_9153/*"MstMission"*/);
    sub_1B885B0(&StringLiteral_6345/*"ExtraMission"*/);
    sub_1B885B0(&StringLiteral_8408/*"LimitedMission"*/);
    byte_4A5F023 = 1;
  }
  if ( !byte_4A5DC5E )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5074/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4A5DC5F )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9153/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4A5DC60 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC60 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6345/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4A5DC61 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC61 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8408/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4A5F01A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4658/*"CompleteMission"*/);
    byte_4A5F01A = 1;
  }
  if ( !byte_4A5A01C )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5A01C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4658/*"CompleteMission"*/,
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
  if ( (byte_4A5F014 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8343/*"LastViewEventId_"*/);
    sub_1B885B0(&StringLiteral_10739/*"PriorityIndex_"*/);
    byte_4A5F014 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_8343/*"LastViewEventId_"*/, v2, 0LL);
  if ( !byte_4A5F05A )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_10739/*"PriorityIndex_"*/, v4, 0LL);
  if ( !byte_4A5F05B )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4A5F01C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5074/*"DailyMission"*/);
    byte_4A5F01C = 1;
  }
  if ( !byte_4A5DC5E )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5074/*"DailyMission"*/,
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
  if ( (byte_4A5F027 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6217/*"EventTowerState_"*/);
    byte_4A5F027 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_6217/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4A59CCB )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A59CCB = 1;
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
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x19
  System_String_o *v36; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v39; // w9
  __int64 v40; // x0
  int32_t v41; // [xsp+0h] [xbp-50h] BYREF
  int32_t v42; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v43; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5F029 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4A5F029 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
  v44 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v10, v11, v12);
  if ( !v9 )
    sub_1B8880C(v13, v14);
  v17 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( !v9->max_length )
    goto LABEL_23;
  v9->m_Items[0] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v17, v15, v16);
  v43 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
  v23 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[1], (int32_t)v23, v21, v22);
  v42 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v24, v25, v26);
  v29 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[2], (int32_t)v29, v27, v28);
  v41 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v41, v30, v31, v32);
  v35 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B886EC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_24:
      v40 = sub_1B88830(v13);
      sub_1B886D8(v40, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
LABEL_23:
    sub_1B88814(v13, v14);
  v9->m_Items[3] = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[3], (int32_t)v35, v33, v34);
  v36 = System_String__Format_61721540((System_String_o *)StringLiteral_6240/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  if ( !byte_4A58A0A )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A58A0A = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4A5F05E )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05E = 1;
    v39 = (unsigned __int8)byte_4A58A0A;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v39 )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A58A0A = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v36, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4A5F020 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6345/*"ExtraMission"*/);
    byte_4A5F020 = 1;
  }
  if ( !byte_4A5DC60 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC60 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6345/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4A577E8 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A577E8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4A5F022 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8408/*"LimitedMission"*/);
    byte_4A5F022 = 1;
  }
  if ( !byte_4A5DC61 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC61 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8408/*"LimitedMission"*/,
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
  if ( (byte_4A5F016 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6192/*"EventMission_"*/);
    sub_1B885B0(&StringLiteral_9090/*"MissionId_"*/);
    byte_4A5F016 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_9090/*"MissionId_"*/, v2, 0LL);
  if ( !byte_4A5F059 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F059 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v4, 0LL);
  if ( !byte_4A5F058 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F058 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4A5F025 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9154/*"MstMissionIndex"*/);
    byte_4A5F025 = 1;
  }
  if ( !byte_4A5DC5C )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9154/*"MstMissionIndex"*/,
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
  if ( (byte_4A5F018 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11377/*"RewardType_"*/);
    byte_4A5F018 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_11377/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4A5F05D )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4A5F01E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9153/*"MstMission"*/);
    byte_4A5F01E = 1;
  }
  if ( !byte_4A5DC5F )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5DC5F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9153/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
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
  if ( (byte_4A5F037 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3367/*"BulletinBoardMessageState"*/);
    byte_4A5F037 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_4A5F035 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3367/*"BulletinBoardMessageState"*/);
    byte_4A5F035 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_61718292((System_String_o *)StringLiteral_3367/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A5F02F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B885B0(&StringLiteral_4760/*"CooltimeNotification"*/);
    byte_4A5F02F = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4760/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A5F02B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B885B0(&StringLiteral_6312/*"ExpeditionNotification"*/);
    byte_4A5F02B = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6312/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A5F02D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B885B0(&StringLiteral_6609/*"FatigueNotiffication"*/);
    byte_4A5F02D = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6609/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_4A5F03C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7210/*"HeelPortraitDetailDialogState"*/);
    byte_4A5F03C = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_7210/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A5F039 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B885B0(&StringLiteral_8480/*"LotteryShopSkipState"*/);
    byte_4A5F039 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8480/*"LotteryShopSkipState"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4A5F032 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11208/*"RecoveryIdx"*/);
    byte_4A5F032 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11208/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_61707032(v5, v6, 0LL);
  }
  if ( !byte_4A5F05F )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F05F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4A5F060 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F060 = 1;
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
  if ( (byte_4A5F03E & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B885B0(&StringLiteral_14546/*"TradeNotification"*/);
    byte_4A5F03E = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14546/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4A5EFFA & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4A5EFFC & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4A5EFF8 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4A5F004 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F004 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4A5F00C & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4A5F008 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F008 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4A5F00A & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4A5F000 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F000 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4A5EFF6 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4A5F010 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F010 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4A5F00E & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4A5F002 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F002 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4A5EFF4 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4A5F006 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F006 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4A5EFF2 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4A5EFFE & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFFB & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFFD & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFF9 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F005 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F005 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F00D & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F009 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F009 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F00B & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F001 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F001 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFF7 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF7 = 1;
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

  if ( (byte_4A5F011 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F011 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F00F & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F00F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F003 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F003 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFF5 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5F007 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5F007 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFF3 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFF3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A5EFFF & 1) == 0 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5EFFF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}