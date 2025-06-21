void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4B19A9F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B19A9F = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCB254(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B19AA0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B19AA0 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1BCB254(0LL, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(0LL);
  EventRewardVoicePlayCountView__SetUp(this, v4);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  unsigned int v14; // w23
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x22
  int v18; // w29
  __int64 v19; // x28
  __int128 *v20; // x21
  __int64 v21; // x26
  int32_t v22; // w23
  int32_t v23; // w24
  int32_t v24; // w25
  __int64 v25; // x27
  int32_t v26; // w0
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v29; // x23
  System_Object_array *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x25
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x25
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x25
  System_String_o *mText; // x24
  System_Object_array *v57; // x25
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x26
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x26
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x26
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x26
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x26
  System_String_o *v83; // x0
  __int64 v84; // x0
  __int64 v85; // [xsp+0h] [xbp-A0h]
  __int64 v86; // [xsp+8h] [xbp-98h]
  unsigned int v87; // [xsp+14h] [xbp-8Ch]
  int v88; // [xsp+18h] [xbp-88h]
  int32_t v89; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v90; // [xsp+20h] [xbp-80h] BYREF
  int v91; // [xsp+34h] [xbp-6Ch] BYREF
  int v92; // [xsp+38h] [xbp-68h] BYREF
  int v93; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4B19A9E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_1BCAFF8(&int_TypeInfo, v4);
    sub_1BCAFF8(&object___TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v8);
    sub_1BCAFF8(&StringLiteral_18978/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_4B19A9E = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v13 = gameObject;
    v86 = *(_QWORD *)(gameObject + 24);
    if ( v86 )
    {
      if ( (int)v86 >= 1 )
      {
        if ( !(_DWORD)v86 )
          goto LABEL_67;
        v14 = 0;
        v85 = gameObject;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v15 )
            goto LABEL_69;
          v87 = v14;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v15 + 16),
                                  0LL);
          if ( gameObject )
          {
            v16 = *(_QWORD *)(gameObject + 24);
            v17 = gameObject;
            if ( v16 )
            {
              v88 = v16 - 1;
              if ( (int)v16 >= 1 )
                break;
            }
          }
LABEL_65:
          v13 = v85;
          v14 = v87 + 1;
          if ( v87 + 1 == (_DWORD)v86 )
            return;
          if ( v14 >= *(_DWORD *)(v85 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v16 )
LABEL_67:
          sub_1BCB25C(gameObject, v11, v12);
        v18 = 0;
        while ( 1 )
        {
          v19 = *(_QWORD *)(v17 + 8LL * v18 + 32);
          if ( !v19 )
            break;
          v20 = (__int128 *)(v19 + 28);
          v21 = *(_QWORD *)(v19 + 28);
          v22 = *(_DWORD *)(v19 + 16);
          v23 = *(_DWORD *)(v19 + 20);
          v24 = *(_DWORD *)(v19 + 24);
          v25 = *(_QWORD *)(v19 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v94.fields.currentCryptoKey = v21;
          *(_QWORD *)&v94.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v94, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v22, v23, v24, v26, 0LL);
          if ( !byte_4B16AFB )
          {
            gameObject = sub_1BCAFF8(&EventRewardSaveData_TypeInfo, v11);
            byte_4B16AFB = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v29 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v30 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 5LL);
            v93 = *(_DWORD *)(v19 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v93, v31, v32, v33);
            if ( !v30 )
              break;
            v35 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v30->max_length )
              goto LABEL_67;
            v30->m_Items[0] = v35;
            sub_1BCAF9C((CGThumbnailListItem_o *)v30->m_Items, (int32_t)v35, v12, v34);
            v92 = *(_DWORD *)(v19 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v92, v36, v37, v38);
            v40 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 1 )
              goto LABEL_67;
            v30->m_Items[1] = v40;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)v40, v12, v39);
            v91 = *(_DWORD *)(v19 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v91, v41, v42, v43);
            v45 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 2 )
              goto LABEL_67;
            v30->m_Items[2] = v45;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v30->m_Items[2], (int32_t)v45, v12, v44);
            v90 = *v20;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v90,
                           v46,
                           v47,
                           v48);
            v50 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 3 )
              goto LABEL_67;
            v30->m_Items[3] = v50;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v30->m_Items[3], (int32_t)v50, v12, v49);
            v89 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v89, v51, v52, v53);
            v55 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 4 )
              goto LABEL_67;
            v30->m_Items[4] = v55;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v30->m_Items[4], (int32_t)v55, v12, v54);
            gameObject = (__int64)System_String__Format_62491852((System_String_o *)StringLiteral_18978/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v30, 0LL);
            if ( !v29 )
              break;
          }
          else
          {
            if ( !v29 )
              break;
            mText = v29->fields.mText;
            v57 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 5LL);
            v93 = *(_DWORD *)(v19 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v93, v58, v59, v60);
            if ( !v57 )
              break;
            v62 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v57->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v57->max_length )
              goto LABEL_67;
            v57->m_Items[0] = v62;
            sub_1BCAF9C((CGThumbnailListItem_o *)v57->m_Items, (int32_t)v62, v12, v61);
            v92 = *(_DWORD *)(v19 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v92, v63, v64, v65);
            v67 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v57->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v57->max_length <= 1 )
              goto LABEL_67;
            v57->m_Items[1] = v67;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v57->m_Items[1], (int32_t)v67, v12, v66);
            v91 = *(_DWORD *)(v19 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v91, v68, v69, v70);
            v72 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v57->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v57->max_length <= 2 )
              goto LABEL_67;
            v57->m_Items[2] = v72;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v57->m_Items[2], (int32_t)v72, v12, v71);
            v90 = *v20;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v90,
                           v73,
                           v74,
                           v75);
            v77 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v57->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v57->max_length <= 3 )
              goto LABEL_67;
            v57->m_Items[3] = v77;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v57->m_Items[3], (int32_t)v77, v12, v76);
            v89 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v89, v78, v79, v80);
            v82 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCB134(gameObject, v57->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v84 = sub_1BCB278();
                sub_1BCB120(v84, 0LL);
              }
            }
            if ( v57->max_length <= 4 )
              goto LABEL_67;
            v57->m_Items[4] = v82;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v57->m_Items[4], (int32_t)v82, v12, v81);
            v83 = System_String__Format_62491852((System_String_o *)StringLiteral_18978/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v57, 0LL);
            gameObject = (__int64)System_String__Concat_62488672(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v83, 0LL);
          }
          UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
          if ( v88 == v18 )
            goto LABEL_65;
          if ( (unsigned int)++v18 >= *(_DWORD *)(v17 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1BCB254(gameObject, v11);
      }
    }
  }
}