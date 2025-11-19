void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4CB37D1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB37D1 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4CB37D2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB37D2 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C6BC60(0, method);
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
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x25
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x25
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x25
  System_String_o *mText; // x24
  System_Object_array *v39; // x25
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x26
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x26
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x26
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x26
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x26
  System_String_o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // [xsp+0h] [xbp-A0h]
  __int64 v58; // [xsp+8h] [xbp-98h]
  unsigned int v59; // [xsp+14h] [xbp-8Ch]
  int v60; // [xsp+18h] [xbp-88h]
  int32_t v61; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v62; // [xsp+20h] [xbp-80h] BYREF
  int v63; // [xsp+34h] [xbp-6Ch] BYREF
  int v64; // [xsp+38h] [xbp-68h] BYREF
  int v65; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4CB37D0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_19196/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4CB37D0 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v5 = gameObject;
    v58 = *(_QWORD *)(gameObject + 24);
    if ( v58 )
    {
      if ( (int)v58 >= 1 )
      {
        if ( !(_DWORD)v58 )
          goto LABEL_67;
        v6 = 0;
        v57 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_69;
          v59 = v6;
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
              v60 = v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_65:
          v5 = v57;
          v6 = v59 + 1;
          if ( v59 + 1 == (_DWORD)v58 )
            return;
          if ( v6 >= *(_DWORD *)(v57 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v8 )
LABEL_67:
          sub_1C6BC68(gameObject);
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
          *(_QWORD *)&v66.fields.currentCryptoKey = v13;
          *(_QWORD *)&v66.fields.fakeValue = v17;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v66, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v14, v15, v16, v18, 0);
          if ( !byte_4CB077A )
          {
            gameObject = sub_1C6BA08(&EventRewardSaveData_TypeInfo);
            byte_4CB077A = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v21 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v22 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 5);
            v65 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v65);
            if ( !v22 )
              break;
            v25 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v22->max_length) )
              goto LABEL_67;
            v22->m_Items[0] = v25;
            sub_1C6B9AC((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v25, v23, v24);
            v64 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v64);
            v28 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 1 )
              goto LABEL_67;
            v22->m_Items[1] = v28;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v28, v26, v27);
            v63 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v63);
            v31 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 2 )
              goto LABEL_67;
            v22->m_Items[2] = v31;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v22->m_Items[2], (int32_t)v31, v29, v30);
            v62 = *v12;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v62);
            v34 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 3 )
              goto LABEL_67;
            v22->m_Items[3] = v34;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v34, v32, v33);
            v61 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v37 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v22->max_length) <= 4 )
              goto LABEL_67;
            v22->m_Items[4] = v37;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v22->m_Items[4], (int32_t)v37, v35, v36);
            gameObject = (__int64)System_String__Format_64008236((System_String_o *)StringLiteral_19196/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v22, 0);
            if ( !v21 )
              break;
          }
          else
          {
            if ( !v21 )
              break;
            mText = v21->fields.mText;
            v39 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 5);
            v65 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v65);
            if ( !v39 )
              break;
            v42 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v39->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v39->max_length) )
              goto LABEL_67;
            v39->m_Items[0] = v42;
            sub_1C6B9AC((CGThumbnailListItem_o *)v39->m_Items, (int32_t)v42, v40, v41);
            v64 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v64);
            v45 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v39->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v39->max_length) <= 1 )
              goto LABEL_67;
            v39->m_Items[1] = v45;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v39->m_Items[1], (int32_t)v45, v43, v44);
            v63 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v63);
            v48 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v39->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v39->max_length) <= 2 )
              goto LABEL_67;
            v39->m_Items[2] = v48;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v39->m_Items[2], (int32_t)v48, v46, v47);
            v62 = *v12;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v62);
            v51 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v39->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v39->max_length) <= 3 )
              goto LABEL_67;
            v39->m_Items[3] = v51;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v39->m_Items[3], (int32_t)v51, v49, v50);
            v61 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v54 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C6BB44(gameObject, v39->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v56 = sub_1C6BC84();
                sub_1C6BB30(v56, 0);
              }
            }
            if ( LODWORD(v39->max_length) <= 4 )
              goto LABEL_67;
            v39->m_Items[4] = v54;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v39->m_Items[4], (int32_t)v54, v52, v53);
            v55 = System_String__Format_64008236((System_String_o *)StringLiteral_19196/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v39, 0);
            gameObject = (__int64)System_String__Concat_64005056(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v55, 0);
          }
          UILabel__set_text(v21, (System_String_o *)gameObject, 0);
          if ( v60 == v10 )
            goto LABEL_65;
          if ( (unsigned int)++v10 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C6BC60(gameObject, v4);
      }
    }
  }
}