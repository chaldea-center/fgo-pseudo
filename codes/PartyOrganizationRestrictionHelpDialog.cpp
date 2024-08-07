void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FAC33 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&BaseDialog_TypeInfo, v3);
    sub_1B64A00(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_49FAC33 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B64AA8(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v6, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v5; // x20
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_31998904(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_31998904(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FAC31 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v6);
    byte_49FAC31 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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

  if ( (byte_49FAC2E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_49FAC2E = 1;
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
    sub_1B64C5C(titleLabel, method);
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

  if ( (byte_49FAC32 & 1) == 0 )
  {
    sub_1B64A00(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_49FAC32 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
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
  int64_t gameObject; // x0
  int64_t v48; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v50; // x23
  UILabel_o *messageDeckLabel; // x23
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  struct PartyOrganizationConfirmItemDraw_array *v54; // x8
  __int64 v55; // x21
  __int64 v56; // x19
  int64_t v57; // x20
  System_Collections_Generic_List_object__o *v58; // x24
  unsigned int v59; // w8
  unsigned __int64 v60; // x26
  QuestRestrictionInfo_o *v61; // x19
  int32_t v62; // w27
  int v63; // w8
  int32_t LimitCount; // w28
  Il2CppObject *v65; // x20
  unsigned int v66; // w25
  FollowerInfo_o *v67; // x29
  __int64 v68; // x19
  __int64 v69; // x21
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v71; // x29
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v79; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v80; // x0
  UILabel_o *v81; // x24
  System_Collections_Generic_IEnumerable_T__o *v82; // x24
  System_Collections_Generic_List_int__o *v83; // x26
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v89; // x1
  UILabel_o *v90; // x20
  __int64 *v91; // x8
  UILabel_o *v92; // x23
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v95; // w21
  int64_t v96; // x23
  System_Collections_Generic_List_object__o *v97; // x22
  int32_t v98; // w24
  FollowerInfo_o *v99; // x26
  PartyOrganizationListViewItem_o *v100; // x25
  int32_t v101; // w2
  int32_t v102; // w3
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  PartyOrganizationConfirmItemDraw_array *v107; // x1
  UnityEngine_GameObject_o *v108; // x2
  bool v109; // w4
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v111; // x0
  int32_t i; // w20
  int32_t v113; // w2
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  UILabel_o *messageSelfOrSupportLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v121; // x8
  __int64 v122; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v124; // x23
  System_Collections_Generic_List_object__o *v125; // x22
  unsigned int v126; // w8
  unsigned __int64 v127; // x25
  __int64 v128; // x21
  int32_t v129; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v131; // x28
  int32_t v132; // w0
  int32_t v133; // w29
  PartyOrganizationListViewItem_o *v134; // x27
  int32_t v135; // w2
  int32_t v136; // w3
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  ServantStatusBattleListViewItem_o *v141; // x0
  int32_t v142; // w1
  PartyOrganizationListViewItem_o *v143; // x26
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  __int64 v148; // x8
  System_Collections_Generic_List_object__o *v149; // x0
  Il2CppObject *v150; // x1
  struct UnityEngine_GameObject_o *v151; // x20
  struct PartyOrganizationConfirmItemDraw_array *v152; // x21
  System_Action_o *v153; // x19
  int64_t v154; // [xsp+18h] [xbp-98h]
  __int64 v155; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v156; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v158; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_49FAC2F & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, partyItem);
    sub_1B64A00(&BalanceConfig_TypeInfo, v16);
    sub_1B64A00(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1B64A00(&DataManager_TypeInfo, v20);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v27);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B64A00(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v29);
    sub_1B64A00(&LocalizationManager_TypeInfo, v30);
    sub_1B64A00(&NetworkManager_TypeInfo, v31);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1B64A00(&PartyOrganizationConfirmItemDraw_TypeInfo, v33);
    sub_1B64A00(&PartyOrganizationListViewItem_TypeInfo, v34);
    sub_1B64A00(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v35);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1B64A00(&StringLiteral_10258/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v37);
    sub_1B64A00(&StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v38);
    sub_1B64A00(&StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v39);
    sub_1B64A00(&StringLiteral_10251/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v40);
    sub_1B64A00(&StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v41);
    sub_1B64A00(&StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v42);
    sub_1B64A00(&StringLiteral_10250/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v43);
    sub_1B64A00(&StringLiteral_10259/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v44);
    sub_1B64A00(&StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v45);
    sub_1B64A00(&StringLiteral_1/*""*/, v46);
    byte_49FAC2F = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (int32_t)message);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v158 = questRestrictionInfo;
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v156 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !titleLabel )
                          break;
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = System_String__IsNullOrEmpty(message, 0LL);
                        if ( (gameObject & 1) == 0 )
                          goto LABEL_134;
                        if ( !questRestrictionInfo )
                          break;
                        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
                        if ( !restrictionEntityList )
                          break;
                        if ( restrictionEntityList->max_length <= index )
                          goto LABEL_201;
                        gameObject = (int64_t)restrictionEntityList->m_Items[index];
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)RestrictionEntity__GetClassIndividualityRestrictionMessage(
                                                (RestrictionEntity_o *)gameObject,
                                                0LL);
                        if ( !this->fields.messageLabel )
                          break;
                        v89 = (System_String_o *)gameObject;
                        gameObject = (int64_t)this->fields.messageLabel;
                        goto LABEL_136;
                      case 3:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_132;
                      case 6:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10259/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_132;
                      case 7:
                        v92 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v92 )
                          break;
                        UILabel__set_text(v92, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v95 = *(_DWORD *)(gameObject + 24);
                        v96 = gameObject;
                        v97 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v97,
                          (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v95 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v98 = 0;
                            if ( max_length - 1 < (unsigned int)(v95 - 1) )
                              v95 = max_length;
                            while ( (unsigned int)v98 < *(_DWORD *)(v96 + 24) )
                            {
                              v99 = *(FollowerInfo_o **)(v96 + 8LL * v98 + 32);
                              if ( !v99 )
                                goto LABEL_200;
                              if ( !v99->fields.isMySvtOrNpc )
                              {
                                v100 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_31770404(
                                  v100,
                                  v98,
                                  v99,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v97 )
                                  goto LABEL_200;
                                items = v97->fields._items;
                                v104 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v97->fields._version;
                                if ( !items )
                                  goto LABEL_200;
                                size = v97->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v97,
                                    (Il2CppObject *)v100,
                                    *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v106 = &items->obj.klass + size;
                                  v97->fields._size = size + 1;
                                  v106[4] = (Il2CppClass *)v100;
                                  sub_1B649A4(
                                    (ServantStatusBattleListViewItem_o *)(v106 + 4),
                                    (int32_t)v100,
                                    v101,
                                    v102);
                                }
                              }
                              if ( v95 == ++v98 )
                                goto LABEL_119;
                            }
LABEL_201:
                            sub_1B64C64(gameObject, v48);
                          }
                          goto LABEL_119;
                        }
                        for ( i = 0; ; ++i )
                        {
                          gameObject = (int64_t)BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            gameObject = (int64_t)BalanceConfig_TypeInfo;
                          }
                          if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
                            goto LABEL_119;
                          if ( !partyItem )
                            goto LABEL_200;
                          gameObject = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
                          if ( !gameObject )
                            goto LABEL_200;
                          v48 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v97 )
                        {
                          v115 = v97->fields._items;
                          v116 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v97->fields._version;
                          if ( v115 )
                          {
                            v117 = v97->fields._size;
                            if ( (unsigned int)v117 >= v115->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v97,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v118 = &v115->obj.klass + v117;
                              v97->fields._size = v117 + 1;
                              v118[4] = (Il2CppClass *)v48;
                              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v118 + 4), v48, v113, v114);
                            }
LABEL_119:
                            supportMemberBase = this->fields.supportMemberBase;
                            v79 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                            v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v97;
LABEL_122:
                            v107 = v79;
                            v108 = supportMemberBase;
                            v109 = 0;
                            goto LABEL_196;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v50 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v50 )
                          break;
                        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
                        if ( !questRestrictionInfo )
                          break;
                        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        if ( !*(_DWORD *)(gameObject + 24) )
                          goto LABEL_201;
                        messageDeckLabel = this->fields.messageDeckLabel;
                        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
                        if ( !messageDeckLabel )
                          break;
                        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                        v58 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v58,
                          (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v56 < 1 || (int)v55 < 1 )
                          goto LABEL_58;
                        if ( (int)v55 - 1 >= (unsigned int)(v56 - 1) )
                          v59 = v56;
                        else
                          v59 = v55;
                        v60 = 0LL;
                        v154 = v57;
                        v155 = v59;
                        do
                        {
                          if ( v60 >= *(unsigned int *)(v57 + 24) )
                            goto LABEL_201;
                          v61 = v158;
                          v62 = *(_DWORD *)(v57 + 4 * v60 + 32);
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_object )
                            goto LABEL_200;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  (UserServantCollectionMaster_o *)MasterData_object,
                                                  gameObject,
                                                  v62,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_200;
                          v63 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v63 >= 1 )
                          {
                            v65 = MasterData_object;
                            v66 = 0;
                            while ( 1 )
                            {
                              if ( v66 >= v63 )
                                goto LABEL_201;
                              v67 = QuestFollowerList->m_Items[v66];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
                              if ( !v67 )
                                goto LABEL_200;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v67, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v68 = *(_QWORD *)(gameObject + 48);
                                v69 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                *(_QWORD *)&v161.fields.currentCryptoKey = v68;
                                *(_QWORD *)&v161.fields.fakeValue = v69;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                               v161,
                                               0LL);
                                v61 = v158;
                                if ( (_DWORD)gameObject == v62 )
                                  break;
                              }
                              v63 = QuestFollowerList->max_length;
                              if ( (int)++v66 >= v63 )
                                goto LABEL_51;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v158->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v67, 0, ReturnTypeByQuestId, 0LL);
LABEL_51:
                            MasterData_object = v65;
                            v57 = v154;
                          }
                          v71 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_31766644(
                            v71,
                            v60,
                            v62,
                            LimitCount,
                            setupInfo,
                            v61,
                            0LL,
                            0,
                            0LL);
                          if ( !v58 )
                            goto LABEL_200;
                          v74 = v58->fields._items;
                          v75 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v58->fields._version;
                          if ( !v74 )
                            goto LABEL_200;
                          v76 = v58->fields._size;
                          if ( (unsigned int)v76 >= v74->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v58,
                              (Il2CppObject *)v71,
                              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v77 = &v74->obj.klass + v76;
                            v58->fields._size = v76 + 1;
                            v77[4] = (Il2CppClass *)v71;
                            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v71, v72, v73);
                          }
                          this = v156;
                          ++v60;
                        }
                        while ( v60 != v155 );
LABEL_58:
                        supportMemberBase = this->fields.supportMemberBase;
                        v79 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v58;
                        goto LABEL_122;
                      case 10:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 11:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 12:
                      case 16:
                        v81 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v81 )
                          break;
                        UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
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
                        v82 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v83 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_55124132(
                                v83,
                                v82,
                                (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
                              if ( !v83 )
                                break;
                              v84 = v83->fields._items;
                              v85 = Method_System_Collections_Generic_List_int__Add__;
                              ++v83->fields._version;
                              if ( !v84 )
                                break;
                              v86 = v83->fields._size;
                              if ( (unsigned int)v86 >= v84->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v83,
                                  0,
                                  *(const MethodInfo_34927D0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v83->fields._size = v86 + 1;
                                v84->m_Items[v86 + 1] = 0;
                              }
                              v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v83,
                                                                                     (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v82 )
                                  {
                                    v121 = this->fields.supportMemberObjectList;
                                    if ( v121 )
                                    {
                                      v122 = *(_QWORD *)&v121->max_length;
                                      monitor = v82[1].monitor;
                                      v124 = (UserServantCollectionMaster_o *)gameObject;
                                      v125 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_object____ctor(
                                        v125,
                                        (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor < 1 || (int)v122 < 1 )
                                      {
LABEL_193:
                                        v151 = this->fields.supportMemberBase;
                                        v152 = this->fields.supportMemberObjectList;
                                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                        v109 = 1;
                                        v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v125;
                                        v107 = v152;
                                        v108 = v151;
LABEL_196:
                                        PartyOrganizationConfirmItemDraw__SetPartyIcon(v80, v107, v108, 1, v109, 0LL);
LABEL_197:
                                        this->fields.state = 1;
                                        v153 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v153,
                                          (Il2CppObject *)this,
                                          Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v153, 0, 0LL);
                                        return;
                                      }
                                      if ( (int)v122 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                        v126 = (unsigned int)monitor;
                                      else
                                        v126 = v122;
                                      v127 = 0LL;
                                      v128 = v126;
                                      while ( 1 )
                                      {
                                        if ( v127 >= LODWORD(v82[1].monitor) )
                                          goto LABEL_201;
                                        v129 = *((_DWORD *)&v82[2].klass + v127);
                                        if ( v129 )
                                        {
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                  v129,
                                                  (const MethodInfo_312646C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                            goto LABEL_204;
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                   v129,
                                                   (const MethodInfo_31261D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                          if ( Item )
                                          {
                                            v131 = (FollowerInfo_o *)Item;
                                            v132 = FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
                                            v133 = FollowerInfo__getLimitCount(v131, 0, v132, 0LL);
                                          }
                                          else
                                          {
LABEL_204:
                                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                            gameObject = NetworkManager__get_UserId(0LL);
                                            if ( !v124 )
                                              goto LABEL_200;
                                            gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                    v124,
                                                                    gameObject,
                                                                    v129,
                                                                    0LL);
                                            if ( !gameObject )
                                              goto LABEL_200;
                                            v133 = *(_DWORD *)(gameObject + 56);
                                            v131 = 0LL;
                                          }
                                          v134 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                                          PartyOrganizationListViewItem___ctor_31766644(
                                            v134,
                                            v127,
                                            v129,
                                            v133,
                                            setupInfo,
                                            questRestrictionInfo,
                                            v131,
                                            0,
                                            0LL);
                                          if ( !v125 )
                                            goto LABEL_200;
                                          v137 = v125->fields._items;
                                          this = v156;
                                          v138 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v125->fields._version;
                                          if ( !v137 )
                                            goto LABEL_200;
                                          v139 = v125->fields._size;
                                          if ( (unsigned int)v139 >= v137->max_length )
                                          {
                                            v148 = v138[4];
                                            v149 = v125;
                                            v150 = (Il2CppObject *)v134;
LABEL_191:
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v149,
                                              v150,
                                              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v148 + 192) + 112LL));
                                            goto LABEL_192;
                                          }
                                          v140 = &v137->obj.klass + v139;
                                          v125->fields._size = v139 + 1;
                                          v140[4] = (Il2CppClass *)v134;
                                          v141 = (ServantStatusBattleListViewItem_o *)(v140 + 4);
                                          v142 = (int)v134;
                                        }
                                        else
                                        {
                                          v143 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                                          PartyOrganizationListViewItem___ctor_31807252(
                                            v143,
                                            v127,
                                            1,
                                            0LL,
                                            0LL,
                                            1,
                                            0,
                                            0LL);
                                          if ( !v125 )
                                            goto LABEL_200;
                                          v144 = v125->fields._items;
                                          v145 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v125->fields._version;
                                          if ( !v144 )
                                            goto LABEL_200;
                                          v146 = v125->fields._size;
                                          if ( (unsigned int)v146 >= v144->max_length )
                                          {
                                            v148 = v145[4];
                                            v149 = v125;
                                            v150 = (Il2CppObject *)v143;
                                            goto LABEL_191;
                                          }
                                          v147 = &v144->obj.klass + v146;
                                          v125->fields._size = v146 + 1;
                                          v147[4] = (Il2CppClass *)v143;
                                          v141 = (ServantStatusBattleListViewItem_o *)(v147 + 4);
                                          v142 = (int)v143;
                                        }
                                        sub_1B649A4(v141, v142, v135, v136);
LABEL_192:
                                        if ( v128 == ++v127 )
                                          goto LABEL_193;
                                      }
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
                          v111 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (int64_t)System_String__Format(message, v111, 0LL);
                          if ( messageLabel )
                          {
                            v89 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_136:
                            UILabel__set_text((UILabel_o *)gameObject, v89, 0LL);
                            goto LABEL_197;
                          }
                        }
                        break;
                      case 15:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10258/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_132;
                      default:
                        v90 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v91 = &StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_132:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v91, 0LL);
                        if ( !v90 )
                          break;
                        UILabel__set_text(v90, (System_String_o *)gameObject, 0LL);
LABEL_134:
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v89 = message;
                        goto LABEL_136;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_200:
    sub_1B64C5C(gameObject, v48);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_31994376(
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
  Il2CppObject *v58; // x22
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  __int64 v60; // x20
  __int64 v61; // x19
  int64_t v62; // x24
  System_Collections_Generic_List_object__o *v63; // x23
  unsigned int v64; // w8
  unsigned __int64 v65; // x25
  __int64 v66; // x19
  int32_t v67; // w27
  int32_t v68; // w28
  PartyOrganizationListViewItem_o *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  struct UnityEngine_GameObject_o *v76; // x20
  struct PartyOrganizationConfirmItemDraw_array *v77; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v78; // x0
  bool IsMyServantOrNpcRestriction_40123732; // w0
  UILabel_o *titleLabel; // x25
  bool v81; // w24
  System_Collections_Generic_IEnumerable_T__o *v82; // x27
  bool IsSelectableNormalSupport; // w25
  _BOOL4 v84; // w19
  _BOOL4 v85; // w20
  System_Collections_Generic_List_int__o *v86; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  int v90; // w19
  UILabel_o *v91; // x20
  __int64 *v92; // x8
  UILabel_o *v93; // x23
  struct PartyOrganizationConfirmItemDraw_array *v94; // x8
  QuestRestrictionInfo_o *v95; // x27
  int max_length; // w21
  int v97; // w20
  int64_t v98; // x23
  System_Collections_Generic_List_object__o *v99; // x22
  int32_t v100; // w24
  FollowerInfo_o *v101; // x26
  PartyOrganizationListViewItem_o *v102; // x25
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  System_String_o *v109; // x1
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v112; // x23
  int32_t v113; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  int64_t v117; // x23
  struct PartyOrganizationConfirmItemDraw_array *v118; // x8
  __int64 v119; // x19
  __int64 v120; // x8
  unsigned __int64 v121; // x24
  int32_t v122; // w25
  Il2CppObject *MasterData_object; // x26
  int32_t v124; // w27
  PartyOrganizationListViewItem_o *v125; // x26
  int32_t v126; // w2
  int32_t v127; // w3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  PartyOrganizationConfirmItemDraw_array *v132; // x1
  UnityEngine_GameObject_o *v133; // x2
  bool v134; // w4
  System_Action_o *v135; // x20
  int32_t i; // w20
  int32_t v137; // w2
  int32_t v138; // w3
  QuestRestrictionInfo_o *v139; // x0
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v141; // x0
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  System_String_o *v146; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v150; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v152; // x22
  unsigned int v153; // w8
  unsigned __int64 v154; // x25
  System_Collections_Generic_IEnumerable_T__o *v155; // x23
  __int64 v156; // x24
  System_Collections_Generic_IEnumerable_T__o *v157; // x20
  int32_t v158; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v160; // x28
  PartyOrganizationRestrictionHelpDialog_o *v161; // x19
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  PartyOrganizationListViewItem_o *v164; // x27
  int32_t v165; // w2
  int32_t v166; // w3
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  PartyOrganizationListViewItem_o *v171; // x26
  int32_t v172; // w2
  int32_t v173; // w3
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  Il2CppClass **v177; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v179; // x21
  UserServantCollectionMaster_o *v180; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FAC30 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, partyItem);
    sub_1B64A00(&BalanceConfig_TypeInfo, v16);
    sub_1B64A00(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1B64A00(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1B64A00(&DataManager_TypeInfo, v21);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1B64A00(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1B64A00(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_1B64A00(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_1B64A00(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1B64A00(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_1B64A00(&LocalizationManager_TypeInfo, v40);
    sub_1B64A00(&NetworkManager_TypeInfo, v41);
    sub_1B64A00(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_1B64A00(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_1B64A00(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B64A00(&StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_1B64A00(&StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_1B64A00(&StringLiteral_10251/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_1B64A00(&StringLiteral_10250/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_1B64A00(&StringLiteral_10259/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_1B64A00(&StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_1B64A00(&StringLiteral_1/*""*/, v52);
    byte_49FAC30 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      slotNo,
      restrictionType);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (int64_t)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_200;
    (*(void (__fastcall **)(int64_t, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_200;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (int64_t)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (int64_t)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (int64_t)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_200;
        IsMyServantOrNpcRestriction_40123732 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40123732(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v81 = IsMyServantOrNpcRestriction_40123732;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_200;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v81 )
        {
          gameObject = (int64_t)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v82 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0LL);
              if ( !IsSelectableNormalSupport )
                goto LABEL_161;
              if ( !entity )
                goto LABEL_159;
              v84 = entity != 0LL;
              v85 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_159;
              v86 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_55124132(
                v86,
                v82,
                (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
              if ( !v86 )
                goto LABEL_200;
              items = v86->fields._items;
              v88 = Method_System_Collections_Generic_List_int__Add__;
              ++v86->fields._version;
              if ( !items )
                goto LABEL_200;
              size = v86->fields._size;
              v90 = v85 && v84;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v86,
                  0,
                  *(const MethodInfo_34927D0 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
              }
              else
              {
                v86->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v86,
                                                                     (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v90 )
              {
LABEL_159:
                gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_200;
                v146 = message;
              }
              else
              {
LABEL_161:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0LL);
                gameObject = (int64_t)System_String__Format(message, DialogTargetName, 0LL);
                if ( !messageDeckLabel )
                  goto LABEL_200;
                v146 = (System_String_o *)gameObject;
                gameObject = (int64_t)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v146, 0LL);
              gameObject = (int64_t)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v82 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v180 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v150 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v82[1].monitor;
                      v152 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v152,
                        (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v150 >= 1 )
                      {
                        if ( (int)v150 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v153 = (unsigned int)monitor;
                        else
                          v153 = v150;
                        v154 = 0LL;
                        v155 = v82 + 2;
                        v156 = v153;
                        v157 = v82;
                        while ( v154 < LODWORD(v82[1].monitor) )
                        {
                          v158 = *((_DWORD *)&v155->klass + v154);
                          if ( v158 )
                          {
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v158,
                                    (const MethodInfo_312646C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_204;
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v158,
                                     (const MethodInfo_31261D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v160 = (FollowerInfo_o *)Item;
                              v161 = this;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                              LimitCount = FollowerInfo__getLimitCount(v160, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_204:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              UserId = NetworkManager__get_UserId(0LL);
                              gameObject = (int64_t)v180;
                              if ( !v180 )
                                goto LABEL_200;
                              v161 = this;
                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v180,
                                                      UserId,
                                                      v158,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_200;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v160 = 0LL;
                            }
                            v164 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_31766644(
                              v164,
                              v154,
                              v158,
                              LimitCount,
                              setupInfo,
                              questRestrictionInfo,
                              v160,
                              0,
                              0LL);
                            if ( !v152 )
                              goto LABEL_200;
                            v167 = v152->fields._items;
                            v168 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v152->fields._version;
                            if ( !v167 )
                              goto LABEL_200;
                            v169 = v152->fields._size;
                            this = v161;
                            if ( (unsigned int)v169 >= v167->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v152,
                                (Il2CppObject *)v164,
                                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v170 = &v167->obj.klass + v169;
                              v152->fields._size = v169 + 1;
                              v170[4] = (Il2CppClass *)v164;
                              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v170 + 4), (int32_t)v164, v165, v166);
                            }
                            v82 = v157;
                          }
                          else
                          {
                            v171 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_31807252(v171, v154, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v152 )
                              goto LABEL_200;
                            v174 = v152->fields._items;
                            v175 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v152->fields._version;
                            if ( !v174 )
                              goto LABEL_200;
                            v176 = v152->fields._size;
                            if ( (unsigned int)v176 >= v174->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v152,
                                (Il2CppObject *)v171,
                                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v177 = &v174->obj.klass + v176;
                              v152->fields._size = v176 + 1;
                              v177[4] = (Il2CppClass *)v171;
                              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v177 + 4), (int32_t)v171, v172, v173);
                            }
                          }
                          if ( v156 == ++v154 )
                            goto LABEL_197;
                        }
                        goto LABEL_201;
                      }
LABEL_197:
                      supportMemberBase = this->fields.supportMemberBase;
                      v179 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v134 = 1;
                      v78 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v152;
                      v132 = v179;
                      v133 = supportMemberBase;
                      goto LABEL_138;
                    }
                  }
                }
              }
            }
LABEL_200:
            sub_1B64C5C(gameObject, UserId);
          }
          v139 = questRestrictionInfo;
          messageLabel = this->fields.messageLabel;
          v141 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v139, slotNo, 0LL);
          gameObject = (int64_t)System_String__Format(message, v141, 0LL);
          if ( !messageLabel )
            goto LABEL_200;
          v109 = (System_String_o *)gameObject;
          gameObject = (int64_t)messageLabel;
LABEL_101:
          UILabel__set_text((UILabel_o *)gameObject, v109, 0LL);
LABEL_139:
          this->fields.state = 1;
          v135 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
          System_Action___ctor(v135, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v135, 0, 0LL);
          return;
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v112 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v112,
          (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_200;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v113 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v113 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v113,
                             (const MethodInfo_3494DAC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v113,
                                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v112 )
                  goto LABEL_200;
                System_Collections_Generic_List_int___AddRange(
                  v112,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_34929DC *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v113 >= NeedIndividualityList->fields._size )
              goto LABEL_111;
          }
          goto LABEL_200;
        }
LABEL_111:
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_200;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v115 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v112,
                 (const MethodInfo_2E5A694 *)Method_System_Linq_Enumerable_Distinct_int___);
        v116 = System_Linq_Enumerable__Intersect_int_(
                 v115,
                 CollectionList,
                 (const MethodInfo_2E60D50 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v116,
                                (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_200;
        v117 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_99:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_200;
          v109 = message;
          goto LABEL_101;
        }
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v118 = this->fields.supportMemberObjectList;
        if ( !v118 )
          goto LABEL_200;
        v119 = *(_QWORD *)&v118->max_length;
        v99 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v99,
          (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v119 < 1 )
          goto LABEL_134;
        v120 = *(_QWORD *)(v117 + 24);
        if ( (int)v120 < 1 )
          goto LABEL_134;
        v121 = 0LL;
        while ( v121 < (unsigned int)v120 )
        {
          v122 = *(_DWORD *)(v117 + 32 + 4 * v121);
          gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_200;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  gameObject,
                                  v122,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v124 = *(_DWORD *)(gameObject + 56);
          v125 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31766644(
            v125,
            v121,
            v122,
            v124,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v99 )
            goto LABEL_200;
          v128 = v99->fields._items;
          v129 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v99->fields._version;
          if ( !v128 )
            goto LABEL_200;
          v130 = v99->fields._size;
          if ( (unsigned int)v130 >= v128->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)v125,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v131 = &v128->obj.klass + v130;
            v99->fields._size = v130 + 1;
            v131[4] = (Il2CppClass *)v125;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v131 + 4), (int32_t)v125, v126, v127);
          }
          if ( (__int64)++v121 < (int)v119 )
          {
            LODWORD(v120) = *(_DWORD *)(v117 + 24);
            if ( (__int64)v121 < (int)v120 )
              continue;
          }
          goto LABEL_134;
        }
        goto LABEL_201;
      case 3:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_97;
      case 4:
      case 5:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v56 )
          goto LABEL_200;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_200;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_99;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_201;
        v57 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v57 )
          goto LABEL_200;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        v58 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_200;
        v59 = this->fields.supportMemberObjectList;
        if ( !v59 )
          goto LABEL_200;
        v60 = *(_QWORD *)&v59->max_length;
        v61 = *(_QWORD *)(gameObject + 24);
        v62 = gameObject;
        v63 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v61 < 1 || (int)v60 < 1 )
          goto LABEL_43;
        if ( (int)v60 - 1 >= (unsigned int)(v61 - 1) )
          v64 = v61;
        else
          v64 = v60;
        v65 = 0LL;
        v66 = v64;
        do
        {
          if ( v65 >= *(unsigned int *)(v62 + 24) )
            goto LABEL_201;
          v67 = *(_DWORD *)(v62 + 32 + 4 * v65);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v58 )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v58,
                                  gameObject,
                                  v67,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v68 = *(_DWORD *)(gameObject + 56);
          v69 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31766644(
            v69,
            v65,
            v67,
            v68,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v63 )
            goto LABEL_200;
          v72 = v63->fields._items;
          v73 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v63->fields._version;
          if ( !v72 )
            goto LABEL_200;
          v74 = v63->fields._size;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              (Il2CppObject *)v69,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v63->fields._size = v74 + 1;
            v75[4] = (Il2CppClass *)v69;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
          }
          ++v65;
        }
        while ( v66 != v65 );
LABEL_43:
        v76 = this->fields.supportMemberBase;
        v77 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v78 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v63;
        goto LABEL_137;
      case 6:
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v93 )
          goto LABEL_200;
        UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_200;
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                                (NpcFollowerMaster_o *)gameObject,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0LL);
        if ( !gameObject )
          goto LABEL_200;
        v94 = this->fields.supportMemberObjectList;
        if ( !v94 )
          goto LABEL_200;
        v95 = questRestrictionInfo;
        max_length = v94->max_length;
        v97 = *(_DWORD *)(gameObject + 24);
        v98 = gameObject;
        v99 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v99,
          (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v97 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = (int64_t)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              gameObject = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 156LL) )
              goto LABEL_134;
            if ( !partyItem )
              goto LABEL_200;
            gameObject = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_200;
            UserId = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v99 )
            goto LABEL_200;
          v142 = v99->fields._items;
          v143 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v99->fields._version;
          if ( !v142 )
            goto LABEL_200;
          v144 = v99->fields._size;
          if ( (unsigned int)v144 >= v142->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = &v142->obj.klass + v144;
            v99->fields._size = v144 + 1;
            v145[4] = (Il2CppClass *)UserId;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v145 + 4), UserId, v137, v138);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v97 - 1) )
            v97 = max_length;
          v100 = 0;
          while ( (unsigned int)v100 < *(_DWORD *)(v98 + 24) )
          {
            v101 = *(FollowerInfo_o **)(v98 + 8LL * v100 + 32);
            if ( !v101 )
              goto LABEL_200;
            if ( !v101->fields.isMySvtOrNpc )
            {
              v102 = (PartyOrganizationListViewItem_o *)sub_1B64C4C(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_31770404(v102, v100, v101, 0, setupInfo, v95, 0LL, 0, 0, 0, 0LL);
              if ( !v99 )
                goto LABEL_200;
              v105 = v99->fields._items;
              v106 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v99->fields._version;
              if ( !v105 )
                goto LABEL_200;
              v107 = v99->fields._size;
              if ( (unsigned int)v107 >= v105->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v99,
                  (Il2CppObject *)v102,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
              }
              else
              {
                v108 = &v105->obj.klass + v107;
                v99->fields._size = v107 + 1;
                v108[4] = (Il2CppClass *)v102;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v102, v103, v104);
              }
            }
            if ( v97 == ++v100 )
              goto LABEL_134;
          }
LABEL_201:
          sub_1B64C64(gameObject, UserId);
        }
LABEL_134:
        v76 = this->fields.supportMemberBase;
        v77 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v78 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v99;
LABEL_137:
        v132 = v77;
        v133 = v76;
        v134 = 0;
LABEL_138:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v78, v132, v133, 1, v134, 0LL);
        goto LABEL_139;
      case 9:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10259/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_97;
      default:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_97:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v92, 0LL);
        if ( !v91 )
          goto LABEL_200;
        UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
        goto LABEL_99;
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

  if ( (byte_49FAC2C & 1) == 0 )
  {
    sub_1B64A00(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_49FAC2C = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B64F1C(v8);
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

  if ( (byte_49FAC2D & 1) == 0 )
  {
    sub_1B64A00(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_49FAC2D = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B64F1C(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A755C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7514;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_49FAC34 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, result);
    byte_49FAC34 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}