void EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v6; // x23
  unsigned __int64 v7; // x25
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  struct System_Threading_CancellationTokenSource_o *v18; // x8
  DataManager_o *v19; // x20
  int v20; // w19
  int v21; // w26
  __int64 v22; // x29
  System_Object_array *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x22
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t v45; // w21
  System_String_o *v46; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x0
  __int128 v56; // [xsp+0h] [xbp-80h] BYREF
  int v57; // [xsp+10h] [xbp-70h] BYREF
  int v58; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C21794 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_6223/*"EventMission_"*/);
    sub_1C2D490(&StringLiteral_6248/*"EventTowerState_"*/);
    sub_1C2D490(&StringLiteral_12848/*"ShopItemFilter"*/);
    sub_1C2D490(&StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/);
    sub_1C2D490(&StringLiteral_3245/*"BulletinBoardMessageState"*/);
    sub_1C2D490(&StringLiteral_11230/*"RecoveryIdx"*/);
    sub_1C2D490(&StringLiteral_9176/*"MstMission"*/);
    sub_1C2D490(&StringLiteral_4715/*"CooltimeNotification"*/);
    sub_1C2D490(&StringLiteral_9177/*"MstMissionIndex"*/);
    sub_1C2D490(&StringLiteral_6374/*"ExtraMission"*/);
    sub_1C2D490(&StringLiteral_10732/*"PriorityIndex_"*/);
    sub_1C2D490(&StringLiteral_6639/*"FatigueNotiffication"*/);
    sub_1C2D490(&StringLiteral_8499/*"LotteryShopSkipState"*/);
    sub_1C2D490(&StringLiteral_8428/*"LimitedMission"*/);
    sub_1C2D490(&StringLiteral_11400/*"RewardType_"*/);
    sub_1C2D490(&StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1C2D490(&StringLiteral_6344/*"ExpeditionNotification"*/);
    sub_1C2D490(&StringLiteral_7294/*"HeelPortraitDetailDialogState"*/);
    sub_1C2D490(&StringLiteral_9114/*"MissionId_"*/);
    byte_4C21794 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v6->fields._DispLog + v7);
      v8 = System_Int32__ToString((int32_t)&eventId, 0);
      v9 = System_String__Concat_63457864((System_String_o *)StringLiteral_10732/*"PriorityIndex_"*/, v8, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
      v10 = System_Int32__ToString((int32_t)&eventId, 0);
      v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_9114/*"MissionId_"*/, v10, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
      v12 = System_Int32__ToString((int32_t)&eventId, 0);
      v13 = System_String__Concat_63457864((System_String_o *)StringLiteral_6223/*"EventMission_"*/, v12, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
      v14 = System_Int32__ToString((int32_t)&eventId, 0);
      v15 = System_String__Concat_63457864((System_String_o *)StringLiteral_11400/*"RewardType_"*/, v14, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      v16 = System_Int32__ToString((int32_t)&eventId, 0);
      v17 = System_String__Concat_63457864((System_String_o *)StringLiteral_6248/*"EventTowerState_"*/, v16, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v17, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0);
      if ( Instance )
      {
        v18 = Instance->fields.m_CancellationTokenSource;
        v19 = Instance;
        if ( v18 )
        {
          v20 = (_DWORD)v18 - 1;
          if ( (int)v18 >= 1 )
            break;
        }
      }
LABEL_33:
      v41 = System_Int32__ToString((int32_t)&eventId, 0);
      v42 = System_String__Concat_63457864((System_String_o *)StringLiteral_11230/*"RecoveryIdx"*/, v41, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v42, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0);
      if ( AvailableEntityList )
      {
        v44 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v45 = 0;
          do
          {
            v46 = System_Int32__ToString((int32_t)&eventId, 0);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v44,
                                          v45,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v47 = System_Int32__ToString((int)Instance + 16, 0);
            v48 = System_String__Concat_63496112((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v46, v47, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v48, 0);
          }
          while ( ++v45 < v44->fields._size );
        }
      }
      v49 = System_Int32__ToString((int32_t)&eventId, 0);
      v50 = System_String__Concat_63457864((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v49, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v50, 0);
      v51 = System_Int32__ToString((int32_t)&eventId, 0);
      v52 = System_String__Concat_63457864((System_String_o *)StringLiteral_7294/*"HeelPortraitDetailDialogState"*/, v51, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v52, 0);
      v53 = System_Int32__ToString((int32_t)&eventId, 0);
      v54 = System_String__Concat_63457864((System_String_o *)StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/, v53, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v54, 0);
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v18 )
LABEL_43:
      sub_1C2D6F4(Instance, v2, v3, v4);
    v21 = 0;
    while ( 1 )
    {
      v22 = *((_QWORD *)&v19->fields._DispLog + v21);
      v23 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 4);
      v59 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v24, v25, v26);
      if ( !v23 )
        break;
      v27 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C2D5CC(Instance, v23->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !LODWORD(v23->max_length) )
        goto LABEL_43;
      v23->m_Items[0] = v27;
      Instance = (DataManager_o *)sub_1C2D434(v23->m_Items);
      if ( !v22 )
        break;
      v58 = *(_DWORD *)(v22 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v28, v29, v30);
      v31 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C2D5CC(Instance, v23->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v23->max_length) <= 1 )
        goto LABEL_43;
      v23->m_Items[1] = v31;
      sub_1C2D434(&v23->m_Items[1]);
      v57 = *(_DWORD *)(v22 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v32, v33, v34);
      v35 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C2D5CC(Instance, v23->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v23->max_length) <= 2 )
        goto LABEL_43;
      v23->m_Items[2] = v35;
      sub_1C2D434(&v23->m_Items[2]);
      v56 = *(_OWORD *)(v22 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v56,
                                    v36,
                                    v37,
                                    v38);
      v39 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C2D5CC(Instance, v23->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v55 = sub_1C2D710();
          sub_1C2D5B8(v55, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 3 )
        goto LABEL_43;
      v23->m_Items[3] = v39;
      sub_1C2D434(&v23->m_Items[3]);
      v40 = System_String__Format_63499292((System_String_o *)StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v23, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0);
      if ( v20 == v21 )
        goto LABEL_33;
      if ( (unsigned int)++v21 >= LODWORD(v19->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1C2D6EC(Instance, v2);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9176/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6374/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8428/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9177/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6639/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4715/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6344/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11230/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8499/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12848/*"ShopItemFilter"*/, 0);
}


void EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  DataManager_o *v5; // x27
  unsigned int v6; // w25
  __int64 v7; // x19
  struct System_Threading_CancellationTokenSource_o *v8; // x8
  DataManager_o *v9; // x20
  int v10; // w26
  int v11; // w24
  __int64 v12; // x19
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  DataManager_o *v16; // x21
  DataManager_o *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  DataManager_o *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  DataManager_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  DataManager_o *v29; // x22
  System_String_o *v30; // x0
  __int64 v31; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v33; // [xsp+10h] [xbp-80h] BYREF
  int v34; // [xsp+24h] [xbp-6Ch] BYREF
  int v35; // [xsp+28h] [xbp-68h] BYREF
  int v36; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C217C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C217C4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0);
  if ( Instance )
  {
    v5 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v6 = 0;
        while ( 1 )
        {
          v7 = *((_QWORD *)&v5->fields._DispLog + (int)v6);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v7 + 16),
                                        0);
          if ( Instance )
          {
            v8 = Instance->fields.m_CancellationTokenSource;
            v9 = Instance;
            if ( v8 )
            {
              v10 = (_DWORD)v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v6 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v8 )
LABEL_37:
          sub_1C2D6F4(Instance, v2, v3, v4);
        v11 = 0;
        while ( 1 )
        {
          v12 = *((_QWORD *)&v9->fields._DispLog + v11);
          Instance = (DataManager_o *)sub_1C2D538(object___TypeInfo, 4);
          if ( !v12 )
            break;
          v16 = Instance;
          v36 = *(_DWORD *)(v12 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v13, v14, v15);
          if ( !v16 )
            break;
          v17 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C2D5CC(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
            goto LABEL_37;
          *(_QWORD *)&v16->fields._DispLog = v17;
          sub_1C2D434(&v16->fields._DispLog);
          v35 = *(_DWORD *)(v12 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v18, v19, v20);
          v21 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C2D5CC(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 1 )
            goto LABEL_37;
          v16->fields.datalist = (struct DataMasterBase_array *)v21;
          sub_1C2D434(&v16->fields.datalist);
          v34 = *(_DWORD *)(v12 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
          v25 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C2D5CC(Instance, v16->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v16->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v25;
          sub_1C2D434(&v16->fields.lookup);
          v33 = *(_OWORD *)(v12 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v33,
                                        v26,
                                        v27,
                                        v28);
          v29 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C2D5CC(Instance, v16->klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v31 = sub_1C2D710();
              sub_1C2D5B8(v31, 0);
            }
          }
          if ( LODWORD(v16->fields.m_CancellationTokenSource) > 3 )
          {
            v16->fields.masterDataBytes = (struct System_Byte_array *)v29;
            sub_1C2D434(&v16->fields.masterDataBytes);
            v30 = System_String__Format_63499292((System_String_o *)StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, (System_Object_array *)v16, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v30, 0);
            if ( v10 == v11 )
              goto LABEL_35;
            if ( (unsigned int)++v11 < LODWORD(v9->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1C2D6EC(Instance, v2);
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
  if ( (byte_4C217B4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11230/*"RecoveryIdx"*/);
    byte_4C217B4 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11230/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_63457864(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C217C2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C217C2 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71122516(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C217B7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3245/*"BulletinBoardMessageState"*/);
    byte_4C217B7 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v2, 0);
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
  if ( (byte_4C217B5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3245/*"BulletinBoardMessageState"*/);
    byte_4C217B5 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_63496112((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4C217AF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4715/*"CooltimeNotification"*/);
    byte_4C217AF = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4715/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_4C217C0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4826/*"CraftNotification"*/);
    byte_4C217C0 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4826/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4C217AB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6344/*"ExpeditionNotification"*/);
    byte_4C217AB = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6344/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4C217AD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6639/*"FatigueNotiffication"*/);
    byte_4C217AD = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6639/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4C217BC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7294/*"HeelPortraitDetailDialogState"*/);
    byte_4C217BC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_7294/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71122516(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = slot;
  v7 = eventId;
  if ( (byte_4C217BB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_12849/*"ShopItemFilter_"*/);
    byte_4C217BB = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_63498116(
           (System_String_o *)StringLiteral_12849/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16105/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4C217B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8499/*"LotteryShopSkipState"*/);
    byte_4C217B9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8499/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4C217B1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12995/*"SpotCooltimeNotification_"*/);
    byte_4C217B1 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_12995/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4C217BE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_14565/*"TradeNotification"*/);
    byte_4C217BE = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14565/*"TradeNotification"*/, 0, 0) != 0;
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

  if ( (byte_4C2179A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4621/*"CompleteMission"*/);
    byte_4C2179A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4621/*"CompleteMission"*/, 0, 0);
  if ( !byte_4C217EA )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C2179C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5035/*"DailyMission"*/);
    byte_4C2179C = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5035/*"DailyMission"*/, 0, 0);
  if ( !byte_4C217EC )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71121948; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C21793 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10732/*"PriorityIndex_"*/);
    byte_4C21793 = 1;
  }
  if ( !byte_4C217E5 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_10732/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v3, 0);
    if ( !byte_4C217E5 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217E5 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_71121948;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71121948; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C217A7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6248/*"EventTowerState_"*/);
    byte_4C217A7 = 1;
  }
  if ( !byte_4C217F6 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_6248/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v3, 0);
    if ( !byte_4C217F6 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F6 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_71121948;
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
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x20
  System_String_o *v30; // x0
  int32_t Int; // w19
  __int64 v32; // x0
  int32_t v33; // [xsp+0h] [xbp-50h] BYREF
  int32_t v34; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v35; // [xsp+8h] [xbp-48h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C217A9 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C217A9 = 1;
  }
  v9 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 4);
  v36 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v10, v11, v12);
  if ( !v9 )
    sub_1C2D6EC(v13, v14);
  v17 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v17;
  sub_1C2D434(v9->m_Items);
  v35 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v35, v18, v19, v20);
  v21 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = v21;
  sub_1C2D434(&v9->m_Items[1]);
  v34 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
  v25 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v25;
  sub_1C2D434(&v9->m_Items[2]);
  v33 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28);
  v29 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_20:
      v32 = sub_1C2D710();
      sub_1C2D5B8(v32, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_19:
    sub_1C2D6F4(v13, v14, v15, v16);
  v9->m_Items[3] = v29;
  sub_1C2D434(&v9->m_Items[3]);
  v30 = System_String__Format_63499292((System_String_o *)StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v30, 0, 0);
  if ( !byte_4C217F8 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C217A0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6374/*"ExtraMission"*/);
    byte_4C217A0 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6374/*"ExtraMission"*/, 0, 0);
  if ( !byte_4C217F0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_71121948; // w19

  if ( !byte_4C217FC )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(ItemFilterKeyName, 0);
    if ( !byte_4C217FC )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217FC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_71121948;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C217A2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8428/*"LimitedMission"*/);
    byte_4C217A2 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8428/*"LimitedMission"*/, 0, 0);
  if ( !byte_4C217F2 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_71121948; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4C21796 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6223/*"EventMission_"*/);
    sub_1C2D490(&StringLiteral_9114/*"MissionId_"*/);
    byte_4C21796 = 1;
  }
  if ( !byte_4C217E3 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_9114/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v5, 0);
    if ( !byte_4C217E3 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217E3 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_71121948;
  }
  if ( loadFilter )
  {
    if ( !byte_4C217E4 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217E4 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_63457864((System_String_o *)StringLiteral_6223/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_71121948(v8, 0);
      if ( !byte_4C217E4 )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217E4 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C217A5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9177/*"MstMissionIndex"*/);
    byte_4C217A5 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9177/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_4C217F4 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_71121948; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C217B2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11230/*"RecoveryIdx"*/);
    byte_4C217B2 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11230/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_63457864(v3, v4, 0);
  }
  if ( !byte_4C217FA )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v3, 0);
    if ( !byte_4C217FA )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217FA = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_71121948;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71121948; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4C21798 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11400/*"RewardType_"*/);
    byte_4C21798 = 1;
  }
  if ( !byte_4C217E8 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_11400/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v3, 0);
    if ( !byte_4C217E8 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217E8 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_71121948;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4C2179E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9176/*"MstMission"*/);
    byte_4C2179E = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9176/*"MstMission"*/, 0, 0);
  if ( !byte_4C217EE )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EE = 1;
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
  if ( (byte_4C217A4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5035/*"DailyMission"*/);
    sub_1C2D490(&StringLiteral_9176/*"MstMission"*/);
    sub_1C2D490(&StringLiteral_6374/*"ExtraMission"*/);
    sub_1C2D490(&StringLiteral_8428/*"LimitedMission"*/);
    byte_4C217A4 = 1;
  }
  if ( !byte_4C217ED )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217ED = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5035/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_4C217EF )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9176/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_4C217F1 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6374/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_4C217F3 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8428/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4C2179B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4621/*"CompleteMission"*/);
    byte_4C2179B = 1;
  }
  if ( !byte_4C217EB )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EB = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4621/*"CompleteMission"*/,
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
  if ( (byte_4C21795 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8363/*"LastViewEventId_"*/);
    sub_1C2D490(&StringLiteral_10732/*"PriorityIndex_"*/);
    byte_4C21795 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_8363/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_4C217E6 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_10732/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_4C217E7 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4C2179D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5035/*"DailyMission"*/);
    byte_4C2179D = 1;
  }
  if ( !byte_4C217ED )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217ED = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5035/*"DailyMission"*/,
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
  if ( (byte_4C217A8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6248/*"EventTowerState_"*/);
    byte_4C217A8 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_6248/*"EventTowerState_"*/, v2, 0);
  if ( !byte_4C217F7 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F7 = 1;
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
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x19
  System_String_o *v30; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v33; // w9
  __int64 v34; // x0
  int32_t v35; // [xsp+0h] [xbp-50h] BYREF
  int32_t v36; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C217AA & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4C217AA = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 4);
  v38 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v38, v10, v11, v12);
  if ( !v9 )
    sub_1C2D6EC(v13, v14);
  v17 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v17;
  sub_1C2D434(v9->m_Items);
  v37 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v37, v18, v19, v20);
  v21 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = v21;
  sub_1C2D434(&v9->m_Items[1]);
  v36 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v22, v23, v24);
  v25 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v25;
  sub_1C2D434(&v9->m_Items[2]);
  v35 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v35, v26, v27, v28);
  v29 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1C2D5CC(v13, v9->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_24:
      v34 = sub_1C2D710();
      sub_1C2D5B8(v34, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C2D6F4(v13, v14, v15, v16);
  v9->m_Items[3] = v29;
  sub_1C2D434(&v9->m_Items[3]);
  v30 = System_String__Format_63499292((System_String_o *)StringLiteral_6271/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_4C217F9 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F9 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4C217F8 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F8 = 1;
    v33 = (unsigned __int8)byte_4C217F9;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v33 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F9 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v30, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4C217A1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6374/*"ExtraMission"*/);
    byte_4C217A1 = 1;
  }
  if ( !byte_4C217F1 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6374/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4C217FD )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FD = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4C217A3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8428/*"LimitedMission"*/);
    byte_4C217A3 = 1;
  }
  if ( !byte_4C217F3 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8428/*"LimitedMission"*/,
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
  if ( (byte_4C21797 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6223/*"EventMission_"*/);
    sub_1C2D490(&StringLiteral_9114/*"MissionId_"*/);
    byte_4C21797 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_9114/*"MissionId_"*/, v2, 0);
  if ( !byte_4C217E2 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E2 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_6223/*"EventMission_"*/, v4, 0);
  if ( !byte_4C217E1 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C217A6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9177/*"MstMissionIndex"*/);
    byte_4C217A6 = 1;
  }
  if ( !byte_4C217F5 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217F5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9177/*"MstMissionIndex"*/,
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
  if ( (byte_4C21799 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11400/*"RewardType_"*/);
    byte_4C21799 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63457864((System_String_o *)StringLiteral_11400/*"RewardType_"*/, v2, 0);
  if ( !byte_4C217E9 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217E9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4C2179F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9176/*"MstMission"*/);
    byte_4C2179F = 1;
  }
  if ( !byte_4C217EF )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217EF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9176/*"MstMission"*/,
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
  if ( (byte_4C217C3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/);
    byte_4C217C3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_8222/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4C217B8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3245/*"BulletinBoardMessageState"*/);
    byte_4C217B8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v4, 0);
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
  if ( (byte_4C217B6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3245/*"BulletinBoardMessageState"*/);
    byte_4C217B6 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_63496112((System_String_o *)StringLiteral_3245/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C217B0 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_4715/*"CooltimeNotification"*/);
    byte_4C217B0 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4715/*"CooltimeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C217C1 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_4826/*"CraftNotification"*/);
    byte_4C217C1 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4826/*"CraftNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C217AC & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_6344/*"ExpeditionNotification"*/);
    byte_4C217AC = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6344/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C217AE & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_6639/*"FatigueNotiffication"*/);
    byte_4C217AE = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6639/*"FatigueNotiffication"*/, v2, 0);
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
  if ( (byte_4C217BD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7294/*"HeelPortraitDetailDialogState"*/);
    byte_4C217BD = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_7294/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4C217BA & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_8499/*"LotteryShopSkipState"*/);
    byte_4C217BA = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8499/*"LotteryShopSkipState"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4C217B3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11230/*"RecoveryIdx"*/);
    byte_4C217B3 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11230/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0);
    v5 = System_String__Concat_63457864(v5, v6, 0);
  }
  if ( !byte_4C217FA )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4C217FB )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C217FB = 1;
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
  if ( (byte_4C217BF & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C2D490(&StringLiteral_14565/*"TradeNotification"*/);
    byte_4C217BF = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14565/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C2177B & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4C2177D & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4C21779 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21779 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4C21785 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21785 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4C2178D & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4C21789 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21789 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4C2178B & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C21781 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21781 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4C21777 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21777 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4C21791 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21791 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4C2178F & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4C21783 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21783 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4C21775 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21775 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4C21787 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21787 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4C21773 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21773 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4C2177F & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2177C & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2177E & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2177A & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2177A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21786 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21786 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2178E & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2178A & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C2178C & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C2178C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21782 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21782 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21778 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21778 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void EventRewardSaveData__set_HeelPortraitDetailDialogState(System_String_o *value, const MethodInfo *method)
{
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4C21792 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21792 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1C2D434(&static_fields->_HeelPortraitDetailDialogState_k__BackingField);
}


void EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21790 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21790 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21784 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21784 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21776 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21776 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21788 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21788 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21774 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21774 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4C21780 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardSaveData_TypeInfo);
    byte_4C21780 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}