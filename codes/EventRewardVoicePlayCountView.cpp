void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4BD9BE3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9BE3 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BD9BE4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9BE4 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C22094(0LL, method);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x25
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x25
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x25
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x25
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x25
  System_String_o *mText; // x24
  System_Object_array *v74; // x25
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x26
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x26
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x26
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x26
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x26
  System_String_o *v125; // x0
  __int64 v126; // x0
  __int64 v127; // [xsp+0h] [xbp-A0h]
  __int64 v128; // [xsp+8h] [xbp-98h]
  unsigned int v129; // [xsp+14h] [xbp-8Ch]
  int v130; // [xsp+18h] [xbp-88h]
  int32_t v131; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v132; // [xsp+20h] [xbp-80h] BYREF
  int v133; // [xsp+34h] [xbp-6Ch] BYREF
  int v134; // [xsp+38h] [xbp-68h] BYREF
  int v135; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  if ( (byte_4BD9BE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_19461/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_4BD9BE2 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v5 = gameObject;
    v128 = *(_QWORD *)(gameObject + 24);
    if ( v128 )
    {
      if ( (int)v128 >= 1 )
      {
        if ( !(_DWORD)v128 )
          goto LABEL_67;
        v6 = 0;
        v127 = gameObject;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * (int)v6 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v7 )
            goto LABEL_69;
          v129 = v6;
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
              v130 = v8 - 1;
              if ( (int)v8 >= 1 )
                break;
            }
          }
LABEL_65:
          v5 = v127;
          v6 = v129 + 1;
          if ( v129 + 1 == (_DWORD)v128 )
            return;
          if ( v6 >= *(_DWORD *)(v127 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v8 )
LABEL_67:
          sub_1C2209C(gameObject, v4);
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
          *(_QWORD *)&v136.fields.currentCryptoKey = v13;
          *(_QWORD *)&v136.fields.fakeValue = v17;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v136, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v14, v15, v16, v18, 0LL);
          if ( !byte_4BD9C3C )
          {
            gameObject = sub_1C21E38(&EventRewardSaveData_TypeInfo);
            byte_4BD9C3C = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v21 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v22 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 5LL);
            v135 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v135, v23, v24, v25);
            if ( !v22 )
              break;
            v32 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v22->max_length )
              goto LABEL_67;
            v22->m_Items[0] = (Il2CppObject *)v32;
            sub_1C21DDC((PartyOrganizationUtility_o *)v22->m_Items, v32, v26, v27, v28, v29, v30, v31);
            v134 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v134, v33, v34, v35);
            v42 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 1 )
              goto LABEL_67;
            v22->m_Items[1] = (Il2CppObject *)v42;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v22->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
            v133 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v133, v43, v44, v45);
            v52 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 2 )
              goto LABEL_67;
            v22->m_Items[2] = (Il2CppObject *)v52;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v22->m_Items[2], v52, v46, v47, v48, v49, v50, v51);
            v132 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v132,
                           v53,
                           v54,
                           v55);
            v62 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 3 )
              goto LABEL_67;
            v22->m_Items[3] = (Il2CppObject *)v62;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v22->m_Items[3], v62, v56, v57, v58, v59, v60, v61);
            v131 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v131, v63, v64, v65);
            v72 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v22->max_length <= 4 )
              goto LABEL_67;
            v22->m_Items[4] = (Il2CppObject *)v72;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v22->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
            gameObject = (__int64)System_String__Format_63129984((System_String_o *)StringLiteral_19461/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v22, 0LL);
            if ( !v21 )
              break;
          }
          else
          {
            if ( !v21 )
              break;
            mText = v21->fields.mText;
            v74 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 5LL);
            v135 = *(_DWORD *)(v11 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v135, v75, v76, v77);
            if ( !v74 )
              break;
            v84 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v74->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v74->max_length )
              goto LABEL_67;
            v74->m_Items[0] = (Il2CppObject *)v84;
            sub_1C21DDC((PartyOrganizationUtility_o *)v74->m_Items, v84, v78, v79, v80, v81, v82, v83);
            v134 = *(_DWORD *)(v11 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v134, v85, v86, v87);
            v94 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v74->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v74->max_length <= 1 )
              goto LABEL_67;
            v74->m_Items[1] = (Il2CppObject *)v94;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[1], v94, v88, v89, v90, v91, v92, v93);
            v133 = *(_DWORD *)(v11 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v133, v95, v96, v97);
            v104 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v74->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v74->max_length <= 2 )
              goto LABEL_67;
            v74->m_Items[2] = (Il2CppObject *)v104;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[2], v104, v98, v99, v100, v101, v102, v103);
            v132 = *v12;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v132,
                           v105,
                           v106,
                           v107);
            v114 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v74->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v74->max_length <= 3 )
              goto LABEL_67;
            v74->m_Items[3] = (Il2CppObject *)v114;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[3], v114, v108, v109, v110, v111, v112, v113);
            v131 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v131, v115, v116, v117);
            v124 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1C21F74(gameObject, v74->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v126 = sub_1C220B8();
                sub_1C21F60(v126, 0LL);
              }
            }
            if ( v74->max_length <= 4 )
              goto LABEL_67;
            v74->m_Items[4] = (Il2CppObject *)v124;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[4], v124, v118, v119, v120, v121, v122, v123);
            v125 = System_String__Format_63129984((System_String_o *)StringLiteral_19461/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v74, 0LL);
            gameObject = (__int64)System_String__Concat_63126736(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v125, 0LL);
          }
          UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
          if ( v130 == v10 )
            goto LABEL_65;
          if ( (unsigned int)++v10 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1C22094(gameObject, v4);
      }
    }
  }
}