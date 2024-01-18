void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0

  if ( (byte_4184FC9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4184FC9 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B2C374(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_B2C2F8(&this->fields.memberObjectList, v6);
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
    sub_B2C2F8(p_callbackFunc, 0LL);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_19917744(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_19917744(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4184FC7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v5);
    byte_4184FC7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
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

  if ( (byte_4184FC4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4184FC4 = 1;
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
    sub_B2C434(titleLabel, method);
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

  if ( (byte_4184FC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_4184FC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  int64_t v47; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *v49; // x21
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct PartyOrganizationConfirmItemDraw_array *v53; // x8
  __int64 v54; // x21
  __int64 v55; // x19
  int64_t v56; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x25
  signed __int64 v58; // x26
  int32_t v59; // w27
  QuestRestrictionInfo_o *v60; // x19
  int v61; // w8
  int32_t LimitCount; // w20
  unsigned int v63; // w25
  FollowerInfo_o *v64; // x21
  __int64 v65; // x19
  __int64 v66; // x23
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v68; // x21
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v70; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v71; // x0
  UILabel_o *v72; // x21
  System_Collections_Generic_IEnumerable_T__o *v73; // x28
  System_Collections_Generic_List_int__o *v74; // x21
  UILabel_o *messageSelfOrSupportLabel; // x21
  UILabel_o *titleLabel; // x20
  __int64 *v77; // x8
  UILabel_o *v78; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w26
  int v81; // w19
  int64_t v82; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x22
  __int64 v84; // x23
  FollowerInfo_o *v85; // x25
  PartyOrganizationListViewItem_o *v86; // x21
  System_String_o *v87; // x1
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v89; // x0
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v91; // x8
  __int64 v92; // x19
  void *monitor; // x21
  UserServantCollectionMaster_o *v94; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // x22
  unsigned __int64 v96; // x25
  signed __int64 v97; // x23
  System_Collections_Generic_IEnumerable_T__o *v98; // x24
  int32_t v99; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v101; // x21
  int32_t v102; // w0
  int32_t v103; // w27
  PartyOrganizationListViewItem_o *v104; // x28
  PartyOrganizationListViewItem_o *v105; // x21
  struct UnityEngine_GameObject_o *v106; // x20
  struct PartyOrganizationConfirmItemDraw_array *v107; // x21
  bool v108; // w4
  PartyOrganizationConfirmItemDraw_array *v109; // x1
  UnityEngine_GameObject_o *v110; // x2
  int32_t i; // w20
  System_Action_o *v112; // x19
  __int64 v113; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v114; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v115; // [xsp+20h] [xbp-90h]
  signed __int64 v116; // [xsp+28h] [xbp-88h]
  signed __int64 v117; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_IEnumerable_T__o *v118; // [xsp+30h] [xbp-80h]
  PartyOrganizationRestrictionHelpDialog_o *v119; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_4184FC5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    sub_B2C35C(&BalanceConfig_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v26);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v28);
    sub_B2C35C(&LocalizationManager_TypeInfo, v29);
    sub_B2C35C(&NetworkManager_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v32);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v33);
    sub_B2C35C(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B2C35C(&StringLiteral_10384/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v36);
    sub_B2C35C(&StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v37);
    sub_B2C35C(&StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v38);
    sub_B2C35C(&StringLiteral_10379/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v39);
    sub_B2C35C(&StringLiteral_10383/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v40);
    sub_B2C35C(&StringLiteral_10380/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v41);
    sub_B2C35C(&StringLiteral_10378/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v42);
    sub_B2C35C(&StringLiteral_10385/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v43);
    sub_B2C35C(&StringLiteral_10381/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v44);
    sub_B2C35C(&StringLiteral_1/*""*/, v45);
    byte_4184FC5 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v119 = this;
                    switch ( type )
                    {
                      case 3:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v77 = &StringLiteral_10383/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_124;
                      case 6:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v77 = &StringLiteral_10385/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_124;
                      case 7:
                        v78 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10379/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v78 )
                          break;
                        UILabel__set_text(v78, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v81 = *(_DWORD *)(gameObject + 24);
                        v82 = gameObject;
                        v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v83,
                          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v81 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v84 = 0LL;
                            while ( (unsigned int)v84 < *(_DWORD *)(v82 + 24) )
                            {
                              v85 = *(FollowerInfo_o **)(v82 + 32 + 8 * v84);
                              if ( !v85 )
                                goto LABEL_183;
                              if ( !v85->fields.isMySvtOrNpc )
                              {
                                v86 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_32183040(
                                  v86,
                                  v84,
                                  v85,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v83 )
                                  goto LABEL_183;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v83,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
                                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                              }
                              if ( (int)++v84 >= v81 || (int)v84 >= max_length )
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
                          v47 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 224) )
                              break;
                          }
                        }
                        if ( v83 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v83,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
LABEL_175:
                          supportMemberBase = this->fields.supportMemberBase;
                          v70 = this->fields.supportMemberObjectList;
                          if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                          }
                          v71 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v83;
LABEL_179:
                          v109 = v70;
                          v110 = supportMemberBase;
                          v108 = 0;
LABEL_180:
                          PartyOrganizationConfirmItemDraw__SetPartyIcon(v71, v109, v110, 1, v108, 0LL);
LABEL_181:
                          this->fields.state = 1;
                          v112 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v112,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                            0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v112, 0, 0LL);
                          return;
                        }
                        break;
                      case 8:
                      case 14:
                        v49 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v49 )
                          break;
                        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
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
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)gameObject,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v53 = this->fields.supportMemberObjectList;
                        if ( !v53 )
                          break;
                        v54 = *(_QWORD *)&v53->max_length;
                        v55 = *(_QWORD *)(gameObject + 24);
                        v56 = gameObject;
                        v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v57,
                          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v55 < 1 || (int)v54 < 1 )
                          goto LABEL_56;
                        v116 = (int)v54;
                        v117 = (int)v55;
                        v58 = 0LL;
                        v114 = v57;
                        v115 = MasterData_WarQuestSelectionMaster;
                        do
                        {
                          if ( v58 >= (unsigned __int64)*(unsigned int *)(v56 + 24) )
                            goto LABEL_184;
                          v59 = *(_DWORD *)(v56 + 4 * v58 + 32);
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
                                                  v59,
                                                  0LL);
                          v60 = questRestrictionInfo;
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_183;
                          v61 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v61 >= 1 )
                          {
                            v63 = 0;
                            while ( 1 )
                            {
                              if ( v63 >= v61 )
                                goto LABEL_184;
                              v64 = QuestFollowerList->m_Items[v63];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v60->fields.questId, 0LL);
                              if ( !v64 )
                                goto LABEL_183;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v64, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v66 = *(_QWORD *)(gameObject + 48);
                                v65 = *(_QWORD *)(gameObject + 56);
                                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                }
                                *(_QWORD *)&v124.fields.currentCryptoKey = v66;
                                *(_QWORD *)&v124.fields.fakeValue = v65;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v124,
                                               0LL);
                                v60 = questRestrictionInfo;
                                if ( (_DWORD)gameObject == v59 )
                                  break;
                              }
                              v61 = QuestFollowerList->max_length;
                              if ( (int)++v63 >= v61 )
                                goto LABEL_52;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
                            LimitCount = FollowerInfo__getLimitCount(v64, 0, ReturnTypeByQuestId, 0LL);
LABEL_52:
                            v57 = v114;
                            MasterData_WarQuestSelectionMaster = v115;
                          }
                          v68 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_32179668(
                            v68,
                            v58,
                            v59,
                            LimitCount,
                            setupInfo,
                            v60,
                            0LL,
                            0,
                            0LL);
                          if ( !v57 )
                            goto LABEL_183;
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v57,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                          this = v119;
                          ++v58;
                        }
                        while ( v58 < v117 && v58 < v116 );
LABEL_56:
                        supportMemberBase = this->fields.supportMemberBase;
                        v70 = this->fields.supportMemberObjectList;
                        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        }
                        v71 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v57;
                        goto LABEL_179;
                      case 10:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v77 = &StringLiteral_10381/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 11:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v77 = &StringLiteral_10380/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_124;
                      case 12:
                      case 16:
                        v72 = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v72 )
                          break;
                        UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
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
                        v73 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !DataManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          }
                          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v74 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_49702036(
                                v74,
                                v73,
                                (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
                              if ( !v74 )
                                break;
                              System_Collections_Generic_List_int___Add(
                                v74,
                                0,
                                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                              v73 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v74,
                                                                                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v73 )
                                  {
                                    v91 = this->fields.supportMemberObjectList;
                                    if ( v91 )
                                    {
                                      v92 = *(_QWORD *)&v91->max_length;
                                      monitor = v73[1].monitor;
                                      v94 = (UserServantCollectionMaster_o *)gameObject;
                                      v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                        v95,
                                        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor >= 1 && (int)v92 >= 1 )
                                      {
                                        v96 = 0LL;
                                        v97 = (int)monitor;
                                        v98 = v73 + 2;
                                        v118 = v73;
                                        while ( v96 < LODWORD(v73[1].monitor) )
                                        {
                                          v99 = *((_DWORD *)&v98->klass + v96);
                                          if ( v99 )
                                          {
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                                    v99,
                                                    (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                              goto LABEL_187;
                                            gameObject = (int64_t)npcInfoDictionary;
                                            if ( !npcInfoDictionary )
                                              goto LABEL_183;
                                            Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                                     v99,
                                                     (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                            if ( Item )
                                            {
                                              v101 = (FollowerInfo_o *)Item;
                                              v102 = FollowerInfo__GetReturnTypeByQuestId(
                                                       questRestrictionInfo->fields.questId,
                                                       0LL);
                                              v103 = FollowerInfo__getLimitCount(v101, 0, v102, 0LL);
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
                                              if ( !v94 )
                                                goto LABEL_183;
                                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                      v94,
                                                                      gameObject,
                                                                      v99,
                                                                      0LL);
                                              if ( !gameObject )
                                                goto LABEL_183;
                                              v103 = *(_DWORD *)(gameObject + 56);
                                              v101 = 0LL;
                                            }
                                            v104 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_32179668(
                                              v104,
                                              v96,
                                              v99,
                                              v103,
                                              setupInfo,
                                              questRestrictionInfo,
                                              v101,
                                              0,
                                              0LL);
                                            if ( !v95 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v95,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
                                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                            v73 = v118;
                                            this = v119;
                                          }
                                          else
                                          {
                                            v105 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                                            PartyOrganizationListViewItem___ctor_32212232(
                                              v105,
                                              v96,
                                              1,
                                              0LL,
                                              0LL,
                                              1,
                                              0,
                                              0LL);
                                            if ( !v95 )
                                              goto LABEL_183;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v95,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
                                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                                          }
                                          if ( (__int64)++v96 >= v97 || (__int64)v96 >= (int)v92 )
                                            goto LABEL_158;
                                        }
LABEL_184:
                                        v113 = sub_B2C460(gameObject);
                                        sub_B2C400(v113, 0LL);
                                      }
LABEL_158:
                                      v106 = this->fields.supportMemberBase;
                                      v107 = this->fields.supportMemberObjectList;
                                      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      }
                                      v108 = 1;
                                      v71 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v95;
                                      v109 = v107;
                                      v110 = v106;
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
                          v89 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                  questRestrictionInfo,
                                                  index,
                                                  0LL);
                          gameObject = (int64_t)System_String__Format(message, v89, 0LL);
                          if ( messageLabel )
                          {
                            v87 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_127:
                            UILabel__set_text((UILabel_o *)gameObject, v87, 0LL);
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
                        v77 = &StringLiteral_10384/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_124;
                      default:
                        titleLabel = this->fields.titleLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v77 = &StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_124:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v77, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v87 = message;
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
    sub_B2C434(gameObject, v47);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_19913556(
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
  int64_t UserId; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v56; // x23
  UILabel_o *v57; // x23
  UserServantCollectionMaster_o *v58; // x22
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  __int64 v60; // x20
  __int64 v61; // x19
  int64_t v62; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x23
  signed __int64 v64; // x25
  int32_t v65; // w26
  int32_t v66; // w28
  PartyOrganizationListViewItem_o *v67; // x27
  struct UnityEngine_GameObject_o *v68; // x20
  struct PartyOrganizationConfirmItemDraw_array *v69; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v70; // x0
  bool IsMyServantOrNpcRestriction_31241252; // w0
  UILabel_o *titleLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *v73; // x27
  bool IsSelectableNormalSupport; // w25
  System_Collections_Generic_List_int__o *v75; // x23
  System_String_o *v76; // x1
  UILabel_o *v77; // x20
  __int64 *v78; // x8
  UILabel_o *v79; // x24
  struct PartyOrganizationConfirmItemDraw_array *v80; // x8
  int max_length; // w20
  int v82; // w19
  int64_t v83; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x22
  __int64 v85; // x23
  FollowerInfo_o *v86; // x26
  PartyOrganizationListViewItem_o *v87; // x25
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x25
  System_Collections_Generic_List_Restriction_RangeType__o *RangeTypeList; // x24
  System_Collections_Generic_List_int__o *v90; // x23
  unsigned __int64 v91; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  int64_t v95; // x23
  struct PartyOrganizationConfirmItemDraw_array *v96; // x8
  __int64 v97; // x19
  __int64 v98; // x8
  unsigned __int64 v99; // x24
  int32_t v100; // w25
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t v102; // w27
  PartyOrganizationListViewItem_o *v103; // x26
  int32_t i; // w20
  UILabel_o *messageLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct UILabel_o *messageDeckLabel; // x23
  Il2CppObject *v108; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v110; // x20
  void *monitor; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v112; // x22
  unsigned __int64 v113; // x25
  System_Collections_Generic_IEnumerable_T__o *v114; // x24
  System_Collections_Generic_IEnumerable_T__o *v115; // x20
  int32_t v116; // w26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  FollowerInfo_o *v118; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w28
  PartyOrganizationListViewItem_o *v121; // x23
  PartyOrganizationListViewItem_o *v122; // x23
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v124; // x21
  bool v125; // w4
  PartyOrganizationConfirmItemDraw_array *v126; // x1
  UnityEngine_GameObject_o *v127; // x2
  System_Action_o *v128; // x20
  __int64 v129; // x0
  UserServantCollectionMaster_o *v130; // [xsp+20h] [xbp-90h]
  signed __int64 v131; // [xsp+28h] [xbp-88h]
  PartyOrganizationRestrictionHelpDialog_o *v132; // [xsp+38h] [xbp-78h]
  QuestRestrictionInfo_o *v133; // [xsp+40h] [xbp-70h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4184FC6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    sub_B2C35C(&BalanceConfig_TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_B2C35C(&DataManager_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_B2C35C(&LocalizationManager_TypeInfo, v40);
    sub_B2C35C(&NetworkManager_TypeInfo, v41);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B2C35C(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B2C35C(&StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_B2C35C(&StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_B2C35C(&StringLiteral_10379/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_B2C35C(&StringLiteral_10378/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_B2C35C(&StringLiteral_10385/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_B2C35C(&StringLiteral_10381/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_B2C35C(&StringLiteral_1/*""*/, v52);
    byte_4184FC6 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
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
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
    v132 = this;
    v133 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_195;
        IsMyServantOrNpcRestriction_31241252 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        if ( IsMyServantOrNpcRestriction_31241252 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
          v73 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
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
              this = v132;
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
          gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v75 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_49702036(
                v75,
                v73,
                (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
              if ( !v75 )
                goto LABEL_195;
              System_Collections_Generic_List_int___Add(
                v75,
                0,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              v73 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v75,
                                                                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
            if ( !gameObject )
LABEL_195:
              sub_B2C434(gameObject, UserId);
            v76 = message;
          }
          else
          {
            messageDeckLabel = this->fields.messageDeckLabel;
            v108 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0LL);
            gameObject = (int64_t)System_String__Format(message, v108, 0LL);
            if ( !messageDeckLabel )
              goto LABEL_195;
            v76 = (System_String_o *)gameObject;
            gameObject = (int64_t)messageDeckLabel;
          }
          UILabel__set_text((UILabel_o *)gameObject, v76, 0LL);
          gameObject = (int64_t)this->fields.supportMemberBase;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( gameObject )
            {
              gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)gameObject,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( v73 )
              {
                supportMemberObjectList = this->fields.supportMemberObjectList;
                v130 = (UserServantCollectionMaster_o *)gameObject;
                if ( supportMemberObjectList )
                {
                  v110 = *(_QWORD *)&supportMemberObjectList->max_length;
                  monitor = v73[1].monitor;
                  v112 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v112,
                    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                  if ( (int)monitor >= 1 && (int)v110 >= 1 )
                  {
                    v131 = (int)v110;
                    v113 = 0LL;
                    v114 = v73 + 2;
                    v115 = v73;
                    while ( v113 < LODWORD(v73[1].monitor) )
                    {
                      v116 = *((_DWORD *)&v114->klass + v113);
                      if ( v116 )
                      {
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcInfoDictionary,
                                v116,
                                (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                          goto LABEL_199;
                        gameObject = (int64_t)npcInfoDictionary;
                        if ( !npcInfoDictionary )
                          goto LABEL_195;
                        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)npcInfoDictionary,
                                 v116,
                                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                        if ( Item )
                        {
                          v118 = (FollowerInfo_o *)Item;
                          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v133->fields.questId, 0LL);
                          LimitCount = FollowerInfo__getLimitCount(v118, 0, ReturnTypeByQuestId, 0LL);
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
                          gameObject = (int64_t)v130;
                          if ( !v130 )
                            goto LABEL_195;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  v130,
                                                  UserId,
                                                  v116,
                                                  0LL);
                          if ( !gameObject )
                            goto LABEL_195;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          v118 = 0LL;
                        }
                        v121 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_32179668(
                          v121,
                          v113,
                          v116,
                          LimitCount,
                          setupInfo,
                          v133,
                          v118,
                          0,
                          0LL);
                        if ( !v112 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v112,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
                          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                        v73 = v115;
                      }
                      else
                      {
                        v122 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
                        PartyOrganizationListViewItem___ctor_32212232(v122, v113, 1, 0LL, 0LL, 1, 0, 0LL);
                        if ( !v112 )
                          goto LABEL_195;
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                          v112,
                          (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
                          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                      }
                      if ( (__int64)++v113 >= (int)monitor || (__int64)v113 >= v131 )
                        goto LABEL_180;
                    }
                    goto LABEL_196;
                  }
LABEL_180:
                  supportMemberBase = this->fields.supportMemberBase;
                  v124 = this->fields.supportMemberObjectList;
                  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                  }
                  v125 = 1;
                  v70 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v112;
                  v126 = v124;
                  v127 = supportMemberBase;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_195;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(questRestrictionInfo, slotNo, 0LL);
        RangeTypeList = QuestRestrictionInfo__GetRangeTypeList(questRestrictionInfo, slotNo, 0LL);
        v90 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v90,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_195;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v91 = 0LL;
          while ( RangeTypeList )
          {
            if ( (__int64)v91 < RangeTypeList->fields._size )
            {
              if ( v91 >= (unsigned int)RangeTypeList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( RangeTypeList->fields._items->m_Items[v91 + 1] == 1 )
              {
                if ( v91 >= (unsigned int)NeedIndividualityList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( !v90 )
                  goto LABEL_195;
                System_Collections_Generic_List_int___AddRange(
                  v90,
                  (System_Collections_Generic_IEnumerable_T__o *)NeedIndividualityList->fields._items->m_Items[v91],
                  (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( (__int64)++v91 >= NeedIndividualityList->fields._size )
              goto LABEL_118;
          }
          goto LABEL_195;
        }
LABEL_118:
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_195;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v93 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
        v94 = System_Linq_Enumerable__Intersect_int_(
                v93,
                CollectionList,
                (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v94,
                                (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_195;
        v95 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_77:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_193:
            this->fields.state = 1;
            v128 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v128,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v128, 0, 0LL);
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
        v96 = this->fields.supportMemberObjectList;
        if ( !v96 )
          goto LABEL_195;
        v97 = *(_QWORD *)&v96->max_length;
        v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v84,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v97 < 1 )
          goto LABEL_186;
        v98 = *(_QWORD *)(v95 + 24);
        if ( (int)v98 < 1 )
          goto LABEL_186;
        v99 = 0LL;
        while ( v99 < (unsigned int)v98 )
        {
          v100 = *(_DWORD *)(v95 + 32 + 4 * v99);
          gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_195;
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)gameObject,
                                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                  v100,
                                  0LL);
          if ( !gameObject )
            goto LABEL_195;
          v102 = *(_DWORD *)(gameObject + 56);
          v103 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32179668(
            v103,
            v99,
            v100,
            v102,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v84 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v84,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          if ( (__int64)++v99 < (int)v97 )
          {
            LODWORD(v98) = *(_DWORD *)(v95 + 24);
            if ( (__int64)v99 < (int)v98 )
              continue;
          }
          goto LABEL_186;
        }
        goto LABEL_196;
      case 3:
        v77 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v78 = &StringLiteral_10381/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_75;
      case 4:
      case 5:
        v56 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v56 )
          goto LABEL_195;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_195;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_77;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_196;
        v57 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v57 )
          goto LABEL_195;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        v58 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)gameObject,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_195;
        v59 = this->fields.supportMemberObjectList;
        if ( !v59 )
          goto LABEL_195;
        v60 = *(_QWORD *)&v59->max_length;
        v61 = *(_QWORD *)(gameObject + 24);
        v62 = gameObject;
        v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v63,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v61 < 1 || (int)v60 < 1 )
          goto LABEL_40;
        v64 = 0LL;
        do
        {
          if ( v64 >= (unsigned __int64)*(unsigned int *)(v62 + 24) )
            goto LABEL_196;
          v65 = *(_DWORD *)(v62 + 32 + 4 * v64);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v58 )
            goto LABEL_195;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v58, gameObject, v65, 0LL);
          if ( !gameObject )
            goto LABEL_195;
          v66 = *(_DWORD *)(gameObject + 56);
          v67 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32179668(v67, v64, v65, v66, setupInfo, v133, 0LL, 0, 0LL);
          if ( !v63 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v63,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
          ++v64;
        }
        while ( v64 < (int)v61 && v64 < (int)v60 );
LABEL_40:
        v68 = this->fields.supportMemberBase;
        v69 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v70 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v63;
        goto LABEL_190;
      case 6:
        v79 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10379/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v79 )
          goto LABEL_195;
        UILabel__set_text(v79, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_195;
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v80 = this->fields.supportMemberObjectList;
        if ( !v80 )
          goto LABEL_195;
        max_length = v80->max_length;
        v82 = *(_DWORD *)(gameObject + 24);
        v83 = gameObject;
        v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v84,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v82 < 1 )
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
              if ( !*(_BYTE *)(gameObject + 224) )
                break;
            }
          }
          if ( !v84 )
            goto LABEL_195;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v84,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( max_length >= 1 )
        {
          v85 = 0LL;
          while ( (unsigned int)v85 < *(_DWORD *)(v83 + 24) )
          {
            v86 = *(FollowerInfo_o **)(v83 + 32 + 8 * v85);
            if ( !v86 )
              goto LABEL_195;
            if ( !v86->fields.isMySvtOrNpc )
            {
              v87 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32183040(v87, v85, v86, 0, setupInfo, v133, 0LL, 0, 0, 0, 0LL);
              if ( !v84 )
                goto LABEL_195;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v84,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
            }
            if ( (int)++v85 >= v82 || (int)v85 >= max_length )
              goto LABEL_186;
          }
LABEL_196:
          v129 = sub_B2C460(gameObject);
          sub_B2C400(v129, 0LL);
        }
LABEL_186:
        v68 = this->fields.supportMemberBase;
        v69 = this->fields.supportMemberObjectList;
        if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        }
        v70 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v84;
LABEL_190:
        v126 = v69;
        v127 = v68;
        v125 = 0;
LABEL_191:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v70, v126, v127, 1, v125, 0LL);
        goto LABEL_192;
      case 9:
        v77 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v78 = &StringLiteral_10385/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_75;
      default:
        v77 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v78 = &StringLiteral_10382/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_75:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v78, 0LL);
        if ( !v77 )
          goto LABEL_195;
        UILabel__set_text(v77, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4184FC2 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4184FC2 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B2C728(v8);
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

  if ( (byte_4184FC3 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4184FC3 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185294 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185294 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}