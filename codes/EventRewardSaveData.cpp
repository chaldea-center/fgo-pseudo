void EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v4; // x19
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
  struct System_Threading_CancellationTokenSource_o *v16; // x19
  DataManager_o *v17; // x20
  __int64 v18; // x26
  __int64 v19; // x29
  System_Object_array *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x22
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v56; // x20
  int32_t v57; // w21
  System_String_o *v58; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  __int64 v67; // x0
  DataManager_o *v68; // [xsp+8h] [xbp-88h]
  __int128 v69; // [xsp+10h] [xbp-80h] BYREF
  int v70; // [xsp+20h] [xbp-70h] BYREF
  int v71; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v72; // [xsp+28h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_593274A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6484/*"EventMission_"*/);
    sub_21FFC50(&StringLiteral_6509/*"EventTowerState_"*/);
    sub_21FFC50(&StringLiteral_13367/*"ShopItemFilter"*/);
    sub_21FFC50(&StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/);
    sub_21FFC50(&StringLiteral_3372/*"BulletinBoardMessageState"*/);
    sub_21FFC50(&StringLiteral_11705/*"RecoveryIdx"*/);
    sub_21FFC50(&StringLiteral_9552/*"MstMission"*/);
    sub_21FFC50(&StringLiteral_4894/*"CooltimeNotification"*/);
    sub_21FFC50(&StringLiteral_9553/*"MstMissionIndex"*/);
    sub_21FFC50(&StringLiteral_6639/*"ExtraMission"*/);
    sub_21FFC50(&StringLiteral_11186/*"PriorityIndex_"*/);
    sub_21FFC50(&StringLiteral_6917/*"FatigueNotiffication"*/);
    sub_21FFC50(&StringLiteral_8855/*"LotteryShopSkipState"*/);
    sub_21FFC50(&StringLiteral_8784/*"LimitedMission"*/);
    sub_21FFC50(&StringLiteral_11882/*"RewardType_"*/);
    sub_21FFC50(&StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_21FFC50(&StringLiteral_6612/*"ExpeditionNotification"*/);
    sub_21FFC50(&StringLiteral_7592/*"HeelPortraitDetailDialogState"*/);
    sub_21FFC50(&StringLiteral_9483/*"MissionId_"*/);
    byte_593274A = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_42;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v4 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v5 = 0;
    v68 = Instance;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_41;
      eventId = *((_DWORD *)&v4->fields._DispLog + v5);
      v6 = System_Int32__ToString((int32_t)&eventId, 0);
      v7 = System_String__Concat_75438412((System_String_o *)StringLiteral_11186/*"PriorityIndex_"*/, v6, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
      v8 = System_Int32__ToString((int32_t)&eventId, 0);
      v9 = System_String__Concat_75438412((System_String_o *)StringLiteral_9483/*"MissionId_"*/, v8, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
      v10 = System_Int32__ToString((int32_t)&eventId, 0);
      v11 = System_String__Concat_75438412((System_String_o *)StringLiteral_6484/*"EventMission_"*/, v10, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
      v12 = System_Int32__ToString((int32_t)&eventId, 0);
      v13 = System_String__Concat_75438412((System_String_o *)StringLiteral_11882/*"RewardType_"*/, v12, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
      v14 = System_Int32__ToString((int32_t)&eventId, 0);
      v15 = System_String__Concat_75438412((System_String_o *)StringLiteral_6509/*"EventTowerState_"*/, v14, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_42;
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
          if ( (int)v16 >= 1 )
          {
            v18 = 0;
            while ( (unsigned int)v18 < LODWORD(v17->fields.m_CancellationTokenSource) )
            {
              v19 = *((_QWORD *)&v17->fields._DispLog + v18);
              v20 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
              v72 = eventId;
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v72);
              if ( !v20 )
                goto LABEL_42;
              v27 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_21FFDA4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( !LODWORD(v20->max_length) )
                break;
              v20->m_Items[0] = v27;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v20->m_Items, (int32_t)v27, v21, v22, v23, v24, v25, v26);
              if ( !v19 )
                goto LABEL_42;
              v71 = *(_DWORD *)(v19 + 20);
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v71);
              v35 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_21FFDA4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( (v20->max_length & 0xFFFFFFFE) == 0 )
                break;
              v20->m_Items[1] = v35;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->m_Items[1],
                (int32_t)v35,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              v70 = *(_DWORD *)(v19 + 24);
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v70);
              v42 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_21FFDA4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( LODWORD(v20->max_length) <= 2 )
                break;
              v20->m_Items[2] = v42;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->m_Items[2],
                (int32_t)v42,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
              v69 = *(_OWORD *)(v19 + 28);
              Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            &v69);
              v49 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_21FFDA4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_43:
                  v67 = sub_21FFEF0(Instance, v28);
                  sub_21FFD90(v67, 0);
                }
              }
              if ( (v20->max_length & 0xFFFFFFFC) == 0 )
                break;
              v20->m_Items[3] = v49;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->m_Items[3],
                (int32_t)v49,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48);
              v50 = System_String__Format_75484712((System_String_o *)StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v20, 0);
              UnityEngine_PlayerPrefs__DeleteKey(v50, 0);
              if ( (_DWORD)v16 == (_DWORD)++v18 )
                goto LABEL_31;
            }
LABEL_41:
            sub_21FFED4(Instance);
          }
        }
      }
LABEL_31:
      v51 = System_Int32__ToString((int32_t)&eventId, 0);
      v52 = System_String__Concat_75438412((System_String_o *)StringLiteral_11705/*"RecoveryIdx"*/, v51, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v52, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53, v54);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_42;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0,
                              0);
      if ( AvailableEntityList )
      {
        v56 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
          break;
      }
LABEL_39:
      v61 = System_Int32__ToString((int32_t)&eventId, 0);
      v62 = System_String__Concat_75438412((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v61, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0);
      v63 = System_Int32__ToString((int32_t)&eventId, 0);
      v64 = System_String__Concat_75438412((System_String_o *)StringLiteral_7592/*"HeelPortraitDetailDialogState"*/, v63, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0);
      v65 = System_Int32__ToString((int32_t)&eventId, 0);
      v66 = System_String__Concat_75438412((System_String_o *)StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/, v65, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v66, 0);
      v4 = v68;
      ++v5;
      LODWORD(m_CancellationTokenSource) = v68->fields.m_CancellationTokenSource;
      if ( (__int64)v5 >= (int)m_CancellationTokenSource )
        goto LABEL_40;
    }
    v57 = 0;
    while ( 1 )
    {
      v58 = System_Int32__ToString((int32_t)&eventId, 0);
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    v56,
                                    v57,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
      if ( !Instance )
        break;
      v59 = System_Int32__ToString((int)Instance + 16, 0);
      v60 = System_String__Concat_75481624((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v58, v59, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v60, 0);
      if ( ++v57 >= v56->fields._size )
        goto LABEL_39;
    }
LABEL_42:
    sub_21FFECC(Instance, v2);
  }
LABEL_40:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9552/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6639/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8784/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9553/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6917/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4894/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6612/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11705/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8855/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13367/*"ShopItemFilter"*/, 0);
}


void EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v4; // x28
  unsigned __int64 v5; // x24
  __int64 v6; // x19
  struct System_Threading_CancellationTokenSource_o *v7; // x25
  DataManager_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x26
  System_Object_array *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x22
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x22
  System_String_o *v41; // x0
  __int64 v42; // x0
  __int64 v43; // [xsp+8h] [xbp-88h]
  __int128 v44; // [xsp+10h] [xbp-80h] BYREF
  int v45; // [xsp+24h] [xbp-6Ch] BYREF
  int v46; // [xsp+28h] [xbp-68h] BYREF
  int v47; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_593277A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_593277A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_37:
    sub_21FFECC(Instance, v2);
  }
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0);
  if ( Instance )
  {
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    v4 = Instance;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v5 = 0;
        v43 = (unsigned int)Instance->fields.m_CancellationTokenSource;
        while ( 1 )
        {
          if ( v5 >= LODWORD(v4->fields.m_CancellationTokenSource) )
            goto LABEL_35;
          v6 = *((_QWORD *)&v4->fields._DispLog + v5);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v6 || !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v6 + 16),
                                        0);
          if ( Instance )
          {
            v7 = Instance->fields.m_CancellationTokenSource;
            v8 = Instance;
            if ( v7 )
            {
              if ( (int)v7 >= 1 )
                break;
            }
          }
LABEL_33:
          if ( ++v5 == v43 )
            return;
        }
        v9 = 0;
        while ( (unsigned int)v9 < LODWORD(v8->fields.m_CancellationTokenSource) )
        {
          v10 = *((_QWORD *)&v8->fields._DispLog + v9);
          Instance = (DataManager_o *)sub_21FFD10(object___TypeInfo, 4);
          if ( !v10 )
            goto LABEL_37;
          v11 = (System_Object_array *)Instance;
          v47 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v47);
          if ( !v11 )
            goto LABEL_37;
          v18 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( !LODWORD(v11->max_length) )
            break;
          v11->m_Items[0] = v18;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
          v46 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v46);
          v26 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( (v11->max_length & 0xFFFFFFFE) == 0 )
            break;
          v11->m_Items[1] = v26;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
          v45 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v45);
          v33 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( LODWORD(v11->max_length) <= 2 )
            break;
          v11->m_Items[2] = v33;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
          v44 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v44);
          v40 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_21FFDA4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_36:
              v42 = sub_21FFEF0(Instance, v19);
              sub_21FFD90(v42, 0);
            }
          }
          if ( (v11->max_length & 0xFFFFFFFC) == 0 )
            break;
          v11->m_Items[3] = v40;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
          v41 = System_String__Format_75484712((System_String_o *)StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v41, 0);
          if ( (_DWORD)v7 == (_DWORD)++v9 )
            goto LABEL_33;
        }
LABEL_35:
        sub_21FFED4(Instance);
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
  if ( (byte_593276A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11705/*"RecoveryIdx"*/);
    byte_593276A = 1;
  }
  v3 = (System_String_o *)StringLiteral_11705/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_75438412(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_5932778 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/);
    byte_5932778 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_83184936(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_593276D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3372/*"BulletinBoardMessageState"*/);
    byte_593276D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0);
}


bool EventRewardSaveData__GetBulletInBoardMessageState(int32_t eventId, int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  v7 = id;
  if ( (byte_593276B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3372/*"BulletinBoardMessageState"*/);
    byte_593276B = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_75481624((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_5932765 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4894/*"CooltimeNotification"*/);
    byte_5932765 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4894/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_5932776 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5007/*"CraftNotification"*/);
    byte_5932776 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5007/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_5932761 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6612/*"ExpeditionNotification"*/);
    byte_5932761 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6612/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_5932763 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6917/*"FatigueNotiffication"*/);
    byte_5932763 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6917/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_5932772 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7592/*"HeelPortraitDetailDialogState"*/);
    byte_5932772 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_7592/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_83184936(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  v6 = slot;
  if ( (byte_5932771 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_13368/*"ShopItemFilter_"*/);
    byte_5932771 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_75483552(
           (System_String_o *)StringLiteral_13368/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16714/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_593276F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8855/*"LotteryShopSkipState"*/);
    byte_593276F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8855/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_5932767 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13520/*"SpotCooltimeNotification_"*/);
    byte_5932767 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13520/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_5932774 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15133/*"TradeNotification"*/);
    byte_5932774 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_15133/*"TradeNotification"*/, 0, 0) != 0;
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

  if ( (byte_5932750 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4799/*"CompleteMission"*/);
    byte_5932750 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4799/*"CompleteMission"*/, 0, 0);
  if ( !byte_593281D )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_5932752 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5219/*"DailyMission"*/);
    byte_5932752 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5219/*"DailyMission"*/, 0, 0);
  if ( !byte_593281F )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83183516; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_5932749 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11186/*"PriorityIndex_"*/);
    byte_5932749 = 1;
  }
  if ( !byte_5932818 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932818 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_11186/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v3, 0);
    if ( !byte_5932818 )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_5932818 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_83183516;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83183516; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_593275D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6509/*"EventTowerState_"*/);
    byte_593275D = 1;
  }
  if ( !byte_5932829 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932829 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_6509/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v3, 0);
    if ( !byte_5932829 )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_5932829 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_83183516;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x23
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x20
  System_String_o *v41; // x0
  int32_t Int; // w19
  __int64 v43; // x0
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v46; // [xsp+18h] [xbp-38h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_593275F & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_593275F = 1;
  }
  v9 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  v47 = eventId;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v47);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v18 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  v46 = slot;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v46);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( (v9->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v9->m_Items[1] = v26;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v45 = idx;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v45);
  v33 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v44 = svtId;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v44);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_20:
      v43 = sub_21FFEF0(v10, v19);
      sub_21FFD90(v43, 0);
    }
  }
  if ( (v9->max_length & 0xFFFFFFFC) == 0 )
LABEL_19:
    sub_21FFED4(v10);
  v9->m_Items[3] = v40;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format_75484712((System_String_o *)StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v41, 0, 0);
  if ( !byte_593282B )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_5932756 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6639/*"ExtraMission"*/);
    byte_5932756 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6639/*"ExtraMission"*/, 0, 0);
  if ( !byte_5932823 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932823 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_83183516; // w19

  if ( !byte_593282F )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(ItemFilterKeyName, 0);
    if ( !byte_593282F )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_593282F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_83183516;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_5932758 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8784/*"LimitedMission"*/);
    byte_5932758 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8784/*"LimitedMission"*/, 0, 0);
  if ( !byte_5932825 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932825 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_83183516; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_593274C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6484/*"EventMission_"*/);
    sub_21FFC50(&StringLiteral_9483/*"MissionId_"*/);
    byte_593274C = 1;
  }
  if ( !byte_5932649 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932649 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_9483/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v5, 0);
    if ( !byte_5932649 )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_5932649 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_83183516;
  }
  if ( loadFilter )
  {
    if ( !byte_5931FBC )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_5931FBC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_6484/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_83183516(v8, 0);
      if ( !byte_5931FBC )
      {
        sub_21FFC50(&EventRewardSaveData_TypeInfo);
        byte_5931FBC = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_593275B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9553/*"MstMissionIndex"*/);
    byte_593275B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9553/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_5932827 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932827 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_83183516; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_5932768 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11705/*"RecoveryIdx"*/);
    byte_5932768 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11705/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_75438412(v3, v4, 0);
  }
  if ( !byte_593282D )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v3, 0);
    if ( !byte_593282D )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_593282D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_83183516;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83183516; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_593274E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11882/*"RewardType_"*/);
    byte_593274E = 1;
  }
  if ( !byte_593281B )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_11882/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v3, 0);
    if ( !byte_593281B )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_593281B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_83183516;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_5932754 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9552/*"MstMission"*/);
    byte_5932754 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9552/*"MstMission"*/, 0, 0);
  if ( !byte_5932821 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932821 = 1;
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
  if ( (byte_593275A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5219/*"DailyMission"*/);
    sub_21FFC50(&StringLiteral_9552/*"MstMission"*/);
    sub_21FFC50(&StringLiteral_6639/*"ExtraMission"*/);
    sub_21FFC50(&StringLiteral_8784/*"LimitedMission"*/);
    byte_593275A = 1;
  }
  if ( !byte_5932820 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932820 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5219/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_5932822 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932822 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9552/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_5932824 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932824 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6639/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_5932826 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932826 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8784/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_5932751 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4799/*"CompleteMission"*/);
    byte_5932751 = 1;
  }
  if ( !byte_593281E )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4799/*"CompleteMission"*/,
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
  if ( (byte_593274B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8706/*"LastViewEventId_"*/);
    sub_21FFC50(&StringLiteral_11186/*"PriorityIndex_"*/);
    byte_593274B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_8706/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_5932819 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932819 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_11186/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_593281A )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_5932753 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5219/*"DailyMission"*/);
    byte_5932753 = 1;
  }
  if ( !byte_5932820 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932820 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5219/*"DailyMission"*/,
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
  if ( (byte_593275E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6509/*"EventTowerState_"*/);
    byte_593275E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_6509/*"EventTowerState_"*/, v2, 0);
  if ( !byte_593282A )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
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
  System_Object_array *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x23
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x20
  System_String_o *v41; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  int v44; // w9
  __int64 v45; // x0
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v48; // [xsp+18h] [xbp-38h] BYREF
  int32_t v49; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5932760 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_5932760 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  v49 = eventId;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v49);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v18 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  v48 = slot;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v48);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( (v9->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v9->m_Items[1] = v26;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v47 = idx;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v47);
  v33 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v46 = svtId;
  v10 = j_il2cpp_value_box_0(qword_594C070, &v46);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_21FFDA4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v45 = sub_21FFEF0(v10, v19);
      sub_21FFD90(v45, 0);
    }
  }
  if ( (v9->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_21FFED4(v10);
  v9->m_Items[3] = v40;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format_75484712((System_String_o *)StringLiteral_6532/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_593282C )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282C = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_593282B )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    v44 = (unsigned __int8)byte_593282C;
    byte_593282B = 1;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v44 )
    {
      sub_21FFC50(&EventRewardSaveData_TypeInfo);
      byte_593282C = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v41, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_5932757 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6639/*"ExtraMission"*/);
    byte_5932757 = 1;
  }
  if ( !byte_5932824 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932824 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6639/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_5932830 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932830 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_5932759 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8784/*"LimitedMission"*/);
    byte_5932759 = 1;
  }
  if ( !byte_5932826 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932826 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8784/*"LimitedMission"*/,
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
  if ( (byte_593274D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6484/*"EventMission_"*/);
    sub_21FFC50(&StringLiteral_9483/*"MissionId_"*/);
    byte_593274D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_9483/*"MissionId_"*/, v2, 0);
  if ( !byte_5932648 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932648 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_6484/*"EventMission_"*/, v4, 0);
  if ( !byte_5932647 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932647 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_593275C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9553/*"MstMissionIndex"*/);
    byte_593275C = 1;
  }
  if ( !byte_5932828 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932828 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9553/*"MstMissionIndex"*/,
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
  if ( (byte_593274F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11882/*"RewardType_"*/);
    byte_593274F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_75438412((System_String_o *)StringLiteral_11882/*"RewardType_"*/, v2, 0);
  if ( !byte_593281C )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593281C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_5932755 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9552/*"MstMission"*/);
    byte_5932755 = 1;
  }
  if ( !byte_5932822 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932822 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9552/*"MstMission"*/,
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
  if ( (byte_5932779 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/);
    byte_5932779 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_8563/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_593276E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3372/*"BulletinBoardMessageState"*/);
    byte_593276E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v4, 0);
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

  v9 = eventId;
  v8 = id;
  if ( (byte_593276C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3372/*"BulletinBoardMessageState"*/);
    byte_593276C = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_75481624((System_String_o *)StringLiteral_3372/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_5932766 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_4894/*"CooltimeNotification"*/);
    byte_5932766 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4894/*"CooltimeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_5932777 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_5007/*"CraftNotification"*/);
    byte_5932777 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5007/*"CraftNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_5932762 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_6612/*"ExpeditionNotification"*/);
    byte_5932762 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6612/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_5932764 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_6917/*"FatigueNotiffication"*/);
    byte_5932764 = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6917/*"FatigueNotiffication"*/, v2, 0);
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
  if ( (byte_5932773 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7592/*"HeelPortraitDetailDialogState"*/);
    byte_5932773 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75438412((System_String_o *)StringLiteral_7592/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_5932770 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_8855/*"LotteryShopSkipState"*/);
    byte_5932770 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8855/*"LotteryShopSkipState"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int v7; // w9
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = eventId;
  if ( (byte_5932769 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11705/*"RecoveryIdx"*/);
    byte_5932769 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11705/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0);
    v5 = System_String__Concat_75438412(v5, v6, 0);
  }
  if ( !byte_593282D )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282D = 1;
  }
  v7 = (unsigned __int8)byte_593282E;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !v7 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282E = 1;
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
  if ( (byte_5932775 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_21FFC50(&StringLiteral_15133/*"TradeNotification"*/);
    byte_5932775 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_15133/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_5932731 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932731 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_5932733 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932733 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_593272F & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_593273B & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_5932743 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932743 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_593273F & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_5932741 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932741 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_5932737 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932737 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_593272D & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_5932747 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932747 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_5932745 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932745 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_5932739 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932739 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_593272B & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_593273D & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_5932729 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932729 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_5932735 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932735 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932732 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932732 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932734 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932734 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932730 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932730 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_593273C & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932744 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932744 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932740 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932740 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932742 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932742 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932738 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932738 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_593272E & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void EventRewardSaveData__set_HeelPortraitDetailDialogState(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_5932748 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932748 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932746 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932746 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_593273A & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_593272C & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_593273E & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593273E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_593272A & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593272A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_5932736 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_5932736 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}