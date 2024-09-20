void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A571ED & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4A571ED = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B88658(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_32259076(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_32259076(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A571EB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4A571EB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A571E8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A571E8 = 1;
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
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A571EC & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4A571EC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  int64_t v17; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v19; // x23
  UILabel_o *messageDeckLabel; // x23
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  struct PartyOrganizationConfirmItemDraw_array *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x19
  int64_t v26; // x20
  System_Collections_Generic_List_object__o *v27; // x24
  unsigned int v28; // w8
  unsigned __int64 v29; // x26
  QuestRestrictionInfo_o *v30; // x19
  int32_t v31; // w27
  int v32; // w8
  int32_t LimitCount; // w28
  Il2CppObject *v34; // x20
  unsigned int v35; // w25
  FollowerInfo_o *v36; // x29
  __int64 v37; // x19
  __int64 v38; // x21
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v40; // x29
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v48; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v49; // x0
  UILabel_o *v50; // x24
  System_Collections_Generic_IEnumerable_T__o *v51; // x24
  System_Collections_Generic_List_int__o *v52; // x26
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v58; // x1
  UILabel_o *v59; // x20
  __int64 *v60; // x8
  UILabel_o *v61; // x23
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v64; // w21
  int64_t v65; // x23
  System_Collections_Generic_List_object__o *v66; // x22
  int32_t v67; // w24
  FollowerInfo_o *v68; // x26
  PartyOrganizationListViewItem_o *v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  PartyOrganizationConfirmItemDraw_array *v76; // x1
  UnityEngine_GameObject_o *v77; // x2
  bool v78; // w4
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v80; // x0
  int32_t i; // w20
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  UILabel_o *messageSelfOrSupportLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v90; // x8
  __int64 v91; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v93; // x23
  System_Collections_Generic_List_object__o *v94; // x22
  unsigned int v95; // w8
  unsigned __int64 v96; // x25
  __int64 v97; // x21
  int32_t v98; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v100; // x28
  int32_t v101; // w0
  int32_t v102; // w29
  PartyOrganizationListViewItem_o *v103; // x27
  int32_t v104; // w2
  int32_t v105; // w3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  ServantStatusBattleListViewItem_o *v110; // x0
  int32_t v111; // w1
  PartyOrganizationListViewItem_o *v112; // x26
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  __int64 v117; // x8
  System_Collections_Generic_List_object__o *v118; // x0
  Il2CppObject *v119; // x1
  struct UnityEngine_GameObject_o *v120; // x20
  struct PartyOrganizationConfirmItemDraw_array *v121; // x21
  System_Action_o *v122; // x19
  int64_t v123; // [xsp+18h] [xbp-98h]
  __int64 v124; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v125; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v127; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4A571E9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10305/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1B885B0(&StringLiteral_10298/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1B885B0(&StringLiteral_10304/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1B885B0(&StringLiteral_10301/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1B885B0(&StringLiteral_10297/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1B885B0(&StringLiteral_10306/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10302/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A571E9 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (int32_t)message);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v127 = questRestrictionInfo;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v125 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
                        v58 = (System_String_o *)gameObject;
                        gameObject = (int64_t)this->fields.messageLabel;
                        goto LABEL_136;
                      case 3:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10304/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_132;
                      case 6:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10306/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_132;
                      case 7:
                        v61 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v61 )
                          break;
                        UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v64 = *(_DWORD *)(gameObject + 24);
                        v65 = gameObject;
                        v66 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v66,
                          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v64 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v67 = 0;
                            if ( max_length - 1 < (unsigned int)(v64 - 1) )
                              v64 = max_length;
                            while ( (unsigned int)v67 < *(_DWORD *)(v65 + 24) )
                            {
                              v68 = *(FollowerInfo_o **)(v65 + 8LL * v67 + 32);
                              if ( !v68 )
                                goto LABEL_200;
                              if ( !v68->fields.isMySvtOrNpc )
                              {
                                v69 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                                PartyOrganizationListViewItem___ctor_32029524(
                                  v69,
                                  v67,
                                  v68,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v66 )
                                  goto LABEL_200;
                                items = v66->fields._items;
                                v73 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v66->fields._version;
                                if ( !items )
                                  goto LABEL_200;
                                size = v66->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v66,
                                    (Il2CppObject *)v69,
                                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v75 = &items->obj.klass + size;
                                  v66->fields._size = size + 1;
                                  v75[4] = (Il2CppClass *)v69;
                                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
                                }
                              }
                              if ( v64 == ++v67 )
                                goto LABEL_119;
                            }
LABEL_201:
                            sub_1B88814(gameObject, v17);
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
                          v17 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v66 )
                        {
                          v84 = v66->fields._items;
                          v85 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v66->fields._version;
                          if ( v84 )
                          {
                            v86 = v66->fields._size;
                            if ( (unsigned int)v86 >= v84->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v66,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v87 = &v84->obj.klass + v86;
                              v66->fields._size = v86 + 1;
                              v87[4] = (Il2CppClass *)v17;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v87 + 4), v17, v82, v83);
                            }
LABEL_119:
                            supportMemberBase = this->fields.supportMemberBase;
                            v48 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                            v49 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v66;
LABEL_122:
                            v76 = v48;
                            v77 = supportMemberBase;
                            v78 = 0;
                            goto LABEL_196;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v19 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
                        if ( !v19 )
                          break;
                        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
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
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v23 = this->fields.supportMemberObjectList;
                        if ( !v23 )
                          break;
                        v24 = *(_QWORD *)&v23->max_length;
                        v25 = *(_QWORD *)(gameObject + 24);
                        v26 = gameObject;
                        v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v27,
                          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v25 < 1 || (int)v24 < 1 )
                          goto LABEL_58;
                        if ( (int)v24 - 1 >= (unsigned int)(v25 - 1) )
                          v28 = v25;
                        else
                          v28 = v24;
                        v29 = 0LL;
                        v123 = v26;
                        v124 = v28;
                        do
                        {
                          if ( v29 >= *(unsigned int *)(v26 + 24) )
                            goto LABEL_201;
                          v30 = v127;
                          v31 = *(_DWORD *)(v26 + 4 * v29 + 32);
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_object )
                            goto LABEL_200;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  (UserServantCollectionMaster_o *)MasterData_object,
                                                  gameObject,
                                                  v31,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_200;
                          v32 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v32 >= 1 )
                          {
                            v34 = MasterData_object;
                            v35 = 0;
                            while ( 1 )
                            {
                              if ( v35 >= v32 )
                                goto LABEL_201;
                              v36 = QuestFollowerList->m_Items[v35];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v30->fields.questId, 0LL);
                              if ( !v36 )
                                goto LABEL_200;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v36, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v37 = *(_QWORD *)(gameObject + 48);
                                v38 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                *(_QWORD *)&v130.fields.currentCryptoKey = v37;
                                *(_QWORD *)&v130.fields.fakeValue = v38;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v130,
                                               0LL);
                                v30 = v127;
                                if ( (_DWORD)gameObject == v31 )
                                  break;
                              }
                              v32 = QuestFollowerList->max_length;
                              if ( (int)++v35 >= v32 )
                                goto LABEL_51;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v127->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v36, 0, ReturnTypeByQuestId, 0LL);
LABEL_51:
                            MasterData_object = v34;
                            v26 = v123;
                          }
                          v40 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_32025764(
                            v40,
                            v29,
                            v31,
                            LimitCount,
                            setupInfo,
                            v30,
                            0LL,
                            0,
                            0LL);
                          if ( !v27 )
                            goto LABEL_200;
                          v43 = v27->fields._items;
                          v44 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v27->fields._version;
                          if ( !v43 )
                            goto LABEL_200;
                          v45 = v27->fields._size;
                          if ( (unsigned int)v45 >= v43->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v27,
                              (Il2CppObject *)v40,
                              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v46 = &v43->obj.klass + v45;
                            v27->fields._size = v45 + 1;
                            v46[4] = (Il2CppClass *)v40;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
                          }
                          this = v125;
                          ++v29;
                        }
                        while ( v29 != v124 );
LABEL_58:
                        supportMemberBase = this->fields.supportMemberBase;
                        v48 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v49 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v27;
                        goto LABEL_122;
                      case 10:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10302/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 11:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10301/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 12:
                      case 16:
                        v50 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v50 )
                          break;
                        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
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
                        v51 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v52 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
                              System_Collections_Generic_List_int____ctor_55443684(
                                v52,
                                v51,
                                (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
                              if ( !v52 )
                                break;
                              v53 = v52->fields._items;
                              v54 = Method_System_Collections_Generic_List_int__Add__;
                              ++v52->fields._version;
                              if ( !v53 )
                                break;
                              v55 = v52->fields._size;
                              if ( (unsigned int)v55 >= v53->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v52,
                                  0,
                                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v52->fields._size = v55 + 1;
                                v53->m_Items[v55 + 1] = 0;
                              }
                              v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v52,
                                                                                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v51 )
                                  {
                                    v90 = this->fields.supportMemberObjectList;
                                    if ( v90 )
                                    {
                                      v91 = *(_QWORD *)&v90->max_length;
                                      monitor = v51[1].monitor;
                                      v93 = (UserServantCollectionMaster_o *)gameObject;
                                      v94 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                      System_Collections_Generic_List_object____ctor(
                                        v94,
                                        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor < 1 || (int)v91 < 1 )
                                      {
LABEL_193:
                                        v120 = this->fields.supportMemberBase;
                                        v121 = this->fields.supportMemberObjectList;
                                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                        v78 = 1;
                                        v49 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v94;
                                        v76 = v121;
                                        v77 = v120;
LABEL_196:
                                        PartyOrganizationConfirmItemDraw__SetPartyIcon(v49, v76, v77, 1, v78, 0LL);
LABEL_197:
                                        this->fields.state = 1;
                                        v122 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v122,
                                          (Il2CppObject *)this,
                                          Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v122, 0, 0LL);
                                        return;
                                      }
                                      if ( (int)v91 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                        v95 = (unsigned int)monitor;
                                      else
                                        v95 = v91;
                                      v96 = 0LL;
                                      v97 = v95;
                                      while ( 1 )
                                      {
                                        if ( v96 >= LODWORD(v51[1].monitor) )
                                          goto LABEL_201;
                                        v98 = *((_DWORD *)&v51[2].klass + v96);
                                        if ( v98 )
                                        {
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                  v98,
                                                  (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                            goto LABEL_204;
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                   v98,
                                                   (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                          if ( Item )
                                          {
                                            v100 = (FollowerInfo_o *)Item;
                                            v101 = FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
                                            v102 = FollowerInfo__getLimitCount(v100, 0, v101, 0LL);
                                          }
                                          else
                                          {
LABEL_204:
                                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                            gameObject = NetworkManager__get_UserId(0LL);
                                            if ( !v93 )
                                              goto LABEL_200;
                                            gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                    v93,
                                                                    gameObject,
                                                                    v98,
                                                                    0LL);
                                            if ( !gameObject )
                                              goto LABEL_200;
                                            v102 = *(_DWORD *)(gameObject + 56);
                                            v100 = 0LL;
                                          }
                                          v103 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                                          PartyOrganizationListViewItem___ctor_32025764(
                                            v103,
                                            v96,
                                            v98,
                                            v102,
                                            setupInfo,
                                            questRestrictionInfo,
                                            v100,
                                            0,
                                            0LL);
                                          if ( !v94 )
                                            goto LABEL_200;
                                          v106 = v94->fields._items;
                                          this = v125;
                                          v107 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v94->fields._version;
                                          if ( !v106 )
                                            goto LABEL_200;
                                          v108 = v94->fields._size;
                                          if ( (unsigned int)v108 >= v106->max_length )
                                          {
                                            v117 = v107[4];
                                            v118 = v94;
                                            v119 = (Il2CppObject *)v103;
LABEL_191:
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v118,
                                              v119,
                                              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v117 + 192) + 112LL));
                                            goto LABEL_192;
                                          }
                                          v109 = &v106->obj.klass + v108;
                                          v94->fields._size = v108 + 1;
                                          v109[4] = (Il2CppClass *)v103;
                                          v110 = (ServantStatusBattleListViewItem_o *)(v109 + 4);
                                          v111 = (int)v103;
                                        }
                                        else
                                        {
                                          v112 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                                          PartyOrganizationListViewItem___ctor_32066372(
                                            v112,
                                            v96,
                                            1,
                                            0LL,
                                            0LL,
                                            1,
                                            0,
                                            0LL);
                                          if ( !v94 )
                                            goto LABEL_200;
                                          v113 = v94->fields._items;
                                          v114 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v94->fields._version;
                                          if ( !v113 )
                                            goto LABEL_200;
                                          v115 = v94->fields._size;
                                          if ( (unsigned int)v115 >= v113->max_length )
                                          {
                                            v117 = v114[4];
                                            v118 = v94;
                                            v119 = (Il2CppObject *)v112;
                                            goto LABEL_191;
                                          }
                                          v116 = &v113->obj.klass + v115;
                                          v94->fields._size = v115 + 1;
                                          v116[4] = (Il2CppClass *)v112;
                                          v110 = (ServantStatusBattleListViewItem_o *)(v116 + 4);
                                          v111 = (int)v112;
                                        }
                                        sub_1B88554(v110, v111, v104, v105);
LABEL_192:
                                        if ( v97 == ++v96 )
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
                          v80 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                  questRestrictionInfo,
                                                  index,
                                                  0LL);
                          gameObject = (int64_t)System_String__Format(message, v80, 0LL);
                          if ( messageLabel )
                          {
                            v58 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_136:
                            UILabel__set_text((UILabel_o *)gameObject, v58, 0LL);
                            goto LABEL_197;
                          }
                        }
                        break;
                      case 15:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10305/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_132;
                      default:
                        v59 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v60 = &StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_132:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v60, 0LL);
                        if ( !v59 )
                          break;
                        UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
LABEL_134:
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v58 = message;
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
    sub_1B8880C(gameObject, v17);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_32254548(
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
  Il2CppObject *v21; // x22
  struct PartyOrganizationConfirmItemDraw_array *v22; // x8
  __int64 v23; // x20
  __int64 v24; // x19
  int64_t v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  unsigned int v27; // w8
  unsigned __int64 v28; // x25
  __int64 v29; // x19
  int32_t v30; // w27
  int32_t v31; // w28
  PartyOrganizationListViewItem_o *v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  struct UnityEngine_GameObject_o *v39; // x20
  struct PartyOrganizationConfirmItemDraw_array *v40; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v41; // x0
  bool IsMyServantOrNpcRestriction_40453904; // w0
  UILabel_o *titleLabel; // x25
  bool v44; // w24
  System_Collections_Generic_IEnumerable_T__o *v45; // x27
  bool IsSelectableNormalSupport; // w25
  _BOOL4 v47; // w19
  _BOOL4 v48; // w20
  System_Collections_Generic_List_int__o *v49; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int v53; // w19
  UILabel_o *v54; // x20
  __int64 *v55; // x8
  UILabel_o *v56; // x23
  struct PartyOrganizationConfirmItemDraw_array *v57; // x8
  QuestRestrictionInfo_o *v58; // x27
  int max_length; // w21
  int v60; // w20
  int64_t v61; // x23
  System_Collections_Generic_List_object__o *v62; // x22
  int32_t v63; // w24
  FollowerInfo_o *v64; // x26
  PartyOrganizationListViewItem_o *v65; // x25
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_String_o *v72; // x1
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v75; // x23
  int32_t v76; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  int64_t v80; // x23
  struct PartyOrganizationConfirmItemDraw_array *v81; // x8
  __int64 v82; // x19
  __int64 v83; // x8
  unsigned __int64 v84; // x24
  int32_t v85; // w25
  Il2CppObject *MasterData_object; // x26
  int32_t v87; // w27
  PartyOrganizationListViewItem_o *v88; // x26
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  PartyOrganizationConfirmItemDraw_array *v95; // x1
  UnityEngine_GameObject_o *v96; // x2
  bool v97; // w4
  System_Action_o *v98; // x20
  int32_t i; // w20
  int32_t v100; // w2
  int32_t v101; // w3
  QuestRestrictionInfo_o *v102; // x0
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v104; // x0
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  System_String_o *v109; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v113; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v115; // x22
  unsigned int v116; // w8
  unsigned __int64 v117; // x25
  System_Collections_Generic_IEnumerable_T__o *v118; // x23
  __int64 v119; // x24
  System_Collections_Generic_IEnumerable_T__o *v120; // x20
  int32_t v121; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v123; // x28
  PartyOrganizationRestrictionHelpDialog_o *v124; // x19
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  PartyOrganizationListViewItem_o *v127; // x27
  int32_t v128; // w2
  int32_t v129; // w3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  PartyOrganizationListViewItem_o *v134; // x26
  int32_t v135; // w2
  int32_t v136; // w3
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v142; // x21
  UserServantCollectionMaster_o *v143; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A571EA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1B885B0(&StringLiteral_10298/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1B885B0(&StringLiteral_10297/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1B885B0(&StringLiteral_10306/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10302/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A571EA = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
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
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
        IsMyServantOrNpcRestriction_40453904 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v44 = IsMyServantOrNpcRestriction_40453904;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_200;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v44 )
        {
          gameObject = (int64_t)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v45 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v47 = entity != 0LL;
              v48 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_159;
              v49 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_55443684(
                v49,
                v45,
                (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
              if ( !v49 )
                goto LABEL_200;
              items = v49->fields._items;
              v51 = Method_System_Collections_Generic_List_int__Add__;
              ++v49->fields._version;
              if ( !items )
                goto LABEL_200;
              size = v49->fields._size;
              v53 = v48 && v47;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v49,
                  0,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v49->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v49,
                                                                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v53 )
              {
LABEL_159:
                gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_200;
                v109 = message;
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
                v109 = (System_String_o *)gameObject;
                gameObject = (int64_t)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v109, 0LL);
              gameObject = (int64_t)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v45 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v143 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v113 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v45[1].monitor;
                      v115 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v115,
                        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v113 >= 1 )
                      {
                        if ( (int)v113 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v116 = (unsigned int)monitor;
                        else
                          v116 = v113;
                        v117 = 0LL;
                        v118 = v45 + 2;
                        v119 = v116;
                        v120 = v45;
                        while ( v117 < LODWORD(v45[1].monitor) )
                        {
                          v121 = *((_DWORD *)&v118->klass + v117);
                          if ( v121 )
                          {
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v121,
                                    (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_204;
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v121,
                                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v123 = (FollowerInfo_o *)Item;
                              v124 = this;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                              LimitCount = FollowerInfo__getLimitCount(v123, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_204:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              UserId = NetworkManager__get_UserId(0LL);
                              gameObject = (int64_t)v143;
                              if ( !v143 )
                                goto LABEL_200;
                              v124 = this;
                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v143,
                                                      UserId,
                                                      v121,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_200;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v123 = 0LL;
                            }
                            v127 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_32025764(
                              v127,
                              v117,
                              v121,
                              LimitCount,
                              setupInfo,
                              questRestrictionInfo,
                              v123,
                              0,
                              0LL);
                            if ( !v115 )
                              goto LABEL_200;
                            v130 = v115->fields._items;
                            v131 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v115->fields._version;
                            if ( !v130 )
                              goto LABEL_200;
                            v132 = v115->fields._size;
                            this = v124;
                            if ( (unsigned int)v132 >= v130->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v115,
                                (Il2CppObject *)v127,
                                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v133 = &v130->obj.klass + v132;
                              v115->fields._size = v132 + 1;
                              v133[4] = (Il2CppClass *)v127;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v133 + 4), (int32_t)v127, v128, v129);
                            }
                            v45 = v120;
                          }
                          else
                          {
                            v134 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_32066372(v134, v117, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v115 )
                              goto LABEL_200;
                            v137 = v115->fields._items;
                            v138 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v115->fields._version;
                            if ( !v137 )
                              goto LABEL_200;
                            v139 = v115->fields._size;
                            if ( (unsigned int)v139 >= v137->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v115,
                                (Il2CppObject *)v134,
                                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v140 = &v137->obj.klass + v139;
                              v115->fields._size = v139 + 1;
                              v140[4] = (Il2CppClass *)v134;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 4), (int32_t)v134, v135, v136);
                            }
                          }
                          if ( v119 == ++v117 )
                            goto LABEL_197;
                        }
                        goto LABEL_201;
                      }
LABEL_197:
                      supportMemberBase = this->fields.supportMemberBase;
                      v142 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v97 = 1;
                      v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v115;
                      v95 = v142;
                      v96 = supportMemberBase;
                      goto LABEL_138;
                    }
                  }
                }
              }
            }
LABEL_200:
            sub_1B8880C(gameObject, UserId);
          }
          v102 = questRestrictionInfo;
          messageLabel = this->fields.messageLabel;
          v104 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v102, slotNo, 0LL);
          gameObject = (int64_t)System_String__Format(message, v104, 0LL);
          if ( !messageLabel )
            goto LABEL_200;
          v72 = (System_String_o *)gameObject;
          gameObject = (int64_t)messageLabel;
LABEL_101:
          UILabel__set_text((UILabel_o *)gameObject, v72, 0LL);
LABEL_139:
          this->fields.state = 1;
          v98 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v98, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v98, 0, 0LL);
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
        v75 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v75,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_200;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v76 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v76 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v76,
                             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v76,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v75 )
                  goto LABEL_200;
                System_Collections_Generic_List_int___AddRange(
                  v75,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v76 >= NeedIndividualityList->fields._size )
              goto LABEL_111;
          }
          goto LABEL_200;
        }
LABEL_111:
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_200;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v78 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v75,
                (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
        v79 = System_Linq_Enumerable__Intersect_int_(
                v78,
                CollectionList,
                (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v79,
                                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_200;
        v80 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_99:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_200;
          v72 = message;
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
        v81 = this->fields.supportMemberObjectList;
        if ( !v81 )
          goto LABEL_200;
        v82 = *(_QWORD *)&v81->max_length;
        v62 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v62,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v82 < 1 )
          goto LABEL_134;
        v83 = *(_QWORD *)(v80 + 24);
        if ( (int)v83 < 1 )
          goto LABEL_134;
        v84 = 0LL;
        while ( v84 < (unsigned int)v83 )
        {
          v85 = *(_DWORD *)(v80 + 32 + 4 * v84);
          gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_200;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  gameObject,
                                  v85,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v87 = *(_DWORD *)(gameObject + 56);
          v88 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32025764(
            v88,
            v84,
            v85,
            v87,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v62 )
            goto LABEL_200;
          v91 = v62->fields._items;
          v92 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v62->fields._version;
          if ( !v91 )
            goto LABEL_200;
          v93 = v62->fields._size;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)v88,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &v91->obj.klass + v93;
            v62->fields._size = v93 + 1;
            v94[4] = (Il2CppClass *)v88;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v88, v89, v90);
          }
          if ( (__int64)++v84 < (int)v82 )
          {
            LODWORD(v83) = *(_DWORD *)(v80 + 24);
            if ( (__int64)v84 < (int)v83 )
              continue;
          }
          goto LABEL_134;
        }
        goto LABEL_201;
      case 3:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10302/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_97;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v19 )
          goto LABEL_200;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_200;
        gameObject = (int64_t)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                questRestrictionInfo,
                                0LL);
        if ( !gameObject )
          goto LABEL_99;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_201;
        v20 = this->fields.messageDeckLabel;
        gameObject = (int64_t)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0LL);
        if ( !v20 )
          goto LABEL_200;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_200;
        v22 = this->fields.supportMemberObjectList;
        if ( !v22 )
          goto LABEL_200;
        v23 = *(_QWORD *)&v22->max_length;
        v24 = *(_QWORD *)(gameObject + 24);
        v25 = gameObject;
        v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v24 < 1 || (int)v23 < 1 )
          goto LABEL_43;
        if ( (int)v23 - 1 >= (unsigned int)(v24 - 1) )
          v27 = v24;
        else
          v27 = v23;
        v28 = 0LL;
        v29 = v27;
        do
        {
          if ( v28 >= *(unsigned int *)(v25 + 24) )
            goto LABEL_201;
          v30 = *(_DWORD *)(v25 + 32 + 4 * v28);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v21 )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v21,
                                  gameObject,
                                  v30,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v31 = *(_DWORD *)(gameObject + 56);
          v32 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32025764(
            v32,
            v28,
            v30,
            v31,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v26 )
            goto LABEL_200;
          v35 = v26->fields._items;
          v36 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v26->fields._version;
          if ( !v35 )
            goto LABEL_200;
          v37 = v26->fields._size;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v32,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v26->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
          }
          ++v28;
        }
        while ( v29 != v28 );
LABEL_43:
        v39 = this->fields.supportMemberBase;
        v40 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
        goto LABEL_137;
      case 6:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v56 )
          goto LABEL_200;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v57 = this->fields.supportMemberObjectList;
        if ( !v57 )
          goto LABEL_200;
        v58 = questRestrictionInfo;
        max_length = v57->max_length;
        v60 = *(_DWORD *)(gameObject + 24);
        v61 = gameObject;
        v62 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v62,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v60 < 1 )
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
          if ( !v62 )
            goto LABEL_200;
          v105 = v62->fields._items;
          v106 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v62->fields._version;
          if ( !v105 )
            goto LABEL_200;
          v107 = v62->fields._size;
          if ( (unsigned int)v107 >= v105->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v108 = &v105->obj.klass + v107;
            v62->fields._size = v107 + 1;
            v108[4] = (Il2CppClass *)UserId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v108 + 4), UserId, v100, v101);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v60 - 1) )
            v60 = max_length;
          v63 = 0;
          while ( (unsigned int)v63 < *(_DWORD *)(v61 + 24) )
          {
            v64 = *(FollowerInfo_o **)(v61 + 8LL * v63 + 32);
            if ( !v64 )
              goto LABEL_200;
            if ( !v64->fields.isMySvtOrNpc )
            {
              v65 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32029524(v65, v63, v64, 0, setupInfo, v58, 0LL, 0, 0, 0, 0LL);
              if ( !v62 )
                goto LABEL_200;
              v68 = v62->fields._items;
              v69 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v62->fields._version;
              if ( !v68 )
                goto LABEL_200;
              v70 = v62->fields._size;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v62,
                  (Il2CppObject *)v65,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v71 = &v68->obj.klass + v70;
                v62->fields._size = v70 + 1;
                v71[4] = (Il2CppClass *)v65;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v65, v66, v67);
              }
            }
            if ( v60 == ++v63 )
              goto LABEL_134;
          }
LABEL_201:
          sub_1B88814(gameObject, UserId);
        }
LABEL_134:
        v39 = this->fields.supportMemberBase;
        v40 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v62;
LABEL_137:
        v95 = v40;
        v96 = v39;
        v97 = 0;
LABEL_138:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v41, v95, v96, 1, v97, 0LL);
        goto LABEL_139;
      case 9:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10306/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_97;
      default:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10303/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_97:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v55, 0LL);
        if ( !v54 )
          goto LABEL_200;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4A571E6 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4A571E6 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A571E7 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4A571E7 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9418;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C93D0;
}


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
  if ( (byte_4A571EE & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A571EE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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