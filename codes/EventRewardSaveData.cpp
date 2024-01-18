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
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v32; // x25
  unsigned __int64 v33; // x24
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
  struct DataMasterBase_array *v44; // x19
  DataManager_o *v45; // x20
  unsigned int v46; // w26
  __int64 v47; // x28
  System_Object_array *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  __int64 v70; // x9
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v82; // x20
  __int64 v83; // x19
  System_String_o *v84; // x21
  EventBulletinBoardEntity_o *v85; // x8
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94[2]; // [xsp+0h] [xbp-70h] BYREF
  int v95; // [xsp+10h] [xbp-60h] BYREF
  int v96; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v97; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_418A90A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_6175/*"EventMission_"*/, v11);
    sub_B2C35C(&StringLiteral_6199/*"EventTowerState_"*/, v12);
    sub_B2C35C(&StringLiteral_12844/*"ShopItemFilter"*/, v13);
    sub_B2C35C(&StringLiteral_2893/*"BulletinBoardMessageState"*/, v14);
    sub_B2C35C(&StringLiteral_11326/*"RecoveryIdx"*/, v15);
    sub_B2C35C(&StringLiteral_9216/*"MstMission"*/, v16);
    sub_B2C35C(&StringLiteral_4301/*"CooltimeNotification"*/, v17);
    sub_B2C35C(&StringLiteral_9217/*"MstMissionIndex"*/, v18);
    sub_B2C35C(&StringLiteral_6313/*"ExtraMission"*/, v19);
    sub_B2C35C(&StringLiteral_10774/*"PriorityIndex_"*/, v20);
    sub_B2C35C(&StringLiteral_6588/*"FatigueNotiffication"*/, v21);
    sub_B2C35C(&StringLiteral_8595/*"LotteryShopSkipState"*/, v22);
    sub_B2C35C(&StringLiteral_8527/*"LimitedMission"*/, v23);
    sub_B2C35C(&StringLiteral_11508/*"RewardType_"*/, v24);
    sub_B2C35C(&StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v25);
    sub_B2C35C(&StringLiteral_6280/*"ExpeditionNotification"*/, v26);
    sub_B2C35C(&StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, v27);
    sub_B2C35C(&StringLiteral_9150/*"MissionId_"*/, v28);
    byte_418A90A = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  datalist = Instance->fields.datalist;
  v32 = Instance;
  if ( (int)datalist >= 1 )
  {
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)datalist )
        goto LABEL_46;
      eventId = *((_DWORD *)&v32->fields.lookup + v33);
      v34 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v35 = System_String__Concat_44305532((System_String_o *)StringLiteral_10774/*"PriorityIndex_"*/, v34, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
      v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v37 = System_String__Concat_44305532((System_String_o *)StringLiteral_9150/*"MissionId_"*/, v36, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v37, 0LL);
      v38 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v39 = System_String__Concat_44305532((System_String_o *)StringLiteral_6175/*"EventMission_"*/, v38, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v39, 0LL);
      v40 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v41 = System_String__Concat_44305532((System_String_o *)StringLiteral_11508/*"RewardType_"*/, v40, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v41, 0LL);
      v42 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v43 = System_String__Concat_44305532((System_String_o *)StringLiteral_6199/*"EventTowerState_"*/, v42, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v43, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v44 = Instance->fields.datalist;
        v45 = Instance;
        if ( v44 )
        {
          if ( (int)v44 >= 1 )
            break;
        }
      }
LABEL_33:
      v79 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v80 = System_String__Concat_44305532((System_String_o *)StringLiteral_11326/*"RecoveryIdx"*/, v79, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v80, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v82 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v83 = 0LL;
          do
          {
            Instance = (DataManager_o *)System_Int32__ToString((int32_t)&eventId, 0LL);
            v84 = (System_String_o *)Instance;
            if ( v82->fields._size <= (unsigned int)v83 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v85 = v82->fields._items->m_Items[v83];
            if ( !v85 )
              goto LABEL_47;
            v86 = System_Int32__ToString((int)v85 + 16, 0LL);
            v87 = System_String__Concat_44307816((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v84, v86, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v87, 0LL);
          }
          while ( (int)++v83 < v82->fields._size );
        }
      }
      v88 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v89 = System_String__Concat_44305532((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v88, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v89, 0LL);
      v90 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v91 = System_String__Concat_44305532((System_String_o *)StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, v90, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v91, 0LL);
      LODWORD(datalist) = v32->fields.datalist;
      if ( (__int64)++v33 >= (int)datalist )
        goto LABEL_45;
    }
    if ( !(_DWORD)v44 )
    {
LABEL_46:
      v92 = sub_B2C460(Instance);
      sub_B2C400(v92, 0LL);
    }
    v46 = 0;
    while ( 1 )
    {
      v47 = *((_QWORD *)&v45->fields.lookup + (int)v46);
      v48 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
      v97 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
      if ( !v48 )
        break;
      v55 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B2C41C(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( !v48->max_length )
        goto LABEL_46;
      v48->m_Items[0] = (Il2CppObject *)v55;
      sub_B2C2F8((BattleServantConfConponent_o *)v48->m_Items, v55, v49, v50, v51, v52, v53, v54);
      if ( !v47 )
        break;
      v96 = *(_DWORD *)(v47 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      v62 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B2C41C(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v48->max_length <= 1 )
        goto LABEL_46;
      v48->m_Items[1] = (Il2CppObject *)v62;
      sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[1], v62, v56, v57, v58, v59, v60, v61);
      v95 = *(_DWORD *)(v47 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
      v69 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B2C41C(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v48->max_length <= 2 )
        goto LABEL_46;
      v48->m_Items[2] = (Il2CppObject *)v69;
      sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[2], v69, v63, v64, v65, v66, v67, v68);
      v70 = *(_QWORD *)(v47 + 36);
      v94[0] = *(_QWORD *)(v47 + 28);
      v94[1] = v70;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94);
      v77 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B2C41C(Instance, v48->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v93 = sub_B2C454(Instance);
          sub_B2C400(v93, 0LL);
        }
      }
      if ( v48->max_length <= 3 )
        goto LABEL_46;
      v48->m_Items[3] = (Il2CppObject *)v77;
      sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[3], v77, v71, v72, v73, v74, v75, v76);
      v78 = System_String__Format_44384256((System_String_o *)StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v48, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v78, 0LL);
      if ( (int)++v46 >= (int)v44 )
        goto LABEL_33;
      if ( v46 >= LODWORD(v45->fields.datalist) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B2C434(Instance, v30);
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9216/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6313/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8527/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9217/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6588/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4301/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6280/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11326/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8595/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12844/*"ShopItemFilter"*/, 0LL);
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
  DataManager_o *v10; // x26
  unsigned int v11; // w25
  __int64 v12; // x19
  struct DataMasterBase_array *v13; // x24
  DataManager_o *v14; // x20
  unsigned int v15; // w19
  __int64 v16; // x27
  System_Object_array *v17; // x21
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  __int64 v39; // x9
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_o *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  struct DataMasterBase_array *datalist; // [xsp+8h] [xbp-78h]
  __int64 v51[2]; // [xsp+10h] [xbp-70h] BYREF
  int v52; // [xsp+24h] [xbp-5Ch] BYREF
  int v53; // [xsp+28h] [xbp-58h] BYREF
  int v54; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_418A934 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&object___TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_418A934 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v10 = Instance;
    datalist = Instance->fields.datalist;
    if ( datalist )
    {
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
          goto LABEL_37;
        v11 = 0;
        while ( 1 )
        {
          v12 = *((_QWORD *)&v10->fields.lookup + (int)v11);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v12 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v12 + 16),
                                        0LL);
          if ( Instance )
          {
            v13 = Instance->fields.datalist;
            v14 = Instance;
            if ( v13 )
            {
              if ( (int)v13 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( (int)++v11 >= (int)datalist )
            return;
          if ( v11 >= LODWORD(v10->fields.datalist) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v13 )
        {
LABEL_37:
          v48 = sub_B2C460(Instance);
          sub_B2C400(v48, 0LL);
        }
        v15 = 0;
        while ( 1 )
        {
          v16 = *((_QWORD *)&v14->fields.lookup + (int)v15);
          Instance = (DataManager_o *)sub_B2C374(object___TypeInfo, 4LL);
          if ( !v16 )
            break;
          v17 = (System_Object_array *)Instance;
          v54 = *(_DWORD *)(v16 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
          if ( !v17 )
            break;
          v24 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B2C41C(Instance, v17->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v17->max_length )
            goto LABEL_37;
          v17->m_Items[0] = (Il2CppObject *)v24;
          sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
          v53 = *(_DWORD *)(v16 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
          v31 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B2C41C(Instance, v17->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v17->max_length <= 1 )
            goto LABEL_37;
          v17->m_Items[1] = (Il2CppObject *)v31;
          sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
          v52 = *(_DWORD *)(v16 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
          v38 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B2C41C(Instance, v17->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v17->max_length <= 2 )
            goto LABEL_37;
          v17->m_Items[2] = (Il2CppObject *)v38;
          sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
          v39 = *(_QWORD *)(v16 + 36);
          v51[0] = *(_QWORD *)(v16 + 28);
          v51[1] = v39;
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51);
          v46 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B2C41C(Instance, v17->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v49 = sub_B2C454(Instance);
              sub_B2C400(v49, 0LL);
            }
          }
          if ( v17->max_length > 3 )
          {
            v17->m_Items[3] = (Il2CppObject *)v46;
            sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
            v47 = System_String__Format_44384256((System_String_o *)StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v17, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v47, 0LL);
            if ( (int)++v15 >= (int)v13 )
              goto LABEL_35;
            if ( v15 < LODWORD(v14->fields.datalist) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B2C434(Instance, v9);
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
  if ( (byte_418A92A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11326/*"RecoveryIdx"*/, method);
    byte_418A92A = 1;
  }
  v3 = (System_String_o *)StringLiteral_11326/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_44305532(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_418A92D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2893/*"BulletinBoardMessageState"*/, method);
    byte_418A92D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  if ( (byte_418A92B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2893/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_418A92B = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44307816((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A925 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4301/*"CooltimeNotification"*/, v1);
    byte_418A925 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4301/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A921 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6280/*"ExpeditionNotification"*/, v1);
    byte_418A921 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6280/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A923 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6588/*"FatigueNotiffication"*/, v1);
    byte_418A923 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6588/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_418A932 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, method);
    byte_418A932 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_35342888(v3, 0LL);
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
  if ( (byte_418A931 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15905/*"_"*/, *(_QWORD *)&slot);
    sub_B2C35C(&StringLiteral_12845/*"ShopItemFilter_"*/, v3);
    byte_418A931 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44308944(
           (System_String_o *)StringLiteral_12845/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_15905/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A92F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8595/*"LotteryShopSkipState"*/, v1);
    byte_418A92F = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8595/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = eventId;
  if ( (byte_418A927 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12993/*"SpotCooltimeNotification_"*/, method);
    byte_418A927 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12993/*"SpotCooltimeNotification_"*/, v2, 0LL);
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

  if ( (byte_418A910 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4202/*"CompleteMission"*/, v1);
    byte_418A910 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4202/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4188044 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4188044 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_418A912 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5065/*"DailyMission"*/, v1);
    byte_418A912 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5065/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4189D8E )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4189D8E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_35342280; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_418A909 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10774/*"PriorityIndex_"*/, method);
    byte_418A909 = 1;
  }
  if ( !byte_4184962 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4184962 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_10774/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v3, 0LL);
    if ( !byte_4184962 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
      byte_4184962 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_35342280;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_35342280; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_418A91D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6199/*"EventTowerState_"*/, method);
    byte_418A91D = 1;
  }
  if ( !byte_4186465 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4186465 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_6199/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v3, 0LL);
    if ( !byte_4186465 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
      byte_4186465 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_35342280;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
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
  System_Int32_array **v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  System_String_o *v42; // x0
  __int64 v43; // x1
  int32_t Int; // w19
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+0h] [xbp-40h] BYREF
  int32_t v48; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A91F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B2C35C(&object___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_418A91F = 1;
  }
  v11 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
  v50 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v20 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = (Il2CppObject *)v20;
  sub_B2C2F8((BattleServantConfConponent_o *)v11->m_Items, v20, v14, v15, v16, v17, v18, v19);
  v49 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v27 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = (Il2CppObject *)v27;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v48 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v34 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = (Il2CppObject *)v34;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  v47 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v41 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_20:
      v46 = sub_B2C454(v12);
      sub_B2C400(v46, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
  {
LABEL_19:
    v45 = sub_B2C460(v12);
    sub_B2C400(v45, 0LL);
  }
  v11->m_Items[3] = (Il2CppObject *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v42 = System_String__Format_44384256((System_String_o *)StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v42, 0, 0LL);
  if ( !byte_418AA1C )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v43);
    byte_418AA1C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_418A916 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6313/*"ExtraMission"*/, v1);
    byte_418A916 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6313/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4189D90 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4189D90 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_35342280; // w19

  if ( !byte_418AA1F )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_418AA1F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(ItemFilterKeyName, 0LL);
    if ( !byte_418AA1F )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v6);
      byte_418AA1F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_35342280;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_418A918 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8527/*"LimitedMission"*/, v1);
    byte_418A918 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8527/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4189D91 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4189D91 = 1;
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
  int32_t Int_35342280; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_418A90C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6175/*"EventMission_"*/, loadFilter);
    sub_B2C35C(&StringLiteral_9150/*"MissionId_"*/, v4);
    byte_418A90C = 1;
  }
  if ( !byte_4185D95 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_4185D95 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_44305532((System_String_o *)StringLiteral_9150/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v6, 0LL);
    if ( !byte_4185D95 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v7);
      byte_4185D95 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_35342280;
  }
  if ( loadFilter )
  {
    if ( !byte_4185D94 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v7);
      byte_4185D94 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_44305532((System_String_o *)StringLiteral_6175/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_35342280(v10, 0LL);
      if ( !byte_4185D94 )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v11);
        byte_4185D94 = 1;
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

  if ( (byte_418A91B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9217/*"MstMissionIndex"*/, v1);
    byte_418A91B = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9217/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4185994 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4185994 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_35342280; // w19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_418A928 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11326/*"RecoveryIdx"*/, method);
    byte_418A928 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11326/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_44305532(v3, v4, 0LL);
  }
  if ( !byte_418AA1D )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418AA1D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v3, 0LL);
    if ( !byte_418AA1D )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v5);
      byte_418AA1D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_35342280;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_35342280; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_418A90E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11508/*"RewardType_"*/, method);
    byte_418A90E = 1;
  }
  if ( !byte_418AA1A )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418AA1A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_11508/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v3, 0LL);
    if ( !byte_418AA1A )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
      byte_418AA1A = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_35342280;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_418A914 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9216/*"MstMission"*/, v1);
    byte_418A914 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9216/*"MstMission"*/, 0, 0LL);
  if ( !byte_4189D8F )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v2);
    byte_4189D8F = 1;
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

  if ( (byte_418A91A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5065/*"DailyMission"*/, v1);
    sub_B2C35C(&StringLiteral_9216/*"MstMission"*/, v2);
    sub_B2C35C(&StringLiteral_6313/*"ExtraMission"*/, v3);
    sub_B2C35C(&StringLiteral_8527/*"LimitedMission"*/, v4);
    byte_418A91A = 1;
  }
  if ( !byte_4189D8A )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4189D8A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5065/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4189D8B )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v5);
    byte_4189D8B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9216/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4189D8C )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v6);
    byte_4189D8C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6313/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4189D8D )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v7);
    byte_4189D8D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8527/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A911 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4202/*"CompleteMission"*/, v1);
    byte_418A911 = 1;
  }
  if ( !byte_4188043 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4188043 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4202/*"CompleteMission"*/,
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
  if ( (byte_418A90B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8483/*"LastViewEventId_"*/, method);
    sub_B2C35C(&StringLiteral_10774/*"PriorityIndex_"*/, v2);
    byte_418A90B = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_8483/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_418AA19 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
    byte_418AA19 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_44305532((System_String_o *)StringLiteral_10774/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_4184961 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v7);
    byte_4184961 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A913 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5065/*"DailyMission"*/, v1);
    byte_418A913 = 1;
  }
  if ( !byte_4189D8A )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4189D8A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5065/*"DailyMission"*/,
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
  if ( (byte_418A91E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6199/*"EventTowerState_"*/, method);
    byte_418A91E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_44305532((System_String_o *)StringLiteral_6199/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4184DBE )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v3);
    byte_4184DBE = 1;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
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
  System_Int32_array **v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x19
  __int64 v42; // x1
  System_String_o *v43; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v46; // w22
  __int64 v47; // x1
  int v48; // w10
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // [xsp+0h] [xbp-40h] BYREF
  int32_t v52; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v53; // [xsp+8h] [xbp-38h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A920 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B2C35C(&object___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_418A920 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
  v54 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v20 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = (Il2CppObject *)v20;
  sub_B2C2F8((BattleServantConfConponent_o *)v11->m_Items, v20, v14, v15, v16, v17, v18, v19);
  v53 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v27 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = (Il2CppObject *)v27;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v52 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v34 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (Il2CppObject *)v34;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  v51 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v41 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_24:
      v50 = sub_B2C454(v12);
      sub_B2C400(v50, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
  {
LABEL_23:
    v49 = sub_B2C460(v12);
    sub_B2C400(v49, 0LL);
  }
  v11->m_Items[3] = (Il2CppObject *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v43 = System_String__Format_44384256((System_String_o *)StringLiteral_6213/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_4188045 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v42);
    byte_4188045 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v46 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_418AA1C )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v46;
  }
  else
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v42);
    byte_418AA1C = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v48 = (unsigned __int8)byte_4188045;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v46;
    if ( !v48 )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v47);
      byte_4188045 = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v43, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A917 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6313/*"ExtraMission"*/, v1);
    byte_418A917 = 1;
  }
  if ( !byte_4189D8C )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4189D8C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6313/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_418AA20 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v3);
    byte_418AA20 = 1;
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

  if ( (byte_418A919 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8527/*"LimitedMission"*/, v1);
    byte_418A919 = 1;
  }
  if ( !byte_4189D8D )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4189D8D = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8527/*"LimitedMission"*/,
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
  if ( (byte_418A90D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6175/*"EventMission_"*/, method);
    sub_B2C35C(&StringLiteral_9150/*"MissionId_"*/, v2);
    byte_418A90D = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_9150/*"MissionId_"*/, v3, 0LL);
  if ( !byte_4187920 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v4);
    byte_4187920 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_44305532((System_String_o *)StringLiteral_6175/*"EventMission_"*/, v6, 0LL);
  if ( !byte_418791F )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v7);
    byte_418791F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A91C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9217/*"MstMissionIndex"*/, v1);
    byte_418A91C = 1;
  }
  if ( !byte_4185993 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4185993 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9217/*"MstMissionIndex"*/,
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
  if ( (byte_418A90F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11508/*"RewardType_"*/, method);
    byte_418A90F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_44305532((System_String_o *)StringLiteral_11508/*"RewardType_"*/, v2, 0LL);
  if ( !byte_418AA1B )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v3);
    byte_418AA1B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A915 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9216/*"MstMission"*/, v1);
    byte_418A915 = 1;
  }
  if ( !byte_4189D8B )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_4189D8B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9216/*"MstMission"*/,
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
  if ( (byte_418A92E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2893/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_418A92E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  if ( (byte_418A92C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2893/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_418A92C = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44307816((System_String_o *)StringLiteral_2893/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_418A926 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B2C35C(&StringLiteral_4301/*"CooltimeNotification"*/, method);
    byte_418A926 = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4301/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_418A922 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B2C35C(&StringLiteral_6280/*"ExpeditionNotification"*/, method);
    byte_418A922 = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6280/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_418A924 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B2C35C(&StringLiteral_6588/*"FatigueNotiffication"*/, method);
    byte_418A924 = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6588/*"FatigueNotiffication"*/, v2, 0LL);
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
  if ( (byte_418A933 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_418A933 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_7144/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_418A930 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B2C35C(&StringLiteral_8595/*"LotteryShopSkipState"*/, method);
    byte_418A930 = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8595/*"LotteryShopSkipState"*/, v2, 0LL);
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
  if ( (byte_418A929 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11326/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_418A929 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11326/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v5 = System_String__Concat_44305532(v5, v6, 0LL);
  }
  if ( !byte_418AA1D )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_418AA1D = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_418AA1E )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_418AA1E = 1;
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

  if ( (byte_418A8F1 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8F1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8F3 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8F3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8EF & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8EF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8FB & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8FB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A903 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A903 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8FF & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8FF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A901 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A901 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8F7 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8F7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8ED & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8ED = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A907 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A907 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A905 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A905 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8F9 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8F9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8EB & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8EB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8FD & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8FD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8E9 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8E9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A8F5 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v1);
    byte_418A8F5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8F2 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8F2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8F4 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8F4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8F0 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8F0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8FC & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8FC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A904 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A904 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A900 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A900 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A902 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A902 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8F8 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8F8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8EE & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8EE = 1;
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

  if ( (byte_418A908 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A908 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B2C2F8(
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
  if ( (byte_418A906 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A906 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8FA & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8FA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8EC & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8EC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8FE & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8FE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8EA & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8EA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_418A8F6 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_418A8F6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}