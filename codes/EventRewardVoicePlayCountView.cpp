void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4C24823 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24823 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C24824 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24824 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C2D6EC(0, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  EventRewardSaveData__DeletePlayCount(0);
  EventRewardVoicePlayCountView__SetUp(this, v4);
}


void EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x22
  unsigned int v7; // w23
  __int64 v8; // x21
  __int64 v9; // x8
  __int64 v10; // x22
  int v11; // w29
  __int64 v12; // x28
  __int128 *v13; // x21
  __int64 v14; // x26
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w25
  __int64 v18; // x27
  int32_t v19; // w0
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v22; // x23
  System_Object_array *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x25
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x25
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x25
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x25
  System_String_o *mText; // x24
  System_Object_array *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x26
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x26
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x26
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x26
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x26
  System_String_o *v76; // x0
  __int64 v77; // x0
  __int64 v78; // [xsp+0h] [xbp-A0h]
  __int64 v79; // [xsp+8h] [xbp-98h]
  unsigned int v80; // [xsp+14h] [xbp-8Ch]
  int v81; // [xsp+18h] [xbp-88h]
  int32_t v82; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v83; // [xsp+20h] [xbp-80h] BYREF
  int v84; // [xsp+34h] [xbp-6Ch] BYREF
  int v85; // [xsp+38h] [xbp-68h] BYREF
  int v86; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4C24822 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_19134/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4C24822 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v6 = gameObject;
    v79 = *(_QWORD *)(gameObject + 24);
    if ( v79 )
    {
      if ( (int)v79 >= 1 )
      {
        if ( !(_DWORD)v79 )
          goto LABEL_67;
        v7 = 0;
        v78 = gameObject;
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 8LL * (int)v7 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v8 )
            goto LABEL_69;
          v80 = v7;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v8 + 16),
                                  0);
          if ( gameObject )
          {
            v9 = *(_QWORD *)(gameObject + 24);
            v10 = gameObject;
            if ( v9 )
            {
              v81 = v9 - 1;
              if ( (int)v9 >= 1 )
                break;
            }
          }
LABEL_65:
          v6 = v78;
          v7 = v80 + 1;
          if ( v80 + 1 == (_DWORD)v79 )
            return;
          if ( v7 >= *(_DWORD *)(v78 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v9 )
LABEL_67:
          sub_1C2D6F4(gameObject, v4, v5);
        v11 = 0;
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 8LL * v11 + 32);
          if ( !v12 )
            break;
          v13 = (__int128 *)(v12 + 28);
          v14 = *(_QWORD *)(v12 + 28);
          v15 = *(_DWORD *)(v12 + 16);
          v16 = *(_DWORD *)(v12 + 20);
          v17 = *(_DWORD *)(v12 + 24);
          v18 = *(_QWORD *)(v12 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v87.fields.currentCryptoKey = v14;
          *(_QWORD *)&v87.fields.fakeValue = v18;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v87, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v15, v16, v17, v19, 0);
          if ( !byte_4C217F9 )
          {
            gameObject = sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217F9 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v22 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v23 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 5);
            v86 = *(_DWORD *)(v12 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v86, v24, v25, v26);
            if ( !v23 )
              break;
            v28 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v23->max_length) )
              goto LABEL_67;
            v23->m_Items[0] = v28;
            sub_1C2D434((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v28, v5, v27);
            v85 = *(_DWORD *)(v12 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v85, v29, v30, v31);
            v33 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v23->max_length) <= 1 )
              goto LABEL_67;
            v23->m_Items[1] = v33;
            sub_1C2D434((CGThumbnailListItem_o *)&v23->m_Items[1], (int32_t)v33, v5, v32);
            v84 = *(_DWORD *)(v12 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v84, v34, v35, v36);
            v38 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v23->max_length) <= 2 )
              goto LABEL_67;
            v23->m_Items[2] = v38;
            sub_1C2D434((CGThumbnailListItem_o *)&v23->m_Items[2], (int32_t)v38, v5, v37);
            v83 = *v13;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v83,
                           v39,
                           v40,
                           v41);
            v43 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v23->max_length) <= 3 )
              goto LABEL_67;
            v23->m_Items[3] = v43;
            sub_1C2D434((CGThumbnailListItem_o *)&v23->m_Items[3], (int32_t)v43, v5, v42);
            v82 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v82, v44, v45, v46);
            v48 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v23->max_length) <= 4 )
              goto LABEL_67;
            v23->m_Items[4] = v48;
            sub_1C2D434((CGThumbnailListItem_o *)&v23->m_Items[4], (int32_t)v48, v5, v47);
            gameObject = (__int64)System_String__Format_63499292((System_String_o *)StringLiteral_19134/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v23, 0);
            if ( !v22 )
              break;
          }
          else
          {
            if ( !v22 )
              break;
            mText = v22->fields.mText;
            v50 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 5);
            v86 = *(_DWORD *)(v12 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v86, v51, v52, v53);
            if ( !v50 )
              break;
            v55 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v50->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !LODWORD(v50->max_length) )
              goto LABEL_67;
            v50->m_Items[0] = v55;
            sub_1C2D434((CGThumbnailListItem_o *)v50->m_Items, (int32_t)v55, v5, v54);
            v85 = *(_DWORD *)(v12 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v85, v56, v57, v58);
            v60 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v50->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v50->max_length) <= 1 )
              goto LABEL_67;
            v50->m_Items[1] = v60;
            sub_1C2D434((CGThumbnailListItem_o *)&v50->m_Items[1], (int32_t)v60, v5, v59);
            v84 = *(_DWORD *)(v12 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v84, v61, v62, v63);
            v65 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v50->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v50->max_length) <= 2 )
              goto LABEL_67;
            v50->m_Items[2] = v65;
            sub_1C2D434((CGThumbnailListItem_o *)&v50->m_Items[2], (int32_t)v65, v5, v64);
            v83 = *v13;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v83,
                           v66,
                           v67,
                           v68);
            v70 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v50->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( LODWORD(v50->max_length) <= 3 )
              goto LABEL_67;
            v50->m_Items[3] = v70;
            sub_1C2D434((CGThumbnailListItem_o *)&v50->m_Items[3], (int32_t)v70, v5, v69);
            v82 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v82, v71, v72, v73);
            v75 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C2D5CC(gameObject, v50->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v77 = sub_1C2D710();
                sub_1C2D5B8(v77, 0);
              }
            }
            if ( LODWORD(v50->max_length) <= 4 )
              goto LABEL_67;
            v50->m_Items[4] = v75;
            sub_1C2D434((CGThumbnailListItem_o *)&v50->m_Items[4], (int32_t)v75, v5, v74);
            v76 = System_String__Format_63499292((System_String_o *)StringLiteral_19134/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v50, 0);
            gameObject = (__int64)System_String__Concat_63496112(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v76, 0);
          }
          UILabel__set_text(v22, (System_String_o *)gameObject, 0);
          if ( v81 == v11 )
            goto LABEL_65;
          if ( (unsigned int)++v11 >= *(_DWORD *)(v10 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C2D6EC(gameObject, v4);
      }
    }
  }
}