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
  __int64 v29; // x1
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v35; // x23
  unsigned __int64 v36; // x25
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct System_Threading_CancellationTokenSource_o *v47; // x8
  DataManager_o *v48; // x20
  int v49; // w19
  int v50; // w26
  __int64 v51; // x29
  System_Object_array *v52; // x21
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x22
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  Il2CppObject *v64; // x22
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x22
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v73; // x20
  int32_t v74; // w21
  System_String_o *v75; // x22
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  __int64 v84; // x0
  __int128 v85; // [xsp+0h] [xbp-80h] BYREF
  int v86; // [xsp+10h] [xbp-70h] BYREF
  int v87; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v88; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4AFC5DA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_1BC3008(&object___TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_6176/*"EventMission_"*/, v11);
    sub_1BC3008(&StringLiteral_6202/*"EventTowerState_"*/, v12);
    sub_1BC3008(&StringLiteral_12727/*"ShopItemFilter"*/, v13);
    sub_1BC3008(&StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, v14);
    sub_1BC3008(&StringLiteral_3221/*"BulletinBoardMessageState"*/, v15);
    sub_1BC3008(&StringLiteral_11122/*"RecoveryIdx"*/, v16);
    sub_1BC3008(&StringLiteral_9101/*"MstMission"*/, v17);
    sub_1BC3008(&StringLiteral_4683/*"CooltimeNotification"*/, v18);
    sub_1BC3008(&StringLiteral_9102/*"MstMissionIndex"*/, v19);
    sub_1BC3008(&StringLiteral_6328/*"ExtraMission"*/, v20);
    sub_1BC3008(&StringLiteral_10646/*"PriorityIndex_"*/, v21);
    sub_1BC3008(&StringLiteral_6588/*"FatigueNotiffication"*/, v22);
    sub_1BC3008(&StringLiteral_8425/*"LotteryShopSkipState"*/, v23);
    sub_1BC3008(&StringLiteral_8354/*"LimitedMission"*/, v24);
    sub_1BC3008(&StringLiteral_11292/*"RewardType_"*/, v25);
    sub_1BC3008(&StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v26);
    sub_1BC3008(&StringLiteral_6298/*"ExpeditionNotification"*/, v27);
    sub_1BC3008(&StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, v28);
    sub_1BC3008(&StringLiteral_9039/*"MissionId_"*/, v29);
    byte_4AFC5DA = 1;
  }
  eventId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)EventMaster__getEventIdList((EventMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v35 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_43;
      eventId = *((_DWORD *)&v35->fields._DispLog + v36);
      v37 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v38 = System_String__Concat_62348648((System_String_o *)StringLiteral_10646/*"PriorityIndex_"*/, v37, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
      v39 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v40 = System_String__Concat_62348648((System_String_o *)StringLiteral_9039/*"MissionId_"*/, v39, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0LL);
      v41 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v42 = System_String__Concat_62348648((System_String_o *)StringLiteral_6176/*"EventMission_"*/, v41, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v42, 0LL);
      v43 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v44 = System_String__Concat_62348648((System_String_o *)StringLiteral_11292/*"RewardType_"*/, v43, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
      v45 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v46 = System_String__Concat_62348648((System_String_o *)StringLiteral_6202/*"EventTowerState_"*/, v45, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v46, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                    (EventVoicePlayMaster_o *)Instance,
                                    eventId,
                                    0LL);
      if ( Instance )
      {
        v47 = Instance->fields.m_CancellationTokenSource;
        v48 = Instance;
        if ( v47 )
        {
          v49 = (_DWORD)v47 - 1;
          if ( (int)v47 >= 1 )
            break;
        }
      }
LABEL_33:
      v70 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v71 = System_String__Concat_62348648((System_String_o *)StringLiteral_11122/*"RecoveryIdx"*/, v70, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v71, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Instance )
        goto LABEL_44;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              (EventBulletinBoardMaster_o *)Instance,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v73 = (System_Collections_Generic_List_object__o *)AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v74 = 0;
          do
          {
            v75 = System_Int32__ToString((int32_t)&eventId, 0LL);
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          v73,
                                          v74,
                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
            if ( !Instance )
              goto LABEL_44;
            v76 = System_Int32__ToString((int)Instance + 16, 0LL);
            v77 = System_String__Concat_62386896((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v75, v76, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v77, 0LL);
          }
          while ( ++v74 < v73->fields._size );
        }
      }
      v78 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v79 = System_String__Concat_62348648((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v78, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v79, 0LL);
      v80 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v81 = System_String__Concat_62348648((System_String_o *)StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, v80, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v81, 0LL);
      v82 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v83 = System_String__Concat_62348648((System_String_o *)StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, v82, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v83, 0LL);
      LODWORD(m_CancellationTokenSource) = v35->fields.m_CancellationTokenSource;
      if ( (__int64)++v36 >= (int)m_CancellationTokenSource )
        goto LABEL_42;
    }
    if ( !(_DWORD)v47 )
LABEL_43:
      sub_1BC326C(Instance, v31, v32, v33);
    v50 = 0;
    while ( 1 )
    {
      v51 = *((_QWORD *)&v48->fields._DispLog + v50);
      v52 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 4LL);
      v88 = eventId;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v53, v54, v55);
      if ( !v52 )
        break;
      v56 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BC3144(Instance, v52->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v52->max_length )
        goto LABEL_43;
      v52->m_Items[0] = v56;
      Instance = (DataManager_o *)sub_1BC2FAC(v52->m_Items);
      if ( !v51 )
        break;
      v87 = *(_DWORD *)(v51 + 20);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v57, v58, v59);
      v60 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BC3144(Instance, v52->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v52->max_length <= 1 )
        goto LABEL_43;
      v52->m_Items[1] = v60;
      sub_1BC2FAC(&v52->m_Items[1]);
      v86 = *(_DWORD *)(v51 + 24);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v61, v62, v63);
      v64 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BC3144(Instance, v52->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v52->max_length <= 2 )
        goto LABEL_43;
      v52->m_Items[2] = v64;
      sub_1BC2FAC(&v52->m_Items[2]);
      v85 = *(_OWORD *)(v51 + 28);
      Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v85,
                                    v65,
                                    v66,
                                    v67);
      v68 = (Il2CppObject *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)sub_1BC3144(Instance, v52->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v84 = sub_1BC3288();
          sub_1BC3130(v84, 0LL);
        }
      }
      if ( v52->max_length <= 3 )
        goto LABEL_43;
      v52->m_Items[3] = v68;
      sub_1BC2FAC(&v52->m_Items[3]);
      v69 = System_String__Format_62390076((System_String_o *)StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v52, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v69, 0LL);
      if ( v49 == v50 )
        goto LABEL_33;
      if ( (unsigned int)++v50 >= LODWORD(v48->fields.m_CancellationTokenSource) )
        goto LABEL_43;
    }
LABEL_44:
    sub_1BC3264(Instance, v31);
  }
LABEL_42:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9101/*"MstMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6328/*"ExtraMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8354/*"LimitedMission"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9102/*"MstMissionIndex"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6588/*"FatigueNotiffication"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4683/*"CooltimeNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6298/*"ExpeditionNotification"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11122/*"RecoveryIdx"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8425/*"LotteryShopSkipState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12727/*"ShopItemFilter"*/, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x3
  DataManager_o *v12; // x27
  unsigned int v13; // w25
  __int64 v14; // x19
  struct System_Threading_CancellationTokenSource_o *v15; // x8
  DataManager_o *v16; // x20
  int v17; // w26
  int v18; // w24
  __int64 v19; // x19
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Object_array *v23; // x21
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x22
  System_String_o *v37; // x0
  __int64 v38; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-88h]
  __int128 v40; // [xsp+10h] [xbp-80h] BYREF
  int v41; // [xsp+24h] [xbp-6Ch] BYREF
  int v42; // [xsp+28h] [xbp-68h] BYREF
  int v43; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AFC60A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_1BC3008(&int_TypeInfo, v3);
    sub_1BC3008(&object___TypeInfo, v4);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v7);
    byte_4AFC60A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)Instance, 0LL);
  if ( Instance )
  {
    v12 = Instance;
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_37;
        v13 = 0;
        while ( 1 )
        {
          v14 = *((_QWORD *)&v12->fields._DispLog + (int)v13);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v14 || !Instance )
            goto LABEL_39;
          Instance = (DataManager_o *)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                        (EventVoicePlayMaster_o *)Instance,
                                        *(_DWORD *)(v14 + 16),
                                        0LL);
          if ( Instance )
          {
            v15 = Instance->fields.m_CancellationTokenSource;
            v16 = Instance;
            if ( v15 )
            {
              v17 = (_DWORD)v15 - 1;
              if ( (int)v15 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( ++v13 == (_DWORD)m_CancellationTokenSource )
            return;
          if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v15 )
LABEL_37:
          sub_1BC326C(Instance, v9, v10, v11);
        v18 = 0;
        while ( 1 )
        {
          v19 = *((_QWORD *)&v16->fields._DispLog + v18);
          Instance = (DataManager_o *)sub_1BC30B0(object___TypeInfo, 4LL);
          if ( !v19 )
            break;
          v23 = (System_Object_array *)Instance;
          v43 = *(_DWORD *)(v19 + 16);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v20, v21, v22);
          if ( !v23 )
            break;
          v24 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BC3144(Instance, v23->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( !v23->max_length )
            goto LABEL_37;
          v23->m_Items[0] = v24;
          sub_1BC2FAC(v23->m_Items);
          v42 = *(_DWORD *)(v19 + 20);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v25, v26, v27);
          v28 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BC3144(Instance, v23->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v23->max_length <= 1 )
            goto LABEL_37;
          v23->m_Items[1] = v28;
          sub_1BC2FAC(&v23->m_Items[1]);
          v41 = *(_DWORD *)(v19 + 24);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v29, v30, v31);
          v32 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BC3144(Instance, v23->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_40;
          }
          if ( v23->max_length <= 2 )
            goto LABEL_37;
          v23->m_Items[2] = v32;
          sub_1BC2FAC(&v23->m_Items[2]);
          v40 = *(_OWORD *)(v19 + 28);
          Instance = (DataManager_o *)j_il2cpp_value_box_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        &v40,
                                        v33,
                                        v34,
                                        v35);
          v36 = (Il2CppObject *)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_1BC3144(Instance, v23->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_40:
              v38 = sub_1BC3288();
              sub_1BC3130(v38, 0LL);
            }
          }
          if ( v23->max_length > 3 )
          {
            v23->m_Items[3] = v36;
            sub_1BC2FAC(&v23->m_Items[3]);
            v37 = System_String__Format_62390076((System_String_o *)StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v23, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v37, 0LL);
            if ( v17 == v18 )
              goto LABEL_35;
            if ( (unsigned int)++v18 < LODWORD(v16->fields.m_CancellationTokenSource) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_1BC3264(Instance, v9);
      }
    }
  }
}


void __fastcall EventRewardSaveData__DeleteRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventId;
  if ( (byte_4AFC5FA & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11122/*"RecoveryIdx"*/, method);
    byte_4AFC5FA = 1;
  }
  v3 = (System_String_o *)StringLiteral_11122/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_62348648(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


System_String_o *__fastcall EventRewardSaveData__GetBoxGachaPlayedVoice(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4AFC608 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, method);
    byte_4AFC608 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_69993112(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4AFC5FD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3221/*"BulletinBoardMessageState"*/, method);
    byte_4AFC5FD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v2, 0LL);
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
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = id;
  v8 = eventId;
  if ( (byte_4AFC5FB & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3221/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4AFC5FB = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_62386896((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5F5 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4683/*"CooltimeNotification"*/, v1);
    byte_4AFC5F5 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4683/*"CooltimeNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCraftNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC606 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4794/*"CraftNotification"*/, v1);
    byte_4AFC606 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4794/*"CraftNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5F1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6298/*"ExpeditionNotification"*/, v1);
    byte_4AFC5F1 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6298/*"ExpeditionNotification"*/, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5F3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6588/*"FatigueNotiffication"*/, v1);
    byte_4AFC5F3 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6588/*"FatigueNotiffication"*/, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = eventId;
  if ( (byte_4AFC602 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, method);
    byte_4AFC602 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_69993112(v3, 0LL);
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
  int32_t v7; // [xsp+8h] [xbp-28h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v7 = slot;
  v8 = eventId;
  if ( (byte_4AFC601 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15961/*"_"*/, *(_QWORD *)&slot);
    sub_1BC3008(&StringLiteral_12728/*"ShopItemFilter_"*/, v3);
    byte_4AFC601 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62388900(
           (System_String_o *)StringLiteral_12728/*"ShopItemFilter_"*/,
           v4,
           (System_String_o *)StringLiteral_15961/*"_"*/,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5FF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8425/*"LotteryShopSkipState"*/, v1);
    byte_4AFC5FF = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8425/*"LotteryShopSkipState"*/, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = eventId;
  if ( (byte_4AFC5F7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12874/*"SpotCooltimeNotification_"*/, method);
    byte_4AFC5F7 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_62348648((System_String_o *)StringLiteral_12874/*"SpotCooltimeNotification_"*/, v2, 0LL);
}


bool __fastcall EventRewardSaveData__GetTradeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC604 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_14436/*"TradeNotification"*/, v1);
    byte_4AFC604 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_14436/*"TradeNotification"*/, 0, 0LL) != 0;
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

  if ( (byte_4AFC5E0 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4589/*"CompleteMission"*/, v1);
    byte_4AFC5E0 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4589/*"CompleteMission"*/, 0, 0LL);
  if ( !byte_4AFC62F )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC62F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4AFC5E2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4998/*"DailyMission"*/, v1);
    byte_4AFC5E2 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4998/*"DailyMission"*/, 0, 0LL);
  if ( !byte_4AFC631 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC631 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69992544; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC5D9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10646/*"PriorityIndex_"*/, method);
    byte_4AFC5D9 = 1;
  }
  if ( !byte_4AFC62A )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC62A = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_10646/*"PriorityIndex_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v3, 0LL);
    if ( !byte_4AFC62A )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
      byte_4AFC62A = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_69992544;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69992544; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC5ED & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6202/*"EventTowerState_"*/, method);
    byte_4AFC5ED = 1;
  }
  if ( !byte_4AFC63B )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC63B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_6202/*"EventTowerState_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v3, 0LL);
    if ( !byte_4AFC63B )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
      byte_4AFC63B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_69992544;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x20
  System_String_o *v32; // x0
  __int64 v33; // x1
  int32_t Int; // w19
  __int64 v35; // x0
  int32_t v36; // [xsp+0h] [xbp-50h] BYREF
  int32_t v37; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AFC5EF & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1BC3008(&object___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4AFC5EF = 1;
  }
  v11 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 4LL);
  v39 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v39, v12, v13, v14);
  if ( !v11 )
    sub_1BC3264(v15, v16);
  v19 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = v19;
  sub_1BC2FAC(v11->m_Items);
  v38 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v38, v20, v21, v22);
  v23 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = v23;
  sub_1BC2FAC(&v11->m_Items[1]);
  v37 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v37, v24, v25, v26);
  v27 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = v27;
  sub_1BC2FAC(&v11->m_Items[2]);
  v36 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v28, v29, v30);
  v31 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_20:
      v35 = sub_1BC3288();
      sub_1BC3130(v35, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_19:
    sub_1BC326C(v15, v16, v17, v18);
  v11->m_Items[3] = v31;
  sub_1BC2FAC(&v11->m_Items[3]);
  v32 = System_String__Format_62390076((System_String_o *)StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v32, 0, 0LL);
  if ( !byte_4AFC63D )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v33);
    byte_4AFC63D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4AFC5E6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6328/*"ExtraMission"*/, v1);
    byte_4AFC5E6 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6328/*"ExtraMission"*/, 0, 0LL);
  if ( !byte_4AFC635 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC635 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_69992544; // w19

  if ( !byte_4AFC641 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_4AFC641 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(ItemFilterKeyName, 0LL);
    if ( !byte_4AFC641 )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v6);
      byte_4AFC641 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_69992544;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4AFC5E8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8354/*"LimitedMission"*/, v1);
    byte_4AFC5E8 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8354/*"LimitedMission"*/, 0, 0LL);
  if ( !byte_4AFC637 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC637 = 1;
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
  int32_t Int_69992544; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4AFC5DC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6176/*"EventMission_"*/, loadFilter);
    sub_1BC3008(&StringLiteral_9039/*"MissionId_"*/, v4);
    byte_4AFC5DC = 1;
  }
  if ( !byte_4AFC628 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_4AFC628 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_62348648((System_String_o *)StringLiteral_9039/*"MissionId_"*/, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v6, 0LL);
    if ( !byte_4AFC628 )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v7);
      byte_4AFC628 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_69992544;
  }
  if ( loadFilter )
  {
    if ( !byte_4AFC629 )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v7);
      byte_4AFC629 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_62348648((System_String_o *)StringLiteral_6176/*"EventMission_"*/, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_69992544(v10, 0LL);
      if ( !byte_4AFC629 )
      {
        sub_1BC3008(&EventRewardSaveData_TypeInfo, v11);
        byte_4AFC629 = 1;
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

  if ( (byte_4AFC5EB & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9102/*"MstMissionIndex"*/, v1);
    byte_4AFC5EB = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9102/*"MstMissionIndex"*/, 0, 0LL);
  if ( !byte_4AFC639 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC639 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_69992544; // w19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  if ( (byte_4AFC5F8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11122/*"RecoveryIdx"*/, method);
    byte_4AFC5F8 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11122/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_62348648(v3, v4, 0LL);
  }
  if ( !byte_4AFC63F )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC63F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v3, 0LL);
    if ( !byte_4AFC63F )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v5);
      byte_4AFC63F = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_69992544;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_69992544; // w19
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC5DE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11292/*"RewardType_"*/, method);
    byte_4AFC5DE = 1;
  }
  if ( !byte_4AFC62D )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC62D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_62348648((System_String_o *)StringLiteral_11292/*"RewardType_"*/, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_69992544 = UnityEngine_PlayerPrefs__GetInt_69992544(v3, 0LL);
    if ( !byte_4AFC62D )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
      byte_4AFC62D = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_69992544;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_4AFC5E4 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9101/*"MstMission"*/, v1);
    byte_4AFC5E4 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9101/*"MstMission"*/, 0, 0LL);
  if ( !byte_4AFC633 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v2);
    byte_4AFC633 = 1;
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

  if ( (byte_4AFC5EA & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4998/*"DailyMission"*/, v1);
    sub_1BC3008(&StringLiteral_9101/*"MstMission"*/, v2);
    sub_1BC3008(&StringLiteral_6328/*"ExtraMission"*/, v3);
    sub_1BC3008(&StringLiteral_8354/*"LimitedMission"*/, v4);
    byte_4AFC5EA = 1;
  }
  if ( !byte_4AFC632 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC632 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4998/*"DailyMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_4AFC634 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v5);
    byte_4AFC634 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9101/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_4AFC636 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v6);
    byte_4AFC636 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6328/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_4AFC638 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v7);
    byte_4AFC638 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8354/*"LimitedMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5E1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4589/*"CompleteMission"*/, v1);
    byte_4AFC5E1 = 1;
  }
  if ( !byte_4AFC630 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC630 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4589/*"CompleteMission"*/,
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = eventId;
  if ( (byte_4AFC5DB & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8290/*"LastViewEventId_"*/, method);
    sub_1BC3008(&StringLiteral_10646/*"PriorityIndex_"*/, v2);
    byte_4AFC5DB = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_8290/*"LastViewEventId_"*/, v3, 0LL);
  if ( !byte_4AFC62B )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
    byte_4AFC62B = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_62348648((System_String_o *)StringLiteral_10646/*"PriorityIndex_"*/, v6, 0LL);
  if ( !byte_4AFC62C )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v7);
    byte_4AFC62C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5E3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4998/*"DailyMission"*/, v1);
    byte_4AFC5E3 = 1;
  }
  if ( !byte_4AFC632 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC632 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4998/*"DailyMission"*/,
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
  if ( (byte_4AFC5EE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6202/*"EventTowerState_"*/, method);
    byte_4AFC5EE = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_62348648((System_String_o *)StringLiteral_6202/*"EventTowerState_"*/, v2, 0LL);
  if ( !byte_4AFC63C )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v3);
    byte_4AFC63C = 1;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x19
  __int64 v32; // x1
  System_String_o *v33; // x19
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int EventVoicePlayCount_k__BackingField; // w21
  __int64 v36; // x1
  int v37; // w9
  __int64 v38; // x0
  int32_t v39; // [xsp+0h] [xbp-50h] BYREF
  int32_t v40; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AFC5F0 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&slot);
    sub_1BC3008(&object___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v10);
    byte_4AFC5F0 = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v11 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 4LL);
  v42 = eventId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v12, v13, v14);
  if ( !v11 )
    sub_1BC3264(v15, v16);
  v19 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = v19;
  sub_1BC2FAC(v11->m_Items);
  v41 = slot;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v41, v20, v21, v22);
  v23 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = v23;
  sub_1BC2FAC(&v11->m_Items[1]);
  v40 = idx;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v40, v24, v25, v26);
  v27 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_24;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = v27;
  sub_1BC2FAC(&v11->m_Items[2]);
  v39 = svtId;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v39, v28, v29, v30);
  v31 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1BC3144(v15, v11->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_24:
      v38 = sub_1BC3288();
      sub_1BC3130(v38, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_23:
    sub_1BC326C(v15, v16, v17, v18);
  v11->m_Items[3] = v31;
  sub_1BC2FAC(&v11->m_Items[3]);
  v33 = System_String__Format_62390076((System_String_o *)StringLiteral_6225/*"EventVoicePlayCount_{0}_{1}_{2}_{3}"*/, v11, 0LL);
  if ( !byte_4AFC63E )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v32);
    byte_4AFC63E = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  EventVoicePlayCount_k__BackingField = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_4AFC63D )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
  }
  else
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v32);
    byte_4AFC63D = 1;
    v37 = (unsigned __int8)byte_4AFC63E;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = EventVoicePlayCount_k__BackingField;
    if ( !v37 )
    {
      sub_1BC3008(&EventRewardSaveData_TypeInfo, v36);
      byte_4AFC63E = 1;
      EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v33, EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5E7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6328/*"ExtraMission"*/, v1);
    byte_4AFC5E7 = 1;
  }
  if ( !byte_4AFC636 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC636 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6328/*"ExtraMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_4AFC642 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v3);
    byte_4AFC642 = 1;
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

  if ( (byte_4AFC5E9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8354/*"LimitedMission"*/, v1);
    byte_4AFC5E9 = 1;
  }
  if ( !byte_4AFC638 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC638 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8354/*"LimitedMission"*/,
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = eventId;
  if ( (byte_4AFC5DD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6176/*"EventMission_"*/, method);
    sub_1BC3008(&StringLiteral_9039/*"MissionId_"*/, v2);
    byte_4AFC5DD = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_9039/*"MissionId_"*/, v3, 0LL);
  if ( !byte_4AFC627 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v4);
    byte_4AFC627 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_62348648((System_String_o *)StringLiteral_6176/*"EventMission_"*/, v6, 0LL);
  if ( !byte_4AFC626 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v7);
    byte_4AFC626 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5EC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9102/*"MstMissionIndex"*/, v1);
    byte_4AFC5EC = 1;
  }
  if ( !byte_4AFC63A )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC63A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9102/*"MstMissionIndex"*/,
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
  if ( (byte_4AFC5DF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11292/*"RewardType_"*/, method);
    byte_4AFC5DF = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_62348648((System_String_o *)StringLiteral_11292/*"RewardType_"*/, v2, 0LL);
  if ( !byte_4AFC62E )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v3);
    byte_4AFC62E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5E5 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9101/*"MstMission"*/, v1);
    byte_4AFC5E5 = 1;
  }
  if ( !byte_4AFC634 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC634 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9101/*"MstMission"*/,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SetBoxGachaPlayedVoice(
        int32_t eventId,
        System_String_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC609 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, saveData);
    byte_4AFC609 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_8151/*"KeyBoxGachaPlayedVoice"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
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
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC5FE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3221/*"BulletinBoardMessageState"*/, *(_QWORD *)&messageId);
    byte_4AFC5FE = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v4, 0LL);
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
  int32_t v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v8 = id;
  v9 = eventId;
  if ( (byte_4AFC5FC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3221/*"BulletinBoardMessageState"*/, *(_QWORD *)&id);
    byte_4AFC5FC = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_62386896((System_String_o *)StringLiteral_3221/*"BulletinBoardMessageState"*/, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC5F6 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_4683/*"CooltimeNotification"*/, method);
    byte_4AFC5F6 = 1;
  }
  if ( EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4683/*"CooltimeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCraftNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC607 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_4794/*"CraftNotification"*/, method);
    byte_4AFC607 = 1;
  }
  if ( EventRewardSaveData__GetCraftNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4794/*"CraftNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC5F2 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_6298/*"ExpeditionNotification"*/, method);
    byte_4AFC5F2 = 1;
  }
  if ( EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6298/*"ExpeditionNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC5F4 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_6588/*"FatigueNotiffication"*/, method);
    byte_4AFC5F4 = 1;
  }
  if ( EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) != v2 )
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
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = eventId;
  if ( (byte_4AFC603 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, saveData);
    byte_4AFC603 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_7224/*"HeelPortraitDetailDialogState"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC600 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_8425/*"LotteryShopSkipState"*/, method);
    byte_4AFC600 = 1;
  }
  if ( EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8425/*"LotteryShopSkipState"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetRecoveryIdx(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  int32_t EventRecoveryIdx_k__BackingField; // w19
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = eventId;
  EventRecoveryIdx_k__BackingField = idx;
  if ( (byte_4AFC5F9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11122/*"RecoveryIdx"*/, *(_QWORD *)&idx);
    byte_4AFC5F9 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11122/*"RecoveryIdx"*/;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v7, 0LL);
    v5 = System_String__Concat_62348648(v5, v6, 0LL);
  }
  if ( !byte_4AFC63F )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4AFC63F = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = EventRecoveryIdx_k__BackingField;
  if ( !byte_4AFC640 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_4AFC640 = 1;
    EventRecoveryIdx_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRecoveryIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetSpotCooltimeNotification(int32_t eventId, bool value, const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_String_o *SpotCooltimeNotificationKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x0

  v4 = value;
  SpotCooltimeNotificationKey = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, (const MethodInfo *)value);
  if ( (UnityEngine_PlayerPrefs__GetInt(SpotCooltimeNotificationKey, 0, 0LL) != 0) != v4 )
  {
    v7 = EventRewardSaveData__GetSpotCooltimeNotificationKey(eventId, v6);
    UnityEngine_PlayerPrefs__SetInt(v7, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetTradeNotification(bool setValue, const MethodInfo *method)
{
  bool v2; // w19

  v2 = setValue;
  if ( (byte_4AFC605 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_1BC3008(&StringLiteral_14436/*"TradeNotification"*/, method);
    byte_4AFC605 = 1;
  }
  if ( EventRewardSaveData__GetTradeNotification((const MethodInfo *)setValue) != v2 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14436/*"TradeNotification"*/, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


int32_t __fastcall EventRewardSaveData__get_CompleteMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5C1 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5C1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5C3 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5C3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5BF & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5BF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5CB & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5CB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5D3 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5D3 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5CF & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5CF = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5D1 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5D1 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5C7 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5C7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5BD & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5BD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5D7 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5D7 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5D5 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5D5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5C9 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5C9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5BB & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5BB = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5CD & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5CD = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5B9 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5B9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC5C5 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v1);
    byte_4AFC5C5 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5C2 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5C2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5C4 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5C4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5C0 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5C0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5CC & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5CC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5D4 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5D4 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5D0 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5D0 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5D2 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5D2 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5C8 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5C8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5BE & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5BE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_HeelPortraitDetailDialogState(
        System_String_o *value,
        const MethodInfo *method)
{
  struct EventRewardSaveData_StaticFields *static_fields; // x0

  if ( (byte_4AFC5D8 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5D8 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_1BC2FAC(&static_fields->_HeelPortraitDetailDialogState_k__BackingField);
}


void __fastcall EventRewardSaveData__set_ItemFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5D6 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5D6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5CA & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5CA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5BC & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5BC = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5CE & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5CE = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5BA & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5BA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_4AFC5C6 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, method);
    byte_4AFC5C6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}