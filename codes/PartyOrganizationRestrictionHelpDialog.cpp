void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_4388B0E & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4388B0E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_B775DC(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v3->static_fields->DeckMemberMax);
  sub_B77560(&this->fields.memberObjectList);
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
    sub_B77560(p_callbackFunc);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_20681944(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_20681944(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4388B0C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4388B0C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_B77560(p_closeCallbackFunc);
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

  if ( (byte_4388B09 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388B09 = 1;
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
    sub_B7769C(titleLabel, method);
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

  if ( (byte_4388B0D & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4388B0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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
  int64_t gameObject; // x0
  int64_t v16; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *v18; // x21
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct PartyOrganizationConfirmItemDraw_array *v22; // x8
  __int64 v23; // x21
  __int64 v24; // x19
  int64_t v25; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x25
  signed __int64 v27; // x26
  int32_t v28; // w27
  QuestRestrictionInfo_o *v29; // x19
  int v30; // w8
  int32_t LimitCount; // w20
  unsigned int v32; // w25
  FollowerInfo_o *v33; // x21
  __int64 v34; // x19
  __int64 v35; // x23
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v37; // x21
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v39; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v40; // x0
  UILabel_o *v41; // x21
  System_Collections_Generic_IEnumerable_T__o *v42; // x28
  System_Collections_Generic_List_int__o *v43; // x21
  UILabel_o *messageSelfOrSupportLabel; // x21
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v47; // x1
  UILabel_o *v48; // x20
  __int64 *v49; // x8
  UILabel_o *v50; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w26
  int v53; // w19
  int64_t v54; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x22
  __int64 v56; // x24
  FollowerInfo_o *v57; // x25
  PartyOrganizationListViewItem_o *v58; // x21
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v60; // x0
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v62; // x8
  __int64 v63; // x19
  void *monitor; // x21
  UserServantCollectionMaster_o *v65; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  unsigned __int64 v67; // x25
  signed __int64 v68; // x24
  System_Collections_Generic_IEnumerable_T__o *v69; // x23
  int32_t v70; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v72; // x21
  int32_t v73; // w0
  int32_t v74; // w27
  PartyOrganizationListViewItem_o *v75; // x28
  PartyOrganizationListViewItem_o *v76; // x21
  struct UnityEngine_GameObject_o *v77; // x20
  struct PartyOrganizationConfirmItemDraw_array *v78; // x21
  bool v79; // w4
  PartyOrganizationConfirmItemDraw_array *v80; // x1
  UnityEngine_GameObject_o *v81; // x2
  int32_t i; // w20
  System_Action_o *v83; // x19
  __int64 v84; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v86; // [xsp+20h] [xbp-90h]
  signed __int64 v87; // [xsp+28h] [xbp-88h]
  signed __int64 v88; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_IEnumerable_T__o *v89; // [xsp+30h] [xbp-80h]
  PartyOrganizationRestrictionHelpDialog_o *v90; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_4388B0A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10572/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_B775C4(&StringLiteral_10563/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_B775C4(&StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_B775C4(&StringLiteral_10565/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_B775C4(&StringLiteral_10571/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_B775C4(&StringLiteral_10568/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_B775C4(&StringLiteral_10564/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_B775C4(&StringLiteral_10573/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_B775C4(&StringLiteral_10569/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388B0A = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(&this->fields.callbackFunc);
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10563/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v90 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
                        v47 = (System_String_o *)gameObject;
                        gameObject = (int64_t)this->fields.messageLabel;
                        goto LABEL_139;
                      case 3:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10571/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_135;
                      case 6:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10573/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_135;
                      case 7:
                        v50 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10565/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v50 )
                          break;
                        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v53 = *(_DWORD *)(gameObject + 24);
                        v54 = gameObject;
                        v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v55,
                          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v53 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v56 = 0LL;
                            while ( (unsigned int)v56 < *(_DWORD *)(v54 + 24) )
                            {
                              v57 = *(FollowerInfo_o **)(v54 + 32 + 8 * v56);
                              if ( !v57 )
                                goto LABEL_195;
                              if ( !v57->fields.isMySvtOrNpc )
                              {
                                v58 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_38648852(
                                  v58,
                                  v56,
                                  v57,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v55 )
                                  goto LABEL_195;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v55,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
                                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                              }
                              if ( (int)++v56 >= v53 || (int)v56 >= max_length )
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
                          v16 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v55 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v55,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
                            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
LABEL_187:
                          supportMemberBase = this->fields.supportMemberBase;
                          v39 = this->fields.supportMemberObjectList;
                          if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                          }
                          v40 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v55;
LABEL_191:
                          v80 = v39;
                          v81 = supportMemberBase;
                          v79 = 0;
LABEL_192:
                          PartyOrganizationConfirmItemDraw__SetPartyIcon(v40, v80, v81, 1, v79, 0LL);
LABEL_193:
                          this->fields.state = 1;
                          v83 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                          System_Action___ctor(
                            v83,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                            0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
                          return;
                        }
                        break;
                      case 8:
                      case 14:
                        v18 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10564/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v18 )
                          break;
                        UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
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
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)gameObject,
                                                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v22 = this->fields.supportMemberObjectList;
                        if ( !v22 )
                          break;
                        v23 = *(_QWORD *)&v22->max_length;
                        v24 = *(_QWORD *)(gameObject + 24);
                        v25 = gameObject;
                        v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v26,
                          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v24 < 1 || (int)v23 < 1 )
                          goto LABEL_56;
                        v87 = (int)v23;
                        v88 = (int)v24;
                        v27 = 0LL;
                        v85 = v26;
                        v86 = MasterData_WarQuestSelectionMaster;
                        do
                        {
                          if ( v27 >= (unsigned __int64)*(unsigned int *)(v25 + 24) )
                            goto LABEL_196;
                          v28 = *(_DWORD *)(v25 + 4 * v27 + 32);
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
                                                  v28,
                                                  0LL);
                          v29 = questRestrictionInfo;
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_195;
                          v30 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v30 >= 1 )
                          {
                            v32 = 0;
                            while ( 1 )
                            {
                              if ( v32 >= v30 )
                                goto LABEL_196;
                              v33 = QuestFollowerList->m_Items[v32];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v29->fields.questId, 0LL);
                              if ( !v33 )
                                goto LABEL_195;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v33, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v35 = *(_QWORD *)(gameObject + 48);
                                v34 = *(_QWORD *)(gameObject + 56);
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v95.fields.currentCryptoKey = v35;
                                *(_QWORD *)&v95.fields.fakeValue = v34;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                               v95,
                                               0LL);
                                v29 = questRestrictionInfo;
                                if ( (_DWORD)gameObject == v28 )
                                  break;
                              }
                              v30 = QuestFollowerList->max_length;
                              if ( (int)++v32 >= v30 )
                                goto LABEL_52;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
                            LimitCount = FollowerInfo__getLimitCount(v33, 0, ReturnTypeByQuestId, 0LL);
LABEL_52:
                            v26 = v85;
                            MasterData_WarQuestSelectionMaster = v86;
                          }
                          v37 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_38652640(
                            v37,
                            v27,
                            v28,
                            LimitCount,
                            setupInfo,
                            v29,
                            0LL,
                            0,
                            0LL);
                          if ( !v26 )
                            goto LABEL_195;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v26,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                          this = v90;
                          ++v27;
                        }
                        while ( v27 < v88 && v27 < v87 );
LABEL_56:
                        supportMemberBase = this->fields.supportMemberBase;
                        v39 = this->fields.supportMemberObjectList;
                        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        }
                        v40 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
                        goto LABEL_191;
                      case 10:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10569/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_135;
                      case 11:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10568/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_135;
                      case 12:
                      case 16:
                        v41 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v41 )
                          break;
                        UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
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
                        v42 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !DataManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          }
                          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v43 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_51270276(
                                v43,
                                v42,
                                (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
                              if ( !v43 )
                                break;
                              System_Collections_Generic_List_int___Add(
                                v43,
                                0,
                                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                              v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v43,
                                                                                     (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v42 )
                                  {
                                    v62 = this->fields.supportMemberObjectList;
                                    if ( v62 )
                                    {
                                      v63 = *(_QWORD *)&v62->max_length;
                                      monitor = v42[1].monitor;
                                      v65 = (UserServantCollectionMaster_o *)gameObject;
                                      v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                        v66,
                                        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v63 >= 1 )
                                      {
                                        v67 = 0LL;
                                        v68 = (int)monitor;
                                        v69 = v42 + 2;
                                        v89 = v42;
                                        while ( v67 < LODWORD(v42[1].monitor) )
                                        {
                                          v70 = *((_DWORD *)&v69->klass + v67);
                                          if ( v70 )
                                          {
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_195;
                                            if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                                    v70,
                                                    (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_199;
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_195;
                                            Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                                     v70,
                                                     (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v72 = (FollowerInfo_o *)Item;
                                              v73 = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                                              v74 = FollowerInfo__getLimitCount(v72, 0, v73, 0LL);
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
                                              if ( !v65 )
                                                goto LABEL_195;
                                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v65,
                                                                      gameObject,
                                                                      v70,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_195;
                                              v74 = *(_DWORD *)(gameObject + 56);
                                              v72 = 0LL;
                                            }
                                            v75 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_38652640(
                                              v75,
                                              v67,
                                              v70,
                                              v74,
                                              setupInfo,
                                              questRestrictionInfo,
                                              v72,
                                              0,
                                              0LL);
                                            if ( !v66 )
                                              goto LABEL_195;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v66,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
                                              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                            v42 = v89;
                                            this = v90;
                                          }
                                          else
                                          {
                                            v76 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_38651660(
                                              v76,
                                              v67,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v66 )
                                              goto LABEL_195;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v66,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
                                              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                          }
                                          if ( (__int64)++v67 >= v68 || (__int64)v67 >= (int)v63 )
                                            goto LABEL_170;
                                        }
LABEL_196:
                                        v84 = sub_B776C8(gameObject);
                                        sub_B77668(v84, 0LL);
                                      }
LABEL_170:
                                      v77 = this->fields.supportMemberBase;
                                      v78 = this->fields.supportMemberObjectList;
                                      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      }
                                      v79 = 1;
                                      v40 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v66;
                                      v80 = v78;
                                      v81 = v77;
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
                          v60 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                  questRestrictionInfo,
                                                  index,
                                                  0LL);
                          gameObject = (int64_t)System_String__Format(message, v60, 0LL);
                          if ( messageLabel )
                          {
                            v47 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_139:
                            UILabel__set_text((UILabel_o *)gameObject, v47, 0LL);
                            goto LABEL_193;
                          }
                        }
                        break;
                      case 15:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10572/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_135;
                      default:
                        v48 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v49 = &StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_135:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v49, 0LL);
                        if ( !v48 )
                          break;
                        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
LABEL_137:
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v47 = message;
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
    sub_B7769C(gameObject, v16);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_20677756(
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
  int64_t gameObject; // x0
  int64_t UserId; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v19; // x23
  UILabel_o *v20; // x23
  UserServantCollectionMaster_o *v21; // x22
  struct PartyOrganizationConfirmItemDraw_array *v22; // x8
  __int64 v23; // x20
  __int64 v24; // x19
  int64_t v25; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x23
  signed __int64 v27; // x25
  int32_t v28; // w26
  int32_t v29; // w28
  PartyOrganizationListViewItem_o *v30; // x27
  struct UnityEngine_GameObject_o *v31; // x20
  struct PartyOrganizationConfirmItemDraw_array *v32; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v33; // x0
  bool IsMyServantOrNpcRestriction_34477588; // w0
  UILabel_o *titleLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *v36; // x27
  bool IsSelectableNormalSupport; // w25
  System_Collections_Generic_List_int__o *v38; // x23
  System_String_o *v39; // x1
  UILabel_o *v40; // x20
  __int64 *v41; // x8
  UILabel_o *v42; // x24
  struct PartyOrganizationConfirmItemDraw_array *v43; // x8
  int max_length; // w20
  int v45; // w19
  int64_t v46; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x22
  __int64 v48; // x23
  FollowerInfo_o *v49; // x26
  PartyOrganizationListViewItem_o *v50; // x25
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x25
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x24
  System_Collections_Generic_List_int__o *v53; // x23
  unsigned __int64 v54; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  int64_t v58; // x23
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  __int64 v60; // x19
  __int64 v61; // x8
  unsigned __int64 v62; // x24
  int32_t v63; // w25
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t v65; // w27
  PartyOrganizationListViewItem_o *v66; // x26
  int32_t i; // w20
  UILabel_o *messageLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct UILabel_o *messageDeckLabel; // x23
  Il2CppObject *v71; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v73; // x20
  void *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x22
  unsigned __int64 v76; // x25
  System_Collections_Generic_IEnumerable_T__o *v77; // x24
  System_Collections_Generic_IEnumerable_T__o *v78; // x20
  int32_t v79; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v81; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  PartyOrganizationListViewItem_o *v84; // x23
  PartyOrganizationListViewItem_o *v85; // x23
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v87; // x21
  bool v88; // w4
  PartyOrganizationConfirmItemDraw_array *v89; // x1
  UnityEngine_GameObject_o *v90; // x2
  System_Action_o *v91; // x20
  __int64 v92; // x0
  UserServantCollectionMaster_o *v93; // [xsp+20h] [xbp-90h]
  signed __int64 v94; // [xsp+28h] [xbp-88h]
  PartyOrganizationRestrictionHelpDialog_o *v95; // [xsp+38h] [xbp-78h]
  QuestRestrictionInfo_o *v96; // [xsp+40h] [xbp-70h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4388B0B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_B775C4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10563/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_B775C4(&StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_B775C4(&StringLiteral_10565/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_B775C4(&StringLiteral_10564/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_B775C4(&StringLiteral_10573/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_B775C4(&StringLiteral_10569/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388B0B = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(&this->fields.callbackFunc);
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
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10563/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
    v95 = this;
    v96 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_195;
        IsMyServantOrNpcRestriction_34477588 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34477588(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        if ( IsMyServantOrNpcRestriction_34477588 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
          v36 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
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
              this = v95;
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
          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v38 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_51270276(
                v38,
                v36,
                (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v38 )
                goto LABEL_195;
              System_Collections_Generic_List_int___Add(
                v38,
                0,
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v38,
                                                                     (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
            if ( !gameObject )
LABEL_195:
              sub_B7769C(gameObject, UserId);
            v39 = message;
          }
          else
          {
            messageDeckLabel = this->fields.messageDeckLabel;
            v71 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (int64_t)System_String__Format(message, v71, 0LL);
            if ( !messageDeckLabel )
              goto LABEL_195;
            v39 = (System_String_o *)gameObject;
            gameObject = (int64_t)messageDeckLabel;
          }
          UILabel__set_text((UILabel_o *)gameObject, v39, 0LL);
          gameObject = (int64_t)this->fields.supportMemberBase;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( gameObject )
            {
              gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)gameObject,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( v36 )
              {
                supportMemberObjectList = this->fields.supportMemberObjectList;
                v93 = (UserServantCollectionMaster_o *)gameObject;
                if ( supportMemberObjectList )
                {
                  v73 = *(_QWORD *)&supportMemberObjectList->max_length;
                  monitor = v36[1].monitor;
                  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v75,
                    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                  if ( (int)monitor >= 1 && (int)v73 >= 1 )
                  {
                    v94 = (int)v73;
                    v76 = 0LL;
                    v77 = v36 + 2;
                    v78 = v36;
                    while ( v76 < LODWORD(v36[1].monitor) )
                    {
                      v79 = *((_DWORD *)&v77->klass + v76);
                      if ( v79 )
                      {
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                v79,
                                (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                          goto LABEL_199;
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                 v79,
                                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                        if ( Item )
                        {
                          v81 = (FollowerInfo_o *)Item;
                          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v96->fields.questId, 0LL);
                          LimitCount = FollowerInfo__getLimitCount(v81, 0, ReturnTypeByQuestId, 0LL);
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
                          gameObject = (int64_t)v93;
                          if ( !v93 )
                            goto LABEL_195;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v93, UserId, v79, 0LL);
                          if ( !gameObject )
                            goto LABEL_195;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          v81 = 0LL;
                        }
                        v84 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_38652640(
                          v84,
                          v76,
                          v79,
                          LimitCount,
                          setupInfo,
                          v96,
                          v81,
                          0,
                          0LL);
                        if ( !v75 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v75,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
                          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                        v36 = v78;
                      }
                      else
                      {
                        v85 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_38651660(v85, v76, 1, 0LL, 0LL, 1, 0, 0LL);
                        if ( !v75 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v75,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
                          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                      }
                      if ( (__int64)++v76 >= (int)monitor || (__int64)v76 >= v94 )
                        goto LABEL_180;
                    }
                    goto LABEL_196;
                  }
LABEL_180:
                  supportMemberBase = this->fields.supportMemberBase;
                  v87 = this->fields.supportMemberObjectList;
                  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                  }
                  v88 = 1;
                  v33 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v75;
                  v89 = v87;
                  v90 = supportMemberBase;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_195;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(questRestrictionInfo, slotNo, 0LL);
        RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(questRestrictionInfo, slotNo, 0LL);
        v53 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v53,
          (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
        if ( !NeedIndividualityList )
          goto LABEL_195;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v54 = 0LL;
          while ( RangeTypeList )
          {
            if ( (__int64)v54 < RangeTypeList->fields._size )
            {
              if ( v54 >= (unsigned int)RangeTypeList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              if ( RangeTypeList->fields._items->m_Items[v54 + 1] == 1 )
              {
                if ( v54 >= (unsigned int)NeedIndividualityList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                if ( !v53 )
                  goto LABEL_195;
                System_Collections_Generic_List_int___AddRange(
                  v53,
                  (System_Collections_Generic_IEnumerable_T__o *)NeedIndividualityList->fields._items->m_Items[v54],
                  (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( (__int64)++v54 >= NeedIndividualityList->fields._size )
              goto LABEL_118;
          }
          goto LABEL_195;
        }
LABEL_118:
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_195;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v56 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                (const MethodInfo_1D2E540 *)Method_System_Linq_Enumerable_Distinct_int___);
        v57 = System_Linq_Enumerable__Intersect_int_(
                v56,
                CollectionList,
                (const MethodInfo_1D324E0 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v57,
                                (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_195;
        v58 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_77:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_193:
            this->fields.state = 1;
            v91 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(
              v91,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
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
        v59 = this->fields.supportMemberObjectList;
        if ( !v59 )
          goto LABEL_195;
        v60 = *(_QWORD *)&v59->max_length;
        v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v47,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v60 < 1 )
          goto LABEL_186;
        v61 = *(_QWORD *)(v58 + 24);
        if ( (int)v61 < 1 )
          goto LABEL_186;
        v62 = 0LL;
        while ( v62 < (unsigned int)v61 )
        {
          v63 = *(_DWORD *)(v58 + 32 + 4 * v62);
          gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_195;
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)gameObject,
                                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                  v63,
                                  0LL);
          if ( !gameObject )
            goto LABEL_195;
          v65 = *(_DWORD *)(gameObject + 56);
          v66 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38652640(
            v66,
            v62,
            v63,
            v65,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v47 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          if ( (__int64)++v62 < (int)v60 )
          {
            LODWORD(v61) = *(_DWORD *)(v58 + 24);
            if ( (__int64)v62 < (int)v61 )
              continue;
          }
          goto LABEL_186;
        }
        goto LABEL_196;
      case 3:
        v40 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = &StringLiteral_10569/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_75;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10564/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v19 )
          goto LABEL_195;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_77;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_196;
        v20 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v20 )
          goto LABEL_195;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        v21 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)gameObject,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_195;
        v22 = this->fields.supportMemberObjectList;
        if ( !v22 )
          goto LABEL_195;
        v23 = *(_QWORD *)&v22->max_length;
        v24 = *(_QWORD *)(gameObject + 24);
        v25 = gameObject;
        v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v26,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v24 < 1 || (int)v23 < 1 )
          goto LABEL_40;
        v27 = 0LL;
        do
        {
          if ( v27 >= (unsigned __int64)*(unsigned int *)(v25 + 24) )
            goto LABEL_196;
          v28 = *(_DWORD *)(v25 + 32 + 4 * v27);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v21 )
            goto LABEL_195;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v21, gameObject, v28, 0LL);
          if ( !gameObject )
            goto LABEL_195;
          v29 = *(_DWORD *)(gameObject + 56);
          v30 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38652640(v30, v27, v28, v29, setupInfo, v96, 0LL, 0, 0LL);
          if ( !v26 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          ++v27;
        }
        while ( v27 < (int)v24 && v27 < (int)v23 );
LABEL_40:
        v31 = this->fields.supportMemberBase;
        v32 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v33 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
        goto LABEL_190;
      case 6:
        v42 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10565/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v42 )
          goto LABEL_195;
        UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v43 = this->fields.supportMemberObjectList;
        if ( !v43 )
          goto LABEL_195;
        max_length = v43->max_length;
        v45 = *(_DWORD *)(gameObject + 24);
        v46 = gameObject;
        v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v47,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v45 < 1 )
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
          if ( !v47 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( max_length >= 1 )
        {
          v48 = 0LL;
          while ( (unsigned int)v48 < *(_DWORD *)(v46 + 24) )
          {
            v49 = *(FollowerInfo_o **)(v46 + 32 + 8 * v48);
            if ( !v49 )
              goto LABEL_195;
            if ( !v49->fields.isMySvtOrNpc )
            {
              v50 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_38648852(v50, v48, v49, 0, setupInfo, v96, 0LL, 0, 0, 0, 0LL);
              if ( !v47 )
                goto LABEL_195;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v47,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
            }
            if ( (int)++v48 >= v45 || (int)v48 >= max_length )
              goto LABEL_186;
          }
LABEL_196:
          v92 = sub_B776C8(gameObject);
          sub_B77668(v92, 0LL);
        }
LABEL_186:
        v31 = this->fields.supportMemberBase;
        v32 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v33 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v47;
LABEL_190:
        v89 = v32;
        v90 = v31;
        v88 = 0;
LABEL_191:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v33, v89, v90, 1, v88, 0LL);
        goto LABEL_192;
      case 9:
        v40 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = &StringLiteral_10573/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_75;
      default:
        v40 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = &StringLiteral_10570/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_75:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v41, 0LL);
        if ( !v40 )
          goto LABEL_195;
        UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4388B07 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4388B07 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B77990(v8);
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

  if ( (byte_4388B08 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4388B08 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B77990(v8);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_438A0C2 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0C2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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