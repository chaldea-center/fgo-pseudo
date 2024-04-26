void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v4; // x25
  unsigned __int64 v5; // x24
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
  struct DataMasterBase_array *v16; // x19
  DataManager_o *v17; // x20
  unsigned int v18; // w26
  __int64 v19; // x28
  System_Object_array *v20; // x21
  __int64 v21; // x2
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x22
  __int64 v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  __int64 v37; // x2
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  __int64 v45; // x9
  __int64 v46; // x2
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v58; // x20
  __int64 v59; // x19
  System_String_o *v60; // x21
  EventBulletinBoardEntity_o *v61; // x8
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70[2]; // [xsp+0h] [xbp-70h] BYREF
  int v71; // [xsp+10h] [xbp-60h] BYREF
  int v72; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v73; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_43555A9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6267/*"EventMission_"*/);
    sub_B70694(&StringLiteral_6291/*"EventTowerState_"*/);
    sub_B70694(&StringLiteral_13023/*"ShopItemFilter"*/);
    sub_B70694(&StringLiteral_2957/*"BulletinBoardMessageState"*/);
    sub_B70694(&StringLiteral_11480/*"RecoveryIdx"*/);
    sub_B70694(&StringLiteral_9325/*"MstMission"*/);
    sub_B70694(&StringLiteral_4381/*"CooltimeNotification"*/);
    sub_B70694(&StringLiteral_9326/*"MstMissionIndex"*/);
    sub_B70694(&StringLiteral_6405/*"ExtraMission"*/);
    sub_B70694(&StringLiteral_10924/*"PriorityIndex_"*/);
    sub_B70694(&StringLiteral_6680/*"FatigueNotiffication"*/);
    sub_B70694(&StringLiteral_8697/*"LotteryShopSkipState"*/);
    sub_B70694(&StringLiteral_8628/*"LimitedMission"*/);
    sub_B70694(&StringLiteral_11662/*"RewardType_"*/);
    sub_B70694(&StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_B70694(&StringLiteral_6372/*"ExpeditionNotification"*/);
    sub_B70694(&StringLiteral_7241/*"HeelPortraitDetailDialogState"*/);
    sub_B70694(&StringLiteral_9259/*"MissionId_"*/);
    byte_43555A9 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  datalist = Instance->fields.datalist;
  v4 = Instance;
  if ( (int)datalist >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)datalist )
        goto LABEL_46;
      eventId = *((_DWORD *)&v4->fields.lookup + v5);
      v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_10924/*"PriorityIndex_"*/, v6, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0LL);
      v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v9 = System_String__Concat_44758168((System_String_o *)StringLiteral_9259/*"MissionId_"*/, v8, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0LL);
      v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v11 = System_String__Concat_44758168((System_String_o *)StringLiteral_6267/*"EventMission_"*/, v10, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0LL);
      v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_11662/*"RewardType_"*/, v12, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0LL);
      v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v15 = System_String__Concat_44758168((System_String_o *)StringLiteral_6291/*"EventTowerState_"*/, v14, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v16 = Instance->fields.datalist;
        v17 = Instance;
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
            break;
        }
      }
LABEL_33:
      v55 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v56 = System_String__Concat_44758168((System_String_o *)StringLiteral_11480/*"RecoveryIdx"*/, v55, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v56, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v58 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v59 = 0LL;
          do
          {
            Instance = (DataManager_o *)System_Int32__ToString((int32_t)&eventId, 0LL);
            v60 = (System_String_o *)Instance;
            if ( v58->fields._size <= (unsigned int)v59 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v61 = v58->fields._items->m_Items[v59];
            if ( !v61 )
              goto LABEL_47;
            v62 = System_Int32__ToString((int)v61 + 16, 0LL);
            v63 = System_String__Concat_44760452((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v60, v62, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v63, 0LL);
          }
          while ( (int)++v59 < v58->fields._size );
        }
      }
      v64 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v65 = System_String__Concat_44758168((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v64, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v65, 0LL);
      v66 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v67 = System_String__Concat_44758168((System_String_o *)StringLiteral_7241/*"HeelPortraitDetailDialogState"*/, v66, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v67, 0LL);
      LODWORD(datalist) = v4->fields.datalist;
      if ( (__int64)++v5 >= (int)datalist )
        goto LABEL_45;
    }
    if ( !(_DWORD)v16 )
    {
LABEL_46:
      v68 = sub_B70798(Instance);
      sub_B70738(v68, 0LL);
    }
    v18 = 0;
    while ( 1 )
    {
      v19 = *((_QWORD *)&v17->fields.lookup + (int)v18);
      v20 = (System_Object_array *)sub_B706AC(object___TypeInfo, 4LL);
      v73 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v21);
      if ( !v20 )
        break;
      v28 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B70754(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( !v20->max_length )
        goto LABEL_46;
      v20->m_Items[0] = (Il2CppObject *)v28;
      sub_B70630((BattleServantConfConponent_o *)v20->m_Items, v28, v22, v23, v24, v25, v26, v27);
      if ( !v19 )
        break;
      v72 = *(_DWORD *)(v19 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v29);
      v36 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B70754(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v20->max_length <= 1 )
        goto LABEL_46;
      v20->m_Items[1] = (Il2CppObject *)v36;
      sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
      v71 = *(_DWORD *)(v19 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v37);
      v44 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B70754(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v20->max_length <= 2 )
        goto LABEL_46;
      v20->m_Items[2] = (Il2CppObject *)v44;
      sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
      v45 = *(_QWORD *)(v19 + 36);
      v70[0] = *(_QWORD *)(v19 + 28);
      v70[1] = v45;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v70, v46);
      v53 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B70754(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v69 = sub_B7078C(Instance);
          sub_B70738(v69, 0LL);
        }
      }
      if ( v20->max_length <= 3 )
        goto LABEL_46;
      v20->m_Items[3] = (Il2CppObject *)v53;
      sub_B70630((BattleServantConfConponent_o *)&v20->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
      v54 = System_String__Format_44836892((System_String_o *)StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v20, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v54, 0LL);
      if ( (int)++v18 >= (int)v16 )
        goto LABEL_33;
      if ( v18 >= LODWORD(v17->fields.datalist) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B7076C(Instance, v2);
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9325/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6405/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8628/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9326/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6680/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4381/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6372/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11480/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8697/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13023/*"ShopItemFilter"*/, 0LL);
}


void __fastcall EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataManager_o *v3; // x26
  unsigned int v4; // w25
  __int64 v5; // x19
  struct DataMasterBase_array *v6; // x24
  DataManager_o *v7; // x20
  unsigned int v8; // w19
  __int64 v9; // x27
  __int64 v10; // x2
  System_Object_array *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  __int64 v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  __int64 v27; // x2
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  __int64 v35; // x9
  __int64 v36; // x2
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x22
  System_String_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  struct DataMasterBase_array *datalist; // [xsp+8h] [xbp-78h]
  __int64 v48[2]; // [xsp+10h] [xbp-70h] BYREF
  int v49; // [xsp+24h] [xbp-5Ch] BYREF
  int v50; // [xsp+28h] [xbp-58h] BYREF
  int v51; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_43555D3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_43555D3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v3 = Instance;
    datalist = Instance->fields.datalist;
    if ( datalist )
    {
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
          goto LABEL_37;
        v4 = 0;
        while ( 1 )
        {
          v5 = *((_QWORD *)&v3->fields.lookup + (int)v4);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v5 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v5 + 16),
                                        0LL);
          if ( Instance )
          {
            v6 = Instance->fields.datalist;
            v7 = Instance;
            if ( v6 )
            {
              if ( (int)v6 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( (int)++v4 >= (int)datalist )
            return;
          if ( v4 >= LODWORD(v3->fields.datalist) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v6 )
        {
LABEL_37:
          v45 = sub_B70798(Instance);
          sub_B70738(v45, 0LL);
        }
        v8 = 0;
        while ( 1 )
        {
          v9 = *((_QWORD *)&v7->fields.lookup + (int)v8);
          Instance = (DataManager_o *)sub_B706AC(object___TypeInfo, 4LL);
          if ( !v9 )
            break;
          v11 = (System_Object_array *)Instance;
          v51 = *(_DWORD *)(v9 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v10);
          if ( !v11 )
            break;
          v18 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v11->max_length )
            goto LABEL_37;
          v11->m_Items[0] = (Il2CppObject *)v18;
          sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
          v50 = *(_DWORD *)(v9 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v19);
          v26 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v11->max_length <= 1 )
            goto LABEL_37;
          v11->m_Items[1] = (Il2CppObject *)v26;
          sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
          v49 = *(_DWORD *)(v9 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v27);
          v34 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v11->max_length <= 2 )
            goto LABEL_37;
          v11->m_Items[2] = (Il2CppObject *)v34;
          sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
          v35 = *(_QWORD *)(v9 + 36);
          v48[0] = *(_QWORD *)(v9 + 28);
          v48[1] = v35;
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        v48,
                                        v36);
          v43 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v46 = sub_B7078C(Instance);
              sub_B70738(v46, 0LL);
            }
          }
          if ( v11->max_length > 3 )
          {
            v11->m_Items[3] = (Il2CppObject *)v43;
            sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
            v44 = System_String__Format_44836892((System_String_o *)StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
            if ( (int)++v8 >= (int)v6 )
              goto LABEL_35;
            if ( v8 < LODWORD(v7->fields.datalist) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B7076C(Instance, v2);
      }
    }
  }
}


void __fastcall EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_43555C9 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11480/*"RecoveryIdx"*/);
    byte_43555C9 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11480/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_44758168(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_43555CC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2957/*"BulletinBoardMessageState"*/);
    byte_43555CC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = eventId;
  v7 = id;
  if ( (byte_43555CA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2957/*"BulletinBoardMessageState"*/);
    byte_43555CA = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44760452((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_43555C4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4381/*"CooltimeNotification"*/);
    byte_43555C4 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4381/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_43555C0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6372/*"ExpeditionNotification"*/);
    byte_43555C0 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6372/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_43555C2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6680/*"FatigueNotiffication"*/);
    byte_43555C2 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6680/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_43555D1 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7241/*"HeelPortraitDetailDialogState"*/);
    byte_43555D1 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_7241/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_36095200(v3, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetItemFilterKeyName(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-8h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = eventId;
  v6 = slot;
  if ( (byte_43555D0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_13024/*"ShopItemFilter_"*/);
    byte_43555D0 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44761580(
           (System_String_o *)StringLiteral_13024/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16127/*"_"*/,
           v4,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_43555CE & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8697/*"LotteryShopSkipState"*/);
    byte_43555CE = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8697/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = eventId;
  if ( (byte_43555C6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13172/*"SpotCooltimeNotification_"*/);
    byte_43555C6 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_13172/*"SpotCooltimeNotification_"*/, v2, 0LL);
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

  if ( (byte_43555AF & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4282/*"CompleteMission"*/);
    byte_43555AF = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4282/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_435157A )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435157A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_43555B1 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5149/*"DailyMission"*/);
    byte_43555B1 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5149/*"DailyMission"*/, 0, 0LL);
  if ( !byte_435232B )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_36094592; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_43555A8 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10924/*"PriorityIndex_"*/);
    byte_43555A8 = 1;
  }
  if ( !byte_434E9FC )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434E9FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_10924/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v3, 0LL);
    if ( !byte_434E9FC )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_434E9FC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_36094592;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_36094592; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_43555BC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6291/*"EventTowerState_"*/);
    byte_43555BC = 1;
  }
  if ( !byte_435039A )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435039A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_6291/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v3, 0LL);
    if ( !byte_435039A )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_435039A = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_36094592;
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  __int64 v20; // x2
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  __int64 v28; // x2
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  __int64 v36; // x2
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  System_String_o *v44; // x0
  int32_t Int; // w19
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // [xsp+0h] [xbp-40h] BYREF
  int32_t v49; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43555BE & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_43555BE = 1;
  }
  v9 = (System_Object_array *)sub_B706AC(object___TypeInfo, 4LL);
  v51 = eventId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v10);
  if ( !v9 )
    sub_B7076C(v11, v12);
  v19 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_20;
  }
  if ( !v9->max_length )
    goto LABEL_19;
  v9->m_Items[0] = (Il2CppObject *)v19;
  sub_B70630((BattleServantConfConponent_o *)v9->m_Items, v19, v13, v14, v15, v16, v17, v18);
  v50 = slot;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v50, v20);
  v27 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = (Il2CppObject *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v49 = idx;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v49, v28);
  v35 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = (Il2CppObject *)v35;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v48 = svtId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v36);
  v43 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_20:
      v47 = sub_B7078C(v11);
      sub_B70738(v47, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
  {
LABEL_19:
    v46 = sub_B70798(v11);
    sub_B70738(v46, 0LL);
  }
  v9->m_Items[3] = (Il2CppObject *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v44 = System_String__Format_44836892((System_String_o *)StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v44, 0, 0LL);
  if ( !byte_43556BB )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_43555B5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6405/*"ExtraMission"*/);
    byte_43555B5 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6405/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_435232D )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_36094592; // w19

  if ( !byte_43556BE )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(ItemFilterKeyName, 0LL);
    if ( !byte_43556BE )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_43556BE = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_36094592;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_43555B7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8628/*"LimitedMission"*/);
    byte_43555B7 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8628/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_435232E )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_36094592; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_43555AB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6267/*"EventMission_"*/);
    sub_B70694(&StringLiteral_9259/*"MissionId_"*/);
    byte_43555AB = 1;
  }
  if ( !byte_434F41C )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434F41C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_9259/*"MissionId_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v5, 0LL);
    if ( !byte_434F41C )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_434F41C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_36094592;
  }
  if ( loadFilter )
  {
    if ( !byte_434F41B )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_434F41B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_6267/*"EventMission_"*/, v7, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_36094592(v8, 0LL);
      if ( !byte_434F41B )
      {
        sub_B70694(&EventRewardSaveData_TypeInfo);
        byte_434F41B = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_43555BA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9326/*"MstMissionIndex"*/);
    byte_43555BA = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9326/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4352326 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352326 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_36094592; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_43555C7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11480/*"RecoveryIdx"*/);
    byte_43555C7 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11480/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0LL);
    v3 = System_String__Concat_44758168(v3, v4, 0LL);
  }
  if ( !byte_43556BC )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v3, 0LL);
    if ( !byte_43556BC )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_43556BC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_36094592;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_36094592; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_43555AD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11662/*"RewardType_"*/);
    byte_43555AD = 1;
  }
  if ( !byte_43556B9 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556B9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_11662/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_36094592 = UnityEngine_PlayerPrefs__GetInt_36094592(v3, 0LL);
    if ( !byte_43556B9 )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_43556B9 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_36094592;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_43555B3 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9325/*"MstMission"*/);
    byte_43555B3 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9325/*"MstMission"*/, 0, 0LL);
  if ( !byte_435232C )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232C = 1;
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
  if ( (byte_43555B9 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5149/*"DailyMission"*/);
    sub_B70694(&StringLiteral_9325/*"MstMission"*/);
    sub_B70694(&StringLiteral_6405/*"ExtraMission"*/);
    sub_B70694(&StringLiteral_8628/*"LimitedMission"*/);
    byte_43555B9 = 1;
  }
  if ( !byte_4352327 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352327 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5149/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4352328 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352328 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9325/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4352329 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352329 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6405/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_435232A )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8628/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_43555B0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4282/*"CompleteMission"*/);
    byte_43555B0 = 1;
  }
  if ( !byte_4351579 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4351579 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4282/*"CompleteMission"*/,
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
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_43555AA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8583/*"LastViewEventId_"*/);
    sub_B70694(&StringLiteral_10924/*"PriorityIndex_"*/);
    byte_43555AA = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_8583/*"LastViewEventId_"*/, v2, 0LL);
  if ( !byte_43556B8 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556B8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_10924/*"PriorityIndex_"*/, v4, 0LL);
  if ( !byte_434E9FB )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434E9FB = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_43555B2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5149/*"DailyMission"*/);
    byte_43555B2 = 1;
  }
  if ( !byte_4352327 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352327 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5149/*"DailyMission"*/,
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
  if ( (byte_43555BD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6291/*"EventTowerState_"*/);
    byte_43555BD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_6291/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_434E582 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_434E582 = 1;
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  __int64 v20; // x2
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  __int64 v28; // x2
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  __int64 v36; // x2
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19
  System_String_o *v44; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v47; // w22
  int v48; // w10
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // [xsp+0h] [xbp-40h] BYREF
  int32_t v52; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v53; // [xsp+8h] [xbp-38h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43555BF & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_43555BF = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_B706AC(object___TypeInfo, 4LL);
  v54 = eventId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v54, v10);
  if ( !v9 )
    sub_B7076C(v11, v12);
  v19 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( !v9->max_length )
    goto LABEL_23;
  v9->m_Items[0] = (Il2CppObject *)v19;
  sub_B70630((BattleServantConfConponent_o *)v9->m_Items, v19, v13, v14, v15, v16, v17, v18);
  v53 = slot;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v53, v20);
  v27 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = (Il2CppObject *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v52 = idx;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v52, v28);
  v35 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = (Il2CppObject *)v35;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v51 = svtId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v36);
  v43 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = sub_B70754(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_24:
      v50 = sub_B7078C(v11);
      sub_B70738(v50, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
  {
LABEL_23:
    v49 = sub_B70798(v11);
    sub_B70738(v49, 0LL);
  }
  v9->m_Items[3] = (Il2CppObject *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v9->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v44 = System_String__Format_44836892((System_String_o *)StringLiteral_6305/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  if ( !byte_435157B )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435157B = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v47 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_43556BB )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v47;
  }
  else
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BB = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v48 = (unsigned __int8)byte_435157B;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v47;
    if ( !v48 )
    {
      sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_435157B = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v44, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_43555B6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6405/*"ExtraMission"*/);
    byte_43555B6 = 1;
  }
  if ( !byte_4352329 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352329 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6405/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_43556BF )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_43555B8 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8628/*"LimitedMission"*/);
    byte_43555B8 = 1;
  }
  if ( !byte_435232A )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435232A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8628/*"LimitedMission"*/,
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
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_43555AC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6267/*"EventMission_"*/);
    sub_B70694(&StringLiteral_9259/*"MissionId_"*/);
    byte_43555AC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_9259/*"MissionId_"*/, v2, 0LL);
  if ( !byte_4351EC7 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4351EC7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_6267/*"EventMission_"*/, v4, 0LL);
  if ( !byte_4351EC6 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4351EC6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_43555BB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9326/*"MstMissionIndex"*/);
    byte_43555BB = 1;
  }
  if ( !byte_4352325 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352325 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9326/*"MstMissionIndex"*/,
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
  if ( (byte_43555AE & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11662/*"RewardType_"*/);
    byte_43555AE = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_11662/*"RewardType_"*/, v2, 0LL);
  if ( !byte_43556BA )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_43555B4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9325/*"MstMission"*/);
    byte_43555B4 = 1;
  }
  if ( !byte_4352328 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352328 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9325/*"MstMission"*/,
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
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_43555CD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2957/*"BulletinBoardMessageState"*/);
    byte_43555CD = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  int32_t v8; // [xsp+8h] [xbp-18h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v8 = id;
  v9 = eventId;
  if ( (byte_43555CB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2957/*"BulletinBoardMessageState"*/);
    byte_43555CB = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44760452((System_String_o *)StringLiteral_2957/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_43555C5 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B70694(&StringLiteral_4381/*"CooltimeNotification"*/);
    byte_43555C5 = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4381/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_43555C1 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B70694(&StringLiteral_6372/*"ExpeditionNotification"*/);
    byte_43555C1 = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6372/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_43555C3 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B70694(&StringLiteral_6680/*"FatigueNotiffication"*/);
    byte_43555C3 = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6680/*"FatigueNotiffication"*/, v2, 0LL);
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
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_43555D2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7241/*"HeelPortraitDetailDialogState"*/);
    byte_43555D2 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_7241/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_43555CF & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B70694(&StringLiteral_8697/*"LotteryShopSkipState"*/);
    byte_43555CF = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8697/*"LotteryShopSkipState"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_43555C8 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11480/*"RecoveryIdx"*/);
    byte_43555C8 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11480/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v5 = System_String__Concat_44758168(v5, v6, 0LL);
  }
  if ( !byte_43556BC )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BC = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_43556BD )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43556BD = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, (*p_static_fields)->_EventRecoveryIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetSpotCooltimeNotification(int32_t eventId, bool value, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  System_String_o *SpotCooltimeNotificationKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x0

  v3 = value;
  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, (const MethodInfo *)value);
  if ( (((UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0LL) != 0) ^ v3) & 1) != 0 )
  {
    v7 = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, v6);
    UnityEngine_PlayerPrefs__SetInt(v7, v3, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4355590 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355590 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_4355592 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355592 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_435558E & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_435559A & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_43555A2 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_435559E & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559E = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_43555A0 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4355596 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355596 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_435558C & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_43555A6 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_43555A4 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_4355598 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355598 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_435558A & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_435559C & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559C = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_4355588 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355588 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_4355594 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355594 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355591 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355591 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355593 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355593 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_435558F & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_435559B & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_43555A3 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_435559F & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_43555A1 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355597 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355597 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_435558D & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_HeelPortraitDetailDialogState(
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_43555A7 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A7 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->_HeelPortraitDetailDialogState_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_43555A5 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_43555A5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355599 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355599 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_435558B & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435558B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_435559D & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435559D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355589 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355589 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4355595 & 1) == 0 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4355595 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}