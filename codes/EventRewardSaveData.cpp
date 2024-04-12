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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  __int64 v42; // x9
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v54; // x20
  __int64 v55; // x19
  System_String_o *v56; // x21
  EventBulletinBoardEntity_o *v57; // x8
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66[2]; // [xsp+0h] [xbp-70h] BYREF
  int v67; // [xsp+10h] [xbp-60h] BYREF
  int v68; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v69; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42B3410 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_6218/*"EventMission_"*/);
    sub_B52984(&StringLiteral_6242/*"EventTowerState_"*/);
    sub_B52984(&StringLiteral_12941/*"ShopItemFilter"*/);
    sub_B52984(&StringLiteral_2923/*"BulletinBoardMessageState"*/);
    sub_B52984(&StringLiteral_11413/*"RecoveryIdx"*/);
    sub_B52984(&StringLiteral_9272/*"MstMission"*/);
    sub_B52984(&StringLiteral_4339/*"CooltimeNotification"*/);
    sub_B52984(&StringLiteral_9273/*"MstMissionIndex"*/);
    sub_B52984(&StringLiteral_6356/*"ExtraMission"*/);
    sub_B52984(&StringLiteral_10857/*"PriorityIndex_"*/);
    sub_B52984(&StringLiteral_6631/*"FatigueNotiffication"*/);
    sub_B52984(&StringLiteral_8645/*"LotteryShopSkipState"*/);
    sub_B52984(&StringLiteral_8576/*"LimitedMission"*/);
    sub_B52984(&StringLiteral_11595/*"RewardType_"*/);
    sub_B52984(&StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    sub_B52984(&StringLiteral_6323/*"ExpeditionNotification"*/);
    sub_B52984(&StringLiteral_7190/*"HeelPortraitDetailDialogState"*/);
    sub_B52984(&StringLiteral_9206/*"MissionId_"*/);
    byte_42B3410 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
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
      v7 = System_String__Concat_44568316((System_String_o *)StringLiteral_10857/*"PriorityIndex_"*/, v6, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v7, 0LL);
      v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v9 = System_String__Concat_44568316((System_String_o *)StringLiteral_9206/*"MissionId_"*/, v8, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v9, 0LL);
      v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v11 = System_String__Concat_44568316((System_String_o *)StringLiteral_6218/*"EventMission_"*/, v10, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v11, 0LL);
      v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v13 = System_String__Concat_44568316((System_String_o *)StringLiteral_11595/*"RewardType_"*/, v12, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v13, 0LL);
      v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v15 = System_String__Concat_44568316((System_String_o *)StringLiteral_6242/*"EventTowerState_"*/, v14, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v15, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
      v51 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v52 = System_String__Concat_44568316((System_String_o *)StringLiteral_11413/*"RecoveryIdx"*/, v51, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v52, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v54 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v55 = 0LL;
          do
          {
            Instance = (DataManager_o *)System_Int32__ToString((int32_t)&eventId, 0LL);
            v56 = (System_String_o *)Instance;
            if ( v54->fields._size <= (unsigned int)v55 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v57 = v54->fields._items->m_Items[v55];
            if ( !v57 )
              goto LABEL_47;
            v58 = System_Int32__ToString((int)v57 + 16, 0LL);
            v59 = System_String__Concat_44570600((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v56, v58, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v59, 0LL);
          }
          while ( (int)++v55 < v54->fields._size );
        }
      }
      v60 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v61 = System_String__Concat_44568316((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v60, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v61, 0LL);
      v62 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v63 = System_String__Concat_44568316((System_String_o *)StringLiteral_7190/*"HeelPortraitDetailDialogState"*/, v62, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v63, 0LL);
      LODWORD(datalist) = v4->fields.datalist;
      if ( (__int64)++v5 >= (int)datalist )
        goto LABEL_45;
    }
    if ( !(_DWORD)v16 )
    {
LABEL_46:
      v64 = sub_B52A88(Instance);
      sub_B52A28(v64, 0LL);
    }
    v18 = 0;
    while ( 1 )
    {
      v19 = *((_QWORD *)&v17->fields.lookup + (int)v18);
      v20 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
      v69 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      if ( !v20 )
        break;
      v27 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B52A44(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( !v20->max_length )
        goto LABEL_46;
      v20->m_Items[0] = (Il2CppObject *)v27;
      sub_B52920((BattleServantConfConponent_o *)v20->m_Items, v27, v21, v22, v23, v24, v25, v26);
      if ( !v19 )
        break;
      v68 = *(_DWORD *)(v19 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
      v34 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B52A44(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v20->max_length <= 1 )
        goto LABEL_46;
      v20->m_Items[1] = (Il2CppObject *)v34;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
      v67 = *(_DWORD *)(v19 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
      v41 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B52A44(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v20->max_length <= 2 )
        goto LABEL_46;
      v20->m_Items[2] = (Il2CppObject *)v41;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
      v42 = *(_QWORD *)(v19 + 36);
      v66[0] = *(_QWORD *)(v19 + 28);
      v66[1] = v42;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v66);
      v49 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B52A44(Instance, v20->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v65 = sub_B52A7C(Instance);
          sub_B52A28(v65, 0LL);
        }
      }
      if ( v20->max_length <= 3 )
        goto LABEL_46;
      v20->m_Items[3] = (Il2CppObject *)v49;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
      v50 = System_String__Format_44647040((System_String_o *)StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v20, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v50, 0LL);
      if ( (int)++v18 >= (int)v16 )
        goto LABEL_33;
      if ( v18 >= LODWORD(v17->fields.datalist) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B52A5C(Instance, v2);
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9272/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6356/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8576/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9273/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6631/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4339/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6323/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11413/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8645/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12941/*"ShopItemFilter"*/, 0LL);
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
  System_Object_array *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  __int64 v32; // x9
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  struct DataMasterBase_array *datalist; // [xsp+8h] [xbp-78h]
  __int64 v44[2]; // [xsp+10h] [xbp-70h] BYREF
  int v45; // [xsp+24h] [xbp-5Ch] BYREF
  int v46; // [xsp+28h] [xbp-58h] BYREF
  int v47; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B343A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_42B343A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
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
          v41 = sub_B52A88(Instance);
          sub_B52A28(v41, 0LL);
        }
        v8 = 0;
        while ( 1 )
        {
          v9 = *((_QWORD *)&v7->fields.lookup + (int)v8);
          Instance = (DataManager_o *)sub_B5299C(object___TypeInfo, 4LL);
          if ( !v9 )
            break;
          v10 = (System_Object_array *)Instance;
          v47 = *(_DWORD *)(v9 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
          if ( !v10 )
            break;
          v17 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, v10->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v10->max_length )
            goto LABEL_37;
          v10->m_Items[0] = (Il2CppObject *)v17;
          sub_B52920((BattleServantConfConponent_o *)v10->m_Items, v17, v11, v12, v13, v14, v15, v16);
          v46 = *(_DWORD *)(v9 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
          v24 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, v10->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v10->max_length <= 1 )
            goto LABEL_37;
          v10->m_Items[1] = (Il2CppObject *)v24;
          sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
          v45 = *(_DWORD *)(v9 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
          v31 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, v10->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v10->max_length <= 2 )
            goto LABEL_37;
          v10->m_Items[2] = (Il2CppObject *)v31;
          sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
          v32 = *(_QWORD *)(v9 + 36);
          v44[0] = *(_QWORD *)(v9 + 28);
          v44[1] = v32;
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
          v39 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, v10->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v42 = sub_B52A7C(Instance);
              sub_B52A28(v42, 0LL);
            }
          }
          if ( v10->max_length > 3 )
          {
            v10->m_Items[3] = (Il2CppObject *)v39;
            sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
            v40 = System_String__Format_44647040((System_String_o *)StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v40, 0LL);
            if ( (int)++v8 >= (int)v6 )
              goto LABEL_35;
            if ( v8 < LODWORD(v7->fields.datalist) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B52A5C(Instance, v2);
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
  if ( (byte_42B3430 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11413/*"RecoveryIdx"*/);
    byte_42B3430 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11413/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_44568316(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_42B3433 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2923/*"BulletinBoardMessageState"*/);
    byte_42B3433 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  if ( (byte_42B3431 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2923/*"BulletinBoardMessageState"*/);
    byte_42B3431 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44570600((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  if ( (byte_42B342B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4339/*"CooltimeNotification"*/);
    byte_42B342B = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4339/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  if ( (byte_42B3427 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6323/*"ExpeditionNotification"*/);
    byte_42B3427 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6323/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  if ( (byte_42B3429 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6631/*"FatigueNotiffication"*/);
    byte_42B3429 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6631/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_42B3438 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7190/*"HeelPortraitDetailDialogState"*/);
    byte_42B3438 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_7190/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_35644948(v3, 0LL);
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
  if ( (byte_42B3437 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16011/*"_"*/);
    sub_B52984(&StringLiteral_12942/*"ShopItemFilter_"*/);
    byte_42B3437 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44571728(
           (System_String_o *)StringLiteral_12942/*"ShopItemFilter_"*/,
           v3,
           (System_String_o *)StringLiteral_16011/*"_"*/,
           v4,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  if ( (byte_42B3435 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8645/*"LotteryShopSkipState"*/);
    byte_42B3435 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8645/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = eventId;
  if ( (byte_42B342D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13090/*"SpotCooltimeNotification_"*/);
    byte_42B342D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_13090/*"SpotCooltimeNotification_"*/, v2, 0LL);
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

  if ( (byte_42B3416 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4240/*"CompleteMission"*/);
    byte_42B3416 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4240/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_42B093D )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B093D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_42B3418 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5105/*"DailyMission"*/);
    byte_42B3418 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5105/*"DailyMission"*/, 0, 0LL);
  if ( !byte_42B004C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_35644340; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_42B340F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10857/*"PriorityIndex_"*/);
    byte_42B340F = 1;
  }
  if ( !byte_42ACC21 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42ACC21 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_10857/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v3, 0LL);
    if ( !byte_42ACC21 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42ACC21 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_35644340;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_35644340; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_42B3423 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6242/*"EventTowerState_"*/);
    byte_42B3423 = 1;
  }
  if ( !byte_42AE7F3 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AE7F3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_6242/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v3, 0LL);
    if ( !byte_42AE7F3 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42AE7F3 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_35644340;
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x20
  System_String_o *v40; // x0
  int32_t Int; // w19
  __int64 v42; // x0
  __int64 v43; // x0
  int32_t v44; // [xsp+0h] [xbp-40h] BYREF
  int32_t v45; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B3425 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_42B3425 = 1;
  }
  v9 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
  v47 = eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( !v9->max_length )
    goto LABEL_19;
  v9->m_Items[0] = (Il2CppObject *)v18;
  sub_B52920((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v46 = slot;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v25 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_19;
  v9->m_Items[1] = (Il2CppObject *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v45 = idx;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v32 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_20;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_19;
  v9->m_Items[2] = (Il2CppObject *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  v44 = svtId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v39 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_20:
      v43 = sub_B52A7C(v10);
      sub_B52A28(v43, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
  {
LABEL_19:
    v42 = sub_B52A88(v10);
    sub_B52A28(v42, 0LL);
  }
  v9->m_Items[3] = (Il2CppObject *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v40 = System_String__Format_44647040((System_String_o *)StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v40, 0, 0LL);
  if ( !byte_42B3522 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3522 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_42B341C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6356/*"ExtraMission"*/);
    byte_42B341C = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6356/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_42B004E )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  int32_t Int_35644340; // w19

  if ( !byte_42B3525 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3525 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(ItemFilterKeyName, 0LL);
    if ( !byte_42B3525 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42B3525 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_35644340;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_42B341E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8576/*"LimitedMission"*/);
    byte_42B341E = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8576/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_42B004F )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  int32_t Int_35644340; // w20
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int32_t v9; // w19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_42B3412 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6218/*"EventMission_"*/);
    sub_B52984(&StringLiteral_9206/*"MissionId_"*/);
    byte_42B3412 = 1;
  }
  if ( !byte_42ADD1C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42ADD1C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_9206/*"MissionId_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v5, 0LL);
    if ( !byte_42ADD1C )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42ADD1C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_35644340;
  }
  if ( loadFilter )
  {
    if ( !byte_42ADD1B )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42ADD1B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v7 = System_Int32__ToString((int32_t)&v10, 0LL);
    v8 = System_String__Concat_44568316((System_String_o *)StringLiteral_6218/*"EventMission_"*/, v7, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    {
      v9 = UnityEngine_PlayerPrefs__GetInt_35644340(v8, 0LL);
      if ( !byte_42ADD1B )
      {
        sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42ADD1B = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v9;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_42B3421 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9273/*"MstMissionIndex"*/);
    byte_42B3421 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9273/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_42B0047 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0047 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t Int_35644340; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_42B342E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11413/*"RecoveryIdx"*/);
    byte_42B342E = 1;
  }
  v3 = (System_String_o *)StringLiteral_11413/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v6, 0LL);
    v3 = System_String__Concat_44568316(v3, v4, 0LL);
  }
  if ( !byte_42B3523 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3523 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v3, 0LL);
    if ( !byte_42B3523 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42B3523 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_35644340;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t Int_35644340; // w19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_42B3414 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11595/*"RewardType_"*/);
    byte_42B3414 = 1;
  }
  if ( !byte_42B3520 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3520 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_11595/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v3, 0LL);
    if ( !byte_42B3520 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42B3520 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_35644340;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int32_t Int; // w19

  if ( (byte_42B341A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9272/*"MstMission"*/);
    byte_42B341A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9272/*"MstMission"*/, 0, 0LL);
  if ( !byte_42B004D )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004D = 1;
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
  if ( (byte_42B3420 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5105/*"DailyMission"*/);
    sub_B52984(&StringLiteral_9272/*"MstMission"*/);
    sub_B52984(&StringLiteral_6356/*"ExtraMission"*/);
    sub_B52984(&StringLiteral_8576/*"LimitedMission"*/);
    byte_42B3420 = 1;
  }
  if ( !byte_42B0048 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0048 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5105/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_42B0049 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0049 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9272/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_42B004A )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6356/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_42B004B )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8576/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  if ( (byte_42B3417 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4240/*"CompleteMission"*/);
    byte_42B3417 = 1;
  }
  if ( !byte_42B093C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B093C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4240/*"CompleteMission"*/,
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
  if ( (byte_42B3411 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8531/*"LastViewEventId_"*/);
    sub_B52984(&StringLiteral_10857/*"PriorityIndex_"*/);
    byte_42B3411 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_8531/*"LastViewEventId_"*/, v2, 0LL);
  if ( !byte_42B351F )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B351F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_10857/*"PriorityIndex_"*/, v4, 0LL);
  if ( !byte_42ACC20 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42ACC20 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  if ( (byte_42B3419 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5105/*"DailyMission"*/);
    byte_42B3419 = 1;
  }
  if ( !byte_42B0048 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0048 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5105/*"DailyMission"*/,
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
  if ( (byte_42B3424 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6242/*"EventTowerState_"*/);
    byte_42B3424 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_6242/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_42AC7AD )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x19
  System_String_o *v40; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v43; // w22
  int v44; // w10
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+0h] [xbp-40h] BYREF
  int32_t v48; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B3426 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/);
    byte_42B3426 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v9 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
  v50 = eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !v9->max_length )
    goto LABEL_23;
  v9->m_Items[0] = (Il2CppObject *)v18;
  sub_B52920((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v49 = slot;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v25 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_23;
  v9->m_Items[1] = (Il2CppObject *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v48 = idx;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v32 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  v9->m_Items[2] = (Il2CppObject *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  v47 = svtId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v39 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = sub_B52A44(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v46 = sub_B52A7C(v10);
      sub_B52A28(v46, 0LL);
    }
  }
  if ( v9->max_length <= 3 )
  {
LABEL_23:
    v45 = sub_B52A88(v10);
    sub_B52A28(v45, 0LL);
  }
  v9->m_Items[3] = (Il2CppObject *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v40 = System_String__Format_44647040((System_String_o *)StringLiteral_6256/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v9, 0LL);
  if ( !byte_42B093E )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B093E = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v43 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_42B3522 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v43;
  }
  else
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3522 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v44 = (unsigned __int8)byte_42B093E;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v43;
    if ( !v44 )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42B093E = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v40, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  if ( (byte_42B341D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6356/*"ExtraMission"*/);
    byte_42B341D = 1;
  }
  if ( !byte_42B004A )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6356/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_42B3526 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3526 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  if ( (byte_42B341F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8576/*"LimitedMission"*/);
    byte_42B341F = 1;
  }
  if ( !byte_42B004B )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B004B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8576/*"LimitedMission"*/,
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
  if ( (byte_42B3413 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6218/*"EventMission_"*/);
    sub_B52984(&StringLiteral_9206/*"MissionId_"*/);
    byte_42B3413 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_9206/*"MissionId_"*/, v2, 0LL);
  if ( !byte_42B05C4 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_6218/*"EventMission_"*/, v4, 0LL);
  if ( !byte_42B05C3 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C3 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  if ( (byte_42B3422 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9273/*"MstMissionIndex"*/);
    byte_42B3422 = 1;
  }
  if ( !byte_42B0046 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0046 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9273/*"MstMissionIndex"*/,
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
  if ( (byte_42B3415 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11595/*"RewardType_"*/);
    byte_42B3415 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  v3 = System_String__Concat_44568316((System_String_o *)StringLiteral_11595/*"RewardType_"*/, v2, 0LL);
  if ( !byte_42B3521 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3521 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v3, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  if ( (byte_42B341B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9272/*"MstMission"*/);
    byte_42B341B = 1;
  }
  if ( !byte_42B0049 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B0049 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9272/*"MstMission"*/,
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
  if ( (byte_42B3434 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2923/*"BulletinBoardMessageState"*/);
    byte_42B3434 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_42B3432 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2923/*"BulletinBoardMessageState"*/);
    byte_42B3432 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44570600((System_String_o *)StringLiteral_2923/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_42B342C & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B52984(&StringLiteral_4339/*"CooltimeNotification"*/);
    byte_42B342C = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4339/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_42B3428 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B52984(&StringLiteral_6323/*"ExpeditionNotification"*/);
    byte_42B3428 = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6323/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_42B342A & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B52984(&StringLiteral_6631/*"FatigueNotiffication"*/);
    byte_42B342A = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6631/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_42B3439 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7190/*"HeelPortraitDetailDialogState"*/);
    byte_42B3439 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44568316((System_String_o *)StringLiteral_7190/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_42B3436 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B52984(&StringLiteral_8645/*"LotteryShopSkipState"*/);
    byte_42B3436 = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8645/*"LotteryShopSkipState"*/, v2, 0LL);
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
  if ( (byte_42B342F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11413/*"RecoveryIdx"*/);
    byte_42B342F = 1;
  }
  v5 = (System_String_o *)StringLiteral_11413/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v5 = System_String__Concat_44568316(v5, v6, 0LL);
  }
  if ( !byte_42B3523 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3523 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_42B3524 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3524 = 1;
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
  if ( (byte_42B33F7 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  if ( (byte_42B33F9 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  if ( (byte_42B33F5 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  if ( (byte_42B3401 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3401 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  if ( (byte_42B3409 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3409 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  if ( (byte_42B3405 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3405 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  if ( (byte_42B3407 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3407 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  if ( (byte_42B33FD & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  if ( (byte_42B33F3 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  if ( (byte_42B340D & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B340D = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  if ( (byte_42B340B & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B340B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  if ( (byte_42B33FF & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  if ( (byte_42B33F1 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  if ( (byte_42B3403 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3403 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  if ( (byte_42B33EF & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33EF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  if ( (byte_42B33FB & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33F8 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33FA & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33F6 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B3402 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3402 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B340A & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B340A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B3406 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3406 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B3408 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3408 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33FE & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33F4 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F4 = 1;
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

  if ( (byte_42B340E & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B340E = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B52920(
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
  if ( (byte_42B340C & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B340C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B3400 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3400 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33F2 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B3404 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B3404 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33F0 & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33F0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42B33FC & 1) == 0 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B33FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}