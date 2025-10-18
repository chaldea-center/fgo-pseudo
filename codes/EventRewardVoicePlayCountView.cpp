void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4C404E2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C404E2 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C372B4(countLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C404E3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C404E3 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C372B4(0);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  EventRewardSaveData__DeletePlayCount(0);
  EventRewardVoicePlayCountView__SetUp(this, v4);
}


void EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x22
  unsigned int v5; // w23
  __int64 v6; // x21
  __int64 v7; // x8
  __int64 v8; // x22
  int v9; // w29
  __int64 v10; // x28
  __int128 *v11; // x21
  __int64 v12; // x26
  int32_t v13; // w23
  int32_t v14; // w24
  int32_t v15; // w25
  __int64 v16; // x27
  int32_t v17; // w0
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v20; // x23
  System_Object_array *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x25
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x25
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x25
  System_String_o *mText; // x24
  System_Object_array *v68; // x25
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x5
  __int64 v73; // x6
  __int64 v74; // x7
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x26
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x5
  __int64 v82; // x6
  __int64 v83; // x7
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x26
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  Il2CppObject *v95; // x26
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x5
  __int64 v100; // x6
  __int64 v101; // x7
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  Il2CppObject *v104; // x26
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x5
  __int64 v109; // x6
  __int64 v110; // x7
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  Il2CppObject *v113; // x26
  System_String_o *v114; // x0
  __int64 v115; // x0
  __int64 v116; // [xsp+0h] [xbp-A0h]
  __int64 v117; // [xsp+8h] [xbp-98h]
  unsigned int v118; // [xsp+14h] [xbp-8Ch]
  int v119; // [xsp+18h] [xbp-88h]
  int32_t v120; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v121; // [xsp+20h] [xbp-80h] BYREF
  int v122; // [xsp+34h] [xbp-6Ch] BYREF
  int v123; // [xsp+38h] [xbp-68h] BYREF
  int v124; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_4C404E1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_19147/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4C404E1 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v4 = gameObject;
    v117 = *(_QWORD *)(gameObject + 24);
    if ( v117 )
    {
      if ( (int)v117 >= 1 )
      {
        if ( !(_DWORD)v117 )
          goto LABEL_67;
        v5 = 0;
        v116 = gameObject;
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8LL * (int)v5 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v6 )
            goto LABEL_69;
          v118 = v5;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v6 + 16),
                                  0);
          if ( gameObject )
          {
            v7 = *(_QWORD *)(gameObject + 24);
            v8 = gameObject;
            if ( v7 )
            {
              v119 = v7 - 1;
              if ( (int)v7 >= 1 )
                break;
            }
          }
LABEL_65:
          v4 = v116;
          v5 = v118 + 1;
          if ( v118 + 1 == (_DWORD)v117 )
            return;
          if ( v5 >= *(_DWORD *)(v116 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v7 )
LABEL_67:
          sub_1C372BC(gameObject);
        v9 = 0;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 8LL * v9 + 32);
          if ( !v10 )
            break;
          v11 = (__int128 *)(v10 + 28);
          v12 = *(_QWORD *)(v10 + 28);
          v13 = *(_DWORD *)(v10 + 16);
          v14 = *(_DWORD *)(v10 + 20);
          v15 = *(_DWORD *)(v10 + 24);
          v16 = *(_QWORD *)(v10 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v125.fields.currentCryptoKey = v12;
          *(_QWORD *)&v125.fields.fakeValue = v16;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v125, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v13, v14, v15, v17, 0);
          if ( !byte_4C3D4B2 )
          {
            gameObject = sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D4B2 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v20 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v21 = (System_Object_array *)sub_1C37100(object___TypeInfo, 5);
            v124 = *(_DWORD *)(v10 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v124, v22, v23, v24, v25, v26, v27);
            if ( !v21 )
              break;
            v30 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v21->max_length) )
              goto LABEL_67;
            v21->m_Items[0] = v30;
            sub_1C36FFC((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v30, v28, v29);
            v123 = *(_DWORD *)(v10 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v123, v31, v32, v33, v34, v35, v36);
            v39 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v21->max_length) <= 1 )
              goto LABEL_67;
            v21->m_Items[1] = v39;
            sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v39, v37, v38);
            v122 = *(_DWORD *)(v10 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v122, v40, v41, v42, v43, v44, v45);
            v48 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v21->max_length) <= 2 )
              goto LABEL_67;
            v21->m_Items[2] = v48;
            sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[2], (int32_t)v48, v46, v47);
            v121 = *v11;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v121,
                           v49,
                           v50,
                           v51,
                           v52,
                           v53,
                           v54);
            v57 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v21->max_length) <= 3 )
              goto LABEL_67;
            v21->m_Items[3] = v57;
            sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v57, v55, v56);
            v120 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v120, v58, v59, v60, v61, v62, v63);
            v66 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v21->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v21->max_length) <= 4 )
              goto LABEL_67;
            v21->m_Items[4] = v66;
            sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[4], (int32_t)v66, v64, v65);
            gameObject = (__int64)System_String__Format_63603084((System_String_o *)StringLiteral_19147/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v21, 0);
            if ( !v20 )
              break;
          }
          else
          {
            if ( !v20 )
              break;
            mText = v20->fields.mText;
            v68 = (System_Object_array *)sub_1C37100(object___TypeInfo, 5);
            v124 = *(_DWORD *)(v10 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v124, v69, v70, v71, v72, v73, v74);
            if ( !v68 )
              break;
            v77 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v68->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v68->max_length) )
              goto LABEL_67;
            v68->m_Items[0] = v77;
            sub_1C36FFC((CGThumbnailListItem_o *)v68->m_Items, (int32_t)v77, v75, v76);
            v123 = *(_DWORD *)(v10 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v123, v78, v79, v80, v81, v82, v83);
            v86 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v68->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v68->max_length) <= 1 )
              goto LABEL_67;
            v68->m_Items[1] = v86;
            sub_1C36FFC((CGThumbnailListItem_o *)&v68->m_Items[1], (int32_t)v86, v84, v85);
            v122 = *(_DWORD *)(v10 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v122, v87, v88, v89, v90, v91, v92);
            v95 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v68->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v68->max_length) <= 2 )
              goto LABEL_67;
            v68->m_Items[2] = v95;
            sub_1C36FFC((CGThumbnailListItem_o *)&v68->m_Items[2], (int32_t)v95, v93, v94);
            v121 = *v11;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v121,
                           v96,
                           v97,
                           v98,
                           v99,
                           v100,
                           v101);
            v104 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v68->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v68->max_length) <= 3 )
              goto LABEL_67;
            v68->m_Items[3] = v104;
            sub_1C36FFC((CGThumbnailListItem_o *)&v68->m_Items[3], (int32_t)v104, v102, v103);
            v120 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v120, v105, v106, v107, v108, v109, v110);
            v113 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C37194(gameObject, v68->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v115 = sub_1C372D8();
                sub_1C37180(v115, 0);
              }
            }
            if ( LODWORD(v68->max_length) <= 4 )
              goto LABEL_67;
            v68->m_Items[4] = v113;
            sub_1C36FFC((CGThumbnailListItem_o *)&v68->m_Items[4], (int32_t)v113, v111, v112);
            v114 = System_String__Format_63603084((System_String_o *)StringLiteral_19147/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v68, 0);
            gameObject = (__int64)System_String__Concat_63599904(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v114, 0);
          }
          UILabel__set_text(v20, (System_String_o *)gameObject, 0);
          if ( v119 == v9 )
            goto LABEL_65;
          if ( (unsigned int)++v9 >= *(_DWORD *)(v8 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C372B4(gameObject);
      }
    }
  }
}