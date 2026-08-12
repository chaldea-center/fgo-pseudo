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

  if ( (byte_596A770 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_6496/*"EventMission_"*/);
    sub_2213A60(&StringLiteral_6521/*"EventTowerState_"*/);
    sub_2213A60(&StringLiteral_13394/*"ShopItemFilter"*/);
    sub_2213A60(&StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/);
    sub_2213A60(&StringLiteral_3377/*"BulletinBoardMessageState"*/);
    sub_2213A60(&StringLiteral_11725/*"RecoveryIdx"*/);
    sub_2213A60(&StringLiteral_9565/*"MstMission"*/);
    sub_2213A60(&StringLiteral_4902/*"CooltimeNotification"*/);
    sub_2213A60(&StringLiteral_9566/*"MstMissionIndex"*/);
    sub_2213A60(&StringLiteral_6651/*"ExtraMission"*/);
    sub_2213A60(&StringLiteral_11206/*"PriorityIndex_"*/);
    sub_2213A60(&StringLiteral_6929/*"FatigueNotiffication"*/);
    sub_2213A60(&StringLiteral_8868/*"LotteryShopSkipState"*/);
    sub_2213A60(&StringLiteral_8797/*"LimitedMission"*/);
    sub_2213A60(&StringLiteral_11905/*"RewardType_"*/);
    sub_2213A60(&StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_2213A60(&StringLiteral_6624/*"ExpeditionNotification"*/);
    sub_2213A60(&StringLiteral_7604/*"HeelPortraitDetailDialogState"*/);
    sub_2213A60(&StringLiteral_9496/*"MissionId_"*/);
    byte_596A770 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
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
      v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_11206/*"PriorityIndex_"*/, v6, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0);
      v8 = System_Int32__ToString((int32_t)&eventId, 0);
      v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_9496/*"MissionId_"*/, v8, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0);
      v10 = System_Int32__ToString((int32_t)&eventId, 0);
      v11 = System_String__Concat_75651716((System_String_o *)StringLiteral_6496/*"EventMission_"*/, v10, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0);
      v12 = System_Int32__ToString((int32_t)&eventId, 0);
      v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_11905/*"RewardType_"*/, v12, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0);
      v14 = System_Int32__ToString((int32_t)&eventId, 0);
      v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_6521/*"EventTowerState_"*/, v14, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
              v20 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
              v72 = eventId;
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v72);
              if ( !v20 )
                goto LABEL_42;
              v27 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_2213BB4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( !LODWORD(v20->max_length) )
                break;
              v20->m_Items[0] = v27;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)v20->m_Items, (int32_t)v27, v21, v22, v23, v24, v25, v26);
              if ( !v19 )
                goto LABEL_42;
              v71 = *(_DWORD *)(v19 + 20);
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v71);
              v35 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_2213BB4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( (v20->max_length & 0xFFFFFFFE) == 0 )
                break;
              v20->m_Items[1] = v35;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v20->m_Items[1],
                (int32_t)v35,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              v70 = *(_DWORD *)(v19 + 24);
              Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v70);
              v42 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = (DataManager_o *)sub_2213BB4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_43;
              }
              if ( LODWORD(v20->max_length) <= 2 )
                break;
              v20->m_Items[2] = v42;
              sub_2213A04(
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
                Instance = (DataManager_o *)sub_2213BB4(Instance, v20->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_43:
                  v67 = sub_2213D00(Instance, v28);
                  sub_2213BA0(v67, 0);
                }
              }
              if ( (v20->max_length & 0xFFFFFFFC) == 0 )
                break;
              v20->m_Items[3] = v49;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v20->m_Items[3],
                (int32_t)v49,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48);
              v50 = System_String__Format_75698016((System_String_o *)StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v20, 0);
              UnityEngine_PlayerPrefs__DeleteKey(v50, 0);
              if ( (_DWORD)v16 == (_DWORD)++v18 )
                goto LABEL_31;
            }
LABEL_41:
            sub_2213CE4(Instance);
          }
        }
      }
LABEL_31:
      v51 = System_Int32__ToString((int32_t)&eventId, 0);
      v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_11725/*"RecoveryIdx"*/, v51, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v52, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53, v54);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
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
      v62 = System_String__Concat_75651716((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v61, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0);
      v63 = System_Int32__ToString((int32_t)&eventId, 0);
      v64 = System_String__Concat_75651716((System_String_o *)StringLiteral_7604/*"HeelPortraitDetailDialogState"*/, v63, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0);
      v65 = System_Int32__ToString((int32_t)&eventId, 0);
      v66 = System_String__Concat_75651716((System_String_o *)StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/, v65, 0);
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
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
      if ( !Instance )
        break;
      v59 = System_Int32__ToString((int)Instance + 16, 0);
      v60 = System_String__Concat_75694928((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v58, v59, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v60, 0);
      if ( ++v57 >= v56->fields._size )
        goto LABEL_39;
    }
LABEL_42:
    sub_2213CDC(Instance, v2);
  }
LABEL_40:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9565/*"MstMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6651/*"ExtraMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8797/*"LimitedMission"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9566/*"MstMissionIndex"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6929/*"FatigueNotiffication"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4902/*"CooltimeNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6624/*"ExpeditionNotification"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11725/*"RecoveryIdx"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8868/*"LotteryShopSkipState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13394/*"ShopItemFilter"*/, 0);
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

  if ( (byte_596A7A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_596A7A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_37:
    sub_2213CDC(Instance, v2);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          Instance = (DataManager_o *)sub_2213B20(object___TypeInfo, 4);
          if ( !v10 )
            goto LABEL_37;
          v11 = (System_Object_array *)Instance;
          v47 = *(_DWORD *)(v10 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v47);
          if ( !v11 )
            goto LABEL_37;
          v18 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_2213BB4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( !LODWORD(v11->max_length) )
            break;
          v11->m_Items[0] = v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)v11->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
          v46 = *(_DWORD *)(v10 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v46);
          v26 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_2213BB4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( (v11->max_length & 0xFFFFFFFE) == 0 )
            break;
          v11->m_Items[1] = v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
          v45 = *(_DWORD *)(v10 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v45);
          v33 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_2213BB4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_36;
          }
          if ( LODWORD(v11->max_length) <= 2 )
            break;
          v11->m_Items[2] = v33;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
          v44 = *(_OWORD *)(v10 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v44);
          v40 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_2213BB4(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_36:
              v42 = sub_2213D00(Instance, v19);
              sub_2213BA0(v42, 0);
            }
          }
          if ( (v11->max_length & 0xFFFFFFFC) == 0 )
            break;
          v11->m_Items[3] = v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
          v41 = System_String__Format_75698016((System_String_o *)StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v41, 0);
          if ( (_DWORD)v7 == (_DWORD)++v9 )
            goto LABEL_33;
        }
LABEL_35:
        sub_2213CE4(Instance);
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
  if ( (byte_596A790 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11725/*"RecoveryIdx"*/);
    byte_596A790 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11725/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0);
    v3 = System_String__Concat_75651716(v3, v4, 0);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0);
}


System_String_o *EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_596A79E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/);
    byte_596A79E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_83398240(v3, 0);
}


int32_t EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_596A793 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3377/*"BulletinBoardMessageState"*/);
    byte_596A793 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v2, 0);
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
  if ( (byte_596A791 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3377/*"BulletinBoardMessageState"*/);
    byte_596A791 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  v5 = System_String__Concat_75694928((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v3, v4, 0);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0) != 0;
}


bool EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_596A78B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4902/*"CooltimeNotification"*/);
    byte_596A78B = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4902/*"CooltimeNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  if ( (byte_596A79C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5015/*"CraftNotification"*/);
    byte_596A79C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5015/*"CraftNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_596A787 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6624/*"ExpeditionNotification"*/);
    byte_596A787 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6624/*"ExpeditionNotification"*/, 0, 0) != 0;
}


bool EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_596A789 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6929/*"FatigueNotiffication"*/);
    byte_596A789 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6929/*"FatigueNotiffication"*/, 0, 0) != 0;
}


System_String_o *EventRewardSaveData__GetHeelPortraitDetailDialogState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_596A798 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7604/*"HeelPortraitDetailDialogState"*/);
    byte_596A798 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_7604/*"HeelPortraitDetailDialogState"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetString_83398240(v3, 0);
}


System_String_o *EventRewardSaveData__GetItemFilterKeyName(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  v6 = slot;
  if ( (byte_596A797 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_13395/*"ShopItemFilter_"*/);
    byte_596A797 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_75696856(
           (System_String_o *)StringLiteral_13395/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16746/*"_"*/,
           v4,
           0);
}


bool EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_596A795 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8868/*"LotteryShopSkipState"*/);
    byte_596A795 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8868/*"LotteryShopSkipState"*/, 1, 0) != 0;
}


System_String_o *EventRewardSaveData__GetSpotCooltimeNotificationKey(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_596A78D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13547/*"SpotCooltimeNotification_"*/);
    byte_596A78D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_13547/*"SpotCooltimeNotification_"*/, v2, 0);
}


bool EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  if ( (byte_596A79A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15163/*"TradeNotification"*/);
    byte_596A79A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_15163/*"TradeNotification"*/, 0, 0) != 0;
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

  if ( (byte_596A776 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4807/*"CompleteMission"*/);
    byte_596A776 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4807/*"CompleteMission"*/, 0, 0);
  if ( !byte_596A843 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A843 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_596A778 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5231/*"DailyMission"*/);
    byte_596A778 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5231/*"DailyMission"*/, 0, 0);
  if ( !byte_596A845 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A845 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83396820; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_596A76F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11206/*"PriorityIndex_"*/);
    byte_596A76F = 1;
  }
  if ( !byte_596A83E )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A83E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_11206/*"PriorityIndex_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v3, 0);
    if ( !byte_596A83E )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A83E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_83396820;
  }
}


void EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83396820; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_596A783 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6521/*"EventTowerState_"*/);
    byte_596A783 = 1;
  }
  if ( !byte_596A84F )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_6521/*"EventTowerState_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v3, 0);
    if ( !byte_596A84F )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A84F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_83396820;
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

  if ( (byte_596A785 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_596A785 = 1;
  }
  v9 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
  v47 = eventId;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v47);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  v18 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_19;
  v9->m_Items[0] = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v9->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  v46 = slot;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v46);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( (v9->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v9->m_Items[1] = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v45 = idx;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v45);
  v33 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v44 = svtId;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v44);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_20:
      v43 = sub_2213D00(v10, v19);
      sub_2213BA0(v43, 0);
    }
  }
  if ( (v9->max_length & 0xFFFFFFFC) == 0 )
LABEL_19:
    sub_2213CE4(v10);
  v9->m_Items[3] = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format_75698016((System_String_o *)StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  Int = UnityEngine_PlayerPrefs__GetInt(v41, 0, 0);
  if ( !byte_596A851 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A851 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_596A77C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6651/*"ExtraMission"*/);
    byte_596A77C = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6651/*"ExtraMission"*/, 0, 0);
  if ( !byte_596A849 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A849 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_83396820; // w19

  if ( !byte_596A855 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A855 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(ItemFilterKeyName, 0);
    if ( !byte_596A855 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A855 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_83396820;
  }
}


void EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_596A77E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8797/*"LimitedMission"*/);
    byte_596A77E = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8797/*"LimitedMission"*/, 0, 0);
  if ( !byte_596A84B )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_83396820; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_596A772 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6496/*"EventMission_"*/);
    sub_2213A60(&StringLiteral_9496/*"MissionId_"*/);
    byte_596A772 = 1;
  }
  if ( !byte_596A748 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A748 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_9496/*"MissionId_"*/, v4, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v5, 0);
    if ( !byte_596A748 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A748 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_83396820;
  }
  if ( loadFilter )
  {
    if ( !byte_596A15C )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A15C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_6496/*"EventMission_"*/, v7, 0);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_83396820(v8, 0);
      if ( !byte_596A15C )
      {
        sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A15C = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_596A781 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9566/*"MstMissionIndex"*/);
    byte_596A781 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9566/*"MstMissionIndex"*/, 0, 0);
  if ( !byte_596A84D )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_83396820; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_596A78E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11725/*"RecoveryIdx"*/);
    byte_596A78E = 1;
  }
  v3 = (System_String_o *)StringLiteral_11725/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0);
    v3 = System_String__Concat_75651716(v3, v4, 0);
  }
  if ( !byte_596A853 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A853 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v3, 0);
    if ( !byte_596A853 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A853 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_83396820;
  }
}


void EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_83396820; // w19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_596A774 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11905/*"RewardType_"*/);
    byte_596A774 = 1;
  }
  if ( !byte_596A841 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A841 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_11905/*"RewardType_"*/, v2, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v3, 0);
    if ( !byte_596A841 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A841 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_83396820;
  }
}


void EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_596A77A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9565/*"MstMission"*/);
    byte_596A77A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9565/*"MstMission"*/, 0, 0);
  if ( !byte_596A847 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A847 = 1;
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
  if ( (byte_596A780 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5231/*"DailyMission"*/);
    sub_2213A60(&StringLiteral_9565/*"MstMission"*/);
    sub_2213A60(&StringLiteral_6651/*"ExtraMission"*/);
    sub_2213A60(&StringLiteral_8797/*"LimitedMission"*/);
    byte_596A780 = 1;
  }
  if ( !byte_596A846 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A846 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5231/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0);
  if ( !byte_596A848 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A848 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9565/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0);
  if ( !byte_596A84A )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6651/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  if ( !byte_596A84C )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8797/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_596A777 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4807/*"CompleteMission"*/);
    byte_596A777 = 1;
  }
  if ( !byte_596A844 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A844 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4807/*"CompleteMission"*/,
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
  if ( (byte_596A771 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8719/*"LastViewEventId_"*/);
    sub_2213A60(&StringLiteral_11206/*"PriorityIndex_"*/);
    byte_596A771 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_8719/*"LastViewEventId_"*/, v2, 0);
  if ( !byte_596A83F )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A83F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_11206/*"PriorityIndex_"*/, v4, 0);
  if ( !byte_596A840 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A840 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_596A779 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5231/*"DailyMission"*/);
    byte_596A779 = 1;
  }
  if ( !byte_596A846 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A846 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5231/*"DailyMission"*/,
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
  if ( (byte_596A784 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6521/*"EventTowerState_"*/);
    byte_596A784 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_6521/*"EventTowerState_"*/, v2, 0);
  if ( !byte_596A850 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A850 = 1;
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

  if ( (byte_596A786 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_596A786 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
  v49 = eventId;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v49);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  v18 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_23;
  v9->m_Items[0] = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v9->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  v48 = slot;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v48);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( (v9->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v9->m_Items[1] = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v47 = idx;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v47);
  v33 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v46 = svtId;
  v10 = j_il2cpp_value_box_0(qword_5984348, &v46);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_2213BB4(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v45 = sub_2213D00(v10, v19);
      sub_2213BA0(v45, 0);
    }
  }
  if ( (v9->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_2213CE4(v10);
  v9->m_Items[3] = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format_75698016((System_String_o *)StringLiteral_6544/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0);
  if ( !byte_596A852 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A852 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_596A851 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    v44 = (unsigned __int8)byte_596A852;
    byte_596A851 = 1;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v44 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A852 = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v41, EventVoicePlayCount_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_596A77D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6651/*"ExtraMission"*/);
    byte_596A77D = 1;
  }
  if ( !byte_596A84A )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6651/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_596A856 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A856 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_596A77F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8797/*"LimitedMission"*/);
    byte_596A77F = 1;
  }
  if ( !byte_596A84C )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8797/*"LimitedMission"*/,
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
  if ( (byte_596A773 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6496/*"EventMission_"*/);
    sub_2213A60(&StringLiteral_9496/*"MissionId_"*/);
    byte_596A773 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_9496/*"MissionId_"*/, v2, 0);
  if ( !byte_596A747 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A747 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_6496/*"EventMission_"*/, v4, 0);
  if ( !byte_596A746 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A746 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_596A782 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9566/*"MstMissionIndex"*/);
    byte_596A782 = 1;
  }
  if ( !byte_596A84E )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9566/*"MstMissionIndex"*/,
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
  if ( (byte_596A775 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11905/*"RewardType_"*/);
    byte_596A775 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_11905/*"RewardType_"*/, v2, 0);
  if ( !byte_596A842 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A842 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_596A77B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9565/*"MstMission"*/);
    byte_596A77B = 1;
  }
  if ( !byte_596A848 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A848 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9565/*"MstMission"*/,
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
  if ( (byte_596A79F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/);
    byte_596A79F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_8576/*"KeyBoxGachaPlayedVoice"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventRewardSaveData__SetBulletInBoardLastMessageId(int32_t eventId, int32_t messageId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_596A794 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3377/*"BulletinBoardMessageState"*/);
    byte_596A794 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v4, 0);
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
  if ( (byte_596A792 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3377/*"BulletinBoardMessageState"*/);
    byte_596A792 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_Int32__ToString((int32_t)&v8, 0);
  v7 = System_String__Concat_75694928((System_String_o *)StringLiteral_3377/*"BulletinBoardMessageState"*/, v5, v6, 0);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_596A78C & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_4902/*"CooltimeNotification"*/);
    byte_596A78C = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4902/*"CooltimeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_596A79D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_5015/*"CraftNotification"*/);
    byte_596A79D = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5015/*"CraftNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_596A788 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_6624/*"ExpeditionNotification"*/);
    byte_596A788 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6624/*"ExpeditionNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_596A78A & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_6929/*"FatigueNotiffication"*/);
    byte_596A78A = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6929/*"FatigueNotiffication"*/, v2, 0);
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
  if ( (byte_596A799 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7604/*"HeelPortraitDetailDialogState"*/);
    byte_596A799 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_7604/*"HeelPortraitDetailDialogState"*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_596A796 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_8868/*"LotteryShopSkipState"*/);
    byte_596A796 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8868/*"LotteryShopSkipState"*/, v2, 0);
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
  if ( (byte_596A78F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11725/*"RecoveryIdx"*/);
    byte_596A78F = 1;
  }
  v5 = (System_String_o *)StringLiteral_11725/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0);
    v5 = System_String__Concat_75651716(v5, v6, 0);
  }
  if ( !byte_596A853 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A853 = 1;
  }
  v7 = (unsigned __int8)byte_596A854;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !v7 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A854 = 1;
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
  if ( (byte_596A79B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_2213A60(&StringLiteral_15163/*"TradeNotification"*/);
    byte_596A79B = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_15163/*"TradeNotification"*/, v2, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


int32_t EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_596A757 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A757 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_596A759 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A759 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_596A755 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A755 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_596A761 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A761 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_596A769 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A769 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_596A765 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A765 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_596A767 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A767 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_596A75D & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_596A753 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A753 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_596A76D & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A76D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_596A76B & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A76B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_596A75F & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_596A751 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A751 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_596A763 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A763 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_596A74F & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A74F = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_596A75B & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A758 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A758 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A75A & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A756 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A756 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A762 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A762 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A76A & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A76A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A766 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A766 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A768 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A768 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A75E & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A754 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A754 = 1;
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

  if ( (byte_596A76E & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A76E = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_2213A04(
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
  if ( (byte_596A76C & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A76C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A760 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A760 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A752 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A752 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A764 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A764 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A750 & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A750 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_596A75C & 1) == 0 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A75C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}