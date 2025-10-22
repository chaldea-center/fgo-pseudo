void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4C5427F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5427F = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C54280 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54280 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C3E7C0(0, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  EventRewardSaveData__DeletePlayCount(0);
  EventRewardVoicePlayCountView__SetUp(this, v4);
}


void EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x22
  unsigned int v6; // w23
  __int64 v7; // x21
  __int64 v8; // x8
  __int64 v9; // x22
  int v10; // w29
  __int64 v11; // x28
  __int128 *v12; // x21
  __int64 v13; // x26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w25
  __int64 v17; // x27
  int32_t v18; // w0
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v21; // x23
  System_Object_array *v22; // x24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x25
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x25
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x25
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x25
  System_String_o *mText; // x24
  System_Object_array *v69; // x25
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  __int64 v74; // x6
  __int64 v75; // x7
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x26
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x5
  __int64 v83; // x6
  __int64 v84; // x7
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x26
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  __int64 v91; // x5
  __int64 v92; // x6
  __int64 v93; // x7
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x26
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x5
  __int64 v101; // x6
  __int64 v102; // x7
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  Il2CppObject *v105; // x26
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  __int64 v109; // x5
  __int64 v110; // x6
  __int64 v111; // x7
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  Il2CppObject *v114; // x26
  System_String_o *v115; // x0
  __int64 v116; // x0
  __int64 v117; // [xsp+0h] [xbp-A0h]
  __int64 v118; // [xsp+8h] [xbp-98h]
  unsigned int v119; // [xsp+14h] [xbp-8Ch]
  int v120; // [xsp+18h] [xbp-88h]
  int32_t v121; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v122; // [xsp+20h] [xbp-80h] BYREF
  int v123; // [xsp+34h] [xbp-6Ch] BYREF
  int v124; // [xsp+38h] [xbp-68h] BYREF
  int v125; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  if ( (byte_4C5427E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_19165/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4C5427E = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v5 = gameObject;
    v118 = *(_QWORD *)(gameObject + 24);
    if ( v118 )
    {
      if ( (int)v118 >= 1 )
      {
        if ( !(_DWORD)v118 )
          goto LABEL_67;
        v6 = 0;
        v117 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_69;
          v119 = v6;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v7 + 16),
                                  0);
          if ( gameObject )
          {
            v8 = *(_QWORD *)(gameObject + 24);
            v9 = gameObject;
            if ( v8 )
            {
              v120 = v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_65:
          v5 = v117;
          v6 = v119 + 1;
          if ( v119 + 1 == (_DWORD)v118 )
            return;
          if ( v6 >= *(_DWORD *)(v117 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v8 )
LABEL_67:
          sub_1C3E7C8(gameObject, v4);
        v10 = 0;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 8LL * v10 + 32);
          if ( !v11 )
            break;
          v12 = (__int128 *)(v11 + 28);
          v13 = *(_QWORD *)(v11 + 28);
          v14 = *(_DWORD *)(v11 + 16);
          v15 = *(_DWORD *)(v11 + 20);
          v16 = *(_DWORD *)(v11 + 24);
          v17 = *(_QWORD *)(v11 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v126.fields.currentCryptoKey = v13;
          *(_QWORD *)&v126.fields.fakeValue = v17;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v126, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v14, v15, v16, v18, 0);
          if ( !byte_4C51232 )
          {
            gameObject = sub_1C3E564(&EventRewardSaveData_TypeInfo);
            byte_4C51232 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v21 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v22 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 5);
            v125 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v125, v23, v24, v25, v26, v27, v28);
            if ( !v22 )
              break;
            v31 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v22->max_length) )
              goto LABEL_67;
            v22->m_Items[0] = v31;
            sub_1C3E508((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v31, v29, v30);
            v124 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v124, v32, v33, v34, v35, v36, v37);
            v40 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 1 )
              goto LABEL_67;
            v22->m_Items[1] = v40;
            sub_1C3E508((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v40, v38, v39);
            v123 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v123, v41, v42, v43, v44, v45, v46);
            v49 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 2 )
              goto LABEL_67;
            v22->m_Items[2] = v49;
            sub_1C3E508((CGThumbnailListItem_o *)&v22->m_Items[2], (int32_t)v49, v47, v48);
            v122 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v122,
                           v50,
                           v51,
                           v52,
                           v53,
                           v54,
                           v55);
            v58 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 3 )
              goto LABEL_67;
            v22->m_Items[3] = v58;
            sub_1C3E508((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v58, v56, v57);
            v121 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v121, v59, v60, v61, v62, v63, v64);
            v67 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 4 )
              goto LABEL_67;
            v22->m_Items[4] = v67;
            sub_1C3E508((CGThumbnailListItem_o *)&v22->m_Items[4], (int32_t)v67, v65, v66);
            gameObject = (__int64)System_String__Format_63677896((System_String_o *)StringLiteral_19165/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v22, 0);
            if ( !v21 )
              break;
          }
          else
          {
            if ( !v21 )
              break;
            mText = v21->fields.mText;
            v69 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 5);
            v125 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v125, v70, v71, v72, v73, v74, v75);
            if ( !v69 )
              break;
            v78 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v69->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v69->max_length) )
              goto LABEL_67;
            v69->m_Items[0] = v78;
            sub_1C3E508((CGThumbnailListItem_o *)v69->m_Items, (int32_t)v78, v76, v77);
            v124 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v124, v79, v80, v81, v82, v83, v84);
            v87 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v69->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v69->max_length) <= 1 )
              goto LABEL_67;
            v69->m_Items[1] = v87;
            sub_1C3E508((CGThumbnailListItem_o *)&v69->m_Items[1], (int32_t)v87, v85, v86);
            v123 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v123, v88, v89, v90, v91, v92, v93);
            v96 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v69->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v69->max_length) <= 2 )
              goto LABEL_67;
            v69->m_Items[2] = v96;
            sub_1C3E508((CGThumbnailListItem_o *)&v69->m_Items[2], (int32_t)v96, v94, v95);
            v122 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v122,
                           v97,
                           v98,
                           v99,
                           v100,
                           v101,
                           v102);
            v105 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v69->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v69->max_length) <= 3 )
              goto LABEL_67;
            v69->m_Items[3] = v105;
            sub_1C3E508((CGThumbnailListItem_o *)&v69->m_Items[3], (int32_t)v105, v103, v104);
            v121 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v121, v106, v107, v108, v109, v110, v111);
            v114 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C3E6A0(gameObject, v69->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v116 = sub_1C3E7E4();
                sub_1C3E68C(v116, 0);
              }
            }
            if ( LODWORD(v69->max_length) <= 4 )
              goto LABEL_67;
            v69->m_Items[4] = v114;
            sub_1C3E508((CGThumbnailListItem_o *)&v69->m_Items[4], (int32_t)v114, v112, v113);
            v115 = System_String__Format_63677896((System_String_o *)StringLiteral_19165/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v69, 0);
            gameObject = (__int64)System_String__Concat_63674716(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v115, 0);
          }
          UILabel__set_text(v21, (System_String_o *)gameObject, 0);
          if ( v120 == v10 )
            goto LABEL_65;
          if ( (unsigned int)++v10 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C3E7C0(gameObject, v4);
      }
    }
  }
}