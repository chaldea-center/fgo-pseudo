void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *countLabel; // x0

  if ( (byte_4B138E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B138E6 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *countLabel; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B138E7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B138E7 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1BCAA3C(0LL, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  EventRewardSaveData__DeletePlayCount(0LL);
  EventRewardVoicePlayCountView__SetUp(this, v5);
}


void __fastcall EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  unsigned int v21; // w23
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x22
  int v25; // w29
  __int64 v26; // x28
  __int128 *v27; // x21
  __int64 v28; // x26
  int32_t v29; // w23
  int32_t v30; // w24
  int32_t v31; // w25
  __int64 v32; // x27
  int32_t v33; // w0
  __int64 v34; // x2
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v37; // x23
  System_Object_array *v38; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x25
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x25
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x25
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x25
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x25
  System_String_o *mText; // x24
  System_Object_array *v75; // x25
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x26
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x26
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x26
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x26
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x26
  System_String_o *v111; // x0
  __int64 v112; // x0
  __int64 v113; // [xsp+0h] [xbp-A0h]
  __int64 v114; // [xsp+8h] [xbp-98h]
  unsigned int v115; // [xsp+14h] [xbp-8Ch]
  int v116; // [xsp+18h] [xbp-88h]
  int32_t v117; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v118; // [xsp+20h] [xbp-80h] BYREF
  int v119; // [xsp+34h] [xbp-6Ch] BYREF
  int v120; // [xsp+38h] [xbp-68h] BYREF
  int v121; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4B138E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&object___TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19330/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v16, v17);
    byte_4B138E5 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v20 = gameObject;
    v114 = *(_QWORD *)(gameObject + 24);
    if ( v114 )
    {
      if ( (int)v114 >= 1 )
      {
        if ( !(_DWORD)v114 )
          goto LABEL_67;
        v21 = 0;
        v113 = gameObject;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v20 + 8LL * (int)v21 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v22 )
            goto LABEL_69;
          v115 = v21;
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v22 + 16),
                                  0LL);
          if ( gameObject )
          {
            v23 = *(_QWORD *)(gameObject + 24);
            v24 = gameObject;
            if ( v23 )
            {
              v116 = v23 - 1;
              if ( (int)v23 >= 1 )
                break;
            }
          }
LABEL_65:
          v20 = v113;
          v21 = v115 + 1;
          if ( v115 + 1 == (_DWORD)v114 )
            return;
          if ( v21 >= *(_DWORD *)(v113 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v23 )
LABEL_67:
          sub_1BCAA44(gameObject, v19);
        v25 = 0;
        while ( 1 )
        {
          v26 = *(_QWORD *)(v24 + 8LL * v25 + 32);
          if ( !v26 )
            break;
          v27 = (__int128 *)(v26 + 28);
          v28 = *(_QWORD *)(v26 + 28);
          v29 = *(_DWORD *)(v26 + 16);
          v30 = *(_DWORD *)(v26 + 20);
          v31 = *(_DWORD *)(v26 + 24);
          v32 = *(_QWORD *)(v26 + 36);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v122.fields.currentCryptoKey = v28;
          *(_QWORD *)&v122.fields.fakeValue = v32;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v122, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v29, v30, v31, v33, 0LL);
          if ( !byte_4B13958 )
          {
            gameObject = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v19, v34);
            byte_4B13958 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v37 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v38 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 5LL);
            v121 = *(_DWORD *)(v26 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v121);
            if ( !v38 )
              break;
            v45 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v38->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v38->max_length )
              goto LABEL_67;
            v38->m_Items[0] = (Il2CppObject *)v45;
            sub_1BCA784((PartyOrganizationUtility_o *)v38->m_Items, v45, v39, v40, v41, v42, v43, v44);
            v120 = *(_DWORD *)(v26 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v120);
            v52 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v38->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v38->max_length <= 1 )
              goto LABEL_67;
            v38->m_Items[1] = (Il2CppObject *)v52;
            sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[1], v52, v46, v47, v48, v49, v50, v51);
            v119 = *(_DWORD *)(v26 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v119);
            v59 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v38->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v38->max_length <= 2 )
              goto LABEL_67;
            v38->m_Items[2] = (Il2CppObject *)v59;
            sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
            v118 = *v27;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v118);
            v66 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v38->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v38->max_length <= 3 )
              goto LABEL_67;
            v38->m_Items[3] = (Il2CppObject *)v66;
            sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[3], v66, v60, v61, v62, v63, v64, v65);
            v117 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v117);
            v73 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v38->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v38->max_length <= 4 )
              goto LABEL_67;
            v38->m_Items[4] = (Il2CppObject *)v73;
            sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[4], v73, v67, v68, v69, v70, v71, v72);
            gameObject = (__int64)System_String__Format_62415728((System_String_o *)StringLiteral_19330/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v38, 0LL);
            if ( !v37 )
              break;
          }
          else
          {
            if ( !v37 )
              break;
            mText = v37->fields.mText;
            v75 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 5LL);
            v121 = *(_DWORD *)(v26 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v121);
            if ( !v75 )
              break;
            v82 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v75->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v75->max_length )
              goto LABEL_67;
            v75->m_Items[0] = (Il2CppObject *)v82;
            sub_1BCA784((PartyOrganizationUtility_o *)v75->m_Items, v82, v76, v77, v78, v79, v80, v81);
            v120 = *(_DWORD *)(v26 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v120);
            v89 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v75->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v75->max_length <= 1 )
              goto LABEL_67;
            v75->m_Items[1] = (Il2CppObject *)v89;
            sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[1], v89, v83, v84, v85, v86, v87, v88);
            v119 = *(_DWORD *)(v26 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v119);
            v96 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v75->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v75->max_length <= 2 )
              goto LABEL_67;
            v75->m_Items[2] = (Il2CppObject *)v96;
            sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[2], v96, v90, v91, v92, v93, v94, v95);
            v118 = *v27;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v118);
            v103 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v75->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v75->max_length <= 3 )
              goto LABEL_67;
            v75->m_Items[3] = (Il2CppObject *)v103;
            sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[3], v103, v97, v98, v99, v100, v101, v102);
            v117 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v117);
            v110 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BCA91C(gameObject, v75->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v112 = sub_1BCAA60();
                sub_1BCA908(v112, 0LL);
              }
            }
            if ( v75->max_length <= 4 )
              goto LABEL_67;
            v75->m_Items[4] = (Il2CppObject *)v110;
            sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[4], v110, v104, v105, v106, v107, v108, v109);
            v111 = System_String__Format_62415728((System_String_o *)StringLiteral_19330/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v75, 0LL);
            gameObject = (__int64)System_String__Concat_62412480(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v111, 0LL);
          }
          UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
          if ( v116 == v25 )
            goto LABEL_65;
          if ( (unsigned int)++v25 >= *(_DWORD *)(v24 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1BCAA3C(gameObject, v19);
      }
    }
  }
}