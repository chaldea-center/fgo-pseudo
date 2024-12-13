void __fastcall EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_4B3487C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B3487C = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BD36B4(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0LL);
}


void __fastcall EventRewardVoicePlayCountView__ResetCount(
        EventRewardVoicePlayCountView_o *this,
        const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B3487D & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B3487D = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1BD36B4(0LL, method);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x25
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x25
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x25
  System_String_o *mText; // x24
  System_Object_array *v81; // x25
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x26
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x26
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x26
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x26
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x26
  System_String_o *v132; // x0
  __int64 v133; // x0
  __int64 v134; // [xsp+0h] [xbp-A0h]
  __int64 v135; // [xsp+8h] [xbp-98h]
  unsigned int v136; // [xsp+14h] [xbp-8Ch]
  int v137; // [xsp+18h] [xbp-88h]
  int32_t v138; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v139; // [xsp+20h] [xbp-80h] BYREF
  int v140; // [xsp+34h] [xbp-6Ch] BYREF
  int v141; // [xsp+38h] [xbp-68h] BYREF
  int v142; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4B3487B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventVoicePlayMaster___, v3);
    sub_1BD3458(&int_TypeInfo, v4);
    sub_1BD3458(&object___TypeInfo, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v8);
    sub_1BD3458(&StringLiteral_19359/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v9);
    byte_4B3487B = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0LL);
  if ( gameObject )
  {
    v12 = gameObject;
    v135 = *(_QWORD *)(gameObject + 24);
    if ( v135 )
    {
      if ( (int)v135 >= 1 )
      {
        if ( !(_DWORD)v135 )
          goto LABEL_67;
        v13 = 0;
        v134 = gameObject;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8LL * (int)v13 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_69;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v14 )
            goto LABEL_69;
          v136 = v13;
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
              v137 = v15 - 1;
              if ( (int)v15 >= 1 )
                break;
            }
          }
LABEL_65:
          v12 = v134;
          v13 = v136 + 1;
          if ( v136 + 1 == (_DWORD)v135 )
            return;
          if ( v13 >= *(_DWORD *)(v134 + 24) )
            goto LABEL_67;
        }
        if ( !(_DWORD)v15 )
LABEL_67:
          sub_1BD36BC(gameObject, v11);
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
          *(_QWORD *)&v143.fields.currentCryptoKey = v20;
          *(_QWORD *)&v143.fields.fakeValue = v24;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v143, 0LL);
          EventRewardSaveData__LoadEventVoicePlayCount(v21, v22, v23, v25, 0LL);
          if ( !byte_4B348E8 )
          {
            gameObject = sub_1BD3458(&EventRewardSaveData_TypeInfo, v11);
            byte_4B348E8 = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            break;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0LL);
          v28 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v29 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 5LL);
            v142 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v142, v30, v31, v32);
            if ( !v29 )
              break;
            v39 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v29->max_length )
              goto LABEL_67;
            v29->m_Items[0] = (Il2CppObject *)v39;
            sub_1BD33FC((PartyOrganizationUtility_o *)v29->m_Items, v39, v33, v34, v35, v36, v37, v38);
            v141 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v141, v40, v41, v42);
            v49 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 1 )
              goto LABEL_67;
            v29->m_Items[1] = (Il2CppObject *)v49;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v29->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
            v140 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v140, v50, v51, v52);
            v59 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 2 )
              goto LABEL_67;
            v29->m_Items[2] = (Il2CppObject *)v59;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v29->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
            v139 = *v19;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v139,
                           v60,
                           v61,
                           v62);
            v69 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 3 )
              goto LABEL_67;
            v29->m_Items[3] = (Il2CppObject *)v69;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v29->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
            v138 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v138, v70, v71, v72);
            v79 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v29->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v29->max_length <= 4 )
              goto LABEL_67;
            v29->m_Items[4] = (Il2CppObject *)v79;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v29->m_Items[4], v79, v73, v74, v75, v76, v77, v78);
            gameObject = (__int64)System_String__Format_62539756((System_String_o *)StringLiteral_19359/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v29, 0LL);
            if ( !v28 )
              break;
          }
          else
          {
            if ( !v28 )
              break;
            mText = v28->fields.mText;
            v81 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 5LL);
            v142 = *(_DWORD *)(v18 + 16);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v142, v82, v83, v84);
            if ( !v81 )
              break;
            v91 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v81->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( !v81->max_length )
              goto LABEL_67;
            v81->m_Items[0] = (Il2CppObject *)v91;
            sub_1BD33FC((PartyOrganizationUtility_o *)v81->m_Items, v91, v85, v86, v87, v88, v89, v90);
            v141 = *(_DWORD *)(v18 + 20);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v141, v92, v93, v94);
            v101 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v81->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v81->max_length <= 1 )
              goto LABEL_67;
            v81->m_Items[1] = (Il2CppObject *)v101;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v81->m_Items[1], v101, v95, v96, v97, v98, v99, v100);
            v140 = *(_DWORD *)(v18 + 24);
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v140, v102, v103, v104);
            v111 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v81->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v81->max_length <= 2 )
              goto LABEL_67;
            v81->m_Items[2] = (Il2CppObject *)v111;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v81->m_Items[2], v111, v105, v106, v107, v108, v109, v110);
            v139 = *v19;
            gameObject = j_il2cpp_value_box_0(
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                           &v139,
                           v112,
                           v113,
                           v114);
            v121 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v81->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_70;
            }
            if ( v81->max_length <= 3 )
              goto LABEL_67;
            v81->m_Items[3] = (Il2CppObject *)v121;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v81->m_Items[3], v121, v115, v116, v117, v118, v119, v120);
            v138 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(int_TypeInfo, &v138, v122, v123, v124);
            v131 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_1BD3594(gameObject, v81->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_70:
                v133 = sub_1BD36D8();
                sub_1BD3580(v133, 0LL);
              }
            }
            if ( v81->max_length <= 4 )
              goto LABEL_67;
            v81->m_Items[4] = (Il2CppObject *)v131;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v81->m_Items[4], v131, v125, v126, v127, v128, v129, v130);
            v132 = System_String__Format_62539756((System_String_o *)StringLiteral_19359/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v81, 0LL);
            gameObject = (__int64)System_String__Concat_62536508(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v132, 0LL);
          }
          UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
          if ( v137 == v17 )
            goto LABEL_65;
          if ( (unsigned int)++v17 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_67;
        }
LABEL_69:
        sub_1BD36B4(gameObject, v11);
      }
    }
  }
}