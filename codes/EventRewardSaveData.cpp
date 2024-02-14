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
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v31; // x25
  unsigned __int64 v32; // x24
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  struct DataMasterBase_array *v43; // x19
  DataManager_o *v44; // x20
  unsigned int v45; // w26
  __int64 v46; // x28
  System_Object_array *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x22
  __int64 v69; // x9
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v81; // x20
  __int64 v82; // x19
  System_String_o *v83; // x21
  EventBulletinBoardEntity_o *v84; // x8
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93[2]; // [xsp+0h] [xbp-70h] BYREF
  int v94; // [xsp+10h] [xbp-60h] BYREF
  int v95; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v96; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4217903 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_B0D8A4(&object___TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_6192/*"EventMission_"*/, v11);
    sub_B0D8A4(&StringLiteral_6216/*"EventTowerState_"*/, v12);
    sub_B0D8A4(&StringLiteral_12888/*"ShopItemFilter"*/, v13);
    sub_B0D8A4(&StringLiteral_2904/*"BulletinBoardMessageState"*/, v14);
    sub_B0D8A4(&StringLiteral_11353/*"RecoveryIdx"*/, v15);
    sub_B0D8A4(&StringLiteral_9239/*"MstMission"*/, v16);
    sub_B0D8A4(&StringLiteral_4316/*"CooltimeNotification"*/, v17);
    sub_B0D8A4(&StringLiteral_9240/*"MstMissionIndex"*/, v18);
    sub_B0D8A4(&StringLiteral_6330/*"ExtraMission"*/, v19);
    sub_B0D8A4(&StringLiteral_10799/*"PriorityIndex_"*/, v20);
    sub_B0D8A4(&StringLiteral_6605/*"FatigueNotiffication"*/, v21);
    sub_B0D8A4(&StringLiteral_8617/*"LotteryShopSkipState"*/, v22);
    sub_B0D8A4(&StringLiteral_8548/*"LimitedMission"*/, v23);
    sub_B0D8A4(&StringLiteral_11535/*"RewardType_"*/, v24);
    sub_B0D8A4(&StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v25);
    sub_B0D8A4(&StringLiteral_6297/*"ExpeditionNotification"*/, v26);
    sub_B0D8A4(&StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, v27);
    sub_B0D8A4(&StringLiteral_9173/*"MissionId_"*/, v28);
    byte_4217903 = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  datalist = Instance->fields.datalist;
  v31 = Instance;
  if ( (int)datalist >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)datalist )
        goto LABEL_46;
      eventId = *((_DWORD *)&v31->fields.lookup + v32);
      v33 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v34 = System_String__Concat_43849904((System_String_o *)StringLiteral_10799/*"PriorityIndex_"*/, v33, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v34, 0LL);
      v35 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v36 = System_String__Concat_43849904((System_String_o *)StringLiteral_9173/*"MissionId_"*/, v35, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v36, 0LL);
      v37 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v38 = System_String__Concat_43849904((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v37, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
      v39 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v40 = System_String__Concat_43849904((System_String_o *)StringLiteral_11535/*"RewardType_"*/, v39, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0LL);
      v41 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v42 = System_String__Concat_43849904((System_String_o *)StringLiteral_6216/*"EventTowerState_"*/, v41, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v42, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v43 = Instance->fields.datalist;
        v44 = Instance;
        if ( v43 )
        {
          if ( (int)v43 >= 1 )
            break;
        }
      }
LABEL_33:
      v78 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v79 = System_String__Concat_43849904((System_String_o *)StringLiteral_11353/*"RecoveryIdx"*/, v78, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v79, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v81 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v82 = 0LL;
          do
          {
            Instance = (DataManager_o *)System_Int32__ToString((int32_t)&eventId, 0LL);
            v83 = (System_String_o *)Instance;
            if ( v81->fields._size <= (unsigned int)v82 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v84 = v81->fields._items->m_Items[v82];
            if ( !v84 )
              goto LABEL_47;
            v85 = System_Int32__ToString((int)v84 + 16, 0LL);
            v86 = System_String__Concat_43852188((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v83, v85, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v86, 0LL);
          }
          while ( (int)++v82 < v81->fields._size );
        }
      }
      v87 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v88 = System_String__Concat_43849904((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v87, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v88, 0LL);
      v89 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v90 = System_String__Concat_43849904((System_String_o *)StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, v89, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v90, 0LL);
      LODWORD(datalist) = v31->fields.datalist;
      if ( (__int64)++v32 >= (int)datalist )
        goto LABEL_45;
    }
    if ( !(_DWORD)v43 )
    {
LABEL_46:
      v91 = sub_B0D9A8(Instance);
      sub_B0D948(v91, 0LL);
    }
    v45 = 0;
    while ( 1 )
    {
      v46 = *((_QWORD *)&v44->fields.lookup + (int)v45);
      v47 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
      v96 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      if ( !v47 )
        break;
      v54 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B0D964(Instance, v47->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( !v47->max_length )
        goto LABEL_46;
      v47->m_Items[0] = (Il2CppObject *)v54;
      sub_B0D840((BattleServantConfConponent_o *)v47->m_Items, v54, v48, v49, v50, v51, v52, v53);
      if ( !v46 )
        break;
      v95 = *(_DWORD *)(v46 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
      v61 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B0D964(Instance, v47->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v47->max_length <= 1 )
        goto LABEL_46;
      v47->m_Items[1] = (Il2CppObject *)v61;
      sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[1], v61, v55, v56, v57, v58, v59, v60);
      v94 = *(_DWORD *)(v46 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
      v68 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B0D964(Instance, v47->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v47->max_length <= 2 )
        goto LABEL_46;
      v47->m_Items[2] = (Il2CppObject *)v68;
      sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
      v69 = *(_QWORD *)(v46 + 36);
      v93[0] = *(_QWORD *)(v46 + 28);
      v93[1] = v69;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
      v76 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B0D964(Instance, v47->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v92 = sub_B0D99C(Instance);
          sub_B0D948(v92, 0LL);
        }
      }
      if ( v47->max_length <= 3 )
        goto LABEL_46;
      v47->m_Items[3] = (Il2CppObject *)v76;
      sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
      v77 = System_String__Format_43928628((System_String_o *)StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v47, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v77, 0LL);
      if ( (int)++v45 >= (int)v43 )
        goto LABEL_33;
      if ( v45 >= LODWORD(v44->fields.datalist) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B0D97C(Instance);
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9239/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6330/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8548/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9240/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6605/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4316/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6297/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11353/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8617/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12888/*"ShopItemFilter"*/, 0LL);
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
  DataManager_o *v9; // x26
  unsigned int v10; // w25
  __int64 v11; // x19
  struct DataMasterBase_array *v12; // x24
  DataManager_o *v13; // x20
  unsigned int v14; // w19
  __int64 v15; // x27
  System_Object_array *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  __int64 v38; // x9
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_o *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  struct DataMasterBase_array *datalist; // [xsp+8h] [xbp-78h]
  __int64 v50[2]; // [xsp+10h] [xbp-70h] BYREF
  int v51; // [xsp+24h] [xbp-5Ch] BYREF
  int v52; // [xsp+28h] [xbp-58h] BYREF
  int v53; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_421792D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&object___TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_421792D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v9 = Instance;
    datalist = Instance->fields.datalist;
    if ( datalist )
    {
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
          goto LABEL_37;
        v10 = 0;
        while ( 1 )
        {
          v11 = *((_QWORD *)&v9->fields.lookup + (int)v10);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v11 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v11 + 16),
                                        0LL);
          if ( Instance )
          {
            v12 = Instance->fields.datalist;
            v13 = Instance;
            if ( v12 )
            {
              if ( (int)v12 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( (int)++v10 >= (int)datalist )
            return;
          if ( v10 >= LODWORD(v9->fields.datalist) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v12 )
        {
LABEL_37:
          v47 = sub_B0D9A8(Instance);
          sub_B0D948(v47, 0LL);
        }
        v14 = 0;
        while ( 1 )
        {
          v15 = *((_QWORD *)&v13->fields.lookup + (int)v14);
          Instance = (DataManager_o *)sub_B0D8BC(object___TypeInfo, 4LL);
          if ( !v15 )
            break;
          v16 = (System_Object_array *)Instance;
          v53 = *(_DWORD *)(v15 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
          if ( !v16 )
            break;
          v23 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v16->max_length )
            goto LABEL_37;
          v16->m_Items[0] = (Il2CppObject *)v23;
          sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v23, v17, v18, v19, v20, v21, v22);
          v52 = *(_DWORD *)(v15 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
          v30 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v16->max_length <= 1 )
            goto LABEL_37;
          v16->m_Items[1] = (Il2CppObject *)v30;
          sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
          v51 = *(_DWORD *)(v15 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
          v37 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v16->max_length <= 2 )
            goto LABEL_37;
          v16->m_Items[2] = (Il2CppObject *)v37;
          sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
          v38 = *(_QWORD *)(v15 + 36);
          v50[0] = *(_QWORD *)(v15 + 28);
          v50[1] = v38;
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
          v45 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v48 = sub_B0D99C(Instance);
              sub_B0D948(v48, 0LL);
            }
          }
          if ( v16->max_length > 3 )
          {
            v16->m_Items[3] = (Il2CppObject *)v45;
            sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
            v46 = System_String__Format_43928628((System_String_o *)StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v16, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v46, 0LL);
            if ( (int)++v14 >= (int)v12 )
              goto LABEL_35;
            if ( v14 < LODWORD(v13->fields.datalist) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B0D97C(Instance);
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
  if ( (byte_4217923 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11353/*"RecoveryIdx"*/, method);
    byte_4217923 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11353/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_43849904(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_4217926 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2904/*"BulletinBoardMessageState"*/, method);
    byte_4217926 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_43849904((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = eventId;
  v7 = id;
  if ( (byte_4217924 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2904/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4217924 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_43852188((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421791E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4316/*"CooltimeNotification"*/, v1);
    byte_421791E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4316/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421791A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6297/*"ExpeditionNotification"*/, v1);
    byte_421791A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6297/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421791C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6605/*"FatigueNotiffication"*/, v1);
    byte_421791C = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6605/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_421792B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, method);
    byte_421792B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_43849904((System_String_o *)StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_34963268(v3, 0LL);
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
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = eventId;
  v7 = slot;
  if ( (byte_421792A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, *(_QWORD *)&slot);
    sub_B0D8A4(&StringLiteral_12889/*"ShopItemFilter_"*/, v3);
    byte_421792A = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43853316(
           (System_String_o *)StringLiteral_12889/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_15952/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217928 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8617/*"LotteryShopSkipState"*/, v1);
    byte_4217928 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8617/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = eventId;
  if ( (byte_4217920 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13037/*"SpotCooltimeNotification_"*/, method);
    byte_4217920 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_13037/*"SpotCooltimeNotification_"*/, v2, 0LL);
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

  if ( (byte_4217909 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4217/*"CompleteMission"*/, v1);
    byte_4217909 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4217/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4214F5C )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4214F5C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_421790B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5081/*"DailyMission"*/, v1);
    byte_421790B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5081/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4216BE0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4216BE0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34962660; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4217902 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10799/*"PriorityIndex_"*/, method);
    byte_4217902 = 1;
  }
  if ( !byte_4211434 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4211434 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43849904((System_String_o *)StringLiteral_10799/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v3, 0LL);
    if ( !byte_4211434 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
      byte_4211434 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_34962660;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34962660; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4217916 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6216/*"EventTowerState_"*/, method);
    byte_4217916 = 1;
  }
  if ( !byte_4213147 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4213147 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43849904((System_String_o *)StringLiteral_6216/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v3, 0LL);
    if ( !byte_4213147 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
      byte_4213147 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_34962660;
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x20
  System_String_o *v41; // x0
  __int64 v42; // x1
  int32_t Int; // w19
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+0h] [xbp-40h] BYREF
  int32_t v47; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v48; // [xsp+8h] [xbp-38h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217918 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4217918 = 1;
  }
  v11 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
  v49 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = (Il2CppObject *)v19;
  sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v19, v13, v14, v15, v16, v17, v18);
  v48 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v26 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = (Il2CppObject *)v26;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v47 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v33 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = (Il2CppObject *)v33;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  v46 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v40 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_20:
      v45 = sub_B0D99C(v12);
      sub_B0D948(v45, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
  {
LABEL_19:
    v44 = sub_B0D9A8(v12);
    sub_B0D948(v44, 0LL);
  }
  v11->m_Items[3] = (Il2CppObject *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format_43928628((System_String_o *)StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v41, 0, 0LL);
  if ( !byte_4217A15 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v42);
    byte_4217A15 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_421790F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6330/*"ExtraMission"*/, v1);
    byte_421790F = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6330/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4216BE2 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4216BE2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_34962660; // w19

  if ( !byte_4217A18 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_4217A18 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(ItemFilterKeyName, 0LL);
    if ( !byte_4217A18 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v6);
      byte_4217A18 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_34962660;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4217911 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8548/*"LimitedMission"*/, v1);
    byte_4217911 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8548/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4216BE3 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4216BE3 = 1;
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
  int32_t Int_34962660; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4217905 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6192/*"EventMission_"*/, loadFilter);
    sub_B0D8A4(&StringLiteral_9173/*"MissionId_"*/, v4);
    byte_4217905 = 1;
  }
  if ( !byte_421277E )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_421277E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_43849904((System_String_o *)StringLiteral_9173/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v6, 0LL);
    if ( !byte_421277E )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v7);
      byte_421277E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_34962660;
  }
  if ( loadFilter )
  {
    if ( !byte_421277D )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v7);
      byte_421277D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_43849904((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_34962660(v10, 0LL);
      if ( !byte_421277D )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v11);
        byte_421277D = 1;
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

  if ( (byte_4217914 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9240/*"MstMissionIndex"*/, v1);
    byte_4217914 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9240/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4212AD0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4212AD0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_34962660; // w19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_4217921 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11353/*"RecoveryIdx"*/, method);
    byte_4217921 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11353/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_43849904(v3, v4, 0LL);
  }
  if ( !byte_4217A16 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4217A16 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v3, 0LL);
    if ( !byte_4217A16 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v5);
      byte_4217A16 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_34962660;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34962660; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4217907 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11535/*"RewardType_"*/, method);
    byte_4217907 = 1;
  }
  if ( !byte_4217A13 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4217A13 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43849904((System_String_o *)StringLiteral_11535/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v3, 0LL);
    if ( !byte_4217A13 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
      byte_4217A13 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_34962660;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_421790D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9239/*"MstMission"*/, v1);
    byte_421790D = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9239/*"MstMission"*/, 0, 0LL);
  if ( !byte_4216BE1 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v2);
    byte_4216BE1 = 1;
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

  if ( (byte_4217913 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5081/*"DailyMission"*/, v1);
    sub_B0D8A4(&StringLiteral_9239/*"MstMission"*/, v2);
    sub_B0D8A4(&StringLiteral_6330/*"ExtraMission"*/, v3);
    sub_B0D8A4(&StringLiteral_8548/*"LimitedMission"*/, v4);
    byte_4217913 = 1;
  }
  if ( !byte_4216BDC )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4216BDC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5081/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4216BDD )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v5);
    byte_4216BDD = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9239/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4216BDE )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v6);
    byte_4216BDE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6330/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4216BDF )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v7);
    byte_4216BDF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8548/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421790A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4217/*"CompleteMission"*/, v1);
    byte_421790A = 1;
  }
  if ( !byte_4214F5B )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4214F5B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4217/*"CompleteMission"*/,
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_4217904 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8504/*"LastViewEventId_"*/, method);
    sub_B0D8A4(&StringLiteral_10799/*"PriorityIndex_"*/, v2);
    byte_4217904 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_8504/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_4217A12 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
    byte_4217A12 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_43849904((System_String_o *)StringLiteral_10799/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_4211433 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v7);
    byte_4211433 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421790C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5081/*"DailyMission"*/, v1);
    byte_421790C = 1;
  }
  if ( !byte_4216BDC )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4216BDC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5081/*"DailyMission"*/,
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
  if ( (byte_4217917 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6216/*"EventTowerState_"*/, method);
    byte_4217917 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_43849904((System_String_o *)StringLiteral_6216/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4210D42 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v3);
    byte_4210D42 = 1;
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x19
  __int64 v41; // x1
  System_String_o *v42; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v45; // w22
  __int64 v46; // x1
  int v47; // w10
  __int64 v48; // x0
  __int64 v49; // x0
  int32_t v50; // [xsp+0h] [xbp-40h] BYREF
  int32_t v51; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v52; // [xsp+8h] [xbp-38h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217919 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4217919 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
  v53 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = (Il2CppObject *)v19;
  sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v19, v13, v14, v15, v16, v17, v18);
  v52 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v26 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = (Il2CppObject *)v26;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v51 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v33 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (Il2CppObject *)v33;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  v50 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v40 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B0D964(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_24:
      v49 = sub_B0D99C(v12);
      sub_B0D948(v49, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
  {
LABEL_23:
    v48 = sub_B0D9A8(v12);
    sub_B0D948(v48, 0LL);
  }
  v11->m_Items[3] = (Il2CppObject *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  v42 = System_String__Format_43928628((System_String_o *)StringLiteral_6230/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_4214F5D )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v41);
    byte_4214F5D = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v45 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4217A15 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v45;
  }
  else
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v41);
    byte_4217A15 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v47 = (unsigned __int8)byte_4214F5D;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v45;
    if ( !v47 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v46);
      byte_4214F5D = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v42, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217910 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6330/*"ExtraMission"*/, v1);
    byte_4217910 = 1;
  }
  if ( !byte_4216BDE )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4216BDE = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6330/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4217A19 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v3);
    byte_4217A19 = 1;
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

  if ( (byte_4217912 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8548/*"LimitedMission"*/, v1);
    byte_4217912 = 1;
  }
  if ( !byte_4216BDF )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4216BDF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8548/*"LimitedMission"*/,
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_4217906 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6192/*"EventMission_"*/, method);
    sub_B0D8A4(&StringLiteral_9173/*"MissionId_"*/, v2);
    byte_4217906 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_9173/*"MissionId_"*/, v3, 0LL);
  if ( !byte_4214D7F )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v4);
    byte_4214D7F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_43849904((System_String_o *)StringLiteral_6192/*"EventMission_"*/, v6, 0LL);
  if ( !byte_4214D7E )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v7);
    byte_4214D7E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217915 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9240/*"MstMissionIndex"*/, v1);
    byte_4217915 = 1;
  }
  if ( !byte_4212ACF )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4212ACF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9240/*"MstMissionIndex"*/,
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
  if ( (byte_4217908 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11535/*"RewardType_"*/, method);
    byte_4217908 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_43849904((System_String_o *)StringLiteral_11535/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4217A14 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v3);
    byte_4217A14 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421790E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9239/*"MstMission"*/, v1);
    byte_421790E = 1;
  }
  if ( !byte_4216BDD )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4216BDD = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9239/*"MstMission"*/,
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
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4217927 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2904/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_4217927 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  int32_t v8; // [xsp+8h] [xbp-18h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v8 = id;
  v9 = eventId;
  if ( (byte_4217925 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2904/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4217925 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_43852188((System_String_o *)StringLiteral_2904/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_421791F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B0D8A4(&StringLiteral_4316/*"CooltimeNotification"*/, method);
    byte_421791F = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4316/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_421791B & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B0D8A4(&StringLiteral_6297/*"ExpeditionNotification"*/, method);
    byte_421791B = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6297/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_421791D & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B0D8A4(&StringLiteral_6605/*"FatigueNotiffication"*/, method);
    byte_421791D = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6605/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_421792C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_421792C = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_7164/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_4217929 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B0D8A4(&StringLiteral_8617/*"LotteryShopSkipState"*/, method);
    byte_4217929 = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8617/*"LotteryShopSkipState"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_4217922 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11353/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_4217922 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11353/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v5 = System_String__Concat_43849904(v5, v6, 0LL);
  }
  if ( !byte_4217A16 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4217A16 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_4217A17 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4217A17 = 1;
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
  __int64 v1; // x1

  if ( (byte_42178EA & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178EA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178EC & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178EC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178E8 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178E8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178F4 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178F4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178FC & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178FC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178F8 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178F8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178FA & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178FA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178F0 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178F0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178E6 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178E6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217900 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_4217900 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178FE & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178FE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178F2 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178F2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178E4 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178E4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178F6 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178F6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178E2 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178E2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42178EE & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v1);
    byte_42178EE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178EB & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178EB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178ED & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178ED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178E9 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178E9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178F5 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178F5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178FD & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178FD = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178F9 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178F9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178FB & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178FB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178F1 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178F1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178E7 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178E7 = 1;
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

  if ( (byte_4217901 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4217901 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B0D840(
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
  if ( (byte_42178FF & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178FF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178F3 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178F3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178E5 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178E5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178F7 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178F7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178E3 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_42178EF & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_42178EF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}