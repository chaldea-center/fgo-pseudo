void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4CEBB55 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBB55 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4CEBB56 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBB56 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C7BD40(0, method);
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  Il2CppObject *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *v57; // x25
  System_String_o *mText; // x24
  System_Object_array *v59; // x25
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *v66; // x26
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  Il2CppObject *v73; // x26
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  Il2CppObject *v80; // x26
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  Il2CppObject *v87; // x26
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *v94; // x26
  System_String_o *v95; // x0
  __int64 v96; // x0
  __int64 v97; // [xsp+0h] [xbp-A0h]
  __int64 v98; // [xsp+8h] [xbp-98h]
  unsigned int v99; // [xsp+14h] [xbp-8Ch]
  int v100; // [xsp+18h] [xbp-88h]
  int32_t v101; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v102; // [xsp+20h] [xbp-80h] BYREF
  int v103; // [xsp+34h] [xbp-6Ch] BYREF
  int v104; // [xsp+38h] [xbp-68h] BYREF
  int v105; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_4CEBB54 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_19288/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4CEBB54 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v5 = gameObject;
    v98 = *(_QWORD *)(gameObject + 24);
    if ( v98 )
    {
      if ( (int)v98 >= 1 )
      {
        if ( !(_DWORD)v98 )
          goto LABEL_67;
        v6 = 0;
        v97 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_69;
          v99 = v6;
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
              v100 = v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_65:
          v5 = v97;
          v6 = v99 + 1;
          if ( v99 + 1 == (_DWORD)v98 )
            return;
          if ( v6 >= *(_DWORD *)(v97 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v8 )
LABEL_67:
          sub_1C7BD48(gameObject);
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
          *(_QWORD *)&v106.fields.currentCryptoKey = v13;
          *(_QWORD *)&v106.fields.fakeValue = v17;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v106, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v14, v15, v16, v18, 0);
          if ( !byte_4CE8A31 )
          {
            gameObject = sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A31 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v21 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v22 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 5);
            v105 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v105);
            if ( !v22 )
              break;
            v29 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v22->max_length) )
              goto LABEL_67;
            v22->m_Items[0] = v29;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v22->m_Items, (int32_t)v29, v23, v24, v25, v26, v27, v28);
            v104 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v104);
            v36 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 1 )
              goto LABEL_67;
            v22->m_Items[1] = v36;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v22->m_Items[1], (int32_t)v36, v30, v31, v32, v33, v34, v35);
            v103 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v103);
            v43 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 2 )
              goto LABEL_67;
            v22->m_Items[2] = v43;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v22->m_Items[2], (int32_t)v43, v37, v38, v39, v40, v41, v42);
            v102 = *v12;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v102);
            v50 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 3 )
              goto LABEL_67;
            v22->m_Items[3] = v50;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v22->m_Items[3], (int32_t)v50, v44, v45, v46, v47, v48, v49);
            v101 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v101);
            v57 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 4 )
              goto LABEL_67;
            v22->m_Items[4] = v57;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v22->m_Items[4], (int32_t)v57, v51, v52, v53, v54, v55, v56);
            gameObject = (__int64)System_String__Format_64218356((System_String_o *)StringLiteral_19288/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v22, 0);
            if ( !v21 )
              break;
          }
          else
          {
            if ( !v21 )
              break;
            mText = v21->fields.mText;
            v59 = (System_Object_array *)sub_1C7BB90(object___TypeInfo, 5);
            v105 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v105);
            if ( !v59 )
              break;
            v66 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v59->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v59->max_length) )
              goto LABEL_67;
            v59->m_Items[0] = v66;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v59->m_Items, (int32_t)v66, v60, v61, v62, v63, v64, v65);
            v104 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v104);
            v73 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v59->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v59->max_length) <= 1 )
              goto LABEL_67;
            v59->m_Items[1] = v73;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->m_Items[1], (int32_t)v73, v67, v68, v69, v70, v71, v72);
            v103 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v103);
            v80 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v59->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v59->max_length) <= 2 )
              goto LABEL_67;
            v59->m_Items[2] = v80;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->m_Items[2], (int32_t)v80, v74, v75, v76, v77, v78, v79);
            v102 = *v12;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v102);
            v87 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v59->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v59->max_length) <= 3 )
              goto LABEL_67;
            v59->m_Items[3] = v87;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->m_Items[3], (int32_t)v87, v81, v82, v83, v84, v85, v86);
            v101 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v101);
            v94 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C7BC24(gameObject, v59->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v96 = sub_1C7BD64();
                sub_1C7BC10(v96, 0);
              }
            }
            if ( LODWORD(v59->max_length) <= 4 )
              goto LABEL_67;
            v59->m_Items[4] = v94;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->m_Items[4], (int32_t)v94, v88, v89, v90, v91, v92, v93);
            v95 = System_String__Format_64218356((System_String_o *)StringLiteral_19288/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v59, 0);
            gameObject = (__int64)System_String__Concat_64215176(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v95, 0);
          }
          UILabel__set_text(v21, (System_String_o *)gameObject, 0);
          if ( v100 == v10 )
            goto LABEL_65;
          if ( (unsigned int)++v10 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C7BD40(gameObject, v4);
      }
    }
  }
}