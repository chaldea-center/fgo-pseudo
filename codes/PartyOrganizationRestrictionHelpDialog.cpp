void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0

  if ( (byte_42E586D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw___TypeInfo, v8, v9, v10);
    byte_42E586D = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_B5D5DC(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v11->static_fields->DeckMemberMax);
  sub_B5D560(&this->fields.memberObjectList);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v4; // x19
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B5D560(p_callbackFunc);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_19511344(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_19511344(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_42E586B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v6, v7, v8);
    byte_42E586B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B5D560(p_closeCallbackFunc);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndOpen(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Init(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E5868 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E5868 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageDeckLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageSelfOrSupportLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.partyMemberBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.supportMemberBase) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__OnClickClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E586C & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42E586C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyListViewItem_o *partyItem,
        int32_t type,
        System_String_o *message,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callback,
        int32_t index,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int64_t gameObject; // x0
  int64_t v109; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *v111; // x21
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct PartyOrganizationConfirmItemDraw_array *v115; // x8
  __int64 v116; // x21
  __int64 v117; // x19
  int64_t v118; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // x25
  signed __int64 v120; // x26
  int32_t v121; // w27
  QuestRestrictionInfo_o *v122; // x19
  int v123; // w8
  int32_t LimitCount; // w20
  unsigned int v125; // w25
  FollowerInfo_o *v126; // x21
  __int64 v127; // x19
  __int64 v128; // x23
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v130; // x21
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v132; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v133; // x0
  UILabel_o *v134; // x21
  System_Collections_Generic_IEnumerable_T__o *v135; // x28
  System_Collections_Generic_List_int__o *v136; // x21
  UILabel_o *messageSelfOrSupportLabel; // x21
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v140; // x1
  UILabel_o *v141; // x20
  __int64 *v142; // x8
  UILabel_o *v143; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w26
  int v146; // w19
  int64_t v147; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v148; // x22
  __int64 v149; // x24
  FollowerInfo_o *v150; // x25
  PartyOrganizationListViewItem_o *v151; // x21
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v153; // x0
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v155; // x8
  __int64 v156; // x19
  void *monitor; // x21
  UserServantCollectionMaster_o *v158; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v159; // x22
  unsigned __int64 v160; // x25
  signed __int64 v161; // x24
  System_Collections_Generic_IEnumerable_T__o *v162; // x23
  int32_t v163; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v165; // x21
  int32_t v166; // w0
  int32_t v167; // w27
  PartyOrganizationListViewItem_o *v168; // x28
  PartyOrganizationListViewItem_o *v169; // x21
  struct UnityEngine_GameObject_o *v170; // x20
  struct PartyOrganizationConfirmItemDraw_array *v171; // x21
  bool v172; // w4
  PartyOrganizationConfirmItemDraw_array *v173; // x1
  UnityEngine_GameObject_o *v174; // x2
  int32_t i; // w20
  System_Action_o *v176; // x19
  __int64 v177; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v178; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v179; // [xsp+20h] [xbp-90h]
  signed __int64 v180; // [xsp+28h] [xbp-88h]
  signed __int64 v181; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_IEnumerable_T__o *v182; // [xsp+30h] [xbp-80h]
  PartyOrganizationRestrictionHelpDialog_o *v183; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16

  if ( (byte_42E5869 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, type, message);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v24, v25, v26);
    sub_B5D5C4(&DataManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&NetworkManager_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_10492/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_10485/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_10491/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_10488/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_10484/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_10489/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_1/*""*/, v105, v106, v107);
    byte_42E5869 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(&this->fields.callbackFunc);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (int64_t)this->fields.closeButton;
      if ( gameObject )
      {
        (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
          gameObject,
          0LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
        closeLabel = this->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
        if ( closeLabel )
        {
          UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (int64_t)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            gameObject = (int64_t)this->fields.messageDeckLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
              if ( gameObject )
              {
                UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                gameObject = (int64_t)this->fields.partyMemberBase;
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                  gameObject = (int64_t)this->fields.supportMemberBase;
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    v183 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = System_String__IsNullOrEmpty(message, 0LL);
                        if ( (gameObject & 1) == 0 )
                          goto LABEL_137;
                        if ( !questRestrictionInfo )
                          break;
                        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
                        if ( !restrictionEntityList )
                          break;
                        if ( restrictionEntityList->max_length <= index )
                          goto LABEL_196;
                        gameObject = (int64_t)restrictionEntityList->m_Items[index];
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)RestrictionEntity__GetClassIndividualityRestrictionMessage(
                                                (RestrictionEntity_o *)gameObject,
                                                0LL);
                        if ( !this->fields.messageLabel )
                          break;
                        v140 = (System_String_o *)gameObject;
                        gameObject = (int64_t)this->fields.messageLabel;
                        goto LABEL_139;
                      case 3:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10491/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_135;
                      case 6:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_135;
                      case 7:
                        v143 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v143 )
                          break;
                        UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !questRestrictionInfo )
                          break;
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                                                (NpcFollowerMaster_o *)gameObject,
                                                questRestrictionInfo->fields.questId,
                                                questRestrictionInfo->fields.questPhase,
                                                0LL);
                        if ( !gameObject )
                          break;
                        supportMemberObjectList = this->fields.supportMemberObjectList;
                        if ( !supportMemberObjectList )
                          break;
                        max_length = supportMemberObjectList->max_length;
                        v146 = *(_DWORD *)(gameObject + 24);
                        v147 = gameObject;
                        v148 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v148,
                          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v146 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v149 = 0LL;
                            while ( (unsigned int)v149 < *(_DWORD *)(v147 + 24) )
                            {
                              v150 = *(FollowerInfo_o **)(v147 + 32 + 8 * v149);
                              if ( !v150 )
                                goto LABEL_195;
                              if ( !v150->fields.isMySvtOrNpc )
                              {
                                v151 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_29728604(
                                  v151,
                                  v149,
                                  v150,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v148 )
                                  goto LABEL_195;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v148,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
                                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                              }
                              if ( (int)++v149 >= v146 || (int)v149 >= max_length )
                                goto LABEL_187;
                            }
                            goto LABEL_196;
                          }
                          goto LABEL_187;
                        }
                        for ( i = 0; ; ++i )
                        {
                          gameObject = (int64_t)BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            gameObject = (int64_t)BalanceConfig_TypeInfo;
                          }
                          if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
                            goto LABEL_187;
                          if ( !partyItem )
                            goto LABEL_195;
                          gameObject = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !gameObject )
                            goto LABEL_195;
                          v109 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v148 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v148,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
LABEL_187:
                          supportMemberBase = this->fields.supportMemberBase;
                          v132 = this->fields.supportMemberObjectList;
                          if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                          }
                          v133 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v148;
LABEL_191:
                          v173 = v132;
                          v174 = supportMemberBase;
                          v172 = 0;
LABEL_192:
                          PartyOrganizationConfirmItemDraw__SetPartyIcon(v133, v173, v174, 1, v172, 0LL);
LABEL_193:
                          this->fields.state = 1;
                          v176 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                          System_Action___ctor(
                            v176,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                            0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v176, 0, 0LL);
                          return;
                        }
                        break;
                      case 8:
                      case 14:
                        v111 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v111 )
                          break;
                        UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        if ( !*(_DWORD *)(gameObject + 24) )
                          goto LABEL_196;
                        messageDeckLabel = this->fields.messageDeckLabel;
                        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
                        if ( !messageDeckLabel )
                          break;
                        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)gameObject,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v115 = this->fields.supportMemberObjectList;
                        if ( !v115 )
                          break;
                        v116 = *(_QWORD *)&v115->max_length;
                        v117 = *(_QWORD *)(gameObject + 24);
                        v118 = gameObject;
                        v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v119,
                          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v117 < 1 || (int)v116 < 1 )
                          goto LABEL_56;
                        v180 = (int)v116;
                        v181 = (int)v117;
                        v120 = 0LL;
                        v178 = v119;
                        v179 = MasterData_WarQuestSelectionMaster;
                        do
                        {
                          if ( v120 >= (unsigned __int64)*(unsigned int *)(v118 + 24) )
                            goto LABEL_196;
                          v121 = *(_DWORD *)(v118 + 4 * v120 + 32);
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_WarQuestSelectionMaster )
                            goto LABEL_195;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  MasterData_WarQuestSelectionMaster,
                                                  gameObject,
                                                  v121,
                                                  0LL);
                          v122 = questRestrictionInfo;
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_195;
                          v123 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v123 >= 1 )
                          {
                            v125 = 0;
                            while ( 1 )
                            {
                              if ( v125 >= v123 )
                                goto LABEL_196;
                              v126 = QuestFollowerList->m_Items[v125];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v122->fields.questId, 0LL);
                              if ( !v126 )
                                goto LABEL_195;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v126, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v128 = *(_QWORD *)(gameObject + 48);
                                v127 = *(_QWORD *)(gameObject + 56);
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v188.fields.currentCryptoKey = v128;
                                *(_QWORD *)&v188.fields.fakeValue = v127;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v188,
                                               0LL);
                                v122 = questRestrictionInfo;
                                if ( (_DWORD)gameObject == v121 )
                                  break;
                              }
                              v123 = QuestFollowerList->max_length;
                              if ( (int)++v125 >= v123 )
                                goto LABEL_52;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
                            LimitCount = FollowerInfo__getLimitCount(v126, 0, ReturnTypeByQuestId, 0LL);
LABEL_52:
                            v119 = v178;
                            MasterData_WarQuestSelectionMaster = v179;
                          }
                          v130 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_29725208(
                            v130,
                            v120,
                            v121,
                            LimitCount,
                            setupInfo,
                            v122,
                            0LL,
                            0,
                            0LL);
                          if ( !v119 )
                            goto LABEL_195;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v119,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v130,
                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                          this = v183;
                          ++v120;
                        }
                        while ( v120 < v181 && v120 < v180 );
LABEL_56:
                        supportMemberBase = this->fields.supportMemberBase;
                        v132 = this->fields.supportMemberObjectList;
                        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        }
                        v133 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v119;
                        goto LABEL_191;
                      case 10:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10489/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_135;
                      case 11:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10488/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_135;
                      case 12:
                      case 16:
                        v134 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v134 )
                          break;
                        UILabel__set_text(v134, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (int64_t)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                                questRestrictionInfo,
                                                &npcInfoDictionary,
                                                index,
                                                0,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v135 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !DataManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          }
                          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
                          if ( gameObject )
                          {
                            QuestPhaseMaster__TryGetEntity(
                              (QuestPhaseMaster_o *)gameObject,
                              &entity,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
                            if ( entity && type == 16 && !entity->fields.isNpcOnly )
                            {
                              v136 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_50870440(
                                v136,
                                v135,
                                (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
                              if ( !v136 )
                                break;
                              System_Collections_Generic_List_int___Add(
                                v136,
                                0,
                                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                              v135 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      v136,
                                                                                      (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
                            }
                            if ( type == 16 )
                              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
                            else
                              messageSelfOrSupportLabel = this->fields.messageDeckLabel;
                            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                                 questRestrictionInfo,
                                                                 index,
                                                                 0LL);
                            gameObject = (int64_t)System_String__Format(message, DialogTargetName, 0LL);
                            if ( messageSelfOrSupportLabel )
                            {
                              UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)gameObject, 0LL);
                              gameObject = (int64_t)this->fields.supportMemberBase;
                              if ( gameObject )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                                gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v135 )
                                  {
                                    v155 = this->fields.supportMemberObjectList;
                                    if ( v155 )
                                    {
                                      v156 = *(_QWORD *)&v155->max_length;
                                      monitor = v135[1].monitor;
                                      v158 = (UserServantCollectionMaster_o *)gameObject;
                                      v159 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                        v159,
                                        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v156 >= 1 )
                                      {
                                        v160 = 0LL;
                                        v161 = (int)monitor;
                                        v162 = v135 + 2;
                                        v182 = v135;
                                        while ( v160 < LODWORD(v135[1].monitor) )
                                        {
                                          v163 = *((_DWORD *)&v162->klass + v160);
                                          if ( v163 )
                                          {
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_195;
                                            if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                                    v163,
                                                    (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_199;
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_195;
                                            Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                                     v163,
                                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v165 = (FollowerInfo_o *)Item;
                                              v166 = FollowerInfo__GetReturnTypeByQuestId(
                                                       questRestrictionInfo->fields.questId,
                                                       0LL);
                                              v167 = FollowerInfo__getLimitCount(v165, 0, v166, 0LL);
                                            }
                                            else
                                            {
LABEL_199:
                                              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !NetworkManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              }
                                              gameObject = NetworkManager__get_UserId(0LL);
                                              if ( !v158 )
                                                goto LABEL_195;
                                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v158,
                                                                      gameObject,
                                                                      v163,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_195;
                                              v167 = *(_DWORD *)(gameObject + 56);
                                              v165 = 0LL;
                                            }
                                            v168 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_29725208(
                                              v168,
                                              v160,
                                              v163,
                                              v167,
                                              setupInfo,
                                              questRestrictionInfo,
                                              v165,
                                              0,
                                              0LL);
                                            if ( !v159 )
                                              goto LABEL_195;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v159,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v168,
                                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                            v135 = v182;
                                            this = v183;
                                          }
                                          else
                                          {
                                            v169 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_29764096(
                                              v169,
                                              v160,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v159 )
                                              goto LABEL_195;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v159,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v169,
                                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                          }
                                          if ( (__int64)++v160 >= v161 || (__int64)v160 >= (int)v156 )
                                            goto LABEL_170;
                                        }
LABEL_196:
                                        v177 = sub_B5D6C8(gameObject);
                                        sub_B5D668(v177, 0LL);
                                      }
LABEL_170:
                                      v170 = this->fields.supportMemberBase;
                                      v171 = this->fields.supportMemberObjectList;
                                      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      }
                                      v172 = 1;
                                      v133 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v159;
                                      v173 = v171;
                                      v174 = v170;
                                      goto LABEL_192;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          messageLabel = this->fields.messageLabel;
                          v153 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (int64_t)System_String__Format(message, v153, 0LL);
                          if ( messageLabel )
                          {
                            v140 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_139:
                            UILabel__set_text((UILabel_o *)gameObject, v140, 0LL);
                            goto LABEL_193;
                          }
                        }
                        break;
                      case 15:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10492/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_135;
                      default:
                        v141 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v142 = &StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_135:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v142, 0LL);
                        if ( !v141 )
                          break;
                        UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
LABEL_137:
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v140 = message;
                        goto LABEL_139;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_195:
    sub_B5D69C(gameObject, v109);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog__Open_19507156(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyListViewItem_o *partyItem,
        int32_t slotNo,
        int32_t restrictionType,
        System_String_o *message,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int64_t gameObject; // x0
  int64_t UserId; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v130; // x23
  UILabel_o *v131; // x23
  UserServantCollectionMaster_o *v132; // x22
  struct PartyOrganizationConfirmItemDraw_array *v133; // x8
  __int64 v134; // x20
  __int64 v135; // x19
  int64_t v136; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // x23
  signed __int64 v138; // x25
  int32_t v139; // w26
  int32_t v140; // w28
  PartyOrganizationListViewItem_o *v141; // x27
  struct UnityEngine_GameObject_o *v142; // x20
  struct PartyOrganizationConfirmItemDraw_array *v143; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v144; // x0
  bool IsMyServantOrNpcRestriction_34282120; // w0
  UILabel_o *titleLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *v147; // x27
  bool IsSelectableNormalSupport; // w25
  System_Collections_Generic_List_int__o *v149; // x23
  System_String_o *v150; // x1
  UILabel_o *v151; // x20
  __int64 *v152; // x8
  UILabel_o *v153; // x24
  struct PartyOrganizationConfirmItemDraw_array *v154; // x8
  int max_length; // w20
  int v156; // w19
  int64_t v157; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // x22
  __int64 v159; // x23
  FollowerInfo_o *v160; // x26
  PartyOrganizationListViewItem_o *v161; // x25
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x25
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x24
  System_Collections_Generic_List_int__o *v164; // x23
  unsigned __int64 v165; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v168; // x0
  int64_t v169; // x23
  struct PartyOrganizationConfirmItemDraw_array *v170; // x8
  __int64 v171; // x19
  __int64 v172; // x8
  unsigned __int64 v173; // x24
  int32_t v174; // w25
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t v176; // w27
  PartyOrganizationListViewItem_o *v177; // x26
  int32_t i; // w20
  UILabel_o *messageLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct UILabel_o *messageDeckLabel; // x23
  Il2CppObject *v182; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v184; // x20
  void *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v186; // x22
  unsigned __int64 v187; // x25
  System_Collections_Generic_IEnumerable_T__o *v188; // x24
  System_Collections_Generic_IEnumerable_T__o *v189; // x20
  int32_t v190; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v192; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  PartyOrganizationListViewItem_o *v195; // x23
  PartyOrganizationListViewItem_o *v196; // x23
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v198; // x21
  bool v199; // w4
  PartyOrganizationConfirmItemDraw_array *v200; // x1
  UnityEngine_GameObject_o *v201; // x2
  System_Action_o *v202; // x20
  __int64 v203; // x0
  UserServantCollectionMaster_o *v204; // [xsp+20h] [xbp-90h]
  signed __int64 v205; // [xsp+28h] [xbp-88h]
  PartyOrganizationRestrictionHelpDialog_o *v206; // [xsp+38h] [xbp-78h]
  QuestRestrictionInfo_o *v207; // [xsp+40h] [xbp-70h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42E586A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, slotNo, *(_QWORD *)&restrictionType);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v28, v29, v30);
    sub_B5D5C4(&DataManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v40, v41, v42);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v43, v44, v45);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v70, v71, v72);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v73, v74, v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v79, v80, v81);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v82, v83, v84);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v85, v86, v87);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v88, v89, v90);
    sub_B5D5C4(&NetworkManager_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v97, v98, v99);
    sub_B5D5C4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v100, v101, v102);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_10485/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_10484/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_10489/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_1/*""*/, v124, v125, v126);
    byte_42E586A = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(&this->fields.callbackFunc);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (int64_t)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_195;
    (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10483/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_195;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (int64_t)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_195;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_195;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_195;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (int64_t)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v206 = this;
    v207 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_195;
        IsMyServantOrNpcRestriction_34282120 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        if ( IsMyServantOrNpcRestriction_34282120 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
          if ( !titleLabel )
            goto LABEL_195;
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (int64_t)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_195;
          v147 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( !*(_QWORD *)(gameObject + 24) )
          {
            messageLabel = this->fields.messageLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
            gameObject = (int64_t)System_String__Format(message, DialogTargetName, 0LL);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
LABEL_192:
              this = v206;
              goto LABEL_193;
            }
            goto LABEL_195;
          }
          IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, slotNo, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !gameObject )
            goto LABEL_195;
          QuestPhaseMaster__TryGetEntity(
            (QuestPhaseMaster_o *)gameObject,
            &entity,
            questRestrictionInfo->fields.questId,
            questRestrictionInfo->fields.questPhase,
            0LL);
          if ( IsSelectableNormalSupport )
          {
            if ( entity && !entity->fields.isNpcOnly )
            {
              v149 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_50870440(
                v149,
                v147,
                (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v149 )
                goto LABEL_195;
              System_Collections_Generic_List_int___Add(
                v149,
                0,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              v147 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                      v149,
                                                                      (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
            if ( !gameObject )
LABEL_195:
              sub_B5D69C(gameObject, UserId);
            v150 = message;
          }
          else
          {
            messageDeckLabel = this->fields.messageDeckLabel;
            v182 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (int64_t)System_String__Format(message, v182, 0LL);
            if ( !messageDeckLabel )
              goto LABEL_195;
            v150 = (System_String_o *)gameObject;
            gameObject = (int64_t)messageDeckLabel;
          }
          UILabel__set_text((UILabel_o *)gameObject, v150, 0LL);
          gameObject = (int64_t)this->fields.supportMemberBase;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( gameObject )
            {
              gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)gameObject,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( v147 )
              {
                supportMemberObjectList = this->fields.supportMemberObjectList;
                v204 = (UserServantCollectionMaster_o *)gameObject;
                if ( supportMemberObjectList )
                {
                  v184 = *(_QWORD *)&supportMemberObjectList->max_length;
                  monitor = v147[1].monitor;
                  v186 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v186,
                    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                  if ( (int)monitor >= 1 && (int)v184 >= 1 )
                  {
                    v205 = (int)v184;
                    v187 = 0LL;
                    v188 = v147 + 2;
                    v189 = v147;
                    while ( v187 < LODWORD(v147[1].monitor) )
                    {
                      v190 = *((_DWORD *)&v188->klass + v187);
                      if ( v190 )
                      {
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                v190,
                                (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                          goto LABEL_199;
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                 v190,
                                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                        if ( Item )
                        {
                          v192 = (FollowerInfo_o *)Item;
                          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v207->fields.questId, 0LL);
                          LimitCount = FollowerInfo__getLimitCount(v192, 0, ReturnTypeByQuestId, 0LL);
                        }
                        else
                        {
LABEL_199:
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          UserId = NetworkManager__get_UserId(0LL);
                          gameObject = (int64_t)v204;
                          if ( !v204 )
                            goto LABEL_195;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  v204,
                                                  UserId,
                                                  v190,
                                                  0LL);
                          if ( !gameObject )
                            goto LABEL_195;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          v192 = 0LL;
                        }
                        v195 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_29725208(
                          v195,
                          v187,
                          v190,
                          LimitCount,
                          setupInfo,
                          v207,
                          v192,
                          0,
                          0LL);
                        if ( !v186 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v186,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v195,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                        v147 = v189;
                      }
                      else
                      {
                        v196 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_29764096(v196, v187, 1, 0LL, 0LL, 1, 0, 0LL);
                        if ( !v186 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v186,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v196,
                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                      }
                      if ( (__int64)++v187 >= (int)monitor || (__int64)v187 >= v205 )
                        goto LABEL_180;
                    }
                    goto LABEL_196;
                  }
LABEL_180:
                  supportMemberBase = this->fields.supportMemberBase;
                  v198 = this->fields.supportMemberObjectList;
                  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                  }
                  v199 = 1;
                  v144 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v186;
                  v200 = v198;
                  v201 = supportMemberBase;
                  goto LABEL_191;
                }
              }
            }
          }
          goto LABEL_195;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_195;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(questRestrictionInfo, slotNo, 0LL);
        RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(questRestrictionInfo, slotNo, 0LL);
        v164 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v164,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        if ( !NeedIndividualityList )
          goto LABEL_195;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v165 = 0LL;
          while ( RangeTypeList )
          {
            if ( (__int64)v165 < RangeTypeList->fields._size )
            {
              if ( v165 >= (unsigned int)RangeTypeList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( RangeTypeList->fields._items->m_Items[v165 + 1] == 1 )
              {
                if ( v165 >= (unsigned int)NeedIndividualityList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                if ( !v164 )
                  goto LABEL_195;
                System_Collections_Generic_List_int___AddRange(
                  v164,
                  (System_Collections_Generic_IEnumerable_T__o *)NeedIndividualityList->fields._items->m_Items[v165],
                  (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( (__int64)++v165 >= NeedIndividualityList->fields._size )
              goto LABEL_118;
          }
          goto LABEL_195;
        }
LABEL_118:
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_195;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v167 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v164,
                 (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
        v168 = System_Linq_Enumerable__Intersect_int_(
                 v167,
                 CollectionList,
                 (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v168,
                                (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_195;
        v169 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_77:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_193:
            this->fields.state = 1;
            v202 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v202,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v202, 0, 0LL);
            return;
          }
          goto LABEL_195;
        }
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v170 = this->fields.supportMemberObjectList;
        if ( !v170 )
          goto LABEL_195;
        v171 = *(_QWORD *)&v170->max_length;
        v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v158,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v171 < 1 )
          goto LABEL_186;
        v172 = *(_QWORD *)(v169 + 24);
        if ( (int)v172 < 1 )
          goto LABEL_186;
        v173 = 0LL;
        while ( v173 < (unsigned int)v172 )
        {
          v174 = *(_DWORD *)(v169 + 32 + 4 * v173);
          gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_195;
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)gameObject,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_195;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  MasterData_WarQuestSelectionMaster,
                                  gameObject,
                                  v174,
                                  0LL);
          if ( !gameObject )
            goto LABEL_195;
          v176 = *(_DWORD *)(gameObject + 56);
          v177 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29725208(
            v177,
            v173,
            v174,
            v176,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v158 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v158,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v177,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          if ( (__int64)++v173 < (int)v171 )
          {
            LODWORD(v172) = *(_DWORD *)(v169 + 24);
            if ( (__int64)v173 < (int)v172 )
              continue;
          }
          goto LABEL_186;
        }
        goto LABEL_196;
      case 3:
        v151 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v152 = &StringLiteral_10489/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_75;
      case 4:
      case 5:
        v130 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v130 )
          goto LABEL_195;
        UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_77;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_196;
        v131 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v131 )
          goto LABEL_195;
        UILabel__set_text(v131, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        v132 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)gameObject,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_195;
        v133 = this->fields.supportMemberObjectList;
        if ( !v133 )
          goto LABEL_195;
        v134 = *(_QWORD *)&v133->max_length;
        v135 = *(_QWORD *)(gameObject + 24);
        v136 = gameObject;
        v137 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v137,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v135 < 1 || (int)v134 < 1 )
          goto LABEL_40;
        v138 = 0LL;
        do
        {
          if ( v138 >= (unsigned __int64)*(unsigned int *)(v136 + 24) )
            goto LABEL_196;
          v139 = *(_DWORD *)(v136 + 32 + 4 * v138);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v132 )
            goto LABEL_195;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v132, gameObject, v139, 0LL);
          if ( !gameObject )
            goto LABEL_195;
          v140 = *(_DWORD *)(gameObject + 56);
          v141 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29725208(v141, v138, v139, v140, setupInfo, v207, 0LL, 0, 0LL);
          if ( !v137 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v137,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          ++v138;
        }
        while ( v138 < (int)v135 && v138 < (int)v134 );
LABEL_40:
        v142 = this->fields.supportMemberBase;
        v143 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v144 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v137;
        goto LABEL_190;
      case 6:
        v153 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v153 )
          goto LABEL_195;
        UILabel__set_text(v153, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                                (NpcFollowerMaster_o *)gameObject,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0LL);
        if ( !gameObject )
          goto LABEL_195;
        v154 = this->fields.supportMemberObjectList;
        if ( !v154 )
          goto LABEL_195;
        max_length = v154->max_length;
        v156 = *(_DWORD *)(gameObject + 24);
        v157 = gameObject;
        v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v158,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v156 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              gameObject = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
              goto LABEL_186;
            if ( !partyItem )
              goto LABEL_195;
            gameObject = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_195;
            UserId = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v158 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v158,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( max_length >= 1 )
        {
          v159 = 0LL;
          while ( (unsigned int)v159 < *(_DWORD *)(v157 + 24) )
          {
            v160 = *(FollowerInfo_o **)(v157 + 32 + 8 * v159);
            if ( !v160 )
              goto LABEL_195;
            if ( !v160->fields.isMySvtOrNpc )
            {
              v161 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_29728604(v161, v159, v160, 0, setupInfo, v207, 0LL, 0, 0, 0, 0LL);
              if ( !v158 )
                goto LABEL_195;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v158,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v161,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
            }
            if ( (int)++v159 >= v156 || (int)v159 >= max_length )
              goto LABEL_186;
          }
LABEL_196:
          v203 = sub_B5D6C8(gameObject);
          sub_B5D668(v203, 0LL);
        }
LABEL_186:
        v142 = this->fields.supportMemberBase;
        v143 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v144 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v158;
LABEL_190:
        v200 = v143;
        v201 = v142;
        v199 = 0;
LABEL_191:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v144, v200, v201, 1, v199, 0LL);
        goto LABEL_192;
      case 9:
        v151 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v152 = &StringLiteral_10493/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_75;
      default:
        v151 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v152 = &StringLiteral_10490/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_75:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v152, 0LL);
        if ( !v151 )
          goto LABEL_195;
        UILabel__set_text(v151, (System_String_o *)gameObject, 0LL);
        goto LABEL_77;
    }
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__add_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationRestrictionHelpDialog_o *v12; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E5866 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5866 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v9->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B5D990(v9);
  PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationRestrictionHelpDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E5867 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5867 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v9->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B5D990(v9);
  PartyOrganizationRestrictionHelpDialog__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5A8C & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A8C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}