void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *countLabel; // x0

  if ( (byte_42EC00E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC00E = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *countLabel; // x0
  const MethodInfo *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EC00F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC00F = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_B5D69C(0LL, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(v6);
  EventRewardVoicePlayCountView__SetUp(this, v7);
}


void __fastcall EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 gameObject; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  unsigned int v29; // w23
  __int64 v30; // x20
  __int64 v31; // x22
  unsigned int v32; // w28
  __int64 v33; // x20
  int32_t v34; // w24
  int32_t v35; // w25
  int32_t v36; // w23
  __int64 v37; // x26
  __int64 v38; // x27
  int32_t v39; // w0
  const MethodInfo *v40; // x4
  int v41; // w2
  __int64 v42; // x3
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v45; // x23
  System_Object_array *v46; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x25
  __int64 v68; // x9
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x25
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x25
  System_String_o *mText; // x24
  System_Object_array *v84; // x25
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x26
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x26
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x26
  __int64 v106; // x9
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x26
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x26
  System_String_o *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // [xsp+8h] [xbp-98h]
  __int64 v125; // [xsp+10h] [xbp-90h]
  unsigned int v126; // [xsp+1Ch] [xbp-84h]
  __int64 v127; // [xsp+20h] [xbp-80h]
  int32_t v128; // [xsp+2Ch] [xbp-74h] BYREF
  __int64 v129; // [xsp+30h] [xbp-70h] BYREF
  __int64 v130; // [xsp+38h] [xbp-68h]
  int v131; // [xsp+44h] [xbp-5Ch] BYREF
  int v132; // [xsp+48h] [xbp-58h] BYREF
  int v133; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16

  if ( (byte_42EC00D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&object___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18702/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v23, v24, v25);
    byte_42EC00D = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v28 = gameObject;
    v125 = *(_QWORD *)(gameObject + 24);
    if ( v125 )
    {
      if ( (int)v125 >= 1 )
      {
        if ( !(_DWORD)v125 )
          goto LABEL_68;
        v29 = 0;
        v124 = gameObject;
        while ( 1 )
        {
          v30 = *(_QWORD *)(v28 + 8LL * (int)v29 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v30 )
            goto LABEL_70;
          v126 = v29;
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v30 + 16),
                                  0LL);
          if ( gameObject )
          {
            v31 = gameObject;
            v127 = *(_QWORD *)(gameObject + 24);
            if ( v127 )
            {
              if ( (int)v127 >= 1 )
                break;
            }
          }
LABEL_66:
          v28 = v124;
          v29 = v126 + 1;
          if ( (int)(v126 + 1) >= (int)v125 )
            return;
          if ( v29 >= *(_DWORD *)(v124 + 24) )
            goto LABEL_68;
        }
        if ( !(_DWORD)v127 )
        {
LABEL_68:
          v122 = sub_B5D6C8(gameObject);
          sub_B5D668(v122, 0LL);
        }
        v32 = 0;
        while ( 1 )
        {
          v33 = *(_QWORD *)(v31 + 8LL * (int)v32 + 32);
          if ( !v33 )
            break;
          v35 = *(_DWORD *)(v33 + 16);
          v34 = *(_DWORD *)(v33 + 20);
          v36 = *(_DWORD *)(v33 + 24);
          v37 = *(_QWORD *)(v33 + 28);
          v38 = *(_QWORD *)(v33 + 36);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v134.fields.currentCryptoKey = v37;
          *(_QWORD *)&v134.fields.fakeValue = v38;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v134, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v35, v34, v36, v39, v40);
          if ( !byte_42E8FE9 )
          {
            gameObject = sub_B5D5C4(&EventRewardSaveData_TypeInfo, v27, v41, v42);
            byte_42E8FE9 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v45 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v46 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
            v133 = *(_DWORD *)(v33 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v133);
            if ( !v46 )
              break;
            v53 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v46->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v46->max_length )
              goto LABEL_68;
            v46->m_Items[0] = (Il2CppObject *)v53;
            sub_B5D560((BattleServantConfConponent_o *)v46->m_Items, v53, v47, v48, v49, v50, v51, v52);
            v132 = *(_DWORD *)(v33 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v132);
            v60 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v46->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v46->max_length <= 1 )
              goto LABEL_68;
            v46->m_Items[1] = (Il2CppObject *)v60;
            sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[1], v60, v54, v55, v56, v57, v58, v59);
            v131 = *(_DWORD *)(v33 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v131);
            v67 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v46->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v46->max_length <= 2 )
              goto LABEL_68;
            v46->m_Items[2] = (Il2CppObject *)v67;
            sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[2], v67, v61, v62, v63, v64, v65, v66);
            v68 = *(_QWORD *)(v33 + 36);
            v129 = *(_QWORD *)(v33 + 28);
            v130 = v68;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v129);
            v75 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v46->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v46->max_length <= 3 )
              goto LABEL_68;
            v46->m_Items[3] = (Il2CppObject *)v75;
            sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[3], v75, v69, v70, v71, v72, v73, v74);
            v128 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v128);
            v82 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v46->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v46->max_length <= 4 )
              goto LABEL_68;
            v46->m_Items[4] = (Il2CppObject *)v82;
            sub_B5D560((BattleServantConfConponent_o *)&v46->m_Items[4], v82, v76, v77, v78, v79, v80, v81);
            gameObject = (__int64)System_String__Format_44656512((System_String_o *)StringLiteral_18702/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v46, 0LL);
            if ( !v45 )
              break;
          }
          else
          {
            if ( !v45 )
              break;
            mText = v45->fields.mText;
            v84 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
            v133 = *(_DWORD *)(v33 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v133);
            if ( !v84 )
              break;
            v91 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v84->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v84->max_length )
              goto LABEL_68;
            v84->m_Items[0] = (Il2CppObject *)v91;
            sub_B5D560((BattleServantConfConponent_o *)v84->m_Items, v91, v85, v86, v87, v88, v89, v90);
            v132 = *(_DWORD *)(v33 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v132);
            v98 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v84->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v84->max_length <= 1 )
              goto LABEL_68;
            v84->m_Items[1] = (Il2CppObject *)v98;
            sub_B5D560((BattleServantConfConponent_o *)&v84->m_Items[1], v98, v92, v93, v94, v95, v96, v97);
            v131 = *(_DWORD *)(v33 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v131);
            v105 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v84->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v84->max_length <= 2 )
              goto LABEL_68;
            v84->m_Items[2] = (Il2CppObject *)v105;
            sub_B5D560((BattleServantConfConponent_o *)&v84->m_Items[2], v105, v99, v100, v101, v102, v103, v104);
            v106 = *(_QWORD *)(v33 + 36);
            v129 = *(_QWORD *)(v33 + 28);
            v130 = v106;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v129);
            v113 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v84->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v84->max_length <= 3 )
              goto LABEL_68;
            v84->m_Items[3] = (Il2CppObject *)v113;
            sub_B5D560((BattleServantConfConponent_o *)&v84->m_Items[3], v113, v107, v108, v109, v110, v111, v112);
            v128 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v128);
            v120 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v84->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_71:
                v123 = sub_B5D6BC(gameObject);
                sub_B5D668(v123, 0LL);
              }
            }
            if ( v84->max_length <= 4 )
              goto LABEL_68;
            v84->m_Items[4] = (Il2CppObject *)v120;
            sub_B5D560((BattleServantConfConponent_o *)&v84->m_Items[4], v120, v114, v115, v116, v117, v118, v119);
            v121 = System_String__Format_44656512((System_String_o *)StringLiteral_18702/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v84, 0LL);
            gameObject = (__int64)System_String__Concat_44580072(mText, (System_String_o *)StringLiteral_26/*"\n"*/, v121, 0LL);
          }
          UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
          if ( (int)++v32 >= (int)v127 )
            goto LABEL_66;
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_68;
        }
LABEL_70:
        sub_B5D69C(gameObject, v27);
      }
    }
  }
}