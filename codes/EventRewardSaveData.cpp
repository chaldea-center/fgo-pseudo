void EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v3; // x23
  unsigned __int64 v4; // x25
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  struct System_Threading_CancellationTokenSource_o *v15; // x8
  DataManager_o *v16; // x20
  int v17; // w19
  int v18; // w26
  __int64 v19; // x29
  System_Object_array *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  Il2CppObject *v48; // x22
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v53; // x20
  int32_t v54; // w21
  System_String_o *v55; // x22
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  __int64 v64; // x0
  __int128 v65; // [xsp+0h] [xbp-80h] BYREF
  int v66; // [xsp+10h] [xbp-70h] BYREF
  int v67; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v68; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C31E63 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6231/*"EventMission_"*/);
    sub_1C32C20(&StringLiteral_6256/*"EventTowerState_"*/);
    sub_1C32C20(&StringLiteral_12851/*"ShopItemFilter"*/);
    sub_1C32C20(&StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/);
    sub_1C32C20(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    sub_1C32C20(&StringLiteral_11236/*"RecoveryIdx"*/);
    sub_1C32C20(&StringLiteral_9182/*"MstMission"*/);
    sub_1C32C20(&StringLiteral_4723/*"CooltimeNotification"*/);
    sub_1C32C20(&StringLiteral_9183/*"MstMissionIndex"*/);
    sub_1C32C20(&StringLiteral_6382/*"ExtraMission"*/);
    sub_1C32C20(&StringLiteral_10738/*"PriorityIndex_"*/);
    sub_1C32C20(&StringLiteral_6644/*"FatigueNotiffication"*/);
    sub_1C32C20(&StringLiteral_8505/*"LotteryShopSkipState"*/);
    sub_1C32C20(&StringLiteral_8434/*"LimitedMission"*/);
    sub_1C32C20(&StringLiteral_11406/*"RewardType_"*/);
    sub_1C32C20(&StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1C32C20(&StringLiteral_6352/*"ExpeditionNotification"*/);
    sub_1C32C20(&StringLiteral_7299/*"HeelPortraitDetailDialogState"*/);
    sub_1C32C20(&StringLiteral_9120/*"MissionId_"*/);
    byte_4C31E63 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v3 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v3->fields._DispLog + v4);
      v5 = System_Int32__ToString((int32_t)&eventId, 0);
      v6 = System_String__Concat_63518544((System_String_o *)StringLiteral_10738/*"PriorityIndex_"*/, v5, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v6, 0);
      v7 = System_Int32__ToString((int32_t)&eventId, 0);
      v8 = System_String__Concat_63518544((System_String_o *)StringLiteral_9120/*"MissionId_"*/, v7, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v8, 0);
      v9 = System_Int32__ToString((int32_t)&eventId, 0);
      v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_6231/*"EventMission_"*/, v9, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v10, 0);
      v11 = System_Int32__ToString((int32_t)&eventId, 0);
      v12 = System_String__Concat_63518544((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v11, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v12, 0);
      v13 = System_Int32__ToString((int32_t)&eventId, 0);
      v14 = System_String__Concat_63518544((System_String_o *)StringLiteral_6256/*"EventTowerState_"*/, v13, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v14, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0);
      if ( Instance )
      {
        v15 = Instance->fields.m_CancellationTokenSource;
        v16 = Instance;
        if ( v15 )
        {
          v17 = (_DWORD)v15 - 1;
          if ( (int)v15 >= 1 )
            break;
        }
      }
LABEL_33:
      v50 = System_Int32__ToString((int32_t)&eventId, 0);
      v51 = System_String__Concat_63518544((System_String_o *)StringLiteral_11236/*"RecoveryIdx"*/, v50, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v51, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0);
      if ( AvailableEntityList )
      {
        v53 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v54 = 0;
          do
          {
            v55 = System_Int32__ToString((int32_t)&eventId, 0);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v53,
                                          v54,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v56 = System_Int32__ToString((int)Instance + 16, 0);
            v57 = System_String__Concat_63556792((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v55, v56, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v57, 0);
          }
          while ( ++v54 < v53->fields._size );
        }
      }
      v58 = System_Int32__ToString((int32_t)&eventId, 0);
      v59 = System_String__Concat_63518544((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v58, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v59, 0);
      v60 = System_Int32__ToString((int32_t)&eventId, 0);
      v61 = System_String__Concat_63518544((System_String_o *)StringLiteral_7299/*"HeelPortraitDetailDialogState"*/, v60, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v61, 0);
      v62 = System_Int32__ToString((int32_t)&eventId, 0);
      v63 = System_String__Concat_63518544((System_String_o *)StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/, v62, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v63, 0);
      LODWORD(m_CancellationTokenSource) = v3->fields.m_CancellationTokenSource;
      if ( (__int64)++v4 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v15 )
LABEL_43:
      sub_1C32E84(Instance);
    v18 = 0;
    while ( 1 )
    {
      v19 = *((_QWORD *)&v16->fields._DispLog + v18);
      v20 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 4);
      v68 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v21, v22, v23, v24, v25, v26);
      if ( !v20 )
        break;
      v27 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C32D5C(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !LODWORD(v20->max_length) )
        goto LABEL_43;
      v20->m_Items[0] = v27;
      Instance = (DataManager_o *)sub_1C32BC4(v20->m_Items, v27);
      if ( !v19 )
        break;
      v67 = *(_DWORD *)(v19 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v28, v29, v30, v31, v32, v33);
      v34 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C32D5C(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v20->max_length) <= 1 )
        goto LABEL_43;
      v20->m_Items[1] = v34;
      sub_1C32BC4(&v20->m_Items[1], v34);
      v66 = *(_DWORD *)(v19 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v35, v36, v37, v38, v39, v40);
      v41 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C32D5C(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v20->max_length) <= 2 )
        goto LABEL_43;
      v20->m_Items[2] = v41;
      sub_1C32BC4(&v20->m_Items[2], v41);
      v65 = *(_OWORD *)(v19 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v65,
                                    v42,
                                    v43,
                                    v44,
                                    v45,
                                    v46,
                                    v47);
      v48 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C32D5C(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v64 = sub_1C32EA0();
          sub_1C32D48(v64, 0);
        }
      }
      if ( LODWORD(v20->max_length) <= 3 )
        goto LABEL_43;
      v20->m_Items[3] = v48;
      sub_1C32BC4(&v20->m_Items[3], v48);
      v49 = System_String__Format_63559972((System_String_o *)StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v20, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v49, 0);
      if ( v17 == v18 )
        goto LABEL_33;
      if ( (unsigned int)++v18 >= LODWORD(v16->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1C32E7C(Instance);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9182/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6382/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8434/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9183/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6644/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4723/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6352/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11236/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8505/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12851/*"ShopItemFilter"*/, 0);
}


void EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v2; // x27
  unsigned int v3; // w25
  __int64 v4; // x19
  struct System_Threading_CancellationTokenSource_o *v5; // x8
  DataManager_o *v6; // x20
  int v7; // w26
  int v8; // w24
  __int64 v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  DataManager_o *v16; // x21
  DataManager_o *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  DataManager_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  DataManager_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  DataManager_o *v38; // x22
  System_String_o *v39; // x0
  __int64 v40; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v42; // [xsp+10h] [xbp-80h] BYREF
  int v43; // [xsp+24h] [xbp-6Ch] BYREF
  int v44; // [xsp+28h] [xbp-68h] BYREF
  int v45; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C31E93 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C31E93 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0);
  if ( Instance )
  {
    v2 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v3 = 0;
        while ( 1 )
        {
          v4 = *((_QWORD *)&v2->fields._DispLog + (int)v3);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v4 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v4 + 16),
                                        0);
          if ( Instance )
          {
            v5 = Instance->fields.m_CancellationTokenSource;
            v6 = Instance;
            if ( v5 )
            {
              v7 = (_DWORD)v5 - 1;
              if ( (int)v5 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v3 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v3 >= LODWORD(v2->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v5 )
LABEL_37:
          sub_1C32E84(Instance);
        v8 = 0;
        while ( 1 )
        {
          v9 = *((_QWORD *)&v6->fields._DispLog + v8);
          Instance = (DataManager_o *)sub_1C32CC8(object___TypeInfo, 4);
          if ( !v9 )
            break;
          v16 = Instance;
          v45 = *(_DWORD *)(v9 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v10, v11, v12, v13, v14, v15);
          if ( !v16 )
            break;
          v17 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C32D5C(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
            goto LABEL_37;
          *(_QWORD *)&v16->fields._DispLog = v17;
          sub_1C32BC4(&v16->fields._DispLog, v17);
          v44 = *(_DWORD *)(v9 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v18, v19, v20, v21, v22, v23);
          v24 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C32D5C(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 1 )
            goto LABEL_37;
          v16->fields.datalist = (struct DataMasterBase_array *)v24;
          sub_1C32BC4(&v16->fields.datalist, v24);
          v43 = *(_DWORD *)(v9 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v25, v26, v27, v28, v29, v30);
          v31 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C32D5C(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v16->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v31;
          sub_1C32BC4(&v16->fields.lookup, v31);
          v42 = *(_OWORD *)(v9 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v42,
                                        v32,
                                        v33,
                                        v34,
                                        v35,
                                        v36,
                                        v37);
          v38 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C32D5C(Instance, v16->klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v40 = sub_1C32EA0();
              sub_1C32D48(v40, 0);
            }
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) > 3 )
          {
            v16->fields.masterDataBytes = (struct System_Byte_array *)v38;
            sub_1C32BC4(&v16->fields.masterDataBytes, v38);
            v39 = System_String__Format_63559972((System_String_o *)StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, (System_Object_array *)v16, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v39, 0);
            if ( v7 == v8 )
              goto LABEL_35;
            if ( (unsigned int)++v8 < LODWORD(v6->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1C32E7C(Instance);
      }
    }
  }
}


void EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C31E83 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11236/*"RecoveryIdx"*/);
    byte_4C31E83 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11236/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_63518544(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C31E91 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C31E91 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71182452(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C31E86 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C31E86 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0);
}


bool EventRewardSaveData__GetBulletInBoardMessageState(int32_t eventId, int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = id;
  v8 = eventId;
  if ( (byte_4C31E84 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C31E84 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_63556792((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4C31E7E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4723/*"CooltimeNotification"*/);
    byte_4C31E7E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4723/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_4C31E8F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4834/*"CraftNotification"*/);
    byte_4C31E8F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4834/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4C31E7A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6352/*"ExpeditionNotification"*/);
    byte_4C31E7A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6352/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4C31E7C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6644/*"FatigueNotiffication"*/);
    byte_4C31E7C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6644/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C31E8B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_7299/*"HeelPortraitDetailDialogState"*/);
    byte_4C31E8B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_7299/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71182452(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = slot;
  v7 = eventId;
  if ( (byte_4C31E8A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_12852/*"ShopItemFilter_"*/);
    byte_4C31E8A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_63558796(
           (System_String_o *)StringLiteral_12852/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16107/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4C31E88 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8505/*"LotteryShopSkipState"*/);
    byte_4C31E88 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8505/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4C31E80 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12998/*"SpotCooltimeNotification_"*/);
    byte_4C31E80 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_12998/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4C31E8D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_14568/*"TradeNotification"*/);
    byte_4C31E8D = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14568/*"TradeNotification"*/, 0, 0) != 0;
}


void EventRewardSaveData__LoadAllMissionData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  EventRewardSaveData__LoadDailyMissionData(method);
  EventRewardSaveData__LoadWeeklyMissionData(v1);
  EventRewardSaveData__LoadExtraMissionData(v2);
  EventRewardSaveData__LoadLimitedMissionData(v3);
}


void EventRewardSaveData__LoadCompleteMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E69 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4629/*"CompleteMission"*/);
    byte_4C31E69 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4629/*"CompleteMission"*/, 0, 0);
  if ( !byte_4C31EB9 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E6B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5043/*"DailyMission"*/);
    byte_4C31E6B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5043/*"DailyMission"*/, 0, 0);
  if ( !byte_4C31EBB )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71181884; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C31E62 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_10738/*"PriorityIndex_"*/);
    byte_4C31E62 = 1;
  }
  if ( !byte_4C31EB4 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_10738/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(v3, 0);
    if ( !byte_4C31EB4 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EB4 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_71181884;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71181884; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C31E76 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6256/*"EventTowerState_"*/);
    byte_4C31E76 = 1;
  }
  if ( !byte_4C31EC5 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_6256/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(v3, 0);
    if ( !byte_4C31EC5 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC5 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_71181884;
  }
}


void EventRewardSaveData__LoadEventVoicePlayCount(
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
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x0
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x20
  System_String_o *v39; // x0
  int32_t Int; // w19
  __int64 v41; // x0
  int32_t v42; // [xsp+0h] [xbp-50h] BYREF
  int32_t v43; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C31E78 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C31E78 = 1;
  }
  v9 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 4);
  v45 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v10, v11, v12, v13, v14, v15);
  if ( !v9 )
    sub_1C32E7C(v16);
  v17 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v17;
  sub_1C32BC4(v9->m_Items, v17);
  v44 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v18, v19, v20, v21, v22, v23);
  v24 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = v24;
  sub_1C32BC4(&v9->m_Items[1], v24);
  v43 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v25, v26, v27, v28, v29, v30);
  v31 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v31;
  sub_1C32BC4(&v9->m_Items[2], v31);
  v42 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34, v35, v36, v37);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_20:
      v41 = sub_1C32EA0();
      sub_1C32D48(v41, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_19:
    sub_1C32E84(v16);
  v9->m_Items[3] = v38;
  sub_1C32BC4(&v9->m_Items[3], v38);
  v39 = System_String__Format_63559972((System_String_o *)StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v39, 0, 0);
  if ( !byte_4C31EC7 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E6F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6382/*"ExtraMission"*/);
    byte_4C31E6F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6382/*"ExtraMission"*/, 0, 0);
  if ( !byte_4C31EBF )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_71181884; // w19

  if ( !byte_4C31ECB )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31ECB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(ItemFilterKeyName, 0);
    if ( !byte_4C31ECB )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31ECB = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_71181884;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E71 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8434/*"LimitedMission"*/);
    byte_4C31E71 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8434/*"LimitedMission"*/, 0, 0);
  if ( !byte_4C31EC1 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_71181884; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4C31E65 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6231/*"EventMission_"*/);
    sub_1C32C20(&StringLiteral_9120/*"MissionId_"*/);
    byte_4C31E65 = 1;
  }
  if ( !byte_4C31EB2 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_9120/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(v5, 0);
    if ( !byte_4C31EB2 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EB2 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_71181884;
  }
  if ( loadFilter )
  {
    if ( !byte_4C31EB3 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EB3 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_63518544((System_String_o *)StringLiteral_6231/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_71181884(v8, 0);
      if ( !byte_4C31EB3 )
      {
        sub_1C32C20(&EventRewardSaveData_TypeInfo);
        byte_4C31EB3 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E74 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9183/*"MstMissionIndex"*/);
    byte_4C31E74 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9183/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_4C31EC3 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_71181884; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E81 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11236/*"RecoveryIdx"*/);
    byte_4C31E81 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11236/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_63518544(v3, v4, 0);
  }
  if ( !byte_4C31EC9 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(v3, 0);
    if ( !byte_4C31EC9 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC9 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_71181884;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71181884; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C31E67 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11406/*"RewardType_"*/);
    byte_4C31E67 = 1;
  }
  if ( !byte_4C31EB7 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(v3, 0);
    if ( !byte_4C31EB7 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EB7 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_71181884;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C31E6D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9182/*"MstMission"*/);
    byte_4C31E6D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9182/*"MstMission"*/, 0, 0);
  if ( !byte_4C31EBD )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = Int;
}


bool EventRewardSaveData__NeedSpotCooltimeNotification(int32_t eventId, const MethodInfo *method)
{
  System_String_o *SpotCooltimeNotificationKey; // x0

  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, method);
  return UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0) != 0;
}


void EventRewardSaveData__SaveAllMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E73 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5043/*"DailyMission"*/);
    sub_1C32C20(&StringLiteral_9182/*"MstMission"*/);
    sub_1C32C20(&StringLiteral_6382/*"ExtraMission"*/);
    sub_1C32C20(&StringLiteral_8434/*"LimitedMission"*/);
    byte_4C31E73 = 1;
  }
  if ( !byte_4C31EBC )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5043/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_4C31EBE )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9182/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_4C31EC0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC0 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6382/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_4C31EC2 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8434/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E6A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4629/*"CompleteMission"*/);
    byte_4C31E6A = 1;
  }
  if ( !byte_4C31EBA )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4629/*"CompleteMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCurrentEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E64 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8369/*"LastViewEventId_"*/);
    sub_1C32C20(&StringLiteral_10738/*"PriorityIndex_"*/);
    byte_4C31E64 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_8369/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_4C31EB5 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_10738/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_4C31EB6 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E6C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5043/*"DailyMission"*/);
    byte_4C31E6C = 1;
  }
  if ( !byte_4C31EBC )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5043/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4C31E77 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6256/*"EventTowerState_"*/);
    byte_4C31E77 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_6256/*"EventTowerState_"*/, v2, 0);
  if ( !byte_4C31EC6 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveEventVoicePlayCount(
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
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x0
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x19
  System_String_o *v39; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v42; // w9
  __int64 v43; // x0
  int32_t v44; // [xsp+0h] [xbp-50h] BYREF
  int32_t v45; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C31E79 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C31E79 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 4);
  v47 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v10, v11, v12, v13, v14, v15);
  if ( !v9 )
    sub_1C32E7C(v16);
  v17 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v17;
  sub_1C32BC4(v9->m_Items, v17);
  v46 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v18, v19, v20, v21, v22, v23);
  v24 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = v24;
  sub_1C32BC4(&v9->m_Items[1], v24);
  v45 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v25, v26, v27, v28, v29, v30);
  v31 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v31;
  sub_1C32BC4(&v9->m_Items[2], v31);
  v44 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v32, v33, v34, v35, v36, v37);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C32D5C(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_24:
      v43 = sub_1C32EA0();
      sub_1C32D48(v43, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C32E84(v16);
  v9->m_Items[3] = v38;
  sub_1C32BC4(&v9->m_Items[3], v38);
  v39 = System_String__Format_63559972((System_String_o *)StringLiteral_6279/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_4C31EC8 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC8 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4C31EC7 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC7 = 1;
    v42 = (unsigned __int8)byte_4C31EC8;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v42 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC8 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v39, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E70 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6382/*"ExtraMission"*/);
    byte_4C31E70 = 1;
  }
  if ( !byte_4C31EC0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC0 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6382/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4C31ECC )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31ECC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E72 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8434/*"LimitedMission"*/);
    byte_4C31E72 = 1;
  }
  if ( !byte_4C31EC2 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8434/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMissionData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E66 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6231/*"EventMission_"*/);
    sub_1C32C20(&StringLiteral_9120/*"MissionId_"*/);
    byte_4C31E66 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_9120/*"MissionId_"*/, v2, 0);
  if ( !byte_4C31EB1 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_6231/*"EventMission_"*/, v4, 0);
  if ( !byte_4C31EB0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB0 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C31E75 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9183/*"MstMissionIndex"*/);
    byte_4C31E75 = 1;
  }
  if ( !byte_4C31EC4 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9183/*"MstMissionIndex"*/,
    EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4C31E68 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11406/*"RewardType_"*/);
    byte_4C31E68 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v2, 0);
  if ( !byte_4C31EB8 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EB8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4C31E6E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9182/*"MstMission"*/);
    byte_4C31E6E = 1;
  }
  if ( !byte_4C31EBE )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EBE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9182/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBoxGachaPlayedVoice(int32_t eventId, System_String_o *saveData, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E92 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C31E92 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_8228/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E87 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C31E87 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetInt(v5, messageId, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardMessageState(
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
  if ( (byte_4C31E85 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C31E85 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_63556792((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E7F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_4723/*"CooltimeNotification"*/);
    byte_4C31E7F = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4723/*"CooltimeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E90 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_4834/*"CraftNotification"*/);
    byte_4C31E90 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4834/*"CraftNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E7B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_6352/*"ExpeditionNotification"*/);
    byte_4C31E7B = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6352/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E7D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_6644/*"FatigueNotiffication"*/);
    byte_4C31E7D = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6644/*"FatigueNotiffication"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetHeelPortraitDetailDialogState(
        int32_t eventId,
        System_String_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C31E8C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_7299/*"HeelPortraitDetailDialogState"*/);
    byte_4C31E8C = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_7299/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E89 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_8505/*"LotteryShopSkipState"*/);
    byte_4C31E89 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8505/*"LotteryShopSkipState"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4C31E82 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11236/*"RecoveryIdx"*/);
    byte_4C31E82 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11236/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0);
    v5 = System_String__Concat_63518544(v5, v6, 0);
  }
  if ( !byte_4C31EC9 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4C31ECA )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31ECA = 1;
    idx = EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, idx, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetSpotCooltimeNotification(int32_t eventId, bool value, const MethodInfo *method)
{
  int32_t v4; // w19
  System_String_o *SpotCooltimeNotificationKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x0

  v4 = value;
  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, (const MethodInfo *)value);
  if ( (UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0) != 0) != v4 )
  {
    v7 = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, v6);
    UnityEngine_PlayerPrefs__SetInt(v7, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetTradeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C31E8E & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C32C20(&StringLiteral_14568/*"TradeNotification"*/);
    byte_4C31E8E = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14568/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E4A & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E4C & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4C31E48 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E48 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4C31E54 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E54 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4C31E5C & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4C31E58 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E58 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4C31E5A & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E50 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E50 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4C31E46 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E46 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4C31E60 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E60 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E5E & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E52 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E52 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4C31E44 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E44 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C31E56 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E56 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4C31E42 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E42 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4C31E4E & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E4B & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E4D & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E49 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E49 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E55 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E55 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E5D & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E59 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E59 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E5B & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E51 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E51 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E47 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E47 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void EventRewardSaveData__set_HeelPortraitDetailDialogState(System_String_o *value, const MethodInfo *method)
{
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4C31E61 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E61 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1C32BC4(&static_fields->_HeelPortraitDetailDialogState_k__BackingField, value);
}


void EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E5F & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E5F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E53 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E53 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E45 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E45 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E57 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E57 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E43 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E43 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C31E4F & 1) == 0 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31E4F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}