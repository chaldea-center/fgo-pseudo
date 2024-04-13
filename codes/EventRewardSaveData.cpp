void __fastcall EventRewardSaveData__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  DataManager_o *Instance; // x0
  __int64 v86; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v88; // x25
  unsigned __int64 v89; // x24
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  struct DataMasterBase_array *v100; // x19
  DataManager_o *v101; // x20
  unsigned int v102; // w26
  __int64 v103; // x28
  System_Object_array *v104; // x21
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x22
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x22
  __int64 v126; // x9
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x22
  System_String_o *v134; // x0
  System_String_o *v135; // x0
  System_String_o *v136; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v138; // x20
  __int64 v139; // x19
  System_String_o *v140; // x21
  EventBulletinBoardEntity_o *v141; // x8
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  System_String_o *v145; // x0
  System_String_o *v146; // x0
  System_String_o *v147; // x0
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150[2]; // [xsp+0h] [xbp-70h] BYREF
  int v151; // [xsp+10h] [xbp-60h] BYREF
  int v152; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v153; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42EBFCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v19, v20, v21);
    sub_B5D5C4(&object___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_6254/*"EventMission_"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_6278/*"EventTowerState_"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_13000/*"ShopItemFilter"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_2948/*"BulletinBoardMessageState"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11459/*"RecoveryIdx"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_9310/*"MstMission"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_4372/*"CooltimeNotification"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_9311/*"MstMissionIndex"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_6392/*"ExtraMission"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_10903/*"PriorityIndex_"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_6667/*"FatigueNotiffication"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_8682/*"LotteryShopSkipState"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_8613/*"LimitedMission"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_11641/*"RewardType_"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_6359/*"ExpeditionNotification"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_9244/*"MissionId_"*/, v82, v83, v84);
    byte_42EBFCE = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  datalist = Instance->fields.datalist;
  v88 = Instance;
  if ( (int)datalist >= 1 )
  {
    v89 = 0LL;
    while ( 1 )
    {
      if ( v89 >= (unsigned int)datalist )
        goto LABEL_46;
      eventId = *((_DWORD *)&v88->fields.lookup + v89);
      v90 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v91 = System_String__Concat_44577788((System_String_o *)StringLiteral_10903/*"PriorityIndex_"*/, v90, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v91, 0LL);
      v92 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v93 = System_String__Concat_44577788((System_String_o *)StringLiteral_9244/*"MissionId_"*/, v92, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v93, 0LL);
      v94 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v95 = System_String__Concat_44577788((System_String_o *)StringLiteral_6254/*"EventMission_"*/, v94, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v95, 0LL);
      v96 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v97 = System_String__Concat_44577788((System_String_o *)StringLiteral_11641/*"RewardType_"*/, v96, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v97, 0LL);
      v98 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v99 = System_String__Concat_44577788((System_String_o *)StringLiteral_6278/*"EventTowerState_"*/, v98, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v99, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v100 = Instance->fields.datalist;
        v101 = Instance;
        if ( v100 )
        {
          if ( (int)v100 >= 1 )
            break;
        }
      }
LABEL_33:
      v135 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v136 = System_String__Concat_44577788((System_String_o *)StringLiteral_11459/*"RecoveryIdx"*/, v135, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v136, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v138 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v139 = 0LL;
          do
          {
            Instance = (DataManager_o *)System_Int32__ToString((int32_t)&eventId, 0LL);
            v140 = (System_String_o *)Instance;
            if ( v138->fields._size <= (unsigned int)v139 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v141 = v138->fields._items->m_Items[v139];
            if ( !v141 )
              goto LABEL_47;
            v142 = System_Int32__ToString((int)v141 + 16, 0LL);
            v143 = System_String__Concat_44580072((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v140, v142, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v143, 0LL);
          }
          while ( (int)++v139 < v138->fields._size );
        }
      }
      v144 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v145 = System_String__Concat_44577788((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v144, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v145, 0LL);
      v146 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v147 = System_String__Concat_44577788((System_String_o *)StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, v146, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v147, 0LL);
      LODWORD(datalist) = v88->fields.datalist;
      if ( (__int64)++v89 >= (int)datalist )
        goto LABEL_45;
    }
    if ( !(_DWORD)v100 )
    {
LABEL_46:
      v148 = sub_B5D6C8(Instance);
      sub_B5D668(v148, 0LL);
    }
    v102 = 0;
    while ( 1 )
    {
      v103 = *((_QWORD *)&v101->fields.lookup + (int)v102);
      v104 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
      v153 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v153);
      if ( !v104 )
        break;
      v111 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B5D684(Instance, v104->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( !v104->max_length )
        goto LABEL_46;
      v104->m_Items[0] = (Il2CppObject *)v111;
      sub_B5D560((BattleServantConfConponent_o *)v104->m_Items, v111, v105, v106, v107, v108, v109, v110);
      if ( !v103 )
        break;
      v152 = *(_DWORD *)(v103 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
      v118 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B5D684(Instance, v104->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v104->max_length <= 1 )
        goto LABEL_46;
      v104->m_Items[1] = (Il2CppObject *)v118;
      sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[1], v118, v112, v113, v114, v115, v116, v117);
      v151 = *(_DWORD *)(v103 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
      v125 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B5D684(Instance, v104->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
      }
      if ( v104->max_length <= 2 )
        goto LABEL_46;
      v104->m_Items[2] = (Il2CppObject *)v125;
      sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[2], v125, v119, v120, v121, v122, v123, v124);
      v126 = *(_QWORD *)(v103 + 36);
      v150[0] = *(_QWORD *)(v103 + 28);
      v150[1] = v126;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v150);
      v133 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_B5D684(Instance, v104->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v149 = sub_B5D6BC(Instance);
          sub_B5D668(v149, 0LL);
        }
      }
      if ( v104->max_length <= 3 )
        goto LABEL_46;
      v104->m_Items[3] = (Il2CppObject *)v133;
      sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[3], v133, v127, v128, v129, v130, v131, v132);
      v134 = System_String__Format_44656512((System_String_o *)StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v104, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v134, 0LL);
      if ( (int)++v102 >= (int)v100 )
        goto LABEL_33;
      if ( v102 >= LODWORD(v101->fields.datalist) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B5D69C(Instance, v86);
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9310/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6392/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8613/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9311/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6667/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4372/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6359/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11459/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8682/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13000/*"ShopItemFilter"*/, 0LL);
}


void __fastcall EventRewardSaveData__DeletePlayCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  DataManager_o *v24; // x26
  unsigned int v25; // w25
  __int64 v26; // x19
  struct DataMasterBase_array *v27; // x24
  DataManager_o *v28; // x20
  unsigned int v29; // w19
  __int64 v30; // x27
  System_Object_array *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x22
  __int64 v53; // x9
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  System_String_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  struct DataMasterBase_array *datalist; // [xsp+8h] [xbp-78h]
  __int64 v65[2]; // [xsp+10h] [xbp-70h] BYREF
  int v66; // [xsp+24h] [xbp-5Ch] BYREF
  int v67; // [xsp+28h] [xbp-58h] BYREF
  int v68; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EBFF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v4, v5, v6);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&object___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v19, v20, v21);
    byte_42EBFF8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v24 = Instance;
    datalist = Instance->fields.datalist;
    if ( datalist )
    {
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
          goto LABEL_37;
        v25 = 0;
        while ( 1 )
        {
          v26 = *((_QWORD *)&v24->fields.lookup + (int)v25);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v26 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v26 + 16),
                                        0LL);
          if ( Instance )
          {
            v27 = Instance->fields.datalist;
            v28 = Instance;
            if ( v27 )
            {
              if ( (int)v27 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( (int)++v25 >= (int)datalist )
            return;
          if ( v25 >= LODWORD(v24->fields.datalist) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v27 )
        {
LABEL_37:
          v62 = sub_B5D6C8(Instance);
          sub_B5D668(v62, 0LL);
        }
        v29 = 0;
        while ( 1 )
        {
          v30 = *((_QWORD *)&v28->fields.lookup + (int)v29);
          Instance = (DataManager_o *)sub_B5D5DC(object___TypeInfo, 4LL);
          if ( !v30 )
            break;
          v31 = (System_Object_array *)Instance;
          v68 = *(_DWORD *)(v30 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
          if ( !v31 )
            break;
          v38 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v31->max_length )
            goto LABEL_37;
          v31->m_Items[0] = (Il2CppObject *)v38;
          sub_B5D560((BattleServantConfConponent_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
          v67 = *(_DWORD *)(v30 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
          v45 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v31->max_length <= 1 )
            goto LABEL_37;
          v31->m_Items[1] = (Il2CppObject *)v45;
          sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
          v66 = *(_DWORD *)(v30 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
          v52 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v31->max_length <= 2 )
            goto LABEL_37;
          v31->m_Items[2] = (Il2CppObject *)v52;
          sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[2], v52, v46, v47, v48, v49, v50, v51);
          v53 = *(_QWORD *)(v30 + 36);
          v65[0] = *(_QWORD *)(v30 + 28);
          v65[1] = v53;
          Instance = (DataManager_o *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v65);
          v60 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, v31->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v63 = sub_B5D6BC(Instance);
              sub_B5D668(v63, 0LL);
            }
          }
          if ( v31->max_length > 3 )
          {
            v31->m_Items[3] = (Il2CppObject *)v60;
            sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
            v61 = System_String__Format_44656512((System_String_o *)StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v31, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v61, 0LL);
            if ( (int)++v29 >= (int)v27 )
              goto LABEL_35;
            if ( v29 < LODWORD(v28->fields.datalist) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B5D69C(Instance, v23);
      }
    }
  }
}


void __fastcall EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_42EBFEE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11459/*"RecoveryIdx"*/, (_DWORD)method, v2, v3);
    byte_42EBFEE = 1;
  }
  v5 = (System_String_o *)StringLiteral_11459/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_44577788(v5, v6, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = eventId;
  if ( (byte_42EBFF1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2948/*"BulletinBoardMessageState"*/, (_DWORD)method, v2, v3);
    byte_42EBFF1 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL);
}


bool __fastcall EventRewardSaveData__GetBulletInBoardMessageState(
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-8h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = eventId;
  v8 = id;
  if ( (byte_42EBFEF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2948/*"BulletinBoardMessageState"*/, id, (_DWORD)method, v3);
    byte_42EBFEF = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44580072((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v4, v5, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v6, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFE9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4372/*"CooltimeNotification"*/, v1, v2, v3);
    byte_42EBFE9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4372/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFE5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6359/*"ExpeditionNotification"*/, v1, v2, v3);
    byte_42EBFE5 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6359/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFE7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6667/*"FatigueNotiffication"*/, v1, v2, v3);
    byte_42EBFE7 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6667/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = eventId;
  if ( (byte_42EBFF6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, (_DWORD)method, v2, v3);
    byte_42EBFF6 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetString_35648228(v5, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetItemFilterKeyName(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-8h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-4h] BYREF

  v11 = eventId;
  v10 = slot;
  if ( (byte_42EBFF5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, slot, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_13001/*"ShopItemFilter_"*/, v4, v5, v6);
    byte_42EBFF5 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44581200(
           (System_String_o *)StringLiteral_13001/*"ShopItemFilter_"*/,
           v7,
           (System_String_o *)StringLiteral_16096/*"_"*/,
           v8,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFF3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8682/*"LotteryShopSkipState"*/, v1, v2, v3);
    byte_42EBFF3 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8682/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = eventId;
  if ( (byte_42EBFEB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13149/*"SpotCooltimeNotification_"*/, (_DWORD)method, v2, v3);
    byte_42EBFEB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_13149/*"SpotCooltimeNotification_"*/, v4, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFD4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4273/*"CompleteMission"*/, v1, v2, v3);
    byte_42EBFD4 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4273/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_42E8FE8 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8FE8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFD6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5139/*"DailyMission"*/, v1, v2, v3);
    byte_42EBFD6 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5139/*"DailyMission"*/, 0, 0LL);
  if ( !byte_42E8A3A )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8A3A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t Int_35647620; // w19
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = eventId;
  if ( (byte_42EBFCD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10903/*"PriorityIndex_"*/, (_DWORD)method, v2, v3);
    byte_42EBFCD = 1;
  }
  if ( !byte_42E563B )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E563B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_10903/*"PriorityIndex_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v5, 0LL);
    if ( !byte_42E563B )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v6, v7, v8);
      byte_42E563B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_35647620;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t Int_35647620; // w19
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = eventId;
  if ( (byte_42EBFE1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6278/*"EventTowerState_"*/, (_DWORD)method, v2, v3);
    byte_42EBFE1 = 1;
  }
  if ( !byte_42E6CF0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6CF0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_6278/*"EventTowerState_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v5, 0LL);
    if ( !byte_42E6CF0 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v6, v7, v8);
      byte_42E6CF0 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_35647620;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Object_array *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x23
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
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x20
  System_String_o *v46; // x0
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int32_t Int; // w19
  __int64 v51; // x0
  __int64 v52; // x0
  int32_t v53; // [xsp+0h] [xbp-40h] BYREF
  int32_t v54; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v55; // [xsp+8h] [xbp-38h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBFE3 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, slot, idx, *(_QWORD *)&svtId);
    sub_B5D5C4(&object___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v12, v13, v14);
    byte_42EBFE3 = 1;
  }
  v15 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
  v56 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( !v15->max_length )
    goto LABEL_19;
  v15->m_Items[0] = (Il2CppObject *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
  v55 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v31 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_19;
  v15->m_Items[1] = (Il2CppObject *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v54 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v38 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_20;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_19;
  v15->m_Items[2] = (Il2CppObject *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  v53 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v45 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_20:
      v52 = sub_B5D6BC(v16);
      sub_B5D668(v52, 0LL);
    }
  }
  if ( v15->max_length <= 3 )
  {
LABEL_19:
    v51 = sub_B5D6C8(v16);
    sub_B5D668(v51, 0LL);
  }
  v15->m_Items[3] = (Il2CppObject *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Format_44656512((System_String_o *)StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v15, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v46, 0, 0LL);
  if ( !byte_42EC0E0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v47, v48, v49);
    byte_42EC0E0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFDA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6392/*"ExtraMission"*/, v1, v2, v3);
    byte_42EBFDA = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6392/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_42E8A3C )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8A3C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *ItemFilterKeyName; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t Int_35647620; // w19

  if ( !byte_42EC0E3 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, slot, (_DWORD)method, v3);
    byte_42EC0E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(ItemFilterKeyName, 0LL);
    if ( !byte_42EC0E3 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v7, v8, v9);
      byte_42EC0E3 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_35647620;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFDC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8613/*"LimitedMission"*/, v1, v2, v3);
    byte_42EBFDC = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8613/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_42E8A3D )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8A3D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadMissionData(int32_t eventId, bool loadFilter, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t Int_35647620; // w20
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t v19; // w19
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = eventId;
  if ( (byte_42EBFD0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6254/*"EventMission_"*/, loadFilter, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9244/*"MissionId_"*/, v5, v6, v7);
    byte_42EBFD0 = 1;
  }
  if ( !byte_42E5F9E )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, loadFilter, (_DWORD)method, v3);
    byte_42E5F9E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v8 = System_Int32__ToString((int32_t)&v20, 0LL);
  v9 = System_String__Concat_44577788((System_String_o *)StringLiteral_9244/*"MissionId_"*/, v8, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v9, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v9, 0LL);
    if ( !byte_42E5F9E )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v10, v11, v12);
      byte_42E5F9E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_35647620;
  }
  if ( loadFilter )
  {
    if ( !byte_42E5F9D )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v10, v11, v12);
      byte_42E5F9D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v14 = System_Int32__ToString((int32_t)&v20, 0LL);
    v15 = System_String__Concat_44577788((System_String_o *)StringLiteral_6254/*"EventMission_"*/, v14, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v15, 0LL) )
    {
      v19 = UnityEngine_PlayerPrefs__GetInt_35647620(v15, 0LL);
      if ( !byte_42E5F9D )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, v16, v17, v18);
        byte_42E5F9D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = v19;
    }
  }
}


void __fastcall EventRewardSaveData__LoadMstMissionIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFDF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9311/*"MstMissionIndex"*/, v1, v2, v3);
    byte_42EBFDF = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9311/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_42E8A35 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8A35 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t Int_35647620; // w19
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = eventId;
  if ( (byte_42EBFEC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11459/*"RecoveryIdx"*/, (_DWORD)method, v2, v3);
    byte_42EBFEC = 1;
  }
  v5 = (System_String_o *)StringLiteral_11459/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v11, 0LL);
    v5 = System_String__Concat_44577788(v5, v6, 0LL);
  }
  if ( !byte_42EC0E1 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC0E1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v5, 0LL);
    if ( !byte_42EC0E1 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v7, v8, v9);
      byte_42EC0E1 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_35647620;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t Int_35647620; // w19
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = eventId;
  if ( (byte_42EBFD2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11641/*"RewardType_"*/, (_DWORD)method, v2, v3);
    byte_42EBFD2 = 1;
  }
  if ( !byte_42EC0DE )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC0DE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v4 = System_Int32__ToString((int32_t)&v10, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_11641/*"RewardType_"*/, v4, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v5, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v5, 0LL);
    if ( !byte_42EC0DE )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v6, v7, v8);
      byte_42EC0DE = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_35647620;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Int; // w19

  if ( (byte_42EBFD8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9310/*"MstMission"*/, v1, v2, v3);
    byte_42EBFD8 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9310/*"MstMission"*/, 0, 0LL);
  if ( !byte_42E8A3B )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v4, v5, v6);
    byte_42E8A3B = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3

  if ( (byte_42EBFDE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5139/*"DailyMission"*/, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_9310/*"MstMission"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6392/*"ExtraMission"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_8613/*"LimitedMission"*/, v10, v11, v12);
    byte_42EBFDE = 1;
  }
  if ( !byte_42E8A36 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A36 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5139/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_42E8A37 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v13, v14, v15);
    byte_42E8A37 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9310/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_42E8A38 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v16, v17, v18);
    byte_42E8A38 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6392/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_42E8A39 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v19, v20, v21);
    byte_42E8A39 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8613/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFD5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4273/*"CompleteMission"*/, v1, v2, v3);
    byte_42EBFD5 = 1;
  }
  if ( !byte_42E8FE7 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8FE7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4273/*"CompleteMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCurrentEventData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x0
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v17 = eventId;
  if ( (byte_42EBFCF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8568/*"LastViewEventId_"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10903/*"PriorityIndex_"*/, v4, v5, v6);
    byte_42EBFCF = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v17, 0LL);
  v11 = System_String__Concat_44577788((System_String_o *)StringLiteral_8568/*"LastViewEventId_"*/, v7, 0LL);
  if ( !byte_42EC0DD )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v8, v9, v10);
    byte_42EC0DD = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v11, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v12 = System_Int32__ToString((int32_t)&v17, 0LL);
  v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_10903/*"PriorityIndex_"*/, v12, 0LL);
  if ( !byte_42E563A )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v13, v14, v15);
    byte_42E563A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v16, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFD7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5139/*"DailyMission"*/, v1, v2, v3);
    byte_42EBFD7 = 1;
  }
  if ( !byte_42E8A36 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A36 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5139/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveEventTowerState(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_42EBFE2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6278/*"EventTowerState_"*/, (_DWORD)method, v2, v3);
    byte_42EBFE2 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_44577788((System_String_o *)StringLiteral_6278/*"EventTowerState_"*/, v4, 0LL);
  if ( !byte_42E5030 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v5, v6, v7);
    byte_42E5030 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v8,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Object_array *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x23
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
  System_Int32_array **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x19
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_String_o *v49; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v52; // w22
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w10
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // [xsp+0h] [xbp-40h] BYREF
  int32_t v60; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v61; // [xsp+8h] [xbp-38h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBFE4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, slot, idx, *(_QWORD *)&svtId);
    sub_B5D5C4(&object___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v12, v13, v14);
    byte_42EBFE4 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v15 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
  v62 = eventId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v62);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( !v15->max_length )
    goto LABEL_23;
  v15->m_Items[0] = (Il2CppObject *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
  v61 = slot;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
  v31 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_23;
  v15->m_Items[1] = (Il2CppObject *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v60 = idx;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v60);
  v38 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_24;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_23;
  v15->m_Items[2] = (Il2CppObject *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  v59 = svtId;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v45 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B5D684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_24:
      v58 = sub_B5D6BC(v16);
      sub_B5D668(v58, 0LL);
    }
  }
  if ( v15->max_length <= 3 )
  {
LABEL_23:
    v57 = sub_B5D6C8(v16);
    sub_B5D668(v57, 0LL);
  }
  v15->m_Items[3] = (Il2CppObject *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v15->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  v49 = System_String__Format_44656512((System_String_o *)StringLiteral_6292/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v15, 0LL);
  if ( !byte_42E8FE9 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v46, v47, v48);
    byte_42E8FE9 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v52 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_42EC0E0 )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v52;
  }
  else
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v46, v47, v48);
    byte_42EC0E0 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v56 = (unsigned __int8)byte_42E8FE9;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v52;
    if ( !v56 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, v53, v54, v55);
      byte_42E8FE9 = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v49, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFDB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6392/*"ExtraMission"*/, v1, v2, v3);
    byte_42EBFDB = 1;
  }
  if ( !byte_42E8A38 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A38 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6392/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  int v3; // w1
  int v4; // w2
  __int64 v5; // x3
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_42EC0E4 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v3, v4, v5);
    byte_42EC0E4 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    ItemFilterKeyName,
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveLimitedMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFDD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8613/*"LimitedMission"*/, v1, v2, v3);
    byte_42EBFDD = 1;
  }
  if ( !byte_42E8A39 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A39 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8613/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMissionData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x0
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v17 = eventId;
  if ( (byte_42EBFD1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6254/*"EventMission_"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9244/*"MissionId_"*/, v4, v5, v6);
    byte_42EBFD1 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v17, 0LL);
  v11 = System_String__Concat_44577788((System_String_o *)StringLiteral_9244/*"MissionId_"*/, v7, 0LL);
  if ( !byte_42E90E6 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v8, v9, v10);
    byte_42E90E6 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v11, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v12 = System_Int32__ToString((int32_t)&v17, 0LL);
  v16 = System_String__Concat_44577788((System_String_o *)StringLiteral_6254/*"EventMission_"*/, v12, 0LL);
  if ( !byte_42E90E5 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v13, v14, v15);
    byte_42E90E5 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v16, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFE0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9311/*"MstMissionIndex"*/, v1, v2, v3);
    byte_42EBFE0 = 1;
  }
  if ( !byte_42E8A34 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A34 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9311/*"MstMissionIndex"*/,
    EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_42EBFD3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11641/*"RewardType_"*/, (_DWORD)method, v2, v3);
    byte_42EBFD3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_44577788((System_String_o *)StringLiteral_11641/*"RewardType_"*/, v4, 0LL);
  if ( !byte_42EC0DF )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v5, v6, v7);
    byte_42EC0DF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFD9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9310/*"MstMission"*/, v1, v2, v3);
    byte_42EBFD9 = 1;
  }
  if ( !byte_42E8A37 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42E8A37 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9310/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SetBulletInBoardLastMessageId(
        int32_t eventId,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_42EBFF2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2948/*"BulletinBoardMessageState"*/, messageId, (_DWORD)method, v3);
    byte_42EBFF2 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_44577788((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v6, messageId, 0LL);
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
  if ( (byte_42EBFF0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2948/*"BulletinBoardMessageState"*/, id, isShow, method);
    byte_42EBFF0 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44580072((System_String_o *)StringLiteral_2948/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19

  v4 = setValue;
  if ( (byte_42EBFEA & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B5D5C4(&StringLiteral_4372/*"CooltimeNotification"*/, (_DWORD)method, v2, v3);
    byte_42EBFEA = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v4) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4372/*"CooltimeNotification"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19

  v4 = setValue;
  if ( (byte_42EBFE6 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B5D5C4(&StringLiteral_6359/*"ExpeditionNotification"*/, (_DWORD)method, v2, v3);
    byte_42EBFE6 = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v4) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6359/*"ExpeditionNotification"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19

  v4 = setValue;
  if ( (byte_42EBFE8 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B5D5C4(&StringLiteral_6667/*"FatigueNotiffication"*/, (_DWORD)method, v2, v3);
    byte_42EBFE8 = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v4) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6667/*"FatigueNotiffication"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetHeelPortraitDetailDialogState(
        int32_t eventId,
        System_String_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_42EBFF7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, (_DWORD)saveData, (_DWORD)method, v3);
    byte_42EBFF7 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_44577788((System_String_o *)StringLiteral_7226/*"HeelPortraitDetailDialogState"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__SetString(v6, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19

  v4 = setValue;
  if ( (byte_42EBFF4 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B5D5C4(&StringLiteral_8682/*"LotteryShopSkipState"*/, (_DWORD)method, v2, v3);
    byte_42EBFF4 = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v4) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8682/*"LotteryShopSkipState"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = eventId;
  if ( (byte_42EBFED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11459/*"RecoveryIdx"*/, idx, (_DWORD)method, v3);
    byte_42EBFED = 1;
  }
  v6 = (System_String_o *)StringLiteral_11459/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v7 = System_Int32__ToString((int32_t)&v9, 0LL);
    v6 = System_String__Concat_44577788(v6, v7, 0LL);
  }
  if ( !byte_42EC0E1 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, idx, (_DWORD)method, v3);
    byte_42EC0E1 = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_42EC0E2 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, idx, (_DWORD)method, v3);
    byte_42EC0E2 = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  }
  UnityEngine_PlayerPrefs__SetInt(v6, (*p_static_fields)->_EventRecoveryIdx_k__BackingField, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB5 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFB5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB7 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFB7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB3 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFB3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBF & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFBF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC7 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFC7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC3 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFC3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC5 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFC5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBB & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFBB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB1 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFB1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFCB & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFCB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC9 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFC9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBD & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFBD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFAF & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFAF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC1 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFC1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFAD & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFAD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB9 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v1, v2, v3);
    byte_42EBFB9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB6 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFB6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB8 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFB8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB4 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFB4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC0 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFC0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC8 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFC8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC4 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFC4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC6 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFC6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBC & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFBC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB2 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFB2 = 1;
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

  if ( (byte_42EBFCC & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBFCC = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFCA & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFCA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBE & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFBE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFB0 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFB0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFC2 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFC2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFAE & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFAE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBFBA & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBFBA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}