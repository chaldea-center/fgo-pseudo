void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_438EC61 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EC61 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438EC62 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EC62 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_B7769C(0LL, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(v4);
  EventRewardVoicePlayCountView__SetUp(this, v5);
}


void __fastcall EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x22
  unsigned int v6; // w23
  __int64 v7; // x20
  __int64 v8; // x22
  unsigned int v9; // w28
  __int64 v10; // x20
  int32_t v11; // w24
  int32_t v12; // w25
  int32_t v13; // w23
  __int64 v14; // x26
  __int64 v15; // x27
  int32_t v16; // w0
  const MethodInfo *v17; // x4
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v20; // x23
  System_Object_array *v21; // x24
  __int64 v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x25
  __int64 v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x25
  __int64 v38; // x2
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x25
  __int64 v46; // x9
  __int64 v47; // x2
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x25
  __int64 v55; // x2
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x25
  System_String_o *mText; // x24
  System_Object_array *v64; // x25
  __int64 v65; // x2
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x26
  __int64 v73; // x2
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x26
  __int64 v81; // x2
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  __int64 v89; // x9
  __int64 v90; // x2
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x26
  __int64 v98; // x2
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x26
  System_String_o *v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // [xsp+8h] [xbp-98h]
  __int64 v110; // [xsp+10h] [xbp-90h]
  unsigned int v111; // [xsp+1Ch] [xbp-84h]
  __int64 v112; // [xsp+20h] [xbp-80h]
  int32_t v113; // [xsp+2Ch] [xbp-74h] BYREF
  __int64 v114; // [xsp+30h] [xbp-70h] BYREF
  __int64 v115; // [xsp+38h] [xbp-68h]
  int v116; // [xsp+44h] [xbp-5Ch] BYREF
  int v117; // [xsp+48h] [xbp-58h] BYREF
  int v118; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_438EC60 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_18840/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_438EC60 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v5 = gameObject;
    v110 = *(_QWORD *)(gameObject + 24);
    if ( v110 )
    {
      if ( (int)v110 >= 1 )
      {
        if ( !(_DWORD)v110 )
          goto LABEL_68;
        v6 = 0;
        v109 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_70;
          v111 = v6;
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v7 + 16),
                                  0LL);
          if ( gameObject )
          {
            v8 = gameObject;
            v112 = *(_QWORD *)(gameObject + 24);
            if ( v112 )
            {
              if ( (int)v112 >= 1 )
                break;
            }
          }
LABEL_66:
          v5 = v109;
          v6 = v111 + 1;
          if ( (int)(v111 + 1) >= (int)v110 )
            return;
          if ( v6 >= *(_DWORD *)(v109 + 24) )
            goto LABEL_68;
        }
        if ( !(_DWORD)v112 )
        {
LABEL_68:
          v107 = sub_B776C8(gameObject);
          sub_B77668(v107, 0LL);
        }
        v9 = 0;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
          if ( !v10 )
            break;
          v12 = *(_DWORD *)(v10 + 16);
          v11 = *(_DWORD *)(v10 + 20);
          v13 = *(_DWORD *)(v10 + 24);
          v14 = *(_QWORD *)(v10 + 28);
          v15 = *(_QWORD *)(v10 + 36);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v119.fields.currentCryptoKey = v14;
          *(_QWORD *)&v119.fields.fakeValue = v15;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v119, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v12, v11, v13, v16, v17);
          if ( !byte_438AD8B )
          {
            gameObject = sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_438AD8B = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v20 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v21 = (System_Object_array *)sub_B775DC(object___TypeInfo, 5LL);
            v118 = *(_DWORD *)(v10 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v118, v22);
            if ( !v21 )
              break;
            v29 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v21->max_length )
              goto LABEL_68;
            v21->m_Items[0] = (Il2CppObject *)v29;
            sub_B77560((BattleServantConfConponent_o *)v21->m_Items, v29, v23, v24, v25, v26, v27, v28);
            v117 = *(_DWORD *)(v10 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v117, v30);
            v37 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v21->max_length <= 1 )
              goto LABEL_68;
            v21->m_Items[1] = (Il2CppObject *)v37;
            sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
            v116 = *(_DWORD *)(v10 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v116, v38);
            v45 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v21->max_length <= 2 )
              goto LABEL_68;
            v21->m_Items[2] = (Il2CppObject *)v45;
            sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
            v46 = *(_QWORD *)(v10 + 36);
            v114 = *(_QWORD *)(v10 + 28);
            v115 = v46;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v114, v47);
            v54 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v21->max_length <= 3 )
              goto LABEL_68;
            v21->m_Items[3] = (Il2CppObject *)v54;
            sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
            v113 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v113, v55);
            v62 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v21->max_length <= 4 )
              goto LABEL_68;
            v21->m_Items[4] = (Il2CppObject *)v62;
            sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[4], v62, v56, v57, v58, v59, v60, v61);
            gameObject = (__int64)System_String__Format_44980660((System_String_o *)StringLiteral_18840/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v21, 0LL);
            if ( !v20 )
              break;
          }
          else
          {
            if ( !v20 )
              break;
            mText = v20->fields.mText;
            v64 = (System_Object_array *)sub_B775DC(object___TypeInfo, 5LL);
            v118 = *(_DWORD *)(v10 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v118, v65);
            if ( !v64 )
              break;
            v72 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v64->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v64->max_length )
              goto LABEL_68;
            v64->m_Items[0] = (Il2CppObject *)v72;
            sub_B77560((BattleServantConfConponent_o *)v64->m_Items, v72, v66, v67, v68, v69, v70, v71);
            v117 = *(_DWORD *)(v10 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v117, v73);
            v80 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v64->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v64->max_length <= 1 )
              goto LABEL_68;
            v64->m_Items[1] = (Il2CppObject *)v80;
            sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[1], v80, v74, v75, v76, v77, v78, v79);
            v116 = *(_DWORD *)(v10 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v116, v81);
            v88 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v64->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v64->max_length <= 2 )
              goto LABEL_68;
            v64->m_Items[2] = (Il2CppObject *)v88;
            sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[2], v88, v82, v83, v84, v85, v86, v87);
            v89 = *(_QWORD *)(v10 + 36);
            v114 = *(_QWORD *)(v10 + 28);
            v115 = v89;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v114, v90);
            v97 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v64->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v64->max_length <= 3 )
              goto LABEL_68;
            v64->m_Items[3] = (Il2CppObject *)v97;
            sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[3], v97, v91, v92, v93, v94, v95, v96);
            v113 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v113, v98);
            v105 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B77684(gameObject, v64->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_71:
                v108 = sub_B776BC(gameObject);
                sub_B77668(v108, 0LL);
              }
            }
            if ( v64->max_length <= 4 )
              goto LABEL_68;
            v64->m_Items[4] = (Il2CppObject *)v105;
            sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[4], v105, v99, v100, v101, v102, v103, v104);
            v106 = System_String__Format_44980660((System_String_o *)StringLiteral_18840/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v64, 0LL);
            gameObject = (__int64)System_String__Concat_44904220(mText, (System_String_o *)StringLiteral_26/*"\n"*/, v106, 0LL);
          }
          UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
          if ( (int)++v9 >= (int)v112 )
            goto LABEL_66;
          if ( v9 >= *(_DWORD *)(v8 + 24) )
            goto LABEL_68;
        }
LABEL_70:
        sub_B7769C(gameObject, v4);
      }
    }
  }
}