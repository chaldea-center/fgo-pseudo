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
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w21
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x0
  __int128 v42; // [xsp+0h] [xbp-80h] BYREF
  int v43; // [xsp+10h] [xbp-70h] BYREF
  int v44; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v45; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB0715 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_6222/*"EventMission_"*/);
    sub_1C6BA08(&StringLiteral_6247/*"EventTowerState_"*/);
    sub_1C6BA08(&StringLiteral_12856/*"ShopItemFilter"*/);
    sub_1C6BA08(&StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/);
    sub_1C6BA08(&StringLiteral_3240/*"BulletinBoardMessageState"*/);
    sub_1C6BA08(&StringLiteral_11235/*"RecoveryIdx"*/);
    sub_1C6BA08(&StringLiteral_9180/*"MstMission"*/);
    sub_1C6BA08(&StringLiteral_4713/*"CooltimeNotification"*/);
    sub_1C6BA08(&StringLiteral_9181/*"MstMissionIndex"*/);
    sub_1C6BA08(&StringLiteral_6375/*"ExtraMission"*/);
    sub_1C6BA08(&StringLiteral_10737/*"PriorityIndex_"*/);
    sub_1C6BA08(&StringLiteral_6637/*"FatigueNotiffication"*/);
    sub_1C6BA08(&StringLiteral_8503/*"LotteryShopSkipState"*/);
    sub_1C6BA08(&StringLiteral_8432/*"LimitedMission"*/);
    sub_1C6BA08(&StringLiteral_11406/*"RewardType_"*/);
    sub_1C6BA08(&StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_1C6BA08(&StringLiteral_6345/*"ExpeditionNotification"*/);
    sub_1C6BA08(&StringLiteral_7293/*"HeelPortraitDetailDialogState"*/);
    sub_1C6BA08(&StringLiteral_9118/*"MissionId_"*/);
    byte_4CB0715 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
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
      v7 = System_String__Concat_63966792((System_String_o *)StringLiteral_10737/*"PriorityIndex_"*/, v6, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
      v8 = System_Int32__ToString((int32_t)&eventId, 0);
      v9 = System_String__Concat_63966792((System_String_o *)StringLiteral_9118/*"MissionId_"*/, v8, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
      v10 = System_Int32__ToString((int32_t)&eventId, 0);
      v11 = System_String__Concat_63966792((System_String_o *)StringLiteral_6222/*"EventMission_"*/, v10, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
      v12 = System_Int32__ToString((int32_t)&eventId, 0);
      v13 = System_String__Concat_63966792((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v12, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
      v14 = System_Int32__ToString((int32_t)&eventId, 0);
      v15 = System_String__Concat_63966792((System_String_o *)StringLiteral_6247/*"EventTowerState_"*/, v14, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
      v27 = System_Int32__ToString((int32_t)&eventId, 0);
      v28 = System_String__Concat_63966792((System_String_o *)StringLiteral_11235/*"RecoveryIdx"*/, v27, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v28, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0);
      if ( AvailableEntityList )
      {
        v30 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v31 = 0;
          do
          {
            v32 = System_Int32__ToString((int32_t)&eventId, 0);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v30,
                                          v31,
                                          (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v33 = System_Int32__ToString((int)Instance + 16, 0);
            v34 = System_String__Concat_64005056((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v32, v33, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v34, 0);
          }
          while ( ++v31 < v30->fields._size );
        }
      }
      v35 = System_Int32__ToString((int32_t)&eventId, 0);
      v36 = System_String__Concat_63966792((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v35, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v36, 0);
      v37 = System_Int32__ToString((int32_t)&eventId, 0);
      v38 = System_String__Concat_63966792((System_String_o *)StringLiteral_7293/*"HeelPortraitDetailDialogState"*/, v37, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v38, 0);
      v39 = System_Int32__ToString((int32_t)&eventId, 0);
      v40 = System_String__Concat_63966792((System_String_o *)StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/, v39, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0);
      LODWORD(m_CancellationTokenSource) = v4->fields.m_CancellationTokenSource;
      if ( (__int64)++v5 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v16 )
LABEL_43:
      sub_1C6BC68(Instance);
    v19 = 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)&v17->fields._DispLog + v19);
      v21 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
      v45 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      if ( !v21 )
        break;
      v22 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C6BB44(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !LODWORD(v21->max_length) )
        goto LABEL_43;
      v21->m_Items[0] = v22;
      Instance = (DataManager_o *)sub_1C6B9AC(v21->m_Items, v22);
      if ( !v20 )
        break;
      v44 = *(_DWORD *)(v20 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      v23 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C6BB44(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v21->max_length) <= 1 )
        goto LABEL_43;
      v21->m_Items[1] = v23;
      sub_1C6B9AC(&v21->m_Items[1], v23);
      v43 = *(_DWORD *)(v20 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v24 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C6BB44(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( LODWORD(v21->max_length) <= 2 )
        goto LABEL_43;
      v21->m_Items[2] = v24;
      sub_1C6B9AC(&v21->m_Items[2], v24);
      v42 = *(_OWORD *)(v20 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v42);
      v25 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1C6BB44(Instance, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v41 = sub_1C6BC84();
          sub_1C6BB30(v41, 0);
        }
      }
      if ( LODWORD(v21->max_length) <= 3 )
        goto LABEL_43;
      v21->m_Items[3] = v25;
      sub_1C6B9AC(&v21->m_Items[3], v25);
      v26 = System_String__Format_64008236((System_String_o *)StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v21, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v26, 0);
      if ( v18 == v19 )
        goto LABEL_33;
      if ( (unsigned int)++v19 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1C6BC60(Instance, v2);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9180/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6375/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8432/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9181/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6637/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4713/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6345/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11235/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8503/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12856/*"ShopItemFilter"*/, 0);
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
  DataManager_o *v11; // x21
  DataManager_o *v12; // x22
  DataManager_o *v13; // x22
  DataManager_o *v14; // x22
  DataManager_o *v15; // x22
  System_String_o *v16; // x0
  __int64 v17; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v19; // [xsp+10h] [xbp-80h] BYREF
  int v20; // [xsp+24h] [xbp-6Ch] BYREF
  int v21; // [xsp+28h] [xbp-68h] BYREF
  int v22; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB0745 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4CB0745 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          sub_1C6BC68(Instance);
        v9 = 0;
        while ( 1 )
        {
          v10 = *((_QWORD *)&v7->fields._DispLog + v9);
          Instance = (DataManager_o *)sub_1C6BAB0(object___TypeInfo, 4);
          if ( !v10 )
            break;
          v11 = Instance;
          v22 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
          if ( !v11 )
            break;
          v12 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C6BB44(Instance, v11->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_37;
          *(_QWORD *)&v11->fields._DispLog = v12;
          sub_1C6B9AC(&v11->fields._DispLog, v12);
          v21 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
          v13 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C6BB44(Instance, v11->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 1 )
            goto LABEL_37;
          v11->fields.datalist = (struct DataMasterBase_array *)v13;
          sub_1C6B9AC(&v11->fields.datalist, v13);
          v20 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
          v14 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C6BB44(Instance, v11->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v11->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v14;
          sub_1C6B9AC(&v11->fields.lookup, v14);
          v19 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v19);
          v15 = Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1C6BB44(Instance, v11->klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v17 = sub_1C6BC84();
              sub_1C6BB30(v17, 0);
            }
          }
          if ( LODWORD(v11->fields.m_CancellationTokenSource) > 3 )
          {
            v11->fields.masterDataBytes = (struct System_Byte_array *)v15;
            sub_1C6B9AC(&v11->fields.masterDataBytes, v15);
            v16 = System_String__Format_64008236((System_String_o *)StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, (System_Object_array *)v11, 0);
            UnityEngine_PlayerPrefs__DeleteKey(v16, 0);
            if ( v8 == v9 )
              goto LABEL_35;
            if ( (unsigned int)++v9 < LODWORD(v7->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1C6BC60(Instance, v2);
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
  if ( (byte_4CB0735 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11235/*"RecoveryIdx"*/);
    byte_4CB0735 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11235/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_63966792(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4CB0743 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/);
    byte_4CB0743 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71617980(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4CB0738 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3240/*"BulletinBoardMessageState"*/);
    byte_4CB0738 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v2, 0);
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
  if ( (byte_4CB0736 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3240/*"BulletinBoardMessageState"*/);
    byte_4CB0736 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_64005056((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_4CB0730 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4713/*"CooltimeNotification"*/);
    byte_4CB0730 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4713/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_4CB0741 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4824/*"CraftNotification"*/);
    byte_4CB0741 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4824/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_4CB072C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6345/*"ExpeditionNotification"*/);
    byte_4CB072C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6345/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_4CB072E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6637/*"FatigueNotiffication"*/);
    byte_4CB072E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6637/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4CB073D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7293/*"HeelPortraitDetailDialogState"*/);
    byte_4CB073D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_7293/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_71617980(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = slot;
  v7 = eventId;
  if ( (byte_4CB073C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_12857/*"ShopItemFilter_"*/);
    byte_4CB073C = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_64007060(
           (System_String_o *)StringLiteral_12857/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16102/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_4CB073A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8503/*"LotteryShopSkipState"*/);
    byte_4CB073A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8503/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4CB0732 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_13003/*"SpotCooltimeNotification_"*/);
    byte_4CB0732 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63966792((System_String_o *)StringLiteral_13003/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_4CB073F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_14569/*"TradeNotification"*/);
    byte_4CB073F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14569/*"TradeNotification"*/, 0, 0) != 0;
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

  if ( (byte_4CB071B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4619/*"CompleteMission"*/);
    byte_4CB071B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4619/*"CompleteMission"*/, 0, 0);
  if ( !byte_4CB076B )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4CB071D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5031/*"DailyMission"*/);
    byte_4CB071D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5031/*"DailyMission"*/, 0, 0);
  if ( !byte_4CB076D )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71617412; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4CB0714 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10737/*"PriorityIndex_"*/);
    byte_4CB0714 = 1;
  }
  if ( !byte_4CB0766 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0766 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_10737/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v3, 0);
    if ( !byte_4CB0766 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0766 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_71617412;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71617412; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4CB0728 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6247/*"EventTowerState_"*/);
    byte_4CB0728 = 1;
  }
  if ( !byte_4CB0777 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0777 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_6247/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v3, 0);
    if ( !byte_4CB0777 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0777 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_71617412;
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
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x20
  System_String_o *v16; // x0
  int32_t Int; // w19
  __int64 v18; // x0
  int32_t v19; // [xsp+0h] [xbp-50h] BYREF
  int32_t v20; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v21; // [xsp+8h] [xbp-48h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB072A & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4CB072A = 1;
  }
  v9 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
  v22 = eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  v12 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v12;
  sub_1C6B9AC(v9->m_Items, v12);
  v21 = slot;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = v13;
  sub_1C6B9AC(&v9->m_Items[1], v13);
  v20 = idx;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v14;
  sub_1C6B9AC(&v9->m_Items[2], v14);
  v19 = svtId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_20:
      v18 = sub_1C6BC84();
      sub_1C6BB30(v18, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_19:
    sub_1C6BC68(v10);
  v9->m_Items[3] = v15;
  sub_1C6B9AC(&v9->m_Items[3], v15);
  v16 = System_String__Format_64008236((System_String_o *)StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v16, 0, 0);
  if ( !byte_4CB0779 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0779 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4CB0721 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6375/*"ExtraMission"*/);
    byte_4CB0721 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6375/*"ExtraMission"*/, 0, 0);
  if ( !byte_4CB0771 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0771 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_71617412; // w19

  if ( !byte_4CB077D )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(ItemFilterKeyName, 0);
    if ( !byte_4CB077D )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB077D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_71617412;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4CB0723 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8432/*"LimitedMission"*/);
    byte_4CB0723 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8432/*"LimitedMission"*/, 0, 0);
  if ( !byte_4CB0773 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0773 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_71617412; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4CB0717 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6222/*"EventMission_"*/);
    sub_1C6BA08(&StringLiteral_9118/*"MissionId_"*/);
    byte_4CB0717 = 1;
  }
  if ( !byte_4CB0764 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0764 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_9118/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v5, 0);
    if ( !byte_4CB0764 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0764 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_71617412;
  }
  if ( loadFilter )
  {
    if ( !byte_4CB0765 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0765 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_63966792((System_String_o *)StringLiteral_6222/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_71617412(v8, 0);
      if ( !byte_4CB0765 )
      {
        sub_1C6BA08(&EventRewardSaveData_TypeInfo);
        byte_4CB0765 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4CB0726 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9181/*"MstMissionIndex"*/);
    byte_4CB0726 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9181/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_4CB0775 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0775 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_71617412; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4CB0733 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11235/*"RecoveryIdx"*/);
    byte_4CB0733 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11235/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_63966792(v3, v4, 0);
  }
  if ( !byte_4CB077B )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v3, 0);
    if ( !byte_4CB077B )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB077B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_71617412;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_71617412; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4CB0719 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11406/*"RewardType_"*/);
    byte_4CB0719 = 1;
  }
  if ( !byte_4CB0769 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0769 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v3, 0);
    if ( !byte_4CB0769 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0769 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_71617412;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_4CB071F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9180/*"MstMission"*/);
    byte_4CB071F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9180/*"MstMission"*/, 0, 0);
  if ( !byte_4CB076F )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076F = 1;
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
  if ( (byte_4CB0725 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5031/*"DailyMission"*/);
    sub_1C6BA08(&StringLiteral_9180/*"MstMission"*/);
    sub_1C6BA08(&StringLiteral_6375/*"ExtraMission"*/);
    sub_1C6BA08(&StringLiteral_8432/*"LimitedMission"*/);
    byte_4CB0725 = 1;
  }
  if ( !byte_4CB076E )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5031/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_4CB0770 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0770 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9180/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_4CB0772 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0772 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6375/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_4CB0774 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0774 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8432/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_4CB071C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4619/*"CompleteMission"*/);
    byte_4CB071C = 1;
  }
  if ( !byte_4CB076C )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4619/*"CompleteMission"*/,
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
  if ( (byte_4CB0716 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8367/*"LastViewEventId_"*/);
    sub_1C6BA08(&StringLiteral_10737/*"PriorityIndex_"*/);
    byte_4CB0716 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_8367/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_4CB0767 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0767 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_10737/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_4CB0768 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0768 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_4CB071E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5031/*"DailyMission"*/);
    byte_4CB071E = 1;
  }
  if ( !byte_4CB076E )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5031/*"DailyMission"*/,
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
  if ( (byte_4CB0729 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6247/*"EventTowerState_"*/);
    byte_4CB0729 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_6247/*"EventTowerState_"*/, v2, 0);
  if ( !byte_4CB0778 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0778 = 1;
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
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x19
  System_String_o *v16; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v19; // w9
  __int64 v20; // x0
  int32_t v21; // [xsp+0h] [xbp-50h] BYREF
  int32_t v22; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB072B & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_4CB072B = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
  v24 = eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v24);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  v12 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v12;
  sub_1C6B9AC(v9->m_Items, v12);
  v23 = slot;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = v13;
  sub_1C6B9AC(&v9->m_Items[1], v13);
  v22 = idx;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v14;
  sub_1C6B9AC(&v9->m_Items[2], v14);
  v21 = svtId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v15 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v20 = sub_1C6BC84();
      sub_1C6BB30(v20, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C6BC68(v10);
  v9->m_Items[3] = v15;
  sub_1C6B9AC(&v9->m_Items[3], v15);
  v16 = System_String__Format_64008236((System_String_o *)StringLiteral_6270/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_4CB077A )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077A = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4CB0779 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0779 = 1;
    v19 = (unsigned __int8)byte_4CB077A;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v19 )
    {
      sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB077A = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v16, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_4CB0722 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6375/*"ExtraMission"*/);
    byte_4CB0722 = 1;
  }
  if ( !byte_4CB0772 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0772 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6375/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4CB077E )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_4CB0724 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8432/*"LimitedMission"*/);
    byte_4CB0724 = 1;
  }
  if ( !byte_4CB0774 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0774 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8432/*"LimitedMission"*/,
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
  if ( (byte_4CB0718 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6222/*"EventMission_"*/);
    sub_1C6BA08(&StringLiteral_9118/*"MissionId_"*/);
    byte_4CB0718 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_9118/*"MissionId_"*/, v2, 0);
  if ( !byte_4CB0763 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0763 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_6222/*"EventMission_"*/, v4, 0);
  if ( !byte_4CB0762 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0762 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4CB0727 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9181/*"MstMissionIndex"*/);
    byte_4CB0727 = 1;
  }
  if ( !byte_4CB0776 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0776 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9181/*"MstMissionIndex"*/,
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
  if ( (byte_4CB071A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11406/*"RewardType_"*/);
    byte_4CB071A = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_11406/*"RewardType_"*/, v2, 0);
  if ( !byte_4CB076A )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB076A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_4CB0720 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9180/*"MstMission"*/);
    byte_4CB0720 = 1;
  }
  if ( !byte_4CB0770 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0770 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9180/*"MstMission"*/,
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
  if ( (byte_4CB0744 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/);
    byte_4CB0744 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_8226/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4CB0739 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3240/*"BulletinBoardMessageState"*/);
    byte_4CB0739 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v4, 0);
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
  if ( (byte_4CB0737 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3240/*"BulletinBoardMessageState"*/);
    byte_4CB0737 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_64005056((System_String_o *)StringLiteral_3240/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4CB0731 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_4713/*"CooltimeNotification"*/);
    byte_4CB0731 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4713/*"CooltimeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4CB0742 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_4824/*"CraftNotification"*/);
    byte_4CB0742 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4824/*"CraftNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4CB072D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_6345/*"ExpeditionNotification"*/);
    byte_4CB072D = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6345/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4CB072F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_6637/*"FatigueNotiffication"*/);
    byte_4CB072F = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6637/*"FatigueNotiffication"*/, v2, 0);
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
  if ( (byte_4CB073E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7293/*"HeelPortraitDetailDialogState"*/);
    byte_4CB073E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_7293/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4CB073B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_8503/*"LotteryShopSkipState"*/);
    byte_4CB073B = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8503/*"LotteryShopSkipState"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4CB0734 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11235/*"RecoveryIdx"*/);
    byte_4CB0734 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11235/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0);
    v5 = System_String__Concat_63966792(v5, v6, 0);
  }
  if ( !byte_4CB077B )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4CB077C )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB077C = 1;
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
  if ( (byte_4CB0740 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1C6BA08(&StringLiteral_14569/*"TradeNotification"*/);
    byte_4CB0740 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14569/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4CB06FC & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4CB06FE & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_4CB06FA & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_4CB0706 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0706 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_4CB070E & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_4CB070A & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_4CB070C & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4CB0702 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0702 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_4CB06F8 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_4CB0712 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0712 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_4CB0710 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0710 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4CB0704 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0704 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_4CB06F6 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_4CB0708 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0708 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4CB06F4 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4CB0700 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0700 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06FD & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06FF & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06FB & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06FB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0707 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0707 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB070F & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB070B & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB070D & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB070D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0703 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0703 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06F9 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void EventRewardSaveData__set_HeelPortraitDetailDialogState(System_String_o *value, const MethodInfo *method)
{
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4CB0713 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0713 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1C6B9AC(&static_fields->_HeelPortraitDetailDialogState_k__BackingField, value);
}


void EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0711 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0711 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0705 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0705 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06F7 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0709 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0709 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB06F5 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB06F5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4CB0701 & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0701 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}