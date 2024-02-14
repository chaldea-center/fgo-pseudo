void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4217943 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217943 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(countLabel);
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

  if ( (byte_4217944 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217944 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_B0D97C(0LL);
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
  __int64 gameObject; // x0
  __int64 v11; // x22
  unsigned int v12; // w23
  __int64 v13; // x20
  __int64 v14; // x22
  unsigned int v15; // w28
  __int64 v16; // x20
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t v19; // w23
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v22; // w0
  const MethodInfo *v23; // x4
  __int64 v24; // x1
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v27; // x23
  System_Object_array *v28; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x25
  __int64 v50; // x9
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x25
  System_String_o *mText; // x24
  System_Object_array *v66; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x26
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x26
  __int64 v88; // x9
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x26
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x26
  System_String_o *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // [xsp+8h] [xbp-98h]
  __int64 v107; // [xsp+10h] [xbp-90h]
  unsigned int v108; // [xsp+1Ch] [xbp-84h]
  __int64 v109; // [xsp+20h] [xbp-80h]
  int32_t v110; // [xsp+2Ch] [xbp-74h] BYREF
  __int64 v111; // [xsp+30h] [xbp-70h] BYREF
  __int64 v112; // [xsp+38h] [xbp-68h]
  int v113; // [xsp+44h] [xbp-5Ch] BYREF
  int v114; // [xsp+48h] [xbp-58h] BYREF
  int v115; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4217942 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v8);
    sub_B0D8A4(&StringLiteral_18530/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_4217942 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_70;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v11 = gameObject;
    v107 = *(_QWORD *)(gameObject + 24);
    if ( v107 )
    {
      if ( (int)v107 >= 1 )
      {
        if ( !(_DWORD)v107 )
          goto LABEL_68;
        v12 = 0;
        v106 = gameObject;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v13 )
            goto LABEL_70;
          v108 = v12;
          if ( !gameObject )
            goto LABEL_70;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v13 + 16),
                                  0LL);
          if ( gameObject )
          {
            v14 = gameObject;
            v109 = *(_QWORD *)(gameObject + 24);
            if ( v109 )
            {
              if ( (int)v109 >= 1 )
                break;
            }
          }
LABEL_66:
          v11 = v106;
          v12 = v108 + 1;
          if ( (int)(v108 + 1) >= (int)v107 )
            return;
          if ( v12 >= *(_DWORD *)(v106 + 24) )
            goto LABEL_68;
        }
        if ( !(_DWORD)v109 )
        {
LABEL_68:
          v104 = sub_B0D9A8(gameObject);
          sub_B0D948(v104, 0LL);
        }
        v15 = 0;
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 8LL * (int)v15 + 32);
          if ( !v16 )
            break;
          v18 = *(_DWORD *)(v16 + 16);
          v17 = *(_DWORD *)(v16 + 20);
          v19 = *(_DWORD *)(v16 + 24);
          v20 = *(_QWORD *)(v16 + 28);
          v21 = *(_QWORD *)(v16 + 36);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v116.fields.currentCryptoKey = v20;
          *(_QWORD *)&v116.fields.fakeValue = v21;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v116, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v18, v17, v19, v22, v23);
          if ( !byte_4214F5D )
          {
            gameObject = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v24);
            byte_4214F5D = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v27 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v28 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
            v115 = *(_DWORD *)(v16 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v115);
            if ( !v28 )
              break;
            v35 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v28->max_length )
              goto LABEL_68;
            v28->m_Items[0] = (Il2CppObject *)v35;
            sub_B0D840((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
            v114 = *(_DWORD *)(v16 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v114);
            v42 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v28->max_length <= 1 )
              goto LABEL_68;
            v28->m_Items[1] = (Il2CppObject *)v42;
            sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
            v113 = *(_DWORD *)(v16 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v113);
            v49 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v28->max_length <= 2 )
              goto LABEL_68;
            v28->m_Items[2] = (Il2CppObject *)v49;
            sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
            v50 = *(_QWORD *)(v16 + 36);
            v111 = *(_QWORD *)(v16 + 28);
            v112 = v50;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v111);
            v57 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v28->max_length <= 3 )
              goto LABEL_68;
            v28->m_Items[3] = (Il2CppObject *)v57;
            sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
            v110 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v110);
            v64 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v28->max_length <= 4 )
              goto LABEL_68;
            v28->m_Items[4] = (Il2CppObject *)v64;
            sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
            gameObject = (__int64)System_String__Format_43928628((System_String_o *)StringLiteral_18530/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v28, 0LL);
            if ( !v27 )
              break;
          }
          else
          {
            if ( !v27 )
              break;
            mText = v27->fields.mText;
            v66 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
            v115 = *(_DWORD *)(v16 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v115);
            if ( !v66 )
              break;
            v73 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v66->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( !v66->max_length )
              goto LABEL_68;
            v66->m_Items[0] = (Il2CppObject *)v73;
            sub_B0D840((BattleServantConfConponent_o *)v66->m_Items, v73, v67, v68, v69, v70, v71, v72);
            v114 = *(_DWORD *)(v16 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v114);
            v80 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v66->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v66->max_length <= 1 )
              goto LABEL_68;
            v66->m_Items[1] = (Il2CppObject *)v80;
            sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[1], v80, v74, v75, v76, v77, v78, v79);
            v113 = *(_DWORD *)(v16 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v113);
            v87 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v66->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v66->max_length <= 2 )
              goto LABEL_68;
            v66->m_Items[2] = (Il2CppObject *)v87;
            sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[2], v87, v81, v82, v83, v84, v85, v86);
            v88 = *(_QWORD *)(v16 + 36);
            v111 = *(_QWORD *)(v16 + 28);
            v112 = v88;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v111);
            v95 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v66->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_71;
            }
            if ( v66->max_length <= 3 )
              goto LABEL_68;
            v66->m_Items[3] = (Il2CppObject *)v95;
            sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[3], v95, v89, v90, v91, v92, v93, v94);
            v110 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v110);
            v102 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v66->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_71:
                v105 = sub_B0D99C(gameObject);
                sub_B0D948(v105, 0LL);
              }
            }
            if ( v66->max_length <= 4 )
              goto LABEL_68;
            v66->m_Items[4] = (Il2CppObject *)v102;
            sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[4], v102, v96, v97, v98, v99, v100, v101);
            v103 = System_String__Format_43928628((System_String_o *)StringLiteral_18530/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v66, 0LL);
            gameObject = (__int64)System_String__Concat_43852188(mText, (System_String_o *)StringLiteral_26/*"\n"*/, v103, 0LL);
          }
          UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
          if ( (int)++v15 >= (int)v109 )
            goto LABEL_66;
          if ( v15 >= *(_DWORD *)(v14 + 24) )
            goto LABEL_68;
        }
LABEL_70:
        sub_B0D97C(gameObject);
      }
    }
  }
}