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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _QWORD *EventIdList; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  __int64 v34; // x8
  _QWORD *v35; // x25
  unsigned __int64 v36; // x24
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
  WebViewManager_o *v47; // x0
  EventVoicePlayMaster_o *v48; // x0
  __int64 v49; // x19
  _QWORD *v50; // x20
  unsigned int v51; // w26
  __int64 v52; // x28
  System_Object_array *v53; // x21
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x22
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x22
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  __int64 v72; // x9
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  EventBulletinBoardMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *AvailableEntityList; // x0
  System_Collections_Generic_List_EventBulletinBoardEntity__o *v84; // x20
  __int64 v85; // x19
  System_String_o *v86; // x21
  EventBulletinBoardEntity_o *v87; // x8
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  __int64 v94[2]; // [xsp+0h] [xbp-70h] BYREF
  int v95; // [xsp+10h] [xbp-60h] BYREF
  int v96; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v97; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FD0F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_6157, v11);
    sub_B16FFC(&StringLiteral_6181, v12);
    sub_B16FFC(&StringLiteral_12788, v13);
    sub_B16FFC(&StringLiteral_2881, v14);
    sub_B16FFC(&StringLiteral_11290, v15);
    sub_B16FFC(&StringLiteral_9186, v16);
    sub_B16FFC(&StringLiteral_4283, v17);
    sub_B16FFC(&StringLiteral_9187, v18);
    sub_B16FFC(&StringLiteral_6295, v19);
    sub_B16FFC(&StringLiteral_10738, v20);
    sub_B16FFC(&StringLiteral_6564, v21);
    sub_B16FFC(&StringLiteral_8566, v22);
    sub_B16FFC(&StringLiteral_8498, v23);
    sub_B16FFC(&StringLiteral_11472, v24);
    sub_B16FFC(&StringLiteral_6195, v25);
    sub_B16FFC(&StringLiteral_6262, v26);
    sub_B16FFC(&StringLiteral_7116, v27);
    sub_B16FFC(&StringLiteral_9120, v28);
    byte_40FD0F9 = 1;
  }
  eventId = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_47;
  EventIdList = EventMaster__getEventIdList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !EventIdList )
    goto LABEL_47;
  v34 = EventIdList[3];
  v35 = EventIdList;
  if ( (int)v34 >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
        goto LABEL_46;
      eventId = *((_DWORD *)v35 + v36 + 8);
      v37 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v38 = System_String__Concat_43743732((System_String_o *)StringLiteral_10738, v37, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
      v39 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v40 = System_String__Concat_43743732((System_String_o *)StringLiteral_9120, v39, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0LL);
      v41 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v42 = System_String__Concat_43743732((System_String_o *)StringLiteral_6157, v41, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v42, 0LL);
      v43 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v44 = System_String__Concat_43743732((System_String_o *)StringLiteral_11472, v43, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
      v45 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v46 = System_String__Concat_43743732((System_String_o *)StringLiteral_6181, v45, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v46, 0LL);
      v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v47 )
        goto LABEL_47;
      v48 = (EventVoicePlayMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v47,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
      if ( !v48 )
        goto LABEL_47;
      EventIdList = EventVoicePlayMaster__GetTargetEventIdEntityList(v48, eventId, 0LL);
      if ( EventIdList )
      {
        v49 = EventIdList[3];
        v50 = EventIdList;
        if ( v49 )
        {
          if ( (int)v49 >= 1 )
            break;
        }
      }
LABEL_33:
      v80 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v81 = System_String__Concat_43743732((System_String_o *)StringLiteral_11290, v80, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v81, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventBulletinBoardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_47;
      AvailableEntityList = EventBulletinBoardMaster__GetAvailableEntityList(
                              Master_WarQuestSelectionMaster,
                              eventId,
                              0LL);
      if ( AvailableEntityList )
      {
        v84 = AvailableEntityList;
        if ( AvailableEntityList->fields._size >= 1 )
        {
          v85 = 0LL;
          do
          {
            v86 = System_Int32__ToString((int32_t)&eventId, 0LL);
            if ( v84->fields._size <= (unsigned int)v85 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v87 = v84->fields._items->m_Items[v85];
            if ( !v87 )
              goto LABEL_47;
            v88 = System_Int32__ToString((int)v87 + 16, 0LL);
            v89 = System_String__Concat_43746016((System_String_o *)StringLiteral_2881, v86, v88, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v89, 0LL);
          }
          while ( (int)++v85 < v84->fields._size );
        }
      }
      v90 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v91 = System_String__Concat_43743732((System_String_o *)StringLiteral_2881, v90, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v91, 0LL);
      v92 = System_Int32__ToString((int32_t)&eventId, 0LL);
      v93 = System_String__Concat_43743732((System_String_o *)StringLiteral_7116, v92, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v93, 0LL);
      LODWORD(v34) = *((_DWORD *)v35 + 6);
      if ( (__int64)++v36 >= (int)v34 )
        goto LABEL_45;
    }
    if ( !(_DWORD)v49 )
    {
LABEL_46:
      sub_B17100(EventIdList, v32, v33);
      sub_B170A0();
    }
    v51 = 0;
    while ( 1 )
    {
      v52 = v50[(int)v51 + 4];
      v53 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v33);
      v97 = eventId;
      EventIdList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
      if ( !v53 )
        break;
      v59 = (System_Int32_array **)EventIdList;
      if ( EventIdList )
      {
        EventIdList = (_QWORD *)sub_B170BC(EventIdList, v53->obj.klass->_1.element_class);
        if ( !EventIdList )
          goto LABEL_48;
      }
      if ( !v53->max_length )
        goto LABEL_46;
      v53->m_Items[0] = (Il2CppObject *)v59;
      sub_B16F98((BattleServantConfConponent_o *)v53->m_Items, v59, v33, v54, v55, v56, v57, v58);
      if ( !v52 )
        break;
      v96 = *(_DWORD *)(v52 + 20);
      EventIdList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      v65 = (System_Int32_array **)EventIdList;
      if ( EventIdList )
      {
        EventIdList = (_QWORD *)sub_B170BC(EventIdList, v53->obj.klass->_1.element_class);
        if ( !EventIdList )
          goto LABEL_48;
      }
      if ( v53->max_length <= 1 )
        goto LABEL_46;
      v53->m_Items[1] = (Il2CppObject *)v65;
      sub_B16F98((BattleServantConfConponent_o *)&v53->m_Items[1], v65, v33, v60, v61, v62, v63, v64);
      v95 = *(_DWORD *)(v52 + 24);
      EventIdList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
      v71 = (System_Int32_array **)EventIdList;
      if ( EventIdList )
      {
        EventIdList = (_QWORD *)sub_B170BC(EventIdList, v53->obj.klass->_1.element_class);
        if ( !EventIdList )
          goto LABEL_48;
      }
      if ( v53->max_length <= 2 )
        goto LABEL_46;
      v53->m_Items[2] = (Il2CppObject *)v71;
      sub_B16F98((BattleServantConfConponent_o *)&v53->m_Items[2], v71, v33, v66, v67, v68, v69, v70);
      v72 = *(_QWORD *)(v52 + 36);
      v94[0] = *(_QWORD *)(v52 + 28);
      v94[1] = v72;
      EventIdList = (_QWORD *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94);
      v78 = (System_Int32_array **)EventIdList;
      if ( EventIdList )
      {
        EventIdList = (_QWORD *)sub_B170BC(EventIdList, v53->obj.klass->_1.element_class);
        if ( !EventIdList )
        {
LABEL_48:
          sub_B170F4(EventIdList);
          sub_B170A0();
        }
      }
      if ( v53->max_length <= 3 )
        goto LABEL_46;
      v53->m_Items[3] = (Il2CppObject *)v78;
      sub_B16F98((BattleServantConfConponent_o *)&v53->m_Items[3], v78, v33, v73, v74, v75, v76, v77);
      v79 = System_String__Format_43822456((System_String_o *)StringLiteral_6195, v53, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v79, 0LL);
      if ( (int)++v51 >= (int)v49 )
        goto LABEL_33;
      if ( v51 >= *((_DWORD *)v50 + 6) )
        goto LABEL_46;
    }
LABEL_47:
    sub_B170D4();
  }
LABEL_45:
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9186, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6295, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8498, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_9187, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6564, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_4283, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6262, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11290, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8566, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12788, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _QWORD *EnableExistEventRewardEntityList; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  _QWORD *v13; // x26
  unsigned int v14; // w25
  __int64 v15; // x19
  WebViewManager_o *v16; // x0
  EventVoicePlayMaster_o *v17; // x0
  __int64 v18; // x24
  _QWORD *v19; // x20
  unsigned int v20; // w19
  __int64 v21; // x27
  __int64 v22; // x0
  System_Object_array *v23; // x21
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x22
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x22
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  __int64 v42; // x9
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  System_String_o *v49; // x0
  __int64 v50; // [xsp+8h] [xbp-78h]
  __int64 v51[2]; // [xsp+10h] [xbp-70h] BYREF
  int v52; // [xsp+24h] [xbp-5Ch] BYREF
  int v53; // [xsp+28h] [xbp-58h] BYREF
  int v54; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FD123 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v2);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_6195, v7);
    byte_40FD123 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_39;
  EnableExistEventRewardEntityList = EventMaster__GetEnableExistEventRewardEntityList(
                                       MasterData_WarQuestSelectionMaster,
                                       0LL);
  if ( EnableExistEventRewardEntityList )
  {
    v13 = EnableExistEventRewardEntityList;
    v50 = EnableExistEventRewardEntityList[3];
    if ( v50 )
    {
      if ( (int)v50 >= 1 )
      {
        if ( !(_DWORD)v50 )
          goto LABEL_37;
        v14 = 0;
        while ( 1 )
        {
          v15 = v13[(int)v14 + 4];
          v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v16 )
            goto LABEL_39;
          v17 = (EventVoicePlayMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v16,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v15 || !v17 )
            goto LABEL_39;
          EnableExistEventRewardEntityList = EventVoicePlayMaster__GetTargetEventIdEntityList(
                                               v17,
                                               *(_DWORD *)(v15 + 16),
                                               0LL);
          if ( EnableExistEventRewardEntityList )
          {
            v18 = EnableExistEventRewardEntityList[3];
            v19 = EnableExistEventRewardEntityList;
            if ( v18 )
            {
              if ( (int)v18 >= 1 )
                break;
            }
          }
LABEL_35:
          if ( (int)++v14 >= (int)v50 )
            return;
          if ( v14 >= *((_DWORD *)v13 + 6) )
            goto LABEL_37;
        }
        if ( !(_DWORD)v18 )
        {
LABEL_37:
          sub_B17100(EnableExistEventRewardEntityList, v11, v12);
          sub_B170A0();
        }
        v20 = 0;
        while ( 1 )
        {
          v21 = v19[(int)v20 + 4];
          v22 = sub_B17014(object___TypeInfo, 4LL, v12);
          if ( !v21 )
            break;
          v23 = (System_Object_array *)v22;
          v54 = *(_DWORD *)(v21 + 16);
          EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
          if ( !v23 )
            break;
          v29 = (System_Int32_array **)EnableExistEventRewardEntityList;
          if ( EnableExistEventRewardEntityList )
          {
            EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                           EnableExistEventRewardEntityList,
                                                           v23->obj.klass->_1.element_class);
            if ( !EnableExistEventRewardEntityList )
              goto LABEL_40;
          }
          if ( !v23->max_length )
            goto LABEL_37;
          v23->m_Items[0] = (Il2CppObject *)v29;
          sub_B16F98((BattleServantConfConponent_o *)v23->m_Items, v29, v12, v24, v25, v26, v27, v28);
          v53 = *(_DWORD *)(v21 + 20);
          EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
          v35 = (System_Int32_array **)EnableExistEventRewardEntityList;
          if ( EnableExistEventRewardEntityList )
          {
            EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                           EnableExistEventRewardEntityList,
                                                           v23->obj.klass->_1.element_class);
            if ( !EnableExistEventRewardEntityList )
              goto LABEL_40;
          }
          if ( v23->max_length <= 1 )
            goto LABEL_37;
          v23->m_Items[1] = (Il2CppObject *)v35;
          sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], v35, v12, v30, v31, v32, v33, v34);
          v52 = *(_DWORD *)(v21 + 24);
          EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
          v41 = (System_Int32_array **)EnableExistEventRewardEntityList;
          if ( EnableExistEventRewardEntityList )
          {
            EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                           EnableExistEventRewardEntityList,
                                                           v23->obj.klass->_1.element_class);
            if ( !EnableExistEventRewardEntityList )
              goto LABEL_40;
          }
          if ( v23->max_length <= 2 )
            goto LABEL_37;
          v23->m_Items[2] = (Il2CppObject *)v41;
          sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[2], v41, v12, v36, v37, v38, v39, v40);
          v42 = *(_QWORD *)(v21 + 36);
          v51[0] = *(_QWORD *)(v21 + 28);
          v51[1] = v42;
          EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(
                                                         CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         v51);
          v48 = (System_Int32_array **)EnableExistEventRewardEntityList;
          if ( EnableExistEventRewardEntityList )
          {
            EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                           EnableExistEventRewardEntityList,
                                                           v23->obj.klass->_1.element_class);
            if ( !EnableExistEventRewardEntityList )
            {
LABEL_40:
              sub_B170F4(EnableExistEventRewardEntityList);
              sub_B170A0();
            }
          }
          if ( v23->max_length > 3 )
          {
            v23->m_Items[3] = (Il2CppObject *)v48;
            sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[3], v48, v12, v43, v44, v45, v46, v47);
            v49 = System_String__Format_43822456((System_String_o *)StringLiteral_6195, v23, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v49, 0LL);
            if ( (int)++v20 >= (int)v18 )
              goto LABEL_35;
            if ( v20 < *((_DWORD *)v19 + 6) )
              continue;
          }
          goto LABEL_37;
        }
LABEL_39:
        sub_B170D4();
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
  if ( (byte_40FD119 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11290, method);
    byte_40FD119 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11290;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v5, 0LL);
    v3 = System_String__Concat_43743732(v3, v4, 0LL);
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3, 0LL);
}


int32_t __fastcall EventRewardSaveData__GetBulletInBoardLastMessageId(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_40FD11C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2881, method);
    byte_40FD11C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_2881, v2, 0LL);
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
  if ( (byte_40FD11A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2881, *(_QWORD *)&id);
    byte_40FD11A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v8, 0LL);
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_43746016((System_String_o *)StringLiteral_2881, v3, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetCooltimeNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD114 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4283, v1);
    byte_40FD114 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4283, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetExpeditionNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD110 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6262, v1);
    byte_40FD110 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6262, 0, 0LL) != 0;
}


bool __fastcall EventRewardSaveData__GetFatigueNotification(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD112 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6564, v1);
    byte_40FD112 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6564, 0, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetHeelPortraitDetailDialogState(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = eventId;
  if ( (byte_40FD121 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7116, method);
    byte_40FD121 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_7116, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetString_34837456(v3, 0LL);
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
  if ( (byte_40FD120 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15842, *(_QWORD *)&slot);
    sub_B16FFC(&StringLiteral_12789, v3);
    byte_40FD120 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43747144(
           (System_String_o *)StringLiteral_12789,
           v4,
           (System_String_o *)StringLiteral_15842,
           v5,
           0LL);
}


bool __fastcall EventRewardSaveData__GetLotteryShopSkipState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD11E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8566, v1);
    byte_40FD11E = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8566, 1, 0LL) != 0;
}


System_String_o *__fastcall EventRewardSaveData__GetSpotCooltimeNotificationKey(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = eventId;
  if ( (byte_40FD116 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12937, method);
    byte_40FD116 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12937, v2, 0LL);
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

  if ( (byte_40FD0FF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4184, v1);
    byte_40FD0FF = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4184, 0, 0LL);
  if ( !byte_40FA2C9 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FA2C9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_40FD101 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5050, v1);
    byte_40FD101 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5050, 0, 0LL);
  if ( !byte_40FB282 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FB282 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadEventData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34836848; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_40FD0F8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10738, method);
    byte_40FD0F8 = 1;
  }
  if ( !byte_40F6253 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F6253 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_10738, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v3, 0LL);
    if ( !byte_40F6253 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
      byte_40F6253 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = Int_34836848;
  }
}


void __fastcall EventRewardSaveData__LoadEventTowerState(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34836848; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_40FD10C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6181, method);
    byte_40FD10C = 1;
  }
  if ( !byte_40F84B6 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F84B6 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = 0;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_6181, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v3, 0LL);
    if ( !byte_40F84B6 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
      byte_40F84B6 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = Int_34836848;
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
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_o *v39; // x0
  __int64 v40; // x1
  int32_t Int; // w19
  int32_t v42; // [xsp+0h] [xbp-40h] BYREF
  int32_t v43; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD10E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6195, v10);
    byte_40FD10E = 1;
  }
  v11 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, *(_QWORD *)&idx);
  v45 = eventId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
  if ( !v11 )
    sub_B170D4();
  v20 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B170BC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( !v11->max_length )
    goto LABEL_19;
  v11->m_Items[0] = (Il2CppObject *)v20;
  sub_B16F98((BattleServantConfConponent_o *)v11->m_Items, v20, v14, v15, v16, v17, v18, v19);
  v44 = slot;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v26 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B170BC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_19;
  v11->m_Items[1] = (Il2CppObject *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[1], v26, v14, v21, v22, v23, v24, v25);
  v43 = idx;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v32 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B170BC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_20;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_19;
  v11->m_Items[2] = (Il2CppObject *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v14, v27, v28, v29, v30, v31);
  v42 = svtId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v38 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = sub_B170BC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_20:
      sub_B170F4(v12);
      sub_B170A0();
    }
  }
  if ( v11->max_length <= 3 )
  {
LABEL_19:
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v11->m_Items[3] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[3], v38, v14, v33, v34, v35, v36, v37);
  v39 = System_String__Format_43822456((System_String_o *)StringLiteral_6195, v11, 0LL);
  Int = UnityEngine_PlayerPrefs__GetInt(v39, 0, 0LL);
  if ( !byte_40FD20B )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v40);
    byte_40FD20B = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_40FD105 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6295, v1);
    byte_40FD105 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6295, 0, 0LL);
  if ( !byte_40FB284 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FB284 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = Int;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__LoadItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  System_String_o *ItemFilterKeyName; // x19
  __int64 v6; // x1
  int32_t Int_34836848; // w19

  if ( !byte_40FD20E )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&slot);
    byte_40FD20E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = 0;
  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( UnityEngine_PlayerPrefs__HasKey(ItemFilterKeyName, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(ItemFilterKeyName, 0LL);
    if ( !byte_40FD20E )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v6);
      byte_40FD20E = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = Int_34836848;
  }
}


void __fastcall EventRewardSaveData__LoadLimitedMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_40FD107 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8498, v1);
    byte_40FD107 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_8498, 0, 0LL);
  if ( !byte_40FB285 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FB285 = 1;
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
  int32_t Int_34836848; // w20
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_40FD0FB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6157, loadFilter);
    sub_B16FFC(&StringLiteral_9120, v4);
    byte_40FD0FB = 1;
  }
  if ( !byte_40F6976 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, loadFilter);
    byte_40F6976 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = 0;
  v5 = System_Int32__ToString((int32_t)&v13, 0LL);
  v6 = System_String__Concat_43743732((System_String_o *)StringLiteral_9120, v5, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v6, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v6, 0LL);
    if ( !byte_40F6976 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v7);
      byte_40F6976 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = Int_34836848;
  }
  if ( loadFilter )
  {
    if ( !byte_40F6975 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v7);
      byte_40F6975 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v9 = System_Int32__ToString((int32_t)&v13, 0LL);
    v10 = System_String__Concat_43743732((System_String_o *)StringLiteral_6157, v9, 0LL);
    if ( UnityEngine_PlayerPrefs__HasKey(v10, 0LL) )
    {
      v12 = UnityEngine_PlayerPrefs__GetInt_34836848(v10, 0LL);
      if ( !byte_40F6975 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v11);
        byte_40F6975 = 1;
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

  if ( (byte_40FD10A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9187, v1);
    byte_40FD10A = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9187, 0, 0LL);
  if ( !byte_40FB27D )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FB27D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = Int;
}


void __fastcall EventRewardSaveData__LoadRecoveryIdx(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t Int_34836848; // w19
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_40FD117 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11290, method);
    byte_40FD117 = 1;
  }
  v3 = (System_String_o *)StringLiteral_11290;
  if ( eventId )
  {
    v4 = System_Int32__ToString((int32_t)&v7, 0LL);
    v3 = System_String__Concat_43743732(v3, v4, 0LL);
  }
  if ( !byte_40FD20C )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD20C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = 1;
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v3, 0LL);
    if ( !byte_40FD20C )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v5);
      byte_40FD20C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = Int_34836848;
  }
}


void __fastcall EventRewardSaveData__LoadRewardTypeData(int32_t eventId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  __int64 v4; // x1
  int32_t Int_34836848; // w19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_40FD0FD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11472, method);
    byte_40FD0FD = 1;
  }
  if ( !byte_40FD209 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD209 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = -1;
  v2 = System_Int32__ToString((int32_t)&v6, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_11472, v2, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v3, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v3, 0LL);
    if ( !byte_40FD209 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
      byte_40FD209 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = Int_34836848;
  }
}


void __fastcall EventRewardSaveData__LoadWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Int; // w19

  if ( (byte_40FD103 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9186, v1);
    byte_40FD103 = 1;
  }
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_9186, 0, 0LL);
  if ( !byte_40FB283 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v2);
    byte_40FB283 = 1;
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

  if ( (byte_40FD109 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5050, v1);
    sub_B16FFC(&StringLiteral_9186, v2);
    sub_B16FFC(&StringLiteral_6295, v3);
    sub_B16FFC(&StringLiteral_8498, v4);
    byte_40FD109 = 1;
  }
  if ( !byte_40FB27E )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB27E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5050,
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField,
    0LL);
  if ( !byte_40FB27F )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v5);
    byte_40FB27F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9186,
    EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField,
    0LL);
  if ( !byte_40FB280 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v6);
    byte_40FB280 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6295,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  if ( !byte_40FB281 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v7);
    byte_40FB281 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8498,
    EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveCompleteMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD100 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4184, v1);
    byte_40FD100 = 1;
  }
  if ( !byte_40FA2C8 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FA2C8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_4184,
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
  if ( (byte_40FD0FA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8454, method);
    sub_B16FFC(&StringLiteral_10738, v2);
    byte_40FD0FA = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_8454, v3, 0LL);
  if ( !byte_40FD208 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
    byte_40FD208 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_43743732((System_String_o *)StringLiteral_10738, v6, 0LL);
  if ( !byte_40F6252 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v7);
    byte_40F6252 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveDailyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD102 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5050, v1);
    byte_40FD102 = 1;
  }
  if ( !byte_40FB27E )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB27E = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_5050,
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
  if ( (byte_40FD10D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6181, method);
    byte_40FD10D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_43743732((System_String_o *)StringLiteral_6181, v2, 0LL);
  if ( !byte_40F72FC )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v3);
    byte_40F72FC = 1;
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
  __int64 v11; // x2
  System_Object_array *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x23
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x19
  __int64 v40; // x1
  System_String_o *v41; // x19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t v44; // w22
  __int64 v45; // x1
  int v46; // w10
  int32_t v47; // [xsp+0h] [xbp-40h] BYREF
  int32_t v48; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD10F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&slot);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6195, v10);
    byte_40FD10F = 1;
  }
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, svtId, method);
  v12 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v11);
  v50 = eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !v12 )
    sub_B170D4();
  v21 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = sub_B170BC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( !v12->max_length )
    goto LABEL_23;
  v12->m_Items[0] = (Il2CppObject *)v21;
  sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v21, v15, v16, v17, v18, v19, v20);
  v49 = slot;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v27 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = sub_B170BC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_23;
  v12->m_Items[1] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v12->m_Items[1], v27, v15, v22, v23, v24, v25, v26);
  v48 = idx;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v33 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = sub_B170BC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_23;
  v12->m_Items[2] = (Il2CppObject *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v12->m_Items[2], v33, v15, v28, v29, v30, v31, v32);
  v47 = svtId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v39 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = sub_B170BC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_24:
      sub_B170F4(v13);
      sub_B170A0();
    }
  }
  if ( v12->max_length <= 3 )
  {
LABEL_23:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  v12->m_Items[3] = (Il2CppObject *)v39;
  sub_B16F98((BattleServantConfConponent_o *)&v12->m_Items[3], v39, v15, v34, v35, v36, v37, v38);
  v41 = System_String__Format_43822456((System_String_o *)StringLiteral_6195, v12, 0LL);
  if ( !byte_40FA2CA )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v40);
    byte_40FA2CA = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  v44 = static_fields->_EventVoicePlayCount_k__BackingField + 1;
  if ( byte_40FD20B )
  {
    static_fields->_EventVoicePlayCount_k__BackingField = v44;
  }
  else
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v40);
    byte_40FD20B = 1;
    p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    v46 = (unsigned __int8)byte_40FA2CA;
    EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = v44;
    if ( !v46 )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v45);
      byte_40FA2CA = 1;
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
    }
  }
  UnityEngine_PlayerPrefs__SetInt(v41, (*p_static_fields)->_EventVoicePlayCount_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveExtraMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD106 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6295, v1);
    byte_40FD106 = 1;
  }
  if ( !byte_40FB280 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB280 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_6295,
    EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveItemFilter(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *ItemFilterKeyName; // x19

  ItemFilterKeyName = EventRewardSaveData__GetItemFilterKeyName(eventId, slot, method);
  if ( !byte_40FD20F )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v3);
    byte_40FD20F = 1;
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

  if ( (byte_40FD108 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8498, v1);
    byte_40FD108 = 1;
  }
  if ( !byte_40FB281 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB281 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8498,
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
  if ( (byte_40FD0FC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6157, method);
    sub_B16FFC(&StringLiteral_9120, v2);
    byte_40FD0FC = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v9, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_9120, v3, 0LL);
  if ( !byte_40F8919 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v4);
    byte_40F8919 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v5, EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v8 = System_String__Concat_43743732((System_String_o *)StringLiteral_6157, v6, 0LL);
  if ( !byte_40F8918 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v7);
    byte_40F8918 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v8, EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveMstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD10B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9187, v1);
    byte_40FD10B = 1;
  }
  if ( !byte_40FB27C )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB27C = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9187,
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
  if ( (byte_40FD0FE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11472, method);
    byte_40FD0FE = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v4 = System_String__Concat_43743732((System_String_o *)StringLiteral_11472, v2, 0LL);
  if ( !byte_40FD20A )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v3);
    byte_40FD20A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(v4, EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventRewardSaveData__SaveWeeklyMissionData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD104 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9186, v1);
    byte_40FD104 = 1;
  }
  if ( !byte_40FB27F )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FB27F = 1;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_9186,
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
  if ( (byte_40FD11D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2881, *(_QWORD *)&messageId);
    byte_40FD11D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_2881, v4, 0LL);
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
  if ( (byte_40FD11B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2881, *(_QWORD *)&id);
    byte_40FD11B = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_43746016((System_String_o *)StringLiteral_2881, v5, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, isShow, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetCooltimeNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_40FD115 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B16FFC(&StringLiteral_4283, method);
    byte_40FD115 = 1;
  }
  if ( ((EventRewardSaveData__GetCooltimeNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4283, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetExpeditionNotification(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_40FD111 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B16FFC(&StringLiteral_6262, method);
    byte_40FD111 = 1;
  }
  if ( ((EventRewardSaveData__GetExpeditionNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6262, v2, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetFatigueNotiffication(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_40FD113 & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B16FFC(&StringLiteral_6564, method);
    byte_40FD113 = 1;
  }
  if ( ((EventRewardSaveData__GetFatigueNotification((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6564, v2, 0LL);
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
  if ( (byte_40FD122 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7116, saveData);
    byte_40FD122 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_7116, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString(v5, saveData, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardSaveData__SetLotteryShopSkipState(bool setValue, const MethodInfo *method)
{
  _BOOL4 v2; // w19

  v2 = setValue;
  if ( (byte_40FD11F & 1) == 0 )
  {
    *(_QWORD *)&setValue = sub_B16FFC(&StringLiteral_8566, method);
    byte_40FD11F = 1;
  }
  if ( ((EventRewardSaveData__GetLotteryShopSkipState((const MethodInfo *)setValue) ^ v2) & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_8566, v2, 0LL);
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
  if ( (byte_40FD118 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11290, *(_QWORD *)&idx);
    byte_40FD118 = 1;
  }
  v5 = (System_String_o *)StringLiteral_11290;
  if ( eventId )
  {
    v6 = System_Int32__ToString((int32_t)&v8, 0LL);
    v5 = System_String__Concat_43743732(v5, v6, 0LL);
  }
  if ( !byte_40FD20C )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_40FD20C = 1;
  }
  p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = idx;
  if ( !byte_40FD20D )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&idx);
    byte_40FD20D = 1;
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

  if ( (byte_40FD0E0 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0E0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DailyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0E2 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0E2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_DefIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0DE & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0DE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0EA & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0EA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventRecoveryIdx(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0F2 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0F2 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventTowerState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0EE & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0EE = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_EventVoicePlayCount(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0F0 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0F0 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ExtraMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0E6 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0E6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_FilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0DC & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0DC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
}


System_String_o *__fastcall EventRewardSaveData__get_HeelPortraitDetailDialogState(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0F6 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0F6 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_HeelPortraitDetailDialogState_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_ItemFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0F4 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0F4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_LimitedMissionFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0E8 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0E8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MissionId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0DA & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0DA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_MstMissionIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0EC & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0EC = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_PriorityIndex(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0D8 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0D8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField;
}


int32_t __fastcall EventRewardSaveData__get_WeeklyFilterId(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0E4 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v1);
    byte_40FD0E4 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
}


void __fastcall EventRewardSaveData__set_CompleteMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0E1 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0E1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DailyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0E3 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0E3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_DefIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0DF & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0DF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_DefIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0EB & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0EB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventRecoveryIdx(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0F3 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0F3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventTowerState(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0EF & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0EF = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_EventVoicePlayCount(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0F1 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0F1 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_ExtraMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0E7 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0E7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_FilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0DD & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0DD = 1;
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

  if ( (byte_40FD0F7 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0F7 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_HeelPortraitDetailDialogState_k__BackingField = value;
  sub_B16F98(
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
  if ( (byte_40FD0F5 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0F5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_ItemFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_LimitedMissionFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0E9 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0E9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MissionId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0DB & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0DB = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_MstMissionIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0ED & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0ED = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_PriorityIndex(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0D9 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0D9 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = value;
}


void __fastcall EventRewardSaveData__set_WeeklyFilterId(int32_t value, const MethodInfo *method)
{
  if ( (byte_40FD0E5 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40FD0E5 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = value;
}