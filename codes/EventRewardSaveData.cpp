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
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x22
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
  __int64 v75; // x0
  __int128 v76; // [xsp+0h] [xbp-80h] BYREF
  int v77; // [xsp+10h] [xbp-70h] BYREF
  int v78; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A00227 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_6165/*"EventMission_"*/, v11);
    sub_1B640C8(&StringLiteral_6190/*"EventTowerState_"*/, v12);
    sub_1B640C8(&StringLiteral_12686/*"ShopItemFilter"*/, v13);
    sub_1B640C8(&StringLiteral_3346/*"BulletinBoardMessageState"*/, v14);
    sub_1B640C8(&StringLiteral_11154/*"RecoveryIdx"*/, v15);
    sub_1B640C8(&StringLiteral_9111/*"MstMission"*/, v16);
    sub_1B640C8(&StringLiteral_4737/*"CooltimeNotification"*/, v17);
    sub_1B640C8(&StringLiteral_9112/*"MstMissionIndex"*/, v18);
    sub_1B640C8(&StringLiteral_6317/*"ExtraMission"*/, v19);
    sub_1B640C8(&StringLiteral_10687/*"PriorityIndex_"*/, v20);
    sub_1B640C8(&StringLiteral_6583/*"FatigueNotiffication"*/, v21);
    sub_1B640C8(&StringLiteral_8441/*"LotteryShopSkipState"*/, v22);
    sub_1B640C8(&StringLiteral_8369/*"LimitedMission"*/, v23);
    sub_1B640C8(&StringLiteral_11323/*"RewardType_"*/, v24);
    sub_1B640C8(&StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v25);
    sub_1B640C8(&StringLiteral_6284/*"ExpeditionNotification"*/, v26);
    sub_1B640C8(&StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, v27);
    sub_1B640C8(&StringLiteral_9048/*"MissionId_"*/, v28);
    byte_4A00227 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
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
      v35 = System_String__Concat_61375396((System_String_o *)StringLiteral_10687/*"PriorityIndex_"*/, v34, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
      v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v37 = System_String__Concat_61375396((System_String_o *)StringLiteral_9048/*"MissionId_"*/, v36, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v37, 0LL);
      v38 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v39 = System_String__Concat_61375396((System_String_o *)StringLiteral_6165/*"EventMission_"*/, v38, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v39, 0LL);
      v40 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v41 = System_String__Concat_61375396((System_String_o *)StringLiteral_11323/*"RewardType_"*/, v40, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v41, 0LL);
      v42 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v43 = System_String__Concat_61375396((System_String_o *)StringLiteral_6190/*"EventTowerState_"*/, v42, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v43, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
      v63 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v64 = System_String__Concat_61375396((System_String_o *)StringLiteral_11154/*"RecoveryIdx"*/, v63, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
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
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v69 = System_Int32__ToString((int)Instance + 16, 0LL);
            v70 = System_String__Concat_61386656((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v68, v69, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v70, 0LL);
          }
          while ( ++v67 < v66->fields._size );
        }
      }
      v71 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v72 = System_String__Concat_61375396((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v71, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v72, 0LL);
      v73 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v74 = System_String__Concat_61375396((System_String_o *)StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, v73, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v74, 0LL);
      LODWORD(m_CancellationTokenSource) = v32->fields.m_CancellationTokenSource;
      if ( (__int64)++v33 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v44 )
LABEL_43:
      sub_1B6432C(Instance, v30);
    v47 = 0;
    while ( 1 )
    {
      v48 = *((_QWORD *)&v45->fields._DispLog + v47);
      v49 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
      v79 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      if ( !v49 )
        break;
      v52 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B64204(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v49->max_length )
        goto LABEL_43;
      v49->m_Items[0] = v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v49->m_Items, (int32_t)v52, v50, v51);
      if ( !v48 )
        break;
      v78 = *(_DWORD *)(v48 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
      v55 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B64204(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v49->max_length <= 1 )
        goto LABEL_43;
      v49->m_Items[1] = v55;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[1], (int32_t)v55, v53, v54);
      v77 = *(_DWORD *)(v48 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
      v58 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B64204(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v49->max_length <= 2 )
        goto LABEL_43;
      v49->m_Items[2] = v58;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[2], (int32_t)v58, v56, v57);
      v76 = *(_OWORD *)(v48 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v76);
      v61 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1B64204(Instance, v49->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v75 = sub_1B64348(Instance);
          sub_1B641F0(v75, 0LL);
        }
      }
      if ( v49->max_length <= 3 )
        goto LABEL_43;
      v49->m_Items[3] = v61;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->m_Items[3], (int32_t)v61, v59, v60);
      v62 = System_String__Format_61389904((System_String_o *)StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v49, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0LL);
      if ( v46 == v47 )
        goto LABEL_33;
      if ( (unsigned int)++v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1B64324(Instance);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9111/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6317/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8369/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9112/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6583/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4737/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6284/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11154/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8441/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12686/*"ShopItemFilter"*/, 0LL);
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
  System_Object_array *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x22
  System_String_o *v31; // x0
  __int64 v32; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v34; // [xsp+10h] [xbp-80h] BYREF
  int v35; // [xsp+24h] [xbp-6Ch] BYREF
  int v36; // [xsp+28h] [xbp-68h] BYREF
  int v37; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A00253 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&object___TypeInfo, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_4A00253 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          sub_1B6432C(Instance, v9);
        v16 = 0;
        while ( 1 )
        {
          v17 = *((_QWORD *)&v14->fields._DispLog + v16);
          Instance = (DataManager_o *)sub_1B64170(object___TypeInfo, 4LL);
          if ( !v17 )
            break;
          v18 = (System_Object_array *)Instance;
          v37 = *(_DWORD *)(v17 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
          if ( !v18 )
            break;
          v21 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B64204(Instance, v18->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v18->max_length )
            goto LABEL_37;
          v18->m_Items[0] = v21;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)v18->m_Items, (int32_t)v21, v19, v20);
          v36 = *(_DWORD *)(v17 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
          v24 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B64204(Instance, v18->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v18->max_length <= 1 )
            goto LABEL_37;
          v18->m_Items[1] = v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[1], (int32_t)v24, v22, v23);
          v35 = *(_DWORD *)(v17 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
          v27 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B64204(Instance, v18->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v18->max_length <= 2 )
            goto LABEL_37;
          v18->m_Items[2] = v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[2], (int32_t)v27, v25, v26);
          v34 = *(_OWORD *)(v17 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v34);
          v30 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1B64204(Instance, v18->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v32 = sub_1B64348(Instance);
              sub_1B641F0(v32, 0LL);
            }
          }
          if ( v18->max_length > 3 )
          {
            v18->m_Items[3] = v30;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[3], (int32_t)v30, v28, v29);
            v31 = System_String__Format_61389904((System_String_o *)StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v18, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v31, 0LL);
            if ( v15 == v16 )
              goto LABEL_35;
            if ( (unsigned int)++v16 < LODWORD(v14->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1B64324(Instance);
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
  if ( (byte_4A00247 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11154/*"RecoveryIdx"*/, method);
    byte_4A00247 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11154/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_61375396(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4A0024A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3346/*"BulletinBoardMessageState"*/, method);
    byte_4A0024A = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61375396((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  if ( (byte_4A00248 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3346/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4A00248 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_61386656((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00242 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4737/*"CooltimeNotification"*/, v1);
    byte_4A00242 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4737/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0023E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6284/*"ExpeditionNotification"*/, v1);
    byte_4A0023E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6284/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00240 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6583/*"FatigueNotiffication"*/, v1);
    byte_4A00240 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6583/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4A0024F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, method);
    byte_4A0024F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61375396((System_String_o *)StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_69086012(v3, 0LL);
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
  if ( (byte_4A0024E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16054/*"_"*/, *(_QWORD *)&slot);
    sub_1B640C8(&StringLiteral_12687/*"ShopItemFilter_"*/, v3);
    byte_4A0024E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61388660(
           (System_String_o *)StringLiteral_12687/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_16054/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0024C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8441/*"LotteryShopSkipState"*/, v1);
    byte_4A0024C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8441/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4A00244 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12837/*"SpotCooltimeNotification_"*/, method);
    byte_4A00244 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_12837/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00251 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_14475/*"TradeNotification"*/, v1);
    byte_4A00251 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14475/*"TradeNotification"*/, 0, 0LL) != 0;
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

  if ( (byte_4A0022D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4635/*"CompleteMission"*/, v1);
    byte_4A0022D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4635/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_49FB2ED )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FB2ED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4A0022F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5051/*"DailyMission"*/, v1);
    byte_4A0022F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5051/*"DailyMission"*/, 0, 0LL);
  if ( !byte_49FEEF4 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FEEF4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69085444; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4A00226 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10687/*"PriorityIndex_"*/, method);
    byte_4A00226 = 1;
  }
  if ( !byte_49F934F )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_49F934F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_61375396((System_String_o *)StringLiteral_10687/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v3, 0LL);
    if ( !byte_49F934F )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v4);
      byte_49F934F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_69085444;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69085444; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4A0023A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6190/*"EventTowerState_"*/, method);
    byte_4A0023A = 1;
  }
  if ( !byte_49FAFB3 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_49FAFB3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_61375396((System_String_o *)StringLiteral_6190/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v3, 0LL);
    if ( !byte_49FAFB3 )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v4);
      byte_49FAFB3 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_69085444;
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
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  int32_t Int; // w19
  __int64 v29; // x0
  int32_t v30; // [xsp+0h] [xbp-50h] BYREF
  int32_t v31; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A0023C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1B640C8(&object___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4A0023C = 1;
  }
  v11 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
  v33 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v33);
  if ( !v11 )
    sub_1B64324(v12);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v11->m_Items, (int32_t)v16, v14, v15);
  v32 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v19 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v19, v17, v18);
  v31 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], (int32_t)v22, v20, v21);
  v30 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_20:
      v29 = sub_1B64348(v12);
      sub_1B641F0(v29, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_19:
    sub_1B6432C(v12, v13);
  v11->m_Items[3] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v25, v23, v24);
  v26 = System_String__Format_61389904((System_String_o *)StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v26, 0, 0LL);
  if ( !byte_4A002AA )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v27);
    byte_4A002AA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4A00233 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6317/*"ExtraMission"*/, v1);
    byte_4A00233 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6317/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_49FEEF6 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FEEF6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_69085444; // w19

  if ( !byte_49F8B1E )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_49F8B1E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(ItemFilterKeyName, 0LL);
    if ( !byte_49F8B1E )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v6);
      byte_49F8B1E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_69085444;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4A00235 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8369/*"LimitedMission"*/, v1);
    byte_4A00235 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8369/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_49FEEF7 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FEEF7 = 1;
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
  int32_t Int_69085444; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4A00229 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6165/*"EventMission_"*/, loadFilter);
    sub_1B640C8(&StringLiteral_9048/*"MissionId_"*/, v4);
    byte_4A00229 = 1;
  }
  if ( !byte_49F934E )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_49F934E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_61375396((System_String_o *)StringLiteral_9048/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v6, 0LL);
    if ( !byte_49F934E )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v7);
      byte_49F934E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_69085444;
  }
  if ( loadFilter )
  {
    if ( !byte_49F934D )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v7);
      byte_49F934D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_6165/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_69085444(v10, 0LL);
      if ( !byte_49F934D )
      {
        sub_1B640C8(&EventRewardSaveData_TypeInfo, v11);
        byte_49F934D = 1;
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

  if ( (byte_4A00238 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9112/*"MstMissionIndex"*/, v1);
    byte_4A00238 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9112/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_49FEEEF )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FEEEF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_69085444; // w19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4A00245 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11154/*"RecoveryIdx"*/, method);
    byte_4A00245 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11154/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_61375396(v3, v4, 0LL);
  }
  if ( !byte_4A002AB )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A002AB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v3, 0LL);
    if ( !byte_4A002AB )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v5);
      byte_4A002AB = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_69085444;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69085444; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4A0022B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11323/*"RewardType_"*/, method);
    byte_4A0022B = 1;
  }
  if ( !byte_4A002A8 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A002A8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_61375396((System_String_o *)StringLiteral_11323/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v3, 0LL);
    if ( !byte_4A002A8 )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v4);
      byte_4A002A8 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_69085444;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4A00231 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9111/*"MstMission"*/, v1);
    byte_4A00231 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9111/*"MstMission"*/, 0, 0LL);
  if ( !byte_49FEEF5 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v2);
    byte_49FEEF5 = 1;
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

  if ( (byte_4A00237 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5051/*"DailyMission"*/, v1);
    sub_1B640C8(&StringLiteral_9111/*"MstMission"*/, v2);
    sub_1B640C8(&StringLiteral_6317/*"ExtraMission"*/, v3);
    sub_1B640C8(&StringLiteral_8369/*"LimitedMission"*/, v4);
    byte_4A00237 = 1;
  }
  if ( !byte_49FEEF0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEF0 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5051/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_49FEEF1 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v5);
    byte_49FEEF1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9111/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_49FEEF2 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v6);
    byte_49FEEF2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6317/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_49FEEF3 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v7);
    byte_49FEEF3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8369/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0022E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4635/*"CompleteMission"*/, v1);
    byte_4A0022E = 1;
  }
  if ( !byte_49FB2EC )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FB2EC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4635/*"CompleteMission"*/,
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
  if ( (byte_4A00228 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8304/*"LastViewEventId_"*/, method);
    sub_1B640C8(&StringLiteral_10687/*"PriorityIndex_"*/, v2);
    byte_4A00228 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_8304/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_4A002A6 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v4);
    byte_4A002A6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_61375396((System_String_o *)StringLiteral_10687/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_4A002A7 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v7);
    byte_4A002A7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00230 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5051/*"DailyMission"*/, v1);
    byte_4A00230 = 1;
  }
  if ( !byte_49FEEF0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEF0 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5051/*"DailyMission"*/,
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
  if ( (byte_4A0023B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6190/*"EventTowerState_"*/, method);
    byte_4A0023B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_61375396((System_String_o *)StringLiteral_6190/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_49FAFB2 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v3);
    byte_49FAFB2 = 1;
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
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x19
  __int64 v26; // x1
  System_String_o *v27; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  __int64 v30; // x1
  int v31; // w9
  __int64 v32; // x0
  int32_t v33; // [xsp+0h] [xbp-50h] BYREF
  int32_t v34; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v35; // [xsp+8h] [xbp-48h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A0023D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1B640C8(&object___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4A0023D = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
  v36 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v36);
  if ( !v11 )
    sub_1B64324(v12);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v11->m_Items, (int32_t)v16, v14, v15);
  v35 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v19 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v19, v17, v18);
  v34 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], (int32_t)v22, v20, v21);
  v33 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_24:
      v32 = sub_1B64348(v12);
      sub_1B641F0(v32, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_23:
    sub_1B6432C(v12, v13);
  v11->m_Items[3] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v25, v23, v24);
  v27 = System_String__Format_61389904((System_String_o *)StringLiteral_6212/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_49F9C10 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v26);
    byte_49F9C10 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4A002AA )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v26);
    byte_4A002AA = 1;
    v31 = (unsigned __int8)byte_49F9C10;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v31 )
    {
      sub_1B640C8(&EventRewardSaveData_TypeInfo, v30);
      byte_49F9C10 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v27, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00234 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6317/*"ExtraMission"*/, v1);
    byte_4A00234 = 1;
  }
  if ( !byte_49FEEF2 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEF2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6317/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_49F8B1B )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v3);
    byte_49F8B1B = 1;
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

  if ( (byte_4A00236 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8369/*"LimitedMission"*/, v1);
    byte_4A00236 = 1;
  }
  if ( !byte_49FEEF3 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEF3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8369/*"LimitedMission"*/,
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
  if ( (byte_4A0022A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6165/*"EventMission_"*/, method);
    sub_1B640C8(&StringLiteral_9048/*"MissionId_"*/, v2);
    byte_4A0022A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_9048/*"MissionId_"*/, v3, 0LL);
  if ( !byte_4A002A5 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v4);
    byte_4A002A5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_61375396((System_String_o *)StringLiteral_6165/*"EventMission_"*/, v6, 0LL);
  if ( !byte_4A002A4 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v7);
    byte_4A002A4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00239 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9112/*"MstMissionIndex"*/, v1);
    byte_4A00239 = 1;
  }
  if ( !byte_49FEEEE )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEEE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9112/*"MstMissionIndex"*/,
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
  if ( (byte_4A0022C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11323/*"RewardType_"*/, method);
    byte_4A0022C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_61375396((System_String_o *)StringLiteral_11323/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4A002A9 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v3);
    byte_4A002A9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00232 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9111/*"MstMission"*/, v1);
    byte_4A00232 = 1;
  }
  if ( !byte_49FEEF1 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_49FEEF1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9111/*"MstMission"*/,
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
  if ( (byte_4A0024B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3346/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_4A0024B = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_4A00249 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3346/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4A00249 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_61386656((System_String_o *)StringLiteral_3346/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A00243 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B640C8(&StringLiteral_4737/*"CooltimeNotification"*/, method);
    byte_4A00243 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4737/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A0023F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B640C8(&StringLiteral_6284/*"ExpeditionNotification"*/, method);
    byte_4A0023F = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6284/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A00241 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B640C8(&StringLiteral_6583/*"FatigueNotiffication"*/, method);
    byte_4A00241 = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6583/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_4A00250 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_4A00250 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_7180/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4A0024D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B640C8(&StringLiteral_8441/*"LotteryShopSkipState"*/, method);
    byte_4A0024D = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8441/*"LotteryShopSkipState"*/, v2, 0LL);
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
  if ( (byte_4A00246 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11154/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_4A00246 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11154/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_61375396(v5, v6, 0LL);
  }
  if ( !byte_4A002AB )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4A002AB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = EventRecoveryIdx_k__BackingField;
  if ( !byte_4A002AC )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4A002AC = 1;
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
  if ( (byte_4A00252 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1B640C8(&StringLiteral_14475/*"TradeNotification"*/, method);
    byte_4A00252 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14475/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0020E & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0020E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00210 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00210 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0020C & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0020C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00218 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00218 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00220 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00220 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0021C & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0021C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0021E & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0021E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00214 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00214 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0020A & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0020A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00224 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00224 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00222 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00222 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00216 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00216 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00208 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00208 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0021A & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A0021A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00206 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00206 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00212 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, v1);
    byte_4A00212 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0020F & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0020F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00211 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00211 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0020D & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0020D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00219 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00219 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00221 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00221 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0021D & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0021D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0021F & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0021F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00215 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00215 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0020B & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0020B = 1;
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

  if ( (byte_4A00225 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00225 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00223 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00223 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00217 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00217 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00209 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00209 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A0021B & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A0021B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00207 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00207 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4A00213 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardSaveData_TypeInfo, method);
    byte_4A00213 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}