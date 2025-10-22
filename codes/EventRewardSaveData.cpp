void EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
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
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v54; // x20
  int32_t v55; // w21
  System_String_o *v56; // x22
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  __int64 v65; // x0
  __int128 v66; // [xsp+0h] [xbp-80h] BYREF
  int v67; // [xsp+10h] [xbp-70h] BYREF
  int v68; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v69; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C511CD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_6232/*"EventMission_"*/);
    sub_1C3E564(&StringLiteral_6257/*"EventTowerState_"*/);
    sub_1C3E564(&StringLiteral_12860/*"ShopItemFilter"*/);
    sub_1C3E564(&StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/);
    sub_1C3E564(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    sub_1C3E564(&StringLiteral_11239/*"RecoveryIdx"*/);
    sub_1C3E564(&StringLiteral_9183/*"MstMission"*/);
    sub_1C3E564(&StringLiteral_4723/*"CooltimeNotification"*/);
    sub_1C3E564(&StringLiteral_9184/*"MstMissionIndex"*/);
    sub_1C3E564(&StringLiteral_6383/*"ExtraMission"*/);
    sub_1C3E564(&StringLiteral_10741/*"PriorityIndex_"*/);
    sub_1C3E564(&StringLiteral_6645/*"FatigueNotiffication"*/);
    sub_1C3E564(&StringLiteral_8506/*"LotteryShopSkipState"*/);
    sub_1C3E564(&StringLiteral_8435/*"LimitedMission"*/);
    sub_1C3E564(&StringLiteral_11409/*"RewardType_"*/);
    sub_1C3E564(&StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1C3E564(&StringLiteral_6353/*"ExpeditionNotification"*/);
    sub_1C3E564(&StringLiteral_7300/*"HeelPortraitDetailDialogState"*/);
    sub_1C3E564(&StringLiteral_9121/*"MissionId_"*/);
    byte_4C511CD = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v4 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v4->fields._DispLog + v5);
      v6 = System_Int32__ToString((int32_t)&eventId, 0);
      v7 = System_String__Concat_63636468((System_String_o *)StringLiteral_10741/*"PriorityIndex_"*/, v6, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
      v8 = System_Int32__ToString((int32_t)&eventId, 0);
      v9 = System_String__Concat_63636468((System_String_o *)StringLiteral_9121/*"MissionId_"*/, v8, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
      v10 = System_Int32__ToString((int32_t)&eventId, 0);
      v11 = System_String__Concat_63636468((System_String_o *)StringLiteral_6232/*"EventMission_"*/, v10, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
      v12 = System_Int32__ToString((int32_t)&eventId, 0);
      v13 = System_String__Concat_63636468((System_String_o *)StringLiteral_11409/*"RewardType_"*/, v12, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
      v14 = System_Int32__ToString((int32_t)&eventId, 0);
      v15 = System_String__Concat_63636468((System_String_o *)StringLiteral_6257/*"EventTowerState_"*/, v14, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0);
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
      v51 = System_Int32__ToString((int32_t)&eventId, 0);
      v52 = System_String__Concat_63636468((System_String_o *)StringLiteral_11239/*"RecoveryIdx"*/, v51, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v52, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0);
      if ( AvailableEntityList )
      {
        v54 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v55 = 0;
          do
          {
            v56 = System_Int32__ToString((int32_t)&eventId, 0);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v54,
                                          v55,
                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v57 = System_Int32__ToString((int)Instance + 16, 0);
            v58 = System_String__Concat_63674716((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v56, v57, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v58, 0);
          }
          while ( ++v55 < v54->fields._size );
        }
      }
      v59 = System_Int32__ToString((int32_t)&eventId, 0);
      v60 = System_String__Concat_63636468((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v59, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v60, 0);
      v61 = System_Int32__ToString((int32_t)&eventId, 0);
      v62 = System_String__Concat_63636468((System_String_o *)StringLiteral_7300/*"HeelPortraitDetailDialogState"*/, v61, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0);
      v63 = System_Int32__ToString((int32_t)&eventId, 0);
      v64 = System_String__Concat_63636468((System_String_o *)StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/, v63, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0);
      LODWORD(m_CancellationTokenSource) = v4->fields.m_CancellationTokenSource;
      if ( (__int64)++v5 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v16 )
LABEL_43:
      sub_1C3E7C8(Instance, v2);
    v19 = 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)&v17->fields._DispLog + v19);
      v21 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
      v69 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v22, v23, v24, v25, v26, v27);
      if ( !v21 )
        break;
      v28 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C3E6A0(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !LODWORD(v21->max_length) )
        goto LABEL_43;
      v21->m_Items[0] = v28;
      Instance = (DataManager_o *)sub_1C3E508(v21->m_Items, v28);
      if ( !v20 )
        break;
      v68 = *(_DWORD *)(v20 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v29, v30, v31, v32, v33, v34);
      v35 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C3E6A0(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v21->max_length) <= 1 )
        goto LABEL_43;
      v21->m_Items[1] = v35;
      sub_1C3E508(&v21->m_Items[1], v35);
      v67 = *(_DWORD *)(v20 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v36, v37, v38, v39, v40, v41);
      v42 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C3E6A0(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v21->max_length) <= 2 )
        goto LABEL_43;
      v21->m_Items[2] = v42;
      sub_1C3E508(&v21->m_Items[2], v42);
      v66 = *(_OWORD *)(v20 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v66,
                                    v43,
                                    v44,
                                    v45,
                                    v46,
                                    v47,
                                    v48);
      v49 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C3E6A0(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v65 = sub_1C3E7E4();
          sub_1C3E68C(v65, 0);
        }
      }
      if ( LODWORD(v21->max_length) <= 3 )
        goto LABEL_43;
      v21->m_Items[3] = v49;
      sub_1C3E508(&v21->m_Items[3], v49);
      v50 = System_String__Format_63677896((System_String_o *)StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v50, 0);
      if ( v18 == v19 )
        goto LABEL_33;
      if ( (unsigned int)++v19 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1C3E7C0(Instance, v2);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9183/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6383/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8435/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9184/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6645/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4723/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6353/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11239/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8506/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12860/*"ShopItemFilter"*/, 0);
}


void EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
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
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  DataManager_o *v17; // x21
  DataManager_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  DataManager_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  DataManager_o *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  DataManager_o *v39; // x22
  System_String_o *v40; // x0
  __int64 v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v43; // [xsp+10h] [xbp-80h] BYREF
  int v44; // [xsp+24h] [xbp-6Ch] BYREF
  int v45; // [xsp+28h] [xbp-68h] BYREF
  int v46; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C511FD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C511FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v5 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v5 + 16),
                                        0);
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
          sub_1C3E7C8(Instance, v2);
        v9 = 0;
        while ( 1 )
        {
          v10 = *((_QWORD *)&v7->fields._DispLog + v9);
          Instance = (DataManager_o *)sub_1C3E60C(object___TypeInfo, 4);
          if ( !v10 )
            break;
          v17 = Instance;
          v46 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v11, v12, v13, v14, v15, v16);
          if ( !v17 )
            break;
          v18 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C3E6A0(Instance, v17->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !LODWORD(v17->fields.m_CancellationTokenSource) )
            goto LABEL_37;
          *(_QWORD *)&v17->fields._DispLog = v18;
          sub_1C3E508(&v17->fields._DispLog, v18);
          v45 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v19, v20, v21, v22, v23, v24);
          v25 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C3E6A0(Instance, v17->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 1 )
            goto LABEL_37;
          v17->fields.datalist = (struct DataMasterBase_array *)v25;
          sub_1C3E508(&v17->fields.datalist, v25);
          v44 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v26, v27, v28, v29, v30, v31);
          v32 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C3E6A0(Instance, v17->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v17->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v32;
          sub_1C3E508(&v17->fields.lookup, v32);
          v43 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v43,
                                        v33,
                                        v34,
                                        v35,
                                        v36,
                                        v37,
                                        v38);
          v39 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C3E6A0(Instance, v17->klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v41 = sub_1C3E7E4();
              sub_1C3E68C(v41, 0);
            }
          }
          if ( LODWORD(v17->fields.m_CancellationTokenSource) > 3 )
          {
            v17->fields.masterDataBytes = (struct System_Byte_array *)v39;
            sub_1C3E508(&v17->fields.masterDataBytes, v39);
            v40 = System_String__Format_63677896((System_String_o *)StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, (System_Object_array *)v17, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v40, 0);
            if ( v8 == v9 )
              goto LABEL_35;
            if ( (unsigned int)++v9 < LODWORD(v7->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1C3E7C0(Instance, v2);
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
  if ( (byte_4C511ED & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11239/*"RecoveryIdx"*/);
    byte_4C511ED = 1;
  }
  v3 = (System_String_o *)StringLiteral_11239/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_63636468(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C511FB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C511FB = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71300376(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C511F0 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C511F0 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v2, 0);
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
  if ( (byte_4C511EE & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C511EE = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_63674716((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4C511E8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4723/*"CooltimeNotification"*/);
    byte_4C511E8 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4723/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_4C511F9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4834/*"CraftNotification"*/);
    byte_4C511F9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4834/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4C511E4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6353/*"ExpeditionNotification"*/);
    byte_4C511E4 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6353/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4C511E6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6645/*"FatigueNotiffication"*/);
    byte_4C511E6 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6645/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C511F5 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_7300/*"HeelPortraitDetailDialogState"*/);
    byte_4C511F5 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_7300/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71300376(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = slot;
  v7 = eventId;
  if ( (byte_4C511F4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_12861/*"ShopItemFilter_"*/);
    byte_4C511F4 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_63676720(
           (System_String_o *)StringLiteral_12861/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16119/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4C511F2 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8506/*"LotteryShopSkipState"*/);
    byte_4C511F2 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8506/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4C511EA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13007/*"SpotCooltimeNotification_"*/);
    byte_4C511EA = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63636468((System_String_o *)StringLiteral_13007/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4C511F7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_14579/*"TradeNotification"*/);
    byte_4C511F7 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14579/*"TradeNotification"*/, 0, 0) != 0;
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

  if ( (byte_4C511D3 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4629/*"CompleteMission"*/);
    byte_4C511D3 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4629/*"CompleteMission"*/, 0, 0);
  if ( !byte_4C51223 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51223 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C511D5 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5044/*"DailyMission"*/);
    byte_4C511D5 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5044/*"DailyMission"*/, 0, 0);
  if ( !byte_4C51225 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51225 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71299808; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C511CC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_10741/*"PriorityIndex_"*/);
    byte_4C511CC = 1;
  }
  if ( !byte_4C5121E )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5121E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_10741/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v3, 0);
    if ( !byte_4C5121E )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C5121E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_71299808;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71299808; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C511E0 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6257/*"EventTowerState_"*/);
    byte_4C511E0 = 1;
  }
  if ( !byte_4C5122F )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_6257/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v3, 0);
    if ( !byte_4C5122F )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C5122F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_71299808;
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
  __int64 v17; // x1
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x20
  System_String_o *v40; // x0
  int32_t Int; // w19
  __int64 v42; // x0
  int32_t v43; // [xsp+0h] [xbp-50h] BYREF
  int32_t v44; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C511E2 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C511E2 = 1;
  }
  v9 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
  v46 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v10, v11, v12, v13, v14, v15);
  if ( !v9 )
    sub_1C3E7C0(v16, v17);
  v18 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v18;
  sub_1C3E508(v9->m_Items, v18);
  v45 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v19, v20, v21, v22, v23, v24);
  v25 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = v25;
  sub_1C3E508(&v9->m_Items[1], v25);
  v44 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v26, v27, v28, v29, v30, v31);
  v32 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v32;
  sub_1C3E508(&v9->m_Items[2], v32);
  v43 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v33, v34, v35, v36, v37, v38);
  v39 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_20:
      v42 = sub_1C3E7E4();
      sub_1C3E68C(v42, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_19:
    sub_1C3E7C8(v16, v17);
  v9->m_Items[3] = v39;
  sub_1C3E508(&v9->m_Items[3], v39);
  v40 = System_String__Format_63677896((System_String_o *)StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v40, 0, 0);
  if ( !byte_4C51231 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51231 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C511D9 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6383/*"ExtraMission"*/);
    byte_4C511D9 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6383/*"ExtraMission"*/, 0, 0);
  if ( !byte_4C51229 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51229 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_71299808; // w19

  if ( !byte_4C51235 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51235 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(ItemFilterKeyName, 0);
    if ( !byte_4C51235 )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C51235 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_71299808;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C511DB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8435/*"LimitedMission"*/);
    byte_4C511DB = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8435/*"LimitedMission"*/, 0, 0);
  if ( !byte_4C5122B )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_71299808; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4C511CF & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6232/*"EventMission_"*/);
    sub_1C3E564(&StringLiteral_9121/*"MissionId_"*/);
    byte_4C511CF = 1;
  }
  if ( !byte_4C5121C )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5121C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_9121/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v5, 0);
    if ( !byte_4C5121C )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C5121C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_71299808;
  }
  if ( loadFilter )
  {
    if ( !byte_4C5121D )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C5121D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_6232/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_71299808(v8, 0);
      if ( !byte_4C5121D )
      {
        sub_1C3E564(&EventRewardSaveData_TypeInfo);
        byte_4C5121D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C511DE & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9184/*"MstMissionIndex"*/);
    byte_4C511DE = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9184/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_4C5122D )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_71299808; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C511EB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11239/*"RecoveryIdx"*/);
    byte_4C511EB = 1;
  }
  v3 = (System_String_o *)StringLiteral_11239/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_63636468(v3, v4, 0);
  }
  if ( !byte_4C51233 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51233 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v3, 0);
    if ( !byte_4C51233 )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C51233 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_71299808;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71299808; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C511D1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11409/*"RewardType_"*/);
    byte_4C511D1 = 1;
  }
  if ( !byte_4C51221 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51221 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_11409/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v3, 0);
    if ( !byte_4C51221 )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C51221 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_71299808;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C511D7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9183/*"MstMission"*/);
    byte_4C511D7 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9183/*"MstMission"*/, 0, 0);
  if ( !byte_4C51227 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51227 = 1;
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
  if ( (byte_4C511DD & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5044/*"DailyMission"*/);
    sub_1C3E564(&StringLiteral_9183/*"MstMission"*/);
    sub_1C3E564(&StringLiteral_6383/*"ExtraMission"*/);
    sub_1C3E564(&StringLiteral_8435/*"LimitedMission"*/);
    byte_4C511DD = 1;
  }
  if ( !byte_4C51226 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51226 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5044/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_4C51228 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51228 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9183/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_4C5122A )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6383/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_4C5122C )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8435/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4C511D4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4629/*"CompleteMission"*/);
    byte_4C511D4 = 1;
  }
  if ( !byte_4C51224 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51224 = 1;
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
  if ( (byte_4C511CE & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8370/*"LastViewEventId_"*/);
    sub_1C3E564(&StringLiteral_10741/*"PriorityIndex_"*/);
    byte_4C511CE = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_8370/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_4C5121F )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5121F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_10741/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_4C51220 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51220 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4C511D6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5044/*"DailyMission"*/);
    byte_4C511D6 = 1;
  }
  if ( !byte_4C51226 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51226 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5044/*"DailyMission"*/,
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
  if ( (byte_4C511E1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6257/*"EventTowerState_"*/);
    byte_4C511E1 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_6257/*"EventTowerState_"*/, v2, 0);
  if ( !byte_4C51230 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51230 = 1;
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
  __int64 v17; // x1
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x19
  System_String_o *v40; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v43; // w9
  __int64 v44; // x0
  int32_t v45; // [xsp+0h] [xbp-50h] BYREF
  int32_t v46; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v47; // [xsp+8h] [xbp-48h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C511E3 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C511E3 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
  v48 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v10, v11, v12, v13, v14, v15);
  if ( !v9 )
    sub_1C3E7C0(v16, v17);
  v18 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v18;
  sub_1C3E508(v9->m_Items, v18);
  v47 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v19, v20, v21, v22, v23, v24);
  v25 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = v25;
  sub_1C3E508(&v9->m_Items[1], v25);
  v46 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v26, v27, v28, v29, v30, v31);
  v32 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v32;
  sub_1C3E508(&v9->m_Items[2], v32);
  v45 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v33, v34, v35, v36, v37, v38);
  v39 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v9->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_24:
      v44 = sub_1C3E7E4();
      sub_1C3E68C(v44, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C3E7C8(v16, v17);
  v9->m_Items[3] = v39;
  sub_1C3E508(&v9->m_Items[3], v39);
  v40 = System_String__Format_63677896((System_String_o *)StringLiteral_6280/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_4C51232 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51232 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4C51231 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51231 = 1;
    v43 = (unsigned __int8)byte_4C51232;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v43 )
    {
      sub_1C3E564(&EventRewardSaveData_TypeInfo);
      byte_4C51232 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v40, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4C511DA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6383/*"ExtraMission"*/);
    byte_4C511DA = 1;
  }
  if ( !byte_4C5122A )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6383/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4C51236 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51236 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4C511DC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8435/*"LimitedMission"*/);
    byte_4C511DC = 1;
  }
  if ( !byte_4C5122C )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8435/*"LimitedMission"*/,
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
  if ( (byte_4C511D0 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6232/*"EventMission_"*/);
    sub_1C3E564(&StringLiteral_9121/*"MissionId_"*/);
    byte_4C511D0 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_9121/*"MissionId_"*/, v2, 0);
  if ( !byte_4C5121B )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5121B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_6232/*"EventMission_"*/, v4, 0);
  if ( !byte_4C5121A )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5121A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C511DF & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9184/*"MstMissionIndex"*/);
    byte_4C511DF = 1;
  }
  if ( !byte_4C5122E )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C5122E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9184/*"MstMissionIndex"*/,
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
  if ( (byte_4C511D2 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11409/*"RewardType_"*/);
    byte_4C511D2 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_11409/*"RewardType_"*/, v2, 0);
  if ( !byte_4C51222 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51222 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4C511D8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9183/*"MstMission"*/);
    byte_4C511D8 = 1;
  }
  if ( !byte_4C51228 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51228 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9183/*"MstMission"*/,
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
  if ( (byte_4C511FC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C511FC = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_8229/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C511F1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C511F1 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v4, 0);
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
  if ( (byte_4C511EF & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3248/*"BulletinBoardMessageState"*/);
    byte_4C511EF = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_63674716((System_String_o *)StringLiteral_3248/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C511E9 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_4723/*"CooltimeNotification"*/);
    byte_4C511E9 = 1;
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
  if ( (byte_4C511FA & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_4834/*"CraftNotification"*/);
    byte_4C511FA = 1;
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
  if ( (byte_4C511E5 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_6353/*"ExpeditionNotification"*/);
    byte_4C511E5 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6353/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C511E7 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_6645/*"FatigueNotiffication"*/);
    byte_4C511E7 = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6645/*"FatigueNotiffication"*/, v2, 0);
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
  if ( (byte_4C511F6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_7300/*"HeelPortraitDetailDialogState"*/);
    byte_4C511F6 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_7300/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C511F3 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_8506/*"LotteryShopSkipState"*/);
    byte_4C511F3 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8506/*"LotteryShopSkipState"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4C511EC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11239/*"RecoveryIdx"*/);
    byte_4C511EC = 1;
  }
  v5 = (System_String_o *)StringLiteral_11239/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0);
    v5 = System_String__Concat_63636468(v5, v6, 0);
  }
  if ( !byte_4C51233 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51233 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4C51234 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51234 = 1;
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
  if ( (byte_4C511F8 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C3E564(&StringLiteral_14579/*"TradeNotification"*/);
    byte_4C511F8 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14579/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C511B4 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4C511B6 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4C511B2 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4C511BE & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4C511C6 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4C511C2 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4C511C4 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C511BA & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4C511B0 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4C511CA & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511CA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4C511C8 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C511BC & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4C511AE & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511AE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C511C0 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4C511AC & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511AC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4C511B8 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511B5 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511B7 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511B3 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511BF & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511C7 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511C3 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511C5 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511BB & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511B1 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void EventRewardSaveData__set_HeelPortraitDetailDialogState(System_String_o *value, const MethodInfo *method)
{
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4C511CB & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511CB = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1C3E508(&static_fields->_HeelPortraitDetailDialogState_k__BackingField, value);
}


void EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511C9 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511BD & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511BD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511AF & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511AF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511C1 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511C1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511AD & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511AD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C511B9 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C511B9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}