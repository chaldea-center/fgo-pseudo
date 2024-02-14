void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0

  if ( (byte_4211C48 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&BaseDialog_TypeInfo, v3);
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4211C48 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B0D8BC(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_B0D840(&this->fields.memberObjectList, v6);
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
    sub_B0D840(p_callbackFunc, 0LL);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_19301360(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_19301360(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_4211C46 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v5);
    byte_4211C46 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_B0D840(p_closeCallbackFunc, 0LL);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4211C43 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4211C43 = 1;
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
    sub_B0D97C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
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

  if ( (byte_4211C47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_4211C47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v5);
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
  int64_t gameObject; // x0
  UILabel_o *closeLabel; // x21
  UILabel_o *v48; // x21
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  struct PartyOrganizationConfirmItemDraw_array *v54; // x8
  __int64 v55; // x21
  __int64 v56; // x19
  int64_t v57; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x25
  signed __int64 v59; // x26
  int32_t v60; // w27
  __int64 v61; // x1
  __int64 v62; // x2
  QuestRestrictionInfo_o *v63; // x19
  int v64; // w8
  int32_t LimitCount; // w20
  unsigned int v66; // w25
  FollowerInfo_o *v67; // x21
  __int64 v68; // x19
  __int64 v69; // x23
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v71; // x21
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v73; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v74; // x0
  UILabel_o *v75; // x21
  System_Collections_Generic_IEnumerable_T__o *v76; // x28
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_List_int__o *v79; // x21
  UILabel_o *messageSelfOrSupportLabel; // x21
  UILabel_o *titleLabel; // x20
  __int64 *v82; // x8
  UILabel_o *v83; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w26
  int v88; // w19
  int64_t v89; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x23
  FollowerInfo_o *v94; // x25
  PartyOrganizationListViewItem_o *v95; // x21
  System_String_o *v96; // x1
  __int64 v97; // x1
  __int64 v98; // x2
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v100; // x0
  Il2CppObject *DialogTargetName; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  struct PartyOrganizationConfirmItemDraw_array *v104; // x8
  __int64 v105; // x19
  void *monitor; // x21
  UserServantCollectionMaster_o *v107; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x22
  __int64 v109; // x1
  __int64 v110; // x2
  unsigned __int64 v111; // x25
  signed __int64 v112; // x23
  System_Collections_Generic_IEnumerable_T__o *v113; // x24
  int32_t v114; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v116; // x21
  int32_t v117; // w0
  __int64 v118; // x1
  __int64 v119; // x2
  int32_t v120; // w27
  PartyOrganizationListViewItem_o *v121; // x28
  PartyOrganizationListViewItem_o *v122; // x21
  struct UnityEngine_GameObject_o *v123; // x20
  struct PartyOrganizationConfirmItemDraw_array *v124; // x21
  bool v125; // w4
  PartyOrganizationConfirmItemDraw_array *v126; // x1
  UnityEngine_GameObject_o *v127; // x2
  int32_t i; // w20
  System_Action_o *v129; // x19
  __int64 v130; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v132; // [xsp+20h] [xbp-90h]
  signed __int64 v133; // [xsp+28h] [xbp-88h]
  signed __int64 v134; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_IEnumerable_T__o *v135; // [xsp+30h] [xbp-80h]
  PartyOrganizationRestrictionHelpDialog_o *v136; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4211C44 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, partyItem);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v26);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v28);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v29);
    sub_B0D8A4(&NetworkManager_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw_TypeInfo, v32);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v33);
    sub_B0D8A4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B0D8A4(&StringLiteral_10408/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v36);
    sub_B0D8A4(&StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v37);
    sub_B0D8A4(&StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v38);
    sub_B0D8A4(&StringLiteral_10403/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v39);
    sub_B0D8A4(&StringLiteral_10407/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v40);
    sub_B0D8A4(&StringLiteral_10404/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v41);
    sub_B0D8A4(&StringLiteral_10402/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v42);
    sub_B0D8A4(&StringLiteral_10409/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v43);
    sub_B0D8A4(&StringLiteral_10405/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v44);
    sub_B0D8A4(&StringLiteral_1/*""*/, v45);
    byte_4211C44 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B0D840(&this->fields.callbackFunc, callback);
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v136 = this;
                    switch ( type )
                    {
                      case 3:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = &StringLiteral_10407/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_124;
                      case 6:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = &StringLiteral_10409/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_124;
                      case 7:
                        v83 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v83 )
                          break;
                        UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v88 = *(_DWORD *)(gameObject + 24);
                        v89 = gameObject;
                        v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v84, v85);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v90,
                          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v88 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v93 = 0LL;
                            while ( (unsigned int)v93 < *(_DWORD *)(v89 + 24) )
                            {
                              v94 = *(FollowerInfo_o **)(v89 + 32 + 8 * v93);
                              if ( !v94 )
                                goto LABEL_183;
                              if ( !v94->fields.isMySvtOrNpc )
                              {
                                v95 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                           PartyOrganizationListViewItem_TypeInfo,
                                                                           v91,
                                                                           v92);
                                PartyOrganizationListViewItem___ctor_30704360(
                                  v95,
                                  v93,
                                  v94,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v90 )
                                  goto LABEL_183;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v90,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
                                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                              }
                              if ( (int)++v93 >= v88 || (int)v93 >= max_length )
                                goto LABEL_175;
                            }
                            goto LABEL_184;
                          }
                          goto LABEL_175;
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
                            goto LABEL_175;
                          if ( !partyItem )
                            goto LABEL_183;
                          gameObject = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !gameObject )
                            goto LABEL_183;
                          if ( *(_BYTE *)(gameObject + 128) && !*(_BYTE *)(gameObject + 224) )
                            break;
                        }
                        if ( v90 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v90,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
LABEL_175:
                          supportMemberBase = this->fields.supportMemberBase;
                          v73 = this->fields.supportMemberObjectList;
                          if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                          }
                          v74 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v90;
LABEL_179:
                          v126 = v73;
                          v127 = supportMemberBase;
                          v125 = 0;
LABEL_180:
                          PartyOrganizationConfirmItemDraw__SetPartyIcon(v74, v126, v127, 1, v125, 0LL);
LABEL_181:
                          this->fields.state = 1;
                          v129 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v97, v98);
                          System_Action___ctor(
                            v129,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                            0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v129, 0, 0LL);
                          return;
                        }
                        break;
                      case 8:
                      case 14:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v48 )
                          break;
                        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        if ( !*(_DWORD *)(gameObject + 24) )
                          goto LABEL_184;
                        messageDeckLabel = this->fields.messageDeckLabel;
                        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
                        if ( !messageDeckLabel )
                          break;
                        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)gameObject,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v54 = this->fields.supportMemberObjectList;
                        if ( !v54 )
                          break;
                        v55 = *(_QWORD *)&v54->max_length;
                        v56 = *(_QWORD *)(gameObject + 24);
                        v57 = gameObject;
                        v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v52, v53);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v58,
                          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v56 < 1 || (int)v55 < 1 )
                          goto LABEL_56;
                        v133 = (int)v55;
                        v134 = (int)v56;
                        v59 = 0LL;
                        v131 = v58;
                        v132 = MasterData_WarQuestSelectionMaster;
                        do
                        {
                          if ( v59 >= (unsigned __int64)*(unsigned int *)(v57 + 24) )
                            goto LABEL_184;
                          v60 = *(_DWORD *)(v57 + 4 * v59 + 32);
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_WarQuestSelectionMaster )
                            goto LABEL_183;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  MasterData_WarQuestSelectionMaster,
                                                  gameObject,
                                                  v60,
                                                  0LL);
                          v63 = questRestrictionInfo;
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_183;
                          v64 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v64 >= 1 )
                          {
                            v66 = 0;
                            while ( 1 )
                            {
                              if ( v66 >= v64 )
                                goto LABEL_184;
                              v67 = QuestFollowerList->m_Items[v66];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v63->fields.questId, 0LL);
                              if ( !v67 )
                                goto LABEL_183;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v67, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v69 = *(_QWORD *)(gameObject + 48);
                                v68 = *(_QWORD *)(gameObject + 56);
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v141.fields.currentCryptoKey = v69;
                                *(_QWORD *)&v141.fields.fakeValue = v68;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v141,
                                               0LL);
                                v63 = questRestrictionInfo;
                                if ( (_DWORD)gameObject == v60 )
                                  break;
                              }
                              v64 = QuestFollowerList->max_length;
                              if ( (int)++v66 >= v64 )
                                goto LABEL_52;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
                            LimitCount = FollowerInfo__getLimitCount(v67, 0, ReturnTypeByQuestId, 0LL);
LABEL_52:
                            v58 = v131;
                            MasterData_WarQuestSelectionMaster = v132;
                          }
                          v71 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                     PartyOrganizationListViewItem_TypeInfo,
                                                                     v61,
                                                                     v62);
                          PartyOrganizationListViewItem___ctor_30700972(
                            v71,
                            v59,
                            v60,
                            LimitCount,
                            setupInfo,
                            v63,
                            0LL,
                            0,
                            0LL);
                          if ( !v58 )
                            goto LABEL_183;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v58,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
                            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                          this = v136;
                          ++v59;
                        }
                        while ( v59 < v134 && v59 < v133 );
LABEL_56:
                        supportMemberBase = this->fields.supportMemberBase;
                        v73 = this->fields.supportMemberObjectList;
                        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        }
                        v74 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v58;
                        goto LABEL_179;
                      case 10:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = &StringLiteral_10405/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 11:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = &StringLiteral_10404/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 12:
                      case 16:
                        v75 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v75 )
                          break;
                        UILabel__set_text(v75, (System_String_o *)gameObject, 0LL);
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
                        v76 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !DataManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          }
                          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v79 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                                v77,
                                                                                v78);
                              System_Collections_Generic_List_int____ctor_50000796(
                                v79,
                                v76,
                                (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
                              if ( !v79 )
                                break;
                              System_Collections_Generic_List_int___Add(
                                v79,
                                0,
                                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                              v76 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v79,
                                                                                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v76 )
                                  {
                                    v104 = this->fields.supportMemberObjectList;
                                    if ( v104 )
                                    {
                                      v105 = *(_QWORD *)&v104->max_length;
                                      monitor = v76[1].monitor;
                                      v107 = (UserServantCollectionMaster_o *)gameObject;
                                      v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v102, v103);
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                        v108,
                                        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v105 >= 1 )
                                      {
                                        v111 = 0LL;
                                        v112 = (int)monitor;
                                        v113 = v76 + 2;
                                        v135 = v76;
                                        while ( v111 < LODWORD(v76[1].monitor) )
                                        {
                                          v114 = *((_DWORD *)&v113->klass + v111);
                                          if ( v114 )
                                          {
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                                    v114,
                                                    (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_187;
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                                     v114,
                                                     (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v116 = (FollowerInfo_o *)Item;
                                              v117 = FollowerInfo__GetReturnTypeByQuestId(
                                                       questRestrictionInfo->fields.questId,
                                                       0LL);
                                              v120 = FollowerInfo__getLimitCount(v116, 0, v117, 0LL);
                                            }
                                            else
                                            {
LABEL_187:
                                              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !NetworkManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              }
                                              gameObject = NetworkManager__get_UserId(0LL);
                                              if ( !v107 )
                                                goto LABEL_183;
                                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v107,
                                                                      gameObject,
                                                                      v114,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_183;
                                              v120 = *(_DWORD *)(gameObject + 56);
                                              v116 = 0LL;
                                            }
                                            v121 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                                        v118,
                                                                                        v119);
                                            PartyOrganizationListViewItem___ctor_30700972(
                                              v121,
                                              v111,
                                              v114,
                                              v120,
                                              setupInfo,
                                              questRestrictionInfo,
                                              v116,
                                              0,
                                              0LL);
                                            if ( !v108 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v108,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
                                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                            v76 = v135;
                                            this = v136;
                                          }
                                          else
                                          {
                                            v122 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                                        v109,
                                                                                        v110);
                                            PartyOrganizationListViewItem___ctor_30738796(
                                              v122,
                                              v111,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v108 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v108,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
                                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                          }
                                          if ( (__int64)++v111 >= v112 || (__int64)v111 >= (int)v105 )
                                            goto LABEL_158;
                                        }
LABEL_184:
                                        v130 = sub_B0D9A8(gameObject);
                                        sub_B0D948(v130, 0LL);
                                      }
LABEL_158:
                                      v123 = this->fields.supportMemberBase;
                                      v124 = this->fields.supportMemberObjectList;
                                      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      }
                                      v125 = 1;
                                      v74 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v108;
                                      v126 = v124;
                                      v127 = v123;
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
                          messageLabel = this->fields.messageLabel;
                          v100 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (int64_t)System_String__Format(message, v100, 0LL);
                          if ( messageLabel )
                          {
                            v96 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_127:
                            UILabel__set_text((UILabel_o *)gameObject, v96, 0LL);
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
                        v82 = &StringLiteral_10408/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_124;
                      default:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = &StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_124:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v82, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v96 = message;
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
    sub_B0D97C(gameObject);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_19297172(
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
  int64_t gameObject; // x0
  UILabel_o *closeLabel; // x26
  UILabel_o *v55; // x23
  UILabel_o *v56; // x23
  UserServantCollectionMaster_o *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  struct PartyOrganizationConfirmItemDraw_array *v60; // x8
  __int64 v61; // x20
  __int64 v62; // x19
  int64_t v63; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  signed __int64 v65; // x25
  int32_t v66; // w26
  __int64 v67; // x1
  __int64 v68; // x2
  int32_t v69; // w28
  PartyOrganizationListViewItem_o *v70; // x27
  struct UnityEngine_GameObject_o *v71; // x20
  struct PartyOrganizationConfirmItemDraw_array *v72; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v73; // x0
  bool IsMyServantOrNpcRestriction_30625648; // w0
  UILabel_o *titleLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *v76; // x27
  bool IsSelectableNormalSupport; // w25
  __int64 v78; // x1
  __int64 v79; // x2
  System_Collections_Generic_List_int__o *v80; // x23
  System_String_o *v81; // x1
  UILabel_o *v82; // x20
  __int64 *v83; // x8
  __int64 v84; // x1
  __int64 v85; // x2
  UILabel_o *v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  struct PartyOrganizationConfirmItemDraw_array *v89; // x8
  int max_length; // w20
  int v91; // w19
  int64_t v92; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x22
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x23
  FollowerInfo_o *v97; // x26
  PartyOrganizationListViewItem_o *v98; // x25
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x25
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x24
  __int64 v101; // x1
  __int64 v102; // x2
  System_Collections_Generic_List_int__o *v103; // x23
  unsigned __int64 v104; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  int64_t v108; // x23
  __int64 v109; // x1
  __int64 v110; // x2
  struct PartyOrganizationConfirmItemDraw_array *v111; // x8
  __int64 v112; // x19
  __int64 v113; // x8
  unsigned __int64 v114; // x24
  int32_t v115; // w25
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v117; // x1
  __int64 v118; // x2
  int32_t v119; // w27
  PartyOrganizationListViewItem_o *v120; // x26
  int32_t i; // w20
  UILabel_o *messageLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct UILabel_o *messageDeckLabel; // x23
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v129; // x20
  void *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // x22
  __int64 v132; // x1
  __int64 v133; // x2
  unsigned __int64 v134; // x25
  System_Collections_Generic_IEnumerable_T__o *v135; // x24
  System_Collections_Generic_IEnumerable_T__o *v136; // x20
  int32_t v137; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v139; // x27
  int32_t ReturnTypeByQuestId; // w0
  __int64 v141; // x1
  __int64 v142; // x2
  int32_t LimitCount; // w28
  int64_t UserId; // x1
  PartyOrganizationListViewItem_o *v145; // x23
  PartyOrganizationListViewItem_o *v146; // x23
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v148; // x21
  bool v149; // w4
  PartyOrganizationConfirmItemDraw_array *v150; // x1
  UnityEngine_GameObject_o *v151; // x2
  System_Action_o *v152; // x20
  __int64 v153; // x0
  UserServantCollectionMaster_o *v154; // [xsp+20h] [xbp-90h]
  signed __int64 v155; // [xsp+28h] [xbp-88h]
  PartyOrganizationRestrictionHelpDialog_o *v156; // [xsp+38h] [xbp-78h]
  QuestRestrictionInfo_o *v157; // [xsp+40h] [xbp-70h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4211C45 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, partyItem);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_B0D8A4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v40);
    sub_B0D8A4(&NetworkManager_TypeInfo, v41);
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B0D8A4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B0D8A4(&StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_B0D8A4(&StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_B0D8A4(&StringLiteral_10403/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_B0D8A4(&StringLiteral_10402/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_B0D8A4(&StringLiteral_10409/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_B0D8A4(&StringLiteral_10405/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_B0D8A4(&StringLiteral_1/*""*/, v52);
    byte_4211C45 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B0D840(&this->fields.callbackFunc, callback);
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
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
    v156 = this;
    v157 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_195;
        IsMyServantOrNpcRestriction_30625648 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        if ( IsMyServantOrNpcRestriction_30625648 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
          v76 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
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
              this = v156;
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
          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v80 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v78,
                                                                v79);
              System_Collections_Generic_List_int____ctor_50000796(
                v80,
                v76,
                (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
              if ( !v80 )
                goto LABEL_195;
              System_Collections_Generic_List_int___Add(
                v80,
                0,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              v76 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v80,
                                                                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
            if ( !gameObject )
LABEL_195:
              sub_B0D97C(gameObject);
            v81 = message;
          }
          else
          {
            messageDeckLabel = this->fields.messageDeckLabel;
            v125 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (int64_t)System_String__Format(message, v125, 0LL);
            if ( !messageDeckLabel )
              goto LABEL_195;
            v81 = (System_String_o *)gameObject;
            gameObject = (int64_t)messageDeckLabel;
          }
          UILabel__set_text((UILabel_o *)gameObject, v81, 0LL);
          gameObject = (int64_t)this->fields.supportMemberBase;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( gameObject )
            {
              gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)gameObject,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( v76 )
              {
                supportMemberObjectList = this->fields.supportMemberObjectList;
                v154 = (UserServantCollectionMaster_o *)gameObject;
                if ( supportMemberObjectList )
                {
                  v129 = *(_QWORD *)&supportMemberObjectList->max_length;
                  monitor = v76[1].monitor;
                  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v126, v127);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v131,
                    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                  if ( (int)monitor >= 1 && (int)v129 >= 1 )
                  {
                    v155 = (int)v129;
                    v134 = 0LL;
                    v135 = v76 + 2;
                    v136 = v76;
                    while ( v134 < LODWORD(v76[1].monitor) )
                    {
                      v137 = *((_DWORD *)&v135->klass + v134);
                      if ( v137 )
                      {
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                v137,
                                (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                          goto LABEL_199;
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                 v137,
                                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                        if ( Item )
                        {
                          v139 = (FollowerInfo_o *)Item;
                          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v157->fields.questId, 0LL);
                          LimitCount = FollowerInfo__getLimitCount(v139, 0, ReturnTypeByQuestId, 0LL);
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
                          gameObject = (int64_t)v154;
                          if ( !v154 )
                            goto LABEL_195;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  v154,
                                                  UserId,
                                                  v137,
                                                  0LL);
                          if ( !gameObject )
                            goto LABEL_195;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          v139 = 0LL;
                        }
                        v145 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                    PartyOrganizationListViewItem_TypeInfo,
                                                                    v141,
                                                                    v142);
                        PartyOrganizationListViewItem___ctor_30700972(
                          v145,
                          v134,
                          v137,
                          LimitCount,
                          setupInfo,
                          v157,
                          v139,
                          0,
                          0LL);
                        if ( !v131 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v131,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v145,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                        v76 = v136;
                      }
                      else
                      {
                        v146 = (PartyOrganizationListViewItem_o *)sub_B0D974(
                                                                    PartyOrganizationListViewItem_TypeInfo,
                                                                    v132,
                                                                    v133);
                        PartyOrganizationListViewItem___ctor_30738796(v146, v134, 1, 0LL, 0LL, 1, 0, 0LL);
                        if ( !v131 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v131,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v146,
                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                      }
                      if ( (__int64)++v134 >= (int)monitor || (__int64)v134 >= v155 )
                        goto LABEL_180;
                    }
                    goto LABEL_196;
                  }
LABEL_180:
                  supportMemberBase = this->fields.supportMemberBase;
                  v148 = this->fields.supportMemberObjectList;
                  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                  }
                  v149 = 1;
                  v73 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v131;
                  v150 = v148;
                  v151 = supportMemberBase;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_195;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(questRestrictionInfo, slotNo, 0LL);
        RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(questRestrictionInfo, slotNo, 0LL);
        v103 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v101,
                                                           v102);
        System_Collections_Generic_List_int____ctor(
          v103,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_195;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v104 = 0LL;
          while ( RangeTypeList )
          {
            if ( (__int64)v104 < RangeTypeList->fields._size )
            {
              if ( v104 >= (unsigned int)RangeTypeList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( RangeTypeList->fields._items->m_Items[v104 + 1] == 1 )
              {
                if ( v104 >= (unsigned int)NeedIndividualityList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( !v103 )
                  goto LABEL_195;
                System_Collections_Generic_List_int___AddRange(
                  v103,
                  (System_Collections_Generic_IEnumerable_T__o *)NeedIndividualityList->fields._items->m_Items[v104],
                  (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( (__int64)++v104 >= NeedIndividualityList->fields._size )
              goto LABEL_118;
          }
          goto LABEL_195;
        }
LABEL_118:
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_195;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v106 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v103,
                 (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
        v107 = System_Linq_Enumerable__Intersect_int_(
                 v106,
                 CollectionList,
                 (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v107,
                                (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_195;
        v108 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_77:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_193:
            this->fields.state = 1;
            v152 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v84, v85);
            System_Action___ctor(
              v152,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v152, 0, 0LL);
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
        v111 = this->fields.supportMemberObjectList;
        if ( !v111 )
          goto LABEL_195;
        v112 = *(_QWORD *)&v111->max_length;
        v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v109, v110);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v93,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v112 < 1 )
          goto LABEL_186;
        v113 = *(_QWORD *)(v108 + 24);
        if ( (int)v113 < 1 )
          goto LABEL_186;
        v114 = 0LL;
        while ( v114 < (unsigned int)v113 )
        {
          v115 = *(_DWORD *)(v108 + 32 + 4 * v114);
          gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_195;
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)gameObject,
                                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                  v115,
                                  0LL);
          if ( !gameObject )
            goto LABEL_195;
          v119 = *(_DWORD *)(gameObject + 56);
          v120 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v117, v118);
          PartyOrganizationListViewItem___ctor_30700972(
            v120,
            v114,
            v115,
            v119,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v93 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v93,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v120,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          if ( (__int64)++v114 < (int)v112 )
          {
            LODWORD(v113) = *(_DWORD *)(v108 + 24);
            if ( (__int64)v114 < (int)v113 )
              continue;
          }
          goto LABEL_186;
        }
        goto LABEL_196;
      case 3:
        v82 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v83 = &StringLiteral_10405/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_75;
      case 4:
      case 5:
        v55 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v55 )
          goto LABEL_195;
        UILabel__set_text(v55, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_77;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_196;
        v56 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v56 )
          goto LABEL_195;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        v57 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)gameObject,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_195;
        v60 = this->fields.supportMemberObjectList;
        if ( !v60 )
          goto LABEL_195;
        v61 = *(_QWORD *)&v60->max_length;
        v62 = *(_QWORD *)(gameObject + 24);
        v63 = gameObject;
        v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v58, v59);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v64,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v62 < 1 || (int)v61 < 1 )
          goto LABEL_40;
        v65 = 0LL;
        do
        {
          if ( v65 >= (unsigned __int64)*(unsigned int *)(v63 + 24) )
            goto LABEL_196;
          v66 = *(_DWORD *)(v63 + 32 + 4 * v65);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v57 )
            goto LABEL_195;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v57, gameObject, v66, 0LL);
          if ( !gameObject )
            goto LABEL_195;
          v69 = *(_DWORD *)(gameObject + 56);
          v70 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v67, v68);
          PartyOrganizationListViewItem___ctor_30700972(v70, v65, v66, v69, setupInfo, v157, 0LL, 0, 0LL);
          if ( !v64 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v64,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          ++v65;
        }
        while ( v65 < (int)v62 && v65 < (int)v61 );
LABEL_40:
        v71 = this->fields.supportMemberBase;
        v72 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v73 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v64;
        goto LABEL_190;
      case 6:
        v86 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v86 )
          goto LABEL_195;
        UILabel__set_text(v86, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v89 = this->fields.supportMemberObjectList;
        if ( !v89 )
          goto LABEL_195;
        max_length = v89->max_length;
        v91 = *(_DWORD *)(gameObject + 24);
        v92 = gameObject;
        v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v87, v88);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v93,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v91 < 1 )
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
            if ( *(_BYTE *)(gameObject + 128) && !*(_BYTE *)(gameObject + 224) )
              break;
          }
          if ( !v93 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v93,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( max_length >= 1 )
        {
          v96 = 0LL;
          while ( (unsigned int)v96 < *(_DWORD *)(v92 + 24) )
          {
            v97 = *(FollowerInfo_o **)(v92 + 32 + 8 * v96);
            if ( !v97 )
              goto LABEL_195;
            if ( !v97->fields.isMySvtOrNpc )
            {
              v98 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v94, v95);
              PartyOrganizationListViewItem___ctor_30704360(v98, v96, v97, 0, setupInfo, v157, 0LL, 0, 0, 0, 0LL);
              if ( !v93 )
                goto LABEL_195;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v93,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
            }
            if ( (int)++v96 >= v91 || (int)v96 >= max_length )
              goto LABEL_186;
          }
LABEL_196:
          v153 = sub_B0D9A8(gameObject);
          sub_B0D948(v153, 0LL);
        }
LABEL_186:
        v71 = this->fields.supportMemberBase;
        v72 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v73 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v93;
LABEL_190:
        v150 = v72;
        v151 = v71;
        v149 = 0;
LABEL_191:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v73, v150, v151, 1, v149, 0LL);
        goto LABEL_192;
      case 9:
        v82 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v83 = &StringLiteral_10409/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_75;
      default:
        v82 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v83 = &StringLiteral_10406/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_75:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v83, 0LL);
        if ( !v82 )
          goto LABEL_195;
        UILabel__set_text(v82, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4211C41 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4211C41 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B0DC70(v8);
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

  if ( (byte_4211C42 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4211C42 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B0DC70(v8);
  PartyOrganizationRestrictionHelpDialog__Init(v11, v12);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212186 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212186 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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