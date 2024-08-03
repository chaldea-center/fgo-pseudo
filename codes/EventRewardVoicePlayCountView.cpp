void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_49F9B9C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F9B9C = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(countLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49F9B9D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F9B9D = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1B64324(0LL);
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
  __int64 v12; // x22
  unsigned int v13; // w23
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x22
  int v17; // w29
  __int64 v18; // x28
  __int128 *v19; // x21
  __int64 v20; // x26
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w25
  __int64 v24; // x27
  int32_t v25; // w0
  __int64 v26; // x1
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v29; // x23
  System_Object_array *v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x25
  System_String_o *mText; // x24
  System_Object_array *v47; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x26
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x26
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x26
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x26
  System_String_o *v63; // x0
  __int64 v64; // x0
  __int64 v65; // [xsp+0h] [xbp-A0h]
  __int64 v66; // [xsp+8h] [xbp-98h]
  unsigned int v67; // [xsp+14h] [xbp-8Ch]
  int v68; // [xsp+18h] [xbp-88h]
  int32_t v69; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v70; // [xsp+20h] [xbp-80h] BYREF
  int v71; // [xsp+34h] [xbp-6Ch] BYREF
  int v72; // [xsp+38h] [xbp-68h] BYREF
  int v73; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_49F9B9B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v8);
    sub_1B640C8(&StringLiteral_19060/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_49F9B9B = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v12 = gameObject;
    v66 = *(_QWORD *)(gameObject + 24);
    if ( v66 )
    {
      if ( (int)v66 >= 1 )
      {
        if ( !(_DWORD)v66 )
          goto LABEL_67;
        v13 = 0;
        v65 = gameObject;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8LL * (int)v13 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v14 )
            goto LABEL_69;
          v67 = v13;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v14 + 16),
                                  0LL);
          if ( gameObject )
          {
            v15 = *(_QWORD *)(gameObject + 24);
            v16 = gameObject;
            if ( v15 )
            {
              v68 = v15 - 1;
              if ( (int)v15 >= 1 )
                break;
            }
          }
LABEL_65:
          v12 = v65;
          v13 = v67 + 1;
          if ( v67 + 1 == (_DWORD)v66 )
            return;
          if ( v13 >= *(_DWORD *)(v65 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v15 )
LABEL_67:
          sub_1B6432C(gameObject, v11);
        v17 = 0;
        while ( 1 )
        {
          v18 = *(_QWORD *)(v16 + 8LL * v17 + 32);
          if ( !v18 )
            break;
          v19 = (__int128 *)(v18 + 28);
          v20 = *(_QWORD *)(v18 + 28);
          v21 = *(_DWORD *)(v18 + 16);
          v22 = *(_DWORD *)(v18 + 20);
          v23 = *(_DWORD *)(v18 + 24);
          v24 = *(_QWORD *)(v18 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = v20;
          *(_QWORD *)&v74.fields.fakeValue = v24;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v74, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v21, v22, v23, v25, 0LL);
          if ( !byte_49F9C10 )
          {
            gameObject = sub_1B640C8(&EventRewardSaveData_TypeInfo, v26);
            byte_49F9C10 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v29 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v30 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
            v73 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v73);
            if ( !v30 )
              break;
            v33 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v30->max_length )
              goto LABEL_67;
            v30->m_Items[0] = v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v30->m_Items, (int32_t)v33, v31, v32);
            v72 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v72);
            v36 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 1 )
              goto LABEL_67;
            v30->m_Items[1] = v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[1], (int32_t)v36, v34, v35);
            v71 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v71);
            v39 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 2 )
              goto LABEL_67;
            v30->m_Items[2] = v39;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[2], (int32_t)v39, v37, v38);
            v70 = *v19;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v70);
            v42 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 3 )
              goto LABEL_67;
            v30->m_Items[3] = v42;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[3], (int32_t)v42, v40, v41);
            v69 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v69);
            v45 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v30->max_length <= 4 )
              goto LABEL_67;
            v30->m_Items[4] = v45;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[4], (int32_t)v45, v43, v44);
            gameObject = (__int64)System_String__Format_61389904((System_String_o *)StringLiteral_19060/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v30, 0LL);
            if ( !v29 )
              break;
          }
          else
          {
            if ( !v29 )
              break;
            mText = v29->fields.mText;
            v47 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
            v73 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v73);
            if ( !v47 )
              break;
            v50 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v47->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v47->max_length )
              goto LABEL_67;
            v47->m_Items[0] = v50;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v50, v48, v49);
            v72 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v72);
            v53 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v47->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v47->max_length <= 1 )
              goto LABEL_67;
            v47->m_Items[1] = v53;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v53, v51, v52);
            v71 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v71);
            v56 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v47->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v47->max_length <= 2 )
              goto LABEL_67;
            v47->m_Items[2] = v56;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v56, v54, v55);
            v70 = *v19;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v70);
            v59 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v47->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v47->max_length <= 3 )
              goto LABEL_67;
            v47->m_Items[3] = v59;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v59, v57, v58);
            v69 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v69);
            v62 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B64204(gameObject, v47->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v64 = sub_1B64348();
                sub_1B641F0(v64, 0LL);
              }
            }
            if ( v47->max_length <= 4 )
              goto LABEL_67;
            v47->m_Items[4] = v62;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[4], (int32_t)v62, v60, v61);
            v63 = System_String__Format_61389904((System_String_o *)StringLiteral_19060/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v47, 0LL);
            gameObject = (__int64)System_String__Concat_61386656(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v63, 0LL);
          }
          UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
          if ( v68 == v17 )
            goto LABEL_65;
          if ( (unsigned int)++v17 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1B64324(gameObject);
      }
    }
  }
}