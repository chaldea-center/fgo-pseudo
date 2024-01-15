void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD139 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD139 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40FD13A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD13A = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_B170D4();
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(v4);
  EventRewardVoicePlayCountView__SetUp(this, v5);
}


void __fastcall EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _QWORD *EnableExistEventRewardEntityList; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  _QWORD *v16; // x22
  unsigned int v17; // w23
  __int64 v18; // x20
  WebViewManager_o *v19; // x0
  EventVoicePlayMaster_o *v20; // x0
  _QWORD *v21; // x22
  unsigned int v22; // w28
  __int64 v23; // x20
  int32_t v24; // w24
  int32_t v25; // w25
  int32_t v26; // w23
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w0
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  bool IsNullOrEmpty; // w0
  __int64 v35; // x2
  struct UILabel_o *v36; // x23
  System_Object_array *v37; // x24
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x25
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x25
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x25
  __int64 v56; // x9
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x25
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x25
  System_String_o *v69; // x0
  System_String_o *mText; // x24
  System_Object_array *v71; // x25
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x26
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x26
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x26
  __int64 v90; // x9
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x26
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x26
  System_String_o *v103; // x0
  _QWORD *v104; // [xsp+8h] [xbp-98h]
  __int64 v105; // [xsp+10h] [xbp-90h]
  unsigned int v106; // [xsp+1Ch] [xbp-84h]
  __int64 v107; // [xsp+20h] [xbp-80h]
  int32_t v108; // [xsp+2Ch] [xbp-74h] BYREF
  __int64 v109; // [xsp+30h] [xbp-70h] BYREF
  __int64 v110; // [xsp+38h] [xbp-68h]
  int v111; // [xsp+44h] [xbp-5Ch] BYREF
  int v112; // [xsp+48h] [xbp-58h] BYREF
  int v113; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_40FD138 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v8);
    sub_B16FFC(&StringLiteral_18404/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_40FD138 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_70;
  EnableExistEventRewardEntityList = EventMaster__GetEnableExistEventRewardEntityList(
                                       MasterData_WarQuestSelectionMaster,
                                       0LL);
  if ( EnableExistEventRewardEntityList )
  {
    v16 = EnableExistEventRewardEntityList;
    v105 = EnableExistEventRewardEntityList[3];
    if ( v105 )
    {
      if ( (int)v105 >= 1 )
      {
        if ( !(_DWORD)v105 )
          goto LABEL_68;
        v17 = 0;
        v104 = EnableExistEventRewardEntityList;
        while ( 1 )
        {
          v18 = v16[(int)v17 + 4];
          v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v19 )
            goto LABEL_70;
          v20 = (EventVoicePlayMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v19,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v18 )
            goto LABEL_70;
          v106 = v17;
          if ( !v20 )
            goto LABEL_70;
          EnableExistEventRewardEntityList = EventVoicePlayMaster__GetTargetEventIdEntityList(
                                               v20,
                                               *(_DWORD *)(v18 + 16),
                                               0LL);
          if ( EnableExistEventRewardEntityList )
          {
            v21 = EnableExistEventRewardEntityList;
            v107 = EnableExistEventRewardEntityList[3];
            if ( v107 )
            {
              if ( (int)v107 >= 1 )
                break;
            }
          }
LABEL_66:
          v16 = v104;
          v17 = v106 + 1;
          if ( (int)(v106 + 1) >= (int)v105 )
            return;
          if ( v17 >= *((_DWORD *)v104 + 6) )
            goto LABEL_68;
        }
        if ( !(_DWORD)v107 )
        {
LABEL_68:
          sub_B17100(EnableExistEventRewardEntityList, v14, v15);
          sub_B170A0();
        }
        v22 = 0;
        while ( 1 )
        {
          v23 = v21[(int)v22 + 4];
          if ( !v23 )
            break;
          v25 = *(_DWORD *)(v23 + 16);
          v24 = *(_DWORD *)(v23 + 20);
          v26 = *(_DWORD *)(v23 + 24);
          v27 = *(_QWORD *)(v23 + 28);
          v28 = *(_QWORD *)(v23 + 36);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v114.fields.currentCryptoKey = v27;
          *(_QWORD *)&v114.fields.fakeValue = v28;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v114, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v25, v24, v26, v29, v30);
          if ( !byte_40FA2CA )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v31);
            byte_40FA2CA = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          IsNullOrEmpty = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v36 = this->fields.countLabel;
          if ( IsNullOrEmpty )
          {
            v37 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v35);
            v113 = *(_DWORD *)(v23 + 16);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
            if ( !v37 )
              break;
            v43 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v37->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( !v37->max_length )
              goto LABEL_68;
            v37->m_Items[0] = (Il2CppObject *)v43;
            sub_B16F98((BattleServantConfConponent_o *)v37->m_Items, v43, v15, v38, v39, v40, v41, v42);
            v112 = *(_DWORD *)(v23 + 20);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
            v49 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v37->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v37->max_length <= 1 )
              goto LABEL_68;
            v37->m_Items[1] = (Il2CppObject *)v49;
            sub_B16F98((BattleServantConfConponent_o *)&v37->m_Items[1], v49, v15, v44, v45, v46, v47, v48);
            v111 = *(_DWORD *)(v23 + 24);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
            v55 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v37->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v37->max_length <= 2 )
              goto LABEL_68;
            v37->m_Items[2] = (Il2CppObject *)v55;
            sub_B16F98((BattleServantConfConponent_o *)&v37->m_Items[2], v55, v15, v50, v51, v52, v53, v54);
            v56 = *(_QWORD *)(v23 + 36);
            v109 = *(_QWORD *)(v23 + 28);
            v110 = v56;
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(
                                                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                           &v109);
            v62 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v37->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v37->max_length <= 3 )
              goto LABEL_68;
            v37->m_Items[3] = (Il2CppObject *)v62;
            sub_B16F98((BattleServantConfConponent_o *)&v37->m_Items[3], v62, v15, v57, v58, v59, v60, v61);
            v108 = EventVoicePlayCount_k__BackingField;
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
            v68 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v37->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v37->max_length <= 4 )
              goto LABEL_68;
            v37->m_Items[4] = (Il2CppObject *)v68;
            sub_B16F98((BattleServantConfConponent_o *)&v37->m_Items[4], v68, v15, v63, v64, v65, v66, v67);
            v69 = System_String__Format_43822456((System_String_o *)StringLiteral_18404/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v37, 0LL);
            if ( !v36 )
              break;
          }
          else
          {
            if ( !v36 )
              break;
            mText = v36->fields.mText;
            v71 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v35);
            v113 = *(_DWORD *)(v23 + 16);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
            if ( !v71 )
              break;
            v77 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v71->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( !v71->max_length )
              goto LABEL_68;
            v71->m_Items[0] = (Il2CppObject *)v77;
            sub_B16F98((BattleServantConfConponent_o *)v71->m_Items, v77, v15, v72, v73, v74, v75, v76);
            v112 = *(_DWORD *)(v23 + 20);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
            v83 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v71->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v71->max_length <= 1 )
              goto LABEL_68;
            v71->m_Items[1] = (Il2CppObject *)v83;
            sub_B16F98((BattleServantConfConponent_o *)&v71->m_Items[1], v83, v15, v78, v79, v80, v81, v82);
            v111 = *(_DWORD *)(v23 + 24);
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
            v89 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v71->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v71->max_length <= 2 )
              goto LABEL_68;
            v71->m_Items[2] = (Il2CppObject *)v89;
            sub_B16F98((BattleServantConfConponent_o *)&v71->m_Items[2], v89, v15, v84, v85, v86, v87, v88);
            v90 = *(_QWORD *)(v23 + 36);
            v109 = *(_QWORD *)(v23 + 28);
            v110 = v90;
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(
                                                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                           &v109);
            v96 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v71->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
                goto LABEL_71;
            }
            if ( v71->max_length <= 3 )
              goto LABEL_68;
            v71->m_Items[3] = (Il2CppObject *)v96;
            sub_B16F98((BattleServantConfConponent_o *)&v71->m_Items[3], v96, v15, v91, v92, v93, v94, v95);
            v108 = EventVoicePlayCount_k__BackingField;
            EnableExistEventRewardEntityList = (_QWORD *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
            v102 = (System_Int32_array **)EnableExistEventRewardEntityList;
            if ( EnableExistEventRewardEntityList )
            {
              EnableExistEventRewardEntityList = (_QWORD *)sub_B170BC(
                                                             EnableExistEventRewardEntityList,
                                                             v71->obj.klass->_1.element_class);
              if ( !EnableExistEventRewardEntityList )
              {
LABEL_71:
                sub_B170F4(EnableExistEventRewardEntityList);
                sub_B170A0();
              }
            }
            if ( v71->max_length <= 4 )
              goto LABEL_68;
            v71->m_Items[4] = (Il2CppObject *)v102;
            sub_B16F98((BattleServantConfConponent_o *)&v71->m_Items[4], v102, v15, v97, v98, v99, v100, v101);
            v103 = System_String__Format_43822456((System_String_o *)StringLiteral_18404/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v71, 0LL);
            v69 = System_String__Concat_43746016(mText, (System_String_o *)StringLiteral_26/*"\n"*/, v103, 0LL);
          }
          UILabel__set_text(v36, v69, 0LL);
          if ( (int)++v22 >= (int)v107 )
            goto LABEL_66;
          if ( v22 >= *((_DWORD *)v21 + 6) )
            goto LABEL_68;
        }
LABEL_70:
        sub_B170D4();
      }
    }
  }
}