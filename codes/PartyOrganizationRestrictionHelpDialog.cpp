void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationConfirmItemDraw_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F76F0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw___TypeInfo, v5);
    byte_40F76F0 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B17014(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v6->static_fields->DeckMemberMax,
                                                          v2);
  this->fields.memberObjectList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v9; // x19
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_20224084(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_20224084(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F76EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v10);
    byte_40F76EE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *messageDeckLabel; // x0
  UILabel_o *messageSelfOrSupportLabel; // x0
  UILabel_o *closeLabel; // x0
  UnityEngine_GameObject_o *partyMemberBase; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x0

  if ( (byte_40F76EB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F76EB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_11;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageDeckLabel = this->fields.messageDeckLabel;
  if ( !messageDeckLabel )
    goto LABEL_11;
  UILabel__set_text(messageDeckLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
  if ( !messageSelfOrSupportLabel
    || (UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (partyMemberBase = this->fields.partyMemberBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(partyMemberBase, 0, 0LL),
        (supportMemberBase = this->fields.supportMemberBase) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(supportMemberBase, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__OnClickClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F76EF & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_40F76EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *closeButton; // x0
  UILabel_o *closeLabel; // x21
  System_String_o *v49; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *messageDeckLabel; // x0
  UILabel_o *messageSelfOrSupportLabel; // x0
  UnityEngine_GameObject_o *partyMemberBase; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x0
  UILabel_o *v55; // x21
  System_String_o *v56; // x0
  void *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  UILabel_o *v60; // x19
  System_String_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  WebViewManager_o *v63; // x0
  NpcFollowerMaster_o *v64; // x0
  FollowerInfo_array *v65; // x22
  WebViewManager_o *v66; // x0
  UserServantCollectionMaster_o *v67; // x23
  System_Int32_array *FixedServantPositionSvtIdList; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  struct PartyOrganizationConfirmItemDraw_array *v73; // x8
  __int64 v74; // x21
  __int64 v75; // x19
  System_Int32_array *v76; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x25
  signed __int64 v78; // x26
  int32_t v79; // w27
  int64_t UserId; // x0
  __int64 v81; // x3
  __int64 v82; // x4
  QuestRestrictionInfo_o *v83; // x19
  int v84; // w8
  int32_t LimitCount; // w20
  unsigned int v86; // w25
  FollowerInfo_o *v87; // x21
  int32_t ReturnTypeByQuestId; // w0
  __int64 v89; // x19
  __int64 v90; // x23
  int32_t v91; // w0
  PartyOrganizationListViewItem_o *v92; // x21
  struct UnityEngine_GameObject_o *v93; // x20
  struct PartyOrganizationConfirmItemDraw_array *v94; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v95; // x0
  UILabel_o *v96; // x21
  System_String_o *v97; // x0
  System_Int32_array *MyServantOrNpcSvtIdUnionNpcList; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x28
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  System_Collections_Generic_List_int__o *v105; // x21
  UILabel_o *v106; // x21
  UILabel_o *titleLabel; // x20
  __int64 *v108; // x8
  UILabel_o *v109; // x21
  System_String_o *v110; // x0
  UILabel_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  WebViewManager_o *Instance; // x0
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x0
  FollowerInfo_array *QuestFollowerList; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w26
  int v122; // w19
  FollowerInfo_array *v123; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x22
  __int64 v125; // x3
  __int64 v126; // x4
  __int64 v127; // x23
  FollowerInfo_o *v128; // x25
  PartyOrganizationListViewItem_o *v129; // x21
  System_String_o *v130; // x0
  UILabel_o *v131; // x0
  System_String_o *v132; // x1
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  struct UILabel_o *v137; // x21
  Il2CppObject *v138; // x0
  System_String_o *v139; // x0
  Il2CppObject *DialogTargetName; // x0
  System_String_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  WebViewManager_o *v143; // x0
  WarQuestSelectionMaster_o *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  struct PartyOrganizationConfirmItemDraw_array *v149; // x8
  __int64 v150; // x19
  void *monitor; // x21
  UserServantCollectionMaster_o *v152; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // x22
  __int64 v154; // x3
  __int64 v155; // x4
  unsigned __int64 v156; // x25
  signed __int64 v157; // x23
  System_Collections_Generic_IEnumerable_T__o *v158; // x24
  int32_t v159; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v161; // x21
  int32_t v162; // w0
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  int32_t maxLimitCount; // w27
  int64_t v168; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  PartyOrganizationListViewItem_o *v170; // x28
  PartyOrganizationListViewItem_o *v171; // x21
  struct UnityEngine_GameObject_o *v172; // x20
  struct PartyOrganizationConfirmItemDraw_array *v173; // x21
  bool v174; // w4
  PartyOrganizationConfirmItemDraw_array *v175; // x1
  UnityEngine_GameObject_o *v176; // x2
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  BalanceConfig_c *v179; // x0
  System_Action_o *v180; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v181; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v182; // [xsp+20h] [xbp-90h]
  signed __int64 v183; // [xsp+28h] [xbp-88h]
  signed __int64 v184; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_IEnumerable_T__o *v185; // [xsp+30h] [xbp-80h]
  PartyOrganizationRestrictionHelpDialog_o *v186; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_40F76EC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, partyItem);
    sub_B16FFC(&BalanceConfig_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v26);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v28);
    sub_B16FFC(&LocalizationManager_TypeInfo, v29);
    sub_B16FFC(&NetworkManager_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v32);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v33);
    sub_B16FFC(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B16FFC(&StringLiteral_10351/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v36);
    sub_B16FFC(&StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v37);
    sub_B16FFC(&StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v38);
    sub_B16FFC(&StringLiteral_10346/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v39);
    sub_B16FFC(&StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v40);
    sub_B16FFC(&StringLiteral_10347/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v41);
    sub_B16FFC(&StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v42);
    sub_B16FFC(&StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v43);
    sub_B16FFC(&StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v44);
    sub_B16FFC(&StringLiteral_1/*""*/, v45);
    byte_40F76EC = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&type,
      (System_String_array **)message,
      (System_Boolean_array **)setupInfo,
      (System_Int32_array **)questRestrictionInfo,
      (System_Int32_array *)callback,
      *(System_Int32_array **)&index);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      closeButton = this->fields.closeButton;
      if ( closeButton )
      {
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))closeButton->klass->vtable._14_SetState.method)(
          closeButton,
          0LL,
          1LL,
          closeButton->klass->vtable._15_OnPress.methodPtr);
        closeLabel = this->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
        if ( closeLabel )
        {
          UILabel__set_text(closeLabel, v49, 0LL);
          messageLabel = this->fields.messageLabel;
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            messageDeckLabel = this->fields.messageDeckLabel;
            if ( messageDeckLabel )
            {
              UILabel__set_text(messageDeckLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
              if ( messageSelfOrSupportLabel )
              {
                UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                partyMemberBase = this->fields.partyMemberBase;
                if ( partyMemberBase )
                {
                  UnityEngine_GameObject__SetActive(partyMemberBase, 0, 0LL);
                  supportMemberBase = this->fields.supportMemberBase;
                  if ( supportMemberBase )
                  {
                    UnityEngine_GameObject__SetActive(supportMemberBase, 0, 0LL);
                    v186 = this;
                    switch ( type )
                    {
                      case 3:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_124;
                      case 6:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_124;
                      case 7:
                        v109 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v110 = LocalizationManager__Get((System_String_o *)StringLiteral_10346/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v109 )
                          break;
                        UILabel__set_text(v109, v110, 0LL);
                        v111 = this->fields.messageDeckLabel;
                        if ( !v111 )
                          break;
                        UILabel__set_text(v111, message, 0LL);
                        v112 = this->fields.supportMemberBase;
                        if ( !v112 )
                          break;
                        UnityEngine_GameObject__SetActive(v112, 1, 0LL);
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !Instance )
                          break;
                        MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !questRestrictionInfo )
                          break;
                        if ( !MasterData_WarQuestSelectionMaster )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              MasterData_WarQuestSelectionMaster,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        if ( !QuestFollowerList )
                          break;
                        supportMemberObjectList = this->fields.supportMemberObjectList;
                        if ( !supportMemberObjectList )
                          break;
                        max_length = supportMemberObjectList->max_length;
                        v122 = QuestFollowerList->max_length;
                        v123 = QuestFollowerList;
                        v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v116, v117, v118, v119);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v124,
                          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v122 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v127 = 0LL;
                            while ( (unsigned int)v127 < v123->max_length )
                            {
                              v128 = v123->m_Items[v127];
                              if ( !v128 )
                                goto LABEL_183;
                              if ( !v128->fields.isMySvtOrNpc )
                              {
                                v129 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                            PartyOrganizationListViewItem_TypeInfo,
                                                                            v58,
                                                                            v59,
                                                                            v125,
                                                                            v126);
                                PartyOrganizationListViewItem___ctor_32282080(
                                  v129,
                                  v127,
                                  v128,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v124 )
                                  goto LABEL_183;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v124,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v129,
                                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                              }
                              if ( (int)++v127 >= v122 || (int)v127 >= max_length )
                                goto LABEL_175;
                            }
                            goto LABEL_184;
                          }
                          goto LABEL_175;
                        }
                        for ( i = 0; ; ++i )
                        {
                          v179 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v179 = BalanceConfig_TypeInfo;
                          }
                          if ( i >= v179->static_fields->DeckMemberMax )
                            goto LABEL_175;
                          if ( !partyItem )
                            goto LABEL_183;
                          Member = PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !Member )
                            goto LABEL_183;
                          if ( Member->fields.isFollower && !Member->fields.isMyServantOrNpcRestriction )
                            break;
                        }
                        if ( v124 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v124,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)Member,
                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
LABEL_175:
                          v93 = this->fields.supportMemberBase;
                          v94 = this->fields.supportMemberObjectList;
                          if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                          }
                          v95 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v124;
LABEL_179:
                          v175 = v94;
                          v176 = v93;
                          v174 = 0;
LABEL_180:
                          PartyOrganizationConfirmItemDraw__SetPartyIcon(v95, v175, v176, 1, v174, 0LL);
LABEL_181:
                          this->fields.state = 1;
                          v180 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v133, v134, v135, v136);
                          System_Action___ctor(
                            v180,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                            0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v180, 0, 0LL);
                          return;
                        }
                        break;
                      case 8:
                      case 14:
                        v55 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v55 )
                          break;
                        UILabel__set_text(v55, v56, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                                                    questRestrictionInfo,
                                                                                    0LL);
                        if ( !PartyOrganizationServantSwapExplanationFixedServantText )
                          break;
                        if ( !*((_DWORD *)PartyOrganizationServantSwapExplanationFixedServantText + 6) )
                          goto LABEL_184;
                        v60 = this->fields.messageDeckLabel;
                        v61 = System_String__Format(
                                message,
                                *((Il2CppObject **)PartyOrganizationServantSwapExplanationFixedServantText + 4),
                                0LL);
                        if ( !v60 )
                          break;
                        UILabel__set_text(v60, v61, 0LL);
                        v62 = this->fields.supportMemberBase;
                        if ( !v62 )
                          break;
                        UnityEngine_GameObject__SetActive(v62, 1, 0LL);
                        v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v63 )
                          break;
                        v64 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)v63,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !v64 )
                          break;
                        v65 = NpcFollowerMaster__GetQuestFollowerList(
                                v64,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0LL);
                        v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v66 )
                          break;
                        v67 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v66,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        FixedServantPositionSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                          questRestrictionInfo,
                                                          0LL);
                        if ( !FixedServantPositionSvtIdList )
                          break;
                        v73 = this->fields.supportMemberObjectList;
                        if ( !v73 )
                          break;
                        v74 = *(_QWORD *)&v73->max_length;
                        v75 = *(_QWORD *)&FixedServantPositionSvtIdList->max_length;
                        v76 = FixedServantPositionSvtIdList;
                        v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v69, v70, v71, v72);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v77,
                          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v75 < 1 || (int)v74 < 1 )
                          goto LABEL_56;
                        v183 = (int)v74;
                        v184 = (int)v75;
                        v78 = 0LL;
                        v181 = v77;
                        v182 = v67;
                        do
                        {
                          if ( v78 >= (unsigned __int64)v76->max_length )
                            goto LABEL_184;
                          v79 = v76->m_Items[v78 + 1];
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          UserId = NetworkManager__get_UserId(0LL);
                          if ( !v67 )
                            goto LABEL_183;
                          PartyOrganizationServantSwapExplanationFixedServantText = UserServantCollectionMaster__GetEntityDefinitely(
                                                                                      v67,
                                                                                      UserId,
                                                                                      v79,
                                                                                      0LL);
                          v83 = questRestrictionInfo;
                          if ( !PartyOrganizationServantSwapExplanationFixedServantText || !v65 )
                            goto LABEL_183;
                          v84 = v65->max_length;
                          LimitCount = *((_DWORD *)PartyOrganizationServantSwapExplanationFixedServantText + 14);
                          if ( v84 >= 1 )
                          {
                            v86 = 0;
                            while ( 1 )
                            {
                              if ( v86 >= v84 )
                                goto LABEL_184;
                              v87 = v65->m_Items[v86];
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, 0LL);
                              if ( !v87 )
                                goto LABEL_183;
                              PartyOrganizationServantSwapExplanationFixedServantText = FollowerInfo__getServantLeaderInfo(
                                                                                          v87,
                                                                                          0,
                                                                                          ReturnTypeByQuestId,
                                                                                          0LL);
                              if ( PartyOrganizationServantSwapExplanationFixedServantText )
                              {
                                v90 = *((_QWORD *)PartyOrganizationServantSwapExplanationFixedServantText + 6);
                                v89 = *((_QWORD *)PartyOrganizationServantSwapExplanationFixedServantText + 7);
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v191.fields.currentCryptoKey = v90;
                                *(_QWORD *)&v191.fields.fakeValue = v89;
                                PartyOrganizationServantSwapExplanationFixedServantText = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                                                    v191,
                                                                                                    0LL);
                                v83 = questRestrictionInfo;
                                if ( (_DWORD)PartyOrganizationServantSwapExplanationFixedServantText == v79 )
                                  break;
                              }
                              v84 = v65->max_length;
                              if ( (int)++v86 >= v84 )
                                goto LABEL_52;
                            }
                            v91 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v87, 0, v91, 0LL);
LABEL_52:
                            v77 = v181;
                            v67 = v182;
                          }
                          v92 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                     PartyOrganizationListViewItem_TypeInfo,
                                                                     v58,
                                                                     v59,
                                                                     v81,
                                                                     v82);
                          PartyOrganizationListViewItem___ctor_32278708(
                            v92,
                            v78,
                            v79,
                            LimitCount,
                            setupInfo,
                            v83,
                            0LL,
                            0,
                            0LL);
                          if ( !v77 )
                            goto LABEL_183;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v77,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                          this = v186;
                          ++v78;
                        }
                        while ( v78 < v184 && v78 < v183 );
LABEL_56:
                        v93 = this->fields.supportMemberBase;
                        v94 = this->fields.supportMemberObjectList;
                        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        }
                        v95 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v77;
                        goto LABEL_179;
                      case 10:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 11:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10347/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 12:
                      case 16:
                        v96 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v96 )
                          break;
                        UILabel__set_text(v96, v97, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        MyServantOrNpcSvtIdUnionNpcList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                                            questRestrictionInfo,
                                                            &npcInfoDictionary,
                                                            index,
                                                            0,
                                                            0LL);
                        if ( !MyServantOrNpcSvtIdUnionNpcList )
                          break;
                        v99 = (System_Collections_Generic_IEnumerable_T__o *)MyServantOrNpcSvtIdUnionNpcList;
                        if ( *(_QWORD *)&MyServantOrNpcSvtIdUnionNpcList->max_length )
                        {
                          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !DataManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          }
                          Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
                          if ( Master_WarQuestSelectionMaster )
                          {
                            QuestPhaseMaster__TryGetEntity(
                              Master_WarQuestSelectionMaster,
                              &entity,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
                            if ( entity && type == 16 && !entity->fields.isNpcOnly )
                            {
                              v105 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                                 v101,
                                                                                 v102,
                                                                                 v103,
                                                                                 v104);
                              System_Collections_Generic_List_int____ctor_49346956(
                                v105,
                                v99,
                                (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
                              if ( !v105 )
                                break;
                              System_Collections_Generic_List_int___Add(
                                v105,
                                0,
                                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                              v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v105,
                                                                                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
                            }
                            if ( type == 16 )
                              v106 = this->fields.messageSelfOrSupportLabel;
                            else
                              v106 = this->fields.messageDeckLabel;
                            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                                 questRestrictionInfo,
                                                                 index,
                                                                 0LL);
                            v141 = System_String__Format(message, DialogTargetName, 0LL);
                            if ( v106 )
                            {
                              UILabel__set_text(v106, v141, 0LL);
                              v142 = this->fields.supportMemberBase;
                              if ( v142 )
                              {
                                UnityEngine_GameObject__SetActive(v142, 1, 0LL);
                                v143 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( v143 )
                                {
                                  v144 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v143,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v99 )
                                  {
                                    v149 = this->fields.supportMemberObjectList;
                                    if ( v149 )
                                    {
                                      v150 = *(_QWORD *)&v149->max_length;
                                      monitor = v99[1].monitor;
                                      v152 = (UserServantCollectionMaster_o *)v144;
                                      v153 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v145, v146, v147, v148);
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                        v153,
                                        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v150 >= 1 )
                                      {
                                        v156 = 0LL;
                                        v157 = (int)monitor;
                                        v158 = v99 + 2;
                                        v185 = v99;
                                        while ( v156 < LODWORD(v99[1].monitor) )
                                        {
                                          v159 = *((_DWORD *)&v158->klass + v156);
                                          if ( v159 )
                                          {
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                                    v159,
                                                    (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_187;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                                     v159,
                                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v161 = (FollowerInfo_o *)Item;
                                              v162 = FollowerInfo__GetReturnTypeByQuestId(
                                                       questRestrictionInfo->fields.questId,
                                                       0LL);
                                              maxLimitCount = FollowerInfo__getLimitCount(v161, 0, v162, 0LL);
                                            }
                                            else
                                            {
LABEL_187:
                                              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !NetworkManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              }
                                              v168 = NetworkManager__get_UserId(0LL);
                                              if ( !v152 )
                                                goto LABEL_183;
                                              EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                                                   v152,
                                                                   v168,
                                                                   v159,
                                                                   0LL);
                                              if ( !EntityDefinitely )
                                                goto LABEL_183;
                                              maxLimitCount = EntityDefinitely->fields.maxLimitCount;
                                              v161 = 0LL;
                                            }
                                            v170 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                                        v163,
                                                                                        v164,
                                                                                        v165,
                                                                                        v166);
                                            PartyOrganizationListViewItem___ctor_32278708(
                                              v170,
                                              v156,
                                              v159,
                                              maxLimitCount,
                                              setupInfo,
                                              questRestrictionInfo,
                                              v161,
                                              0,
                                              0LL);
                                            if ( !v153 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v153,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v170,
                                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                            v99 = v185;
                                            this = v186;
                                          }
                                          else
                                          {
                                            v171 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                                        v58,
                                                                                        v59,
                                                                                        v154,
                                                                                        v155);
                                            PartyOrganizationListViewItem___ctor_32311272(
                                              v171,
                                              v156,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v153 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v153,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v171,
                                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                          }
                                          if ( (__int64)++v156 >= v157 || (__int64)v156 >= (int)v150 )
                                            goto LABEL_158;
                                        }
LABEL_184:
                                        sub_B17100(PartyOrganizationServantSwapExplanationFixedServantText, v58, v59);
                                        sub_B170A0();
                                      }
LABEL_158:
                                      v172 = this->fields.supportMemberBase;
                                      v173 = this->fields.supportMemberObjectList;
                                      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      }
                                      v174 = 1;
                                      v95 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v153;
                                      v175 = v173;
                                      v176 = v172;
                                      goto LABEL_180;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          v137 = this->fields.messageLabel;
                          v138 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          v139 = System_String__Format(message, v138, 0LL);
                          if ( v137 )
                          {
                            v132 = v139;
                            v131 = v137;
LABEL_127:
                            UILabel__set_text(v131, v132, 0LL);
                            goto LABEL_181;
                          }
                        }
                        break;
                      case 15:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10351/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_124;
                      default:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = &StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_124:
                        v130 = LocalizationManager__Get((System_String_o *)*v108, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, v130, 0LL);
                        v131 = this->fields.messageLabel;
                        if ( !v131 )
                          break;
                        v132 = message;
                        goto LABEL_127;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_183:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog__Open_20219896(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *closeButton; // x0
  UILabel_o *closeLabel; // x26
  System_String_o *v56; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *messageDeckLabel; // x0
  UILabel_o *messageSelfOrSupportLabel; // x0
  UnityEngine_GameObject_o *partyMemberBase; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x0
  UILabel_o *v62; // x23
  System_String_o *v63; // x0
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  UILabel_o *v67; // x23
  System_String_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  WebViewManager_o *v70; // x0
  UserServantCollectionMaster_o *v71; // x22
  System_Int32_array *FixedServantPositionSvtIdList; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  struct PartyOrganizationConfirmItemDraw_array *v77; // x8
  __int64 v78; // x20
  __int64 v79; // x19
  System_Int32_array *v80; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x23
  signed __int64 v82; // x25
  int32_t v83; // w26
  int64_t v84; // x0
  UserServantCollectionEntity_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int32_t v90; // w28
  PartyOrganizationListViewItem_o *v91; // x27
  struct UnityEngine_GameObject_o *v92; // x20
  struct PartyOrganizationConfirmItemDraw_array *v93; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v94; // x0
  bool IsMyServantOrNpcRestriction_31258540; // w0
  UILabel_o *titleLabel; // x23
  System_String_o *v97; // x0
  System_Int32_array *MyServantOrNpcSvtIdUnionNpcList; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x27
  bool IsSelectableNormalSupport; // w25
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  System_Collections_Generic_List_int__o *v106; // x23
  UILabel_o *v107; // x0
  System_String_o *v108; // x1
  UILabel_o *v109; // x20
  __int64 *v110; // x8
  System_String_o *v111; // x0
  UILabel_o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  UILabel_o *v117; // x24
  System_String_o *v118; // x0
  UILabel_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  WebViewManager_o *v121; // x0
  NpcFollowerMaster_o *v122; // x0
  FollowerInfo_array *QuestFollowerList; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  struct PartyOrganizationConfirmItemDraw_array *v128; // x8
  int max_length; // w20
  int v130; // w19
  FollowerInfo_array *v131; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v132; // x22
  __int64 v133; // x3
  __int64 v134; // x4
  __int64 v135; // x23
  FollowerInfo_o *v136; // x26
  PartyOrganizationListViewItem_o *v137; // x25
  System_String_o *v138; // x0
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x25
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x24
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  System_Collections_Generic_List_int__o *v145; // x23
  unsigned __int64 v146; // x19
  WebViewManager_o *v147; // x0
  ServantMaster_o *v148; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v150; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x0
  System_Int32_array *v152; // x0
  System_Int32_array *v153; // x23
  UILabel_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  struct PartyOrganizationConfirmItemDraw_array *v160; // x8
  __int64 v161; // x19
  __int64 v162; // x8
  unsigned __int64 v163; // x24
  int32_t v164; // w25
  WebViewManager_o *v165; // x0
  UserServantCollectionMaster_o *v166; // x26
  int64_t v167; // x0
  UserServantCollectionEntity_o *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  int32_t maxLimitCount; // w27
  PartyOrganizationListViewItem_o *v174; // x26
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  BalanceConfig_c *v177; // x0
  UILabel_o *v178; // x21
  Il2CppObject *DialogTargetName; // x0
  System_String_o *v180; // x0
  struct UILabel_o *v181; // x23
  Il2CppObject *v182; // x0
  System_String_o *v183; // x0
  UnityEngine_GameObject_o *v184; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v192; // x20
  void *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v194; // x22
  __int64 v195; // x3
  __int64 v196; // x4
  unsigned __int64 v197; // x25
  System_Collections_Generic_IEnumerable_T__o *v198; // x24
  System_Collections_Generic_IEnumerable_T__o *v199; // x20
  int32_t v200; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v202; // x27
  int32_t ReturnTypeByQuestId; // w0
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  int32_t LimitCount; // w28
  int64_t UserId; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  PartyOrganizationListViewItem_o *v211; // x23
  PartyOrganizationListViewItem_o *v212; // x23
  struct UnityEngine_GameObject_o *v213; // x20
  struct PartyOrganizationConfirmItemDraw_array *v214; // x21
  bool v215; // w4
  PartyOrganizationConfirmItemDraw_array *v216; // x1
  UnityEngine_GameObject_o *v217; // x2
  System_Action_o *v218; // x20
  UserServantCollectionMaster_o *v219; // [xsp+20h] [xbp-90h]
  signed __int64 v220; // [xsp+28h] [xbp-88h]
  PartyOrganizationRestrictionHelpDialog_o *v221; // [xsp+38h] [xbp-78h]
  QuestRestrictionInfo_o *v222; // [xsp+40h] [xbp-70h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F76ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, partyItem);
    sub_B16FFC(&BalanceConfig_TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_B16FFC(&DataManager_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_B16FFC(&LocalizationManager_TypeInfo, v40);
    sub_B16FFC(&NetworkManager_TypeInfo, v41);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B16FFC(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B16FFC(&StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_B16FFC(&StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_B16FFC(&StringLiteral_10346/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_B16FFC(&StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_B16FFC(&StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_B16FFC(&StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_B16FFC(&StringLiteral_1/*""*/, v52);
    byte_40F76ED = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&slotNo,
      *(System_String_array ***)&restrictionType,
      (System_Boolean_array **)message,
      (System_Int32_array **)setupInfo,
      (System_Int32_array *)questRestrictionInfo,
      (System_Int32_array *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    closeButton = this->fields.closeButton;
    if ( !closeButton )
      goto LABEL_195;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))closeButton->klass->vtable._14_SetState.method)(
      closeButton,
      0LL,
      1LL,
      closeButton->klass->vtable._15_OnPress.methodPtr);
    closeLabel = this->fields.closeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_195;
    UILabel__set_text(closeLabel, v56, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_195;
    UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    messageDeckLabel = this->fields.messageDeckLabel;
    if ( !messageDeckLabel )
      goto LABEL_195;
    UILabel__set_text(messageDeckLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
    if ( !messageSelfOrSupportLabel )
      goto LABEL_195;
    UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    partyMemberBase = this->fields.partyMemberBase;
    if ( !partyMemberBase )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive(partyMemberBase, 0, 0LL);
    supportMemberBase = this->fields.supportMemberBase;
    if ( !supportMemberBase )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive(supportMemberBase, 0, 0LL);
    v221 = this;
    v222 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_195;
        IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        if ( IsMyServantOrNpcRestriction_31258540 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
          if ( !titleLabel )
            goto LABEL_195;
          UILabel__set_text(titleLabel, v97, 0LL);
          MyServantOrNpcSvtIdUnionNpcList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                              questRestrictionInfo,
                                              &npcInfoDictionary,
                                              slotNo,
                                              0,
                                              0LL);
          if ( !MyServantOrNpcSvtIdUnionNpcList )
            goto LABEL_195;
          v99 = (System_Collections_Generic_IEnumerable_T__o *)MyServantOrNpcSvtIdUnionNpcList;
          if ( !*(_QWORD *)&MyServantOrNpcSvtIdUnionNpcList->max_length )
          {
            v178 = this->fields.messageLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
            v180 = System_String__Format(message, DialogTargetName, 0LL);
            if ( v178 )
            {
              UILabel__set_text(v178, v180, 0LL);
LABEL_192:
              this = v221;
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
          Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_195;
          QuestPhaseMaster__TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            questRestrictionInfo->fields.questId,
            questRestrictionInfo->fields.questPhase,
            0LL);
          if ( IsSelectableNormalSupport )
          {
            if ( entity && !entity->fields.isNpcOnly )
            {
              v106 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 v102,
                                                                 v103,
                                                                 v104,
                                                                 v105);
              System_Collections_Generic_List_int____ctor_49346956(
                v106,
                v99,
                (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
              if ( !v106 )
                goto LABEL_195;
              System_Collections_Generic_List_int___Add(
                v106,
                0,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v106,
                                                                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            v107 = this->fields.messageSelfOrSupportLabel;
            if ( !v107 )
LABEL_195:
              sub_B170D4();
            v108 = message;
          }
          else
          {
            v181 = this->fields.messageDeckLabel;
            v182 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            v183 = System_String__Format(message, v182, 0LL);
            if ( !v181 )
              goto LABEL_195;
            v108 = v183;
            v107 = v181;
          }
          UILabel__set_text(v107, v108, 0LL);
          v184 = this->fields.supportMemberBase;
          if ( v184 )
          {
            UnityEngine_GameObject__SetActive(v184, 1, 0LL);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( v99 )
              {
                supportMemberObjectList = this->fields.supportMemberObjectList;
                v219 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( supportMemberObjectList )
                {
                  v192 = *(_QWORD *)&supportMemberObjectList->max_length;
                  monitor = v99[1].monitor;
                  v194 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v187, v188, v189, v190);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v194,
                    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                  if ( (int)monitor >= 1 && (int)v192 >= 1 )
                  {
                    v220 = (int)v192;
                    v197 = 0LL;
                    v198 = v99 + 2;
                    v199 = v99;
                    while ( v197 < LODWORD(v99[1].monitor) )
                    {
                      v200 = *((_DWORD *)&v198->klass + v197);
                      if ( v200 )
                      {
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                v200,
                                (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                          goto LABEL_199;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                 v200,
                                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                        if ( Item )
                        {
                          v202 = (FollowerInfo_o *)Item;
                          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v222->fields.questId, 0LL);
                          LimitCount = FollowerInfo__getLimitCount(v202, 0, ReturnTypeByQuestId, 0LL);
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
                          if ( !v219 )
                            goto LABEL_195;
                          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v219, UserId, v200, 0LL);
                          if ( !EntityDefinitely )
                            goto LABEL_195;
                          LimitCount = EntityDefinitely->fields.maxLimitCount;
                          v202 = 0LL;
                        }
                        v211 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                    PartyOrganizationListViewItem_TypeInfo,
                                                                    v204,
                                                                    v205,
                                                                    v206,
                                                                    v207);
                        PartyOrganizationListViewItem___ctor_32278708(
                          v211,
                          v197,
                          v200,
                          LimitCount,
                          setupInfo,
                          v222,
                          v202,
                          0,
                          0LL);
                        if ( !v194 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v194,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v211,
                          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                        v99 = v199;
                      }
                      else
                      {
                        v212 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                                    PartyOrganizationListViewItem_TypeInfo,
                                                                    v65,
                                                                    v66,
                                                                    v195,
                                                                    v196);
                        PartyOrganizationListViewItem___ctor_32311272(v212, v197, 1, 0LL, 0LL, 1, 0, 0LL);
                        if ( !v194 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v194,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v212,
                          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                      }
                      if ( (__int64)++v197 >= (int)monitor || (__int64)v197 >= v220 )
                        goto LABEL_180;
                    }
                    goto LABEL_196;
                  }
LABEL_180:
                  v213 = this->fields.supportMemberBase;
                  v214 = this->fields.supportMemberObjectList;
                  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                  }
                  v215 = 1;
                  v94 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v194;
                  v216 = v214;
                  v217 = v213;
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
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_195;
        UILabel__set_text(titleLabel, v138, 0LL);
        NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(questRestrictionInfo, slotNo, 0LL);
        RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(questRestrictionInfo, slotNo, 0LL);
        v145 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v141,
                                                           v142,
                                                           v143,
                                                           v144);
        System_Collections_Generic_List_int____ctor(
          v145,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_195;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v146 = 0LL;
          while ( RangeTypeList )
          {
            if ( (__int64)v146 < RangeTypeList->fields._size )
            {
              if ( v146 >= (unsigned int)RangeTypeList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( RangeTypeList->fields._items->m_Items[v146 + 1] == 1 )
              {
                if ( v146 >= (unsigned int)NeedIndividualityList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( !v145 )
                  goto LABEL_195;
                System_Collections_Generic_List_int___AddRange(
                  v145,
                  (System_Collections_Generic_IEnumerable_T__o *)NeedIndividualityList->fields._items->m_Items[v146],
                  (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( (__int64)++v146 >= NeedIndividualityList->fields._size )
              goto LABEL_118;
          }
          goto LABEL_195;
        }
LABEL_118:
        v147 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v147 )
          goto LABEL_195;
        v148 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v147,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v148 )
          goto LABEL_195;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                v148,
                                                                                0LL);
        v150 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v145,
                 (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
        v151 = System_Linq_Enumerable__Intersect_int_(
                 v150,
                 CollectionList,
                 (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
        v152 = System_Linq_Enumerable__ToArray_int_(
                 v151,
                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !v152 )
          goto LABEL_195;
        v153 = v152;
        if ( !*(_QWORD *)&v152->max_length )
        {
LABEL_77:
          v112 = this->fields.messageLabel;
          if ( v112 )
          {
            UILabel__set_text(v112, message, 0LL);
LABEL_193:
            this->fields.state = 1;
            v218 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v113, v114, v115, v116);
            System_Action___ctor(
              v218,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v218, 0, 0LL);
            return;
          }
          goto LABEL_195;
        }
        v154 = this->fields.messageDeckLabel;
        if ( !v154 )
          goto LABEL_195;
        UILabel__set_text(v154, message, 0LL);
        v155 = this->fields.supportMemberBase;
        if ( !v155 )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive(v155, 1, 0LL);
        v160 = this->fields.supportMemberObjectList;
        if ( !v160 )
          goto LABEL_195;
        v161 = *(_QWORD *)&v160->max_length;
        v132 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v156, v157, v158, v159);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v132,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v161 < 1 )
          goto LABEL_186;
        v162 = *(_QWORD *)&v153->max_length;
        if ( (int)v162 < 1 )
          goto LABEL_186;
        v163 = 0LL;
        while ( v163 < (unsigned int)v162 )
        {
          v164 = v153->m_Items[v163 + 1];
          v165 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v165 )
            goto LABEL_195;
          v166 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v165,
                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v167 = NetworkManager__get_UserId(0LL);
          if ( !v166 )
            goto LABEL_195;
          v168 = UserServantCollectionMaster__GetEntityDefinitely(v166, v167, v164, 0LL);
          if ( !v168 )
            goto LABEL_195;
          maxLimitCount = v168->fields.maxLimitCount;
          v174 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v169,
                                                      v170,
                                                      v171,
                                                      v172);
          PartyOrganizationListViewItem___ctor_32278708(
            v174,
            v163,
            v164,
            maxLimitCount,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v132 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v132,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v174,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          if ( (__int64)++v163 < (int)v161 )
          {
            LODWORD(v162) = v153->max_length;
            if ( (__int64)v163 < (int)v162 )
              continue;
          }
          goto LABEL_186;
        }
        goto LABEL_196;
      case 3:
        v109 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v110 = &StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_75;
      case 4:
      case 5:
        v62 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v62 )
          goto LABEL_195;
        UILabel__set_text(v62, v63, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                                    questRestrictionInfo,
                                                                    0LL);
        if ( !PartyOrganizationServantSwapExplanationFixedServantText )
          goto LABEL_77;
        if ( !PartyOrganizationServantSwapExplanationFixedServantText->max_length )
          goto LABEL_196;
        v67 = this->fields.messageDeckLabel;
        v68 = System_String__Format(
                message,
                (Il2CppObject *)PartyOrganizationServantSwapExplanationFixedServantText->m_Items[0],
                0LL);
        if ( !v67 )
          goto LABEL_195;
        UILabel__set_text(v67, v68, 0LL);
        v69 = this->fields.supportMemberBase;
        if ( !v69 )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive(v69, 1, 0LL);
        v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v70 )
          goto LABEL_195;
        v71 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v70,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        FixedServantPositionSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                          questRestrictionInfo,
                                          0LL);
        if ( !FixedServantPositionSvtIdList )
          goto LABEL_195;
        v77 = this->fields.supportMemberObjectList;
        if ( !v77 )
          goto LABEL_195;
        v78 = *(_QWORD *)&v77->max_length;
        v79 = *(_QWORD *)&FixedServantPositionSvtIdList->max_length;
        v80 = FixedServantPositionSvtIdList;
        v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v73, v74, v75, v76);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v81,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v79 < 1 || (int)v78 < 1 )
          goto LABEL_40;
        v82 = 0LL;
        do
        {
          if ( v82 >= (unsigned __int64)v80->max_length )
            goto LABEL_196;
          v83 = v80->m_Items[v82 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v84 = NetworkManager__get_UserId(0LL);
          if ( !v71 )
            goto LABEL_195;
          v85 = UserServantCollectionMaster__GetEntityDefinitely(v71, v84, v83, 0LL);
          if ( !v85 )
            goto LABEL_195;
          v90 = v85->fields.maxLimitCount;
          v91 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                     PartyOrganizationListViewItem_TypeInfo,
                                                     v86,
                                                     v87,
                                                     v88,
                                                     v89);
          PartyOrganizationListViewItem___ctor_32278708(v91, v82, v83, v90, setupInfo, v222, 0LL, 0, 0LL);
          if ( !v81 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v81,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          ++v82;
        }
        while ( v82 < (int)v79 && v82 < (int)v78 );
LABEL_40:
        v92 = this->fields.supportMemberBase;
        v93 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v94 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v81;
        goto LABEL_190;
      case 6:
        v117 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v118 = LocalizationManager__Get((System_String_o *)StringLiteral_10346/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v117 )
          goto LABEL_195;
        UILabel__set_text(v117, v118, 0LL);
        v119 = this->fields.messageDeckLabel;
        if ( !v119 )
          goto LABEL_195;
        UILabel__set_text(v119, message, 0LL);
        v120 = this->fields.supportMemberBase;
        if ( !v120 )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive(v120, 1, 0LL);
        v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v121 )
          goto LABEL_195;
        v122 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v121,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        if ( !v122 )
          goto LABEL_195;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              v122,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
        if ( !QuestFollowerList )
          goto LABEL_195;
        v128 = this->fields.supportMemberObjectList;
        if ( !v128 )
          goto LABEL_195;
        max_length = v128->max_length;
        v130 = QuestFollowerList->max_length;
        v131 = QuestFollowerList;
        v132 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v124, v125, v126, v127);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v132,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v130 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            v177 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v177 = BalanceConfig_TypeInfo;
            }
            if ( i >= v177->static_fields->DeckMemberMax )
              goto LABEL_186;
            if ( !partyItem )
              goto LABEL_195;
            Member = PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !Member )
              goto LABEL_195;
            if ( Member->fields.isFollower && !Member->fields.isMyServantOrNpcRestriction )
              break;
          }
          if ( !v132 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v132,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Member,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( max_length >= 1 )
        {
          v135 = 0LL;
          while ( (unsigned int)v135 < v131->max_length )
          {
            v136 = v131->m_Items[v135];
            if ( !v136 )
              goto LABEL_195;
            if ( !v136->fields.isMySvtOrNpc )
            {
              v137 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          v65,
                                                          v66,
                                                          v133,
                                                          v134);
              PartyOrganizationListViewItem___ctor_32282080(v137, v135, v136, 0, setupInfo, v222, 0LL, 0, 0, 0, 0LL);
              if ( !v132 )
                goto LABEL_195;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v132,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v137,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
            }
            if ( (int)++v135 >= v130 || (int)v135 >= max_length )
              goto LABEL_186;
          }
LABEL_196:
          sub_B17100(PartyOrganizationServantSwapExplanationFixedServantText, v65, v66);
          sub_B170A0();
        }
LABEL_186:
        v92 = this->fields.supportMemberBase;
        v93 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v94 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v132;
LABEL_190:
        v216 = v93;
        v217 = v92;
        v215 = 0;
LABEL_191:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v94, v216, v217, 1, v215, 0LL);
        goto LABEL_192;
      case 9:
        v109 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v110 = &StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_75;
      default:
        v109 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v110 = &StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_75:
        v111 = LocalizationManager__Get((System_String_o *)*v110, 0LL);
        if ( !v109 )
          goto LABEL_195;
        UILabel__set_text(v109, v111, 0LL);
        goto LABEL_77;
    }
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__add_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRestrictionHelpDialog_o *v11; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F76E9 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_40F76E9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B173C8(v8);
  PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(
        PartyOrganizationRestrictionHelpDialog_o *this,
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRestrictionHelpDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F76EA & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_40F76EA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B173C8(v8);
  PartyOrganizationRestrictionHelpDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F837E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F837E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}