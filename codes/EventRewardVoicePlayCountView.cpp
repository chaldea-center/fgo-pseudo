void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_48E003B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E003B = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B00F28(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_48E003C & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E003C = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1B00F28(0LL, method);
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
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v28; // x23
  System_Object_array *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x25
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x25
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x25
  System_String_o *mText; // x24
  System_Object_array *v61; // x25
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x26
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x26
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x26
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x26
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x26
  System_String_o *v92; // x0
  __int64 v93; // x0
  __int64 v94; // [xsp+0h] [xbp-A0h]
  __int64 v95; // [xsp+8h] [xbp-98h]
  unsigned int v96; // [xsp+14h] [xbp-8Ch]
  int v97; // [xsp+18h] [xbp-88h]
  int32_t v98; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v99; // [xsp+20h] [xbp-80h] BYREF
  int v100; // [xsp+34h] [xbp-6Ch] BYREF
  int v101; // [xsp+38h] [xbp-68h] BYREF
  int v102; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_48E003A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_1B00CCC(&int_TypeInfo, v4);
    sub_1B00CCC(&object___TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v8);
    sub_1B00CCC(&StringLiteral_18881/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_48E003A = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v12 = gameObject;
    v95 = *(_QWORD *)(gameObject + 24);
    if ( v95 )
    {
      if ( (int)v95 >= 1 )
      {
        if ( !(_DWORD)v95 )
          goto LABEL_67;
        v13 = 0;
        v94 = gameObject;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8LL * (int)v13 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v14 )
            goto LABEL_69;
          v96 = v13;
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
              v97 = v15 - 1;
              if ( (int)v15 >= 1 )
                break;
            }
          }
LABEL_65:
          v12 = v94;
          v13 = v96 + 1;
          if ( v96 + 1 == (_DWORD)v95 )
            return;
          if ( v13 >= *(_DWORD *)(v94 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v15 )
LABEL_67:
          sub_1B00F30(gameObject, v11);
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
          *(_QWORD *)&v103.fields.currentCryptoKey = v20;
          *(_QWORD *)&v103.fields.fakeValue = v24;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v103, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v21, v22, v23, v25, 0LL);
          if ( !byte_48E00BA )
          {
            gameObject = sub_1B00CCC(&EventRewardSaveData_TypeInfo, v11);
            byte_48E00BA = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v28 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v29 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 5LL);
            v102 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v102, v30, v31, v32);
            if ( !v29 )
              break;
            v35 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v29->max_length )
              goto LABEL_67;
            v29->m_Items[0] = v35;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)v29->m_Items, (int32_t)v35, v33, v34);
            v101 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v101, v36, v37, v38);
            v41 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 1 )
              goto LABEL_67;
            v29->m_Items[1] = v41;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v29->m_Items[1], (int32_t)v41, v39, v40);
            v100 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v100, v42, v43, v44);
            v47 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 2 )
              goto LABEL_67;
            v29->m_Items[2] = v47;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v29->m_Items[2], (int32_t)v47, v45, v46);
            v99 = *v19;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v99,
                           v48,
                           v49,
                           v50);
            v53 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 3 )
              goto LABEL_67;
            v29->m_Items[3] = v53;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v29->m_Items[3], (int32_t)v53, v51, v52);
            v98 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v98, v54, v55, v56);
            v59 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 4 )
              goto LABEL_67;
            v29->m_Items[4] = v59;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v29->m_Items[4], (int32_t)v59, v57, v58);
            gameObject = (__int64)System_String__Format_60340256((System_String_o *)StringLiteral_18881/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v29, 0LL);
            if ( !v28 )
              break;
          }
          else
          {
            if ( !v28 )
              break;
            mText = v28->fields.mText;
            v61 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 5LL);
            v102 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v102, v62, v63, v64);
            if ( !v61 )
              break;
            v67 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v61->max_length )
              goto LABEL_67;
            v61->m_Items[0] = v67;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)v61->m_Items, (int32_t)v67, v65, v66);
            v101 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v101, v68, v69, v70);
            v73 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v61->max_length <= 1 )
              goto LABEL_67;
            v61->m_Items[1] = v73;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[1], (int32_t)v73, v71, v72);
            v100 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v100, v74, v75, v76);
            v79 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v61->max_length <= 2 )
              goto LABEL_67;
            v61->m_Items[2] = v79;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[2], (int32_t)v79, v77, v78);
            v99 = *v19;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v99,
                           v80,
                           v81,
                           v82);
            v85 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v61->max_length <= 3 )
              goto LABEL_67;
            v61->m_Items[3] = v85;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[3], (int32_t)v85, v83, v84);
            v98 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v98, v86, v87, v88);
            v91 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_1B00E08(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v93 = sub_1B00F4C();
                sub_1B00DF4(v93, 0LL);
              }
            }
            if ( v61->max_length <= 4 )
              goto LABEL_67;
            v61->m_Items[4] = v91;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v61->m_Items[4], (int32_t)v91, v89, v90);
            v92 = System_String__Format_60340256((System_String_o *)StringLiteral_18881/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v61, 0LL);
            gameObject = (__int64)System_String__Concat_60337008(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v92, 0LL);
          }
          UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
          if ( v97 == v17 )
            goto LABEL_65;
          if ( (unsigned int)++v17 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1B00F28(gameObject, v11);
      }
    }
  }
}