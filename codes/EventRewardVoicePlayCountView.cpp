void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4A5898B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5898B = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5898C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5898C = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1B8880C(0LL, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(0LL);
  EventRewardVoicePlayCountView__SetUp(this, v4);
}


void __fastcall EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
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
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x25
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x25
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x25
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x25
  System_String_o *mText; // x24
  System_Object_array *v54; // x25
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x26
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x26
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x26
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x26
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x26
  System_String_o *v85; // x0
  __int64 v86; // x0
  __int64 v87; // [xsp+0h] [xbp-A0h]
  __int64 v88; // [xsp+8h] [xbp-98h]
  unsigned int v89; // [xsp+14h] [xbp-8Ch]
  int v90; // [xsp+18h] [xbp-88h]
  int32_t v91; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v92; // [xsp+20h] [xbp-80h] BYREF
  int v93; // [xsp+34h] [xbp-6Ch] BYREF
  int v94; // [xsp+38h] [xbp-68h] BYREF
  int v95; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4A5898A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_19133/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4A5898A = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v5 = gameObject;
    v88 = *(_QWORD *)(gameObject + 24);
    if ( v88 )
    {
      if ( (int)v88 >= 1 )
      {
        if ( !(_DWORD)v88 )
          goto LABEL_67;
        v6 = 0;
        v87 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_69;
          v89 = v6;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v7 + 16),
                                  0LL);
          if ( gameObject )
          {
            v8 = *(_QWORD *)(gameObject + 24);
            v9 = gameObject;
            if ( v8 )
            {
              v90 = v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_65:
          v5 = v87;
          v6 = v89 + 1;
          if ( v89 + 1 == (_DWORD)v88 )
            return;
          if ( v6 >= *(_DWORD *)(v87 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v8 )
LABEL_67:
          sub_1B88814(gameObject, v4);
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
          *(_QWORD *)&v96.fields.currentCryptoKey = v13;
          *(_QWORD *)&v96.fields.fakeValue = v17;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v96, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v14, v15, v16, v18, 0LL);
          if ( !byte_4A58A0A )
          {
            gameObject = sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A58A0A = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v21 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v22 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
            v95 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v95, v23, v24, v25);
            if ( !v22 )
              break;
            v28 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v22->max_length )
              goto LABEL_67;
            v22->m_Items[0] = v28;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v22->m_Items, (int32_t)v28, v26, v27);
            v94 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v94, v29, v30, v31);
            v34 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 1 )
              goto LABEL_67;
            v22->m_Items[1] = v34;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->m_Items[1], (int32_t)v34, v32, v33);
            v93 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v93, v35, v36, v37);
            v40 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 2 )
              goto LABEL_67;
            v22->m_Items[2] = v40;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->m_Items[2], (int32_t)v40, v38, v39);
            v92 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v92,
                           v41,
                           v42,
                           v43);
            v46 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 3 )
              goto LABEL_67;
            v22->m_Items[3] = v46;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->m_Items[3], (int32_t)v46, v44, v45);
            v91 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v91, v47, v48, v49);
            v52 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 4 )
              goto LABEL_67;
            v22->m_Items[4] = v52;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->m_Items[4], (int32_t)v52, v50, v51);
            gameObject = (__int64)System_String__Format_61721540((System_String_o *)StringLiteral_19133/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v22, 0LL);
            if ( !v21 )
              break;
          }
          else
          {
            if ( !v21 )
              break;
            mText = v21->fields.mText;
            v54 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
            v95 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v95, v55, v56, v57);
            if ( !v54 )
              break;
            v60 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v54->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v54->max_length )
              goto LABEL_67;
            v54->m_Items[0] = v60;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v54->m_Items, (int32_t)v60, v58, v59);
            v94 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v94, v61, v62, v63);
            v66 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v54->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v54->max_length <= 1 )
              goto LABEL_67;
            v54->m_Items[1] = v66;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[1], (int32_t)v66, v64, v65);
            v93 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v93, v67, v68, v69);
            v72 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v54->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v54->max_length <= 2 )
              goto LABEL_67;
            v54->m_Items[2] = v72;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[2], (int32_t)v72, v70, v71);
            v92 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v92,
                           v73,
                           v74,
                           v75);
            v78 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v54->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v54->max_length <= 3 )
              goto LABEL_67;
            v54->m_Items[3] = v78;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[3], (int32_t)v78, v76, v77);
            v91 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v91, v79, v80, v81);
            v84 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B886EC(gameObject, v54->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v86 = sub_1B88830(gameObject);
                sub_1B886D8(v86, 0LL);
              }
            }
            if ( v54->max_length <= 4 )
              goto LABEL_67;
            v54->m_Items[4] = v84;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[4], (int32_t)v84, v82, v83);
            v85 = System_String__Format_61721540((System_String_o *)StringLiteral_19133/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v54, 0LL);
            gameObject = (__int64)System_String__Concat_61718292(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v85, 0LL);
          }
          UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
          if ( v90 == v10 )
            goto LABEL_65;
          if ( (unsigned int)++v10 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1B8880C(gameObject, v4);
      }
    }
  }
}