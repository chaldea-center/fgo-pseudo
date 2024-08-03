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

  if ( (byte_49F8523 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&BaseDialog_TypeInfo, v3);
    sub_1B640C8(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_49F8523 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B64170(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v6, v7, v8);
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
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_31996612(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_31996612(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F8521 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v6);
    byte_49F8521 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_49F851E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F851E = 1;
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
    sub_1B64324(titleLabel);
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

  if ( (byte_49F8522 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_49F8522 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  UILabel_o *closeLabel; // x26
  UILabel_o *v49; // x23
  __int64 v50; // x1
  UILabel_o *messageDeckLabel; // x23
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  struct PartyOrganizationConfirmItemDraw_array *v56; // x8
  __int64 v57; // x21
  __int64 v58; // x19
  int64_t v59; // x20
  System_Collections_Generic_List_object__o *v60; // x24
  unsigned int v61; // w8
  unsigned __int64 v62; // x26
  QuestRestrictionInfo_o *v63; // x19
  int32_t v64; // w27
  __int64 v65; // x2
  int v66; // w8
  int32_t LimitCount; // w28
  Il2CppObject *v68; // x20
  unsigned int v69; // w25
  FollowerInfo_o *v70; // x29
  __int64 v71; // x19
  __int64 v72; // x21
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v74; // x29
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v82; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v83; // x0
  UILabel_o *v84; // x24
  System_Collections_Generic_IEnumerable_T__o *v85; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  System_Collections_Generic_List_int__o *v88; // x26
  struct System_Int32_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  System_String_o *v94; // x1
  UILabel_o *v95; // x20
  __int64 *v96; // x8
  UILabel_o *v97; // x23
  __int64 v98; // x1
  __int64 v99; // x2
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w25
  int v102; // w21
  int64_t v103; // x23
  System_Collections_Generic_List_object__o *v104; // x22
  __int64 v105; // x2
  int32_t v106; // w24
  FollowerInfo_o *v107; // x26
  PartyOrganizationListViewItem_o *v108; // x25
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *items; // x8
  _QWORD *v112; // x9
  __int64 size; // x10
  Il2CppClass **v114; // x0
  PartyOrganizationConfirmItemDraw_array *v115; // x1
  UnityEngine_GameObject_o *v116; // x2
  bool v117; // w4
  __int64 v118; // x1
  __int64 v119; // x2
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v121; // x0
  int32_t i; // w20
  int32_t v123; // w2
  int32_t v124; // w3
  int64_t v125; // x1
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  UILabel_o *messageSelfOrSupportLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  struct PartyOrganizationConfirmItemDraw_array *v134; // x8
  __int64 v135; // x26
  void *monitor; // x21
  UserServantCollectionMaster_o *v137; // x23
  System_Collections_Generic_List_object__o *v138; // x22
  __int64 v139; // x2
  unsigned int v140; // w8
  unsigned __int64 v141; // x25
  __int64 v142; // x21
  int32_t v143; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v145; // x28
  int32_t v146; // w0
  __int64 v147; // x1
  __int64 v148; // x2
  int32_t v149; // w29
  PartyOrganizationListViewItem_o *v150; // x27
  int32_t v151; // w2
  int32_t v152; // w3
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppClass **v156; // x0
  ServantStatusBattleListViewItem_o *v157; // x0
  int32_t v158; // w1
  PartyOrganizationListViewItem_o *v159; // x26
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  __int64 v164; // x8
  System_Collections_Generic_List_object__o *v165; // x0
  Il2CppObject *v166; // x1
  struct UnityEngine_GameObject_o *v167; // x20
  struct PartyOrganizationConfirmItemDraw_array *v168; // x21
  System_Action_o *v169; // x19
  int64_t v170; // [xsp+18h] [xbp-98h]
  __int64 v171; // [xsp+20h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v172; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v174; // [xsp+38h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16

  if ( (byte_49F851F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, partyItem);
    sub_1B640C8(&BalanceConfig_TypeInfo, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v27);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B640C8(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v29);
    sub_1B640C8(&LocalizationManager_TypeInfo, v30);
    sub_1B640C8(&NetworkManager_TypeInfo, v31);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1B640C8(&PartyOrganizationConfirmItemDraw_TypeInfo, v33);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v34);
    sub_1B640C8(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1B640C8(&StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v37);
    sub_1B640C8(&StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v38);
    sub_1B640C8(&StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v39);
    sub_1B640C8(&StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v40);
    sub_1B640C8(&StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v41);
    sub_1B640C8(&StringLiteral_10252/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v42);
    sub_1B640C8(&StringLiteral_10248/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v43);
    sub_1B640C8(&StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v44);
    sub_1B640C8(&StringLiteral_10253/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v45);
    sub_1B640C8(&StringLiteral_1/*""*/, v46);
    byte_49F851F = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (int32_t)message);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v174 = questRestrictionInfo;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
                    v172 = this;
                    switch ( type )
                    {
                      case 1:
                        titleLabel = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
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
                        v94 = (System_String_o *)gameObject;
                        gameObject = (int64_t)this->fields.messageLabel;
                        goto LABEL_136;
                      case 3:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10255/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
                        goto LABEL_132;
                      case 6:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
                        goto LABEL_132;
                      case 7:
                        v97 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
                        if ( !v97 )
                          break;
                        UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
                        gameObject = (int64_t)this->fields.messageDeckLabel;
                        if ( !gameObject )
                          break;
                        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                        gameObject = (int64_t)this->fields.supportMemberBase;
                        if ( !gameObject )
                          break;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                        v102 = *(_DWORD *)(gameObject + 24);
                        v103 = gameObject;
                        v104 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                              v98,
                                                                              v99);
                        System_Collections_Generic_List_object____ctor(
                          v104,
                          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( v102 >= 1 )
                        {
                          if ( max_length >= 1 )
                          {
                            v106 = 0;
                            if ( max_length - 1 < (unsigned int)(v102 - 1) )
                              v102 = max_length;
                            while ( (unsigned int)v106 < *(_DWORD *)(v103 + 24) )
                            {
                              v107 = *(FollowerInfo_o **)(v103 + 8LL * v106 + 32);
                              if ( !v107 )
                                goto LABEL_200;
                              if ( !v107->fields.isMySvtOrNpc )
                              {
                                v108 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                            PartyOrganizationListViewItem_TypeInfo,
                                                                            v50,
                                                                            v105);
                                PartyOrganizationListViewItem___ctor_31768112(
                                  v108,
                                  v106,
                                  v107,
                                  0,
                                  setupInfo,
                                  questRestrictionInfo,
                                  0LL,
                                  0,
                                  0,
                                  0,
                                  0LL);
                                if ( !v104 )
                                  goto LABEL_200;
                                items = v104->fields._items;
                                v112 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                ++v104->fields._version;
                                if ( !items )
                                  goto LABEL_200;
                                size = v104->fields._size;
                                if ( (unsigned int)size >= items->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v104,
                                    (Il2CppObject *)v108,
                                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v114 = &items->obj.klass + size;
                                  v104->fields._size = size + 1;
                                  v114[4] = (Il2CppClass *)v108;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)(v114 + 4),
                                    (int32_t)v108,
                                    v109,
                                    v110);
                                }
                              }
                              if ( v102 == ++v106 )
                                goto LABEL_119;
                            }
LABEL_201:
                            sub_1B6432C(gameObject, v50);
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
                          v125 = gameObject;
                          if ( *(_BYTE *)(gameObject + 128) )
                          {
                            if ( !*(_BYTE *)(gameObject + 232) )
                              break;
                          }
                        }
                        if ( v104 )
                        {
                          v126 = v104->fields._items;
                          v127 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v104->fields._version;
                          if ( v126 )
                          {
                            v128 = v104->fields._size;
                            if ( (unsigned int)v128 >= v126->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v104,
                                (Il2CppObject *)gameObject,
                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v129 = &v126->obj.klass + v128;
                              v104->fields._size = v128 + 1;
                              v129[4] = (Il2CppClass *)v125;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 4), v125, v123, v124);
                            }
LABEL_119:
                            supportMemberBase = this->fields.supportMemberBase;
                            v82 = this->fields.supportMemberObjectList;
                            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                            v83 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v104;
LABEL_122:
                            v115 = v82;
                            v116 = supportMemberBase;
                            v117 = 0;
                            goto LABEL_196;
                          }
                        }
                        break;
                      case 8:
                      case 14:
                        v49 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
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
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                (DataManager_o *)gameObject,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
                        if ( !gameObject )
                          break;
                        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
                        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !gameObject )
                          break;
                        MasterData_object = DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                questRestrictionInfo,
                                                0LL);
                        if ( !gameObject )
                          break;
                        v56 = this->fields.supportMemberObjectList;
                        if ( !v56 )
                          break;
                        v57 = *(_QWORD *)&v56->max_length;
                        v58 = *(_QWORD *)(gameObject + 24);
                        v59 = gameObject;
                        v60 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                             System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                             v54,
                                                                             v55);
                        System_Collections_Generic_List_object____ctor(
                          v60,
                          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                        if ( (int)v58 < 1 || (int)v57 < 1 )
                          goto LABEL_58;
                        if ( (int)v57 - 1 >= (unsigned int)(v58 - 1) )
                          v61 = v58;
                        else
                          v61 = v57;
                        v62 = 0LL;
                        v170 = v59;
                        v171 = v61;
                        do
                        {
                          if ( v62 >= *(unsigned int *)(v59 + 24) )
                            goto LABEL_201;
                          v63 = v174;
                          v64 = *(_DWORD *)(v59 + 4 * v62 + 32);
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          gameObject = NetworkManager__get_UserId(0LL);
                          if ( !MasterData_object )
                            goto LABEL_200;
                          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                  (UserServantCollectionMaster_o *)MasterData_object,
                                                  gameObject,
                                                  v64,
                                                  0LL);
                          if ( !gameObject || !QuestFollowerList )
                            goto LABEL_200;
                          v66 = QuestFollowerList->max_length;
                          LimitCount = *(_DWORD *)(gameObject + 56);
                          if ( v66 >= 1 )
                          {
                            v68 = MasterData_object;
                            v69 = 0;
                            while ( 1 )
                            {
                              if ( v69 >= v66 )
                                goto LABEL_201;
                              v70 = QuestFollowerList->m_Items[v69];
                              gameObject = FollowerInfo__GetReturnTypeByQuestId(v63->fields.questId, 0LL);
                              if ( !v70 )
                                goto LABEL_200;
                              gameObject = (int64_t)FollowerInfo__getServantLeaderInfo(v70, 0, gameObject, 0LL);
                              if ( gameObject )
                              {
                                v71 = *(_QWORD *)(gameObject + 48);
                                v72 = *(_QWORD *)(gameObject + 56);
                                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                                *(_QWORD *)&v177.fields.currentCryptoKey = v71;
                                *(_QWORD *)&v177.fields.fakeValue = v72;
                                gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v177,
                                               0LL);
                                v63 = v174;
                                if ( (_DWORD)gameObject == v64 )
                                  break;
                              }
                              v66 = QuestFollowerList->max_length;
                              if ( (int)++v69 >= v66 )
                                goto LABEL_51;
                            }
                            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v174->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v70, 0, ReturnTypeByQuestId, 0LL);
LABEL_51:
                            MasterData_object = v68;
                            v59 = v170;
                          }
                          v74 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                     PartyOrganizationListViewItem_TypeInfo,
                                                                     v50,
                                                                     v65);
                          PartyOrganizationListViewItem___ctor_31764352(
                            v74,
                            v62,
                            v64,
                            LimitCount,
                            setupInfo,
                            v63,
                            0LL,
                            0,
                            0LL);
                          if ( !v60 )
                            goto LABEL_200;
                          v77 = v60->fields._items;
                          v78 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v60->fields._version;
                          if ( !v77 )
                            goto LABEL_200;
                          v79 = v60->fields._size;
                          if ( (unsigned int)v79 >= v77->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v60,
                              (Il2CppObject *)v74,
                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v80 = &v77->obj.klass + v79;
                            v60->fields._size = v79 + 1;
                            v80[4] = (Il2CppClass *)v74;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
                          }
                          this = v172;
                          ++v62;
                        }
                        while ( v62 != v171 );
LABEL_58:
                        supportMemberBase = this->fields.supportMemberBase;
                        v82 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v83 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v60;
                        goto LABEL_122;
                      case 10:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10253/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 11:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10252/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
                        goto LABEL_132;
                      case 12:
                      case 16:
                        v84 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
                        if ( !v84 )
                          break;
                        UILabel__set_text(v84, (System_String_o *)gameObject, 0LL);
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
                        v85 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
                        if ( *(_QWORD *)(gameObject + 24) )
                        {
                          if ( !DataManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                          gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                              v88 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                                v86,
                                                                                v87);
                              System_Collections_Generic_List_int____ctor_55113648(
                                v88,
                                v85,
                                (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
                              if ( !v88 )
                                break;
                              v89 = v88->fields._items;
                              v90 = Method_System_Collections_Generic_List_int__Add__;
                              ++v88->fields._version;
                              if ( !v89 )
                                break;
                              v91 = v88->fields._size;
                              if ( (unsigned int)v91 >= v89->max_length )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  v88,
                                  0,
                                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v88->fields._size = v91 + 1;
                                v89->m_Items[v91 + 1] = 0;
                              }
                              v85 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     v88,
                                                                                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( gameObject )
                                {
                                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)gameObject,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                                  if ( v85 )
                                  {
                                    v134 = this->fields.supportMemberObjectList;
                                    if ( v134 )
                                    {
                                      v135 = *(_QWORD *)&v134->max_length;
                                      monitor = v85[1].monitor;
                                      v137 = (UserServantCollectionMaster_o *)gameObject;
                                      v138 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                                            System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                                            v132,
                                                                                            v133);
                                      System_Collections_Generic_List_object____ctor(
                                        v138,
                                        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                      if ( (int)monitor < 1 || (int)v135 < 1 )
                                      {
LABEL_193:
                                        v167 = this->fields.supportMemberBase;
                                        v168 = this->fields.supportMemberObjectList;
                                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                        v117 = 1;
                                        v83 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v138;
                                        v115 = v168;
                                        v116 = v167;
LABEL_196:
                                        PartyOrganizationConfirmItemDraw__SetPartyIcon(v83, v115, v116, 1, v117, 0LL);
LABEL_197:
                                        this->fields.state = 1;
                                        v169 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v118, v119);
                                        System_Action___ctor(
                                          v169,
                                          (Il2CppObject *)this,
                                          Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v169, 0, 0LL);
                                        return;
                                      }
                                      if ( (int)v135 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                                        v140 = (unsigned int)monitor;
                                      else
                                        v140 = v135;
                                      v141 = 0LL;
                                      v142 = v140;
                                      while ( 1 )
                                      {
                                        if ( v141 >= LODWORD(v85[1].monitor) )
                                          goto LABEL_201;
                                        v143 = *((_DWORD *)&v85[2].klass + v141);
                                        if ( v143 )
                                        {
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                  v143,
                                                  (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                                            goto LABEL_204;
                                          gameObject = (int64_t)npcInfoDictionary;
                                          if ( !npcInfoDictionary )
                                            goto LABEL_200;
                                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                                   v143,
                                                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                                          if ( Item )
                                          {
                                            v145 = (FollowerInfo_o *)Item;
                                            v146 = FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
                                            v149 = FollowerInfo__getLimitCount(v145, 0, v146, 0LL);
                                          }
                                          else
                                          {
LABEL_204:
                                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                            gameObject = NetworkManager__get_UserId(0LL);
                                            if ( !v137 )
                                              goto LABEL_200;
                                            gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                                    v137,
                                                                    gameObject,
                                                                    v143,
                                                                    0LL);
                                            if ( !gameObject )
                                              goto LABEL_200;
                                            v149 = *(_DWORD *)(gameObject + 56);
                                            v145 = 0LL;
                                          }
                                          v150 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                                      PartyOrganizationListViewItem_TypeInfo,
                                                                                      v147,
                                                                                      v148);
                                          PartyOrganizationListViewItem___ctor_31764352(
                                            v150,
                                            v141,
                                            v143,
                                            v149,
                                            setupInfo,
                                            questRestrictionInfo,
                                            v145,
                                            0,
                                            0LL);
                                          if ( !v138 )
                                            goto LABEL_200;
                                          v153 = v138->fields._items;
                                          this = v172;
                                          v154 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v138->fields._version;
                                          if ( !v153 )
                                            goto LABEL_200;
                                          v155 = v138->fields._size;
                                          if ( (unsigned int)v155 >= v153->max_length )
                                          {
                                            v164 = v154[4];
                                            v165 = v138;
                                            v166 = (Il2CppObject *)v150;
LABEL_191:
                                            System_Collections_Generic_List_object___AddWithResize(
                                              v165,
                                              v166,
                                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v164 + 192) + 112LL));
                                            goto LABEL_192;
                                          }
                                          v156 = &v153->obj.klass + v155;
                                          v138->fields._size = v155 + 1;
                                          v156[4] = (Il2CppClass *)v150;
                                          v157 = (ServantStatusBattleListViewItem_o *)(v156 + 4);
                                          v158 = (int)v150;
                                        }
                                        else
                                        {
                                          v159 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                                      PartyOrganizationListViewItem_TypeInfo,
                                                                                      v50,
                                                                                      v139);
                                          PartyOrganizationListViewItem___ctor_31804960(
                                            v159,
                                            v141,
                                            1,
                                            0LL,
                                            0LL,
                                            1,
                                            0,
                                            0LL);
                                          if ( !v138 )
                                            goto LABEL_200;
                                          v160 = v138->fields._items;
                                          v161 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                          ++v138->fields._version;
                                          if ( !v160 )
                                            goto LABEL_200;
                                          v162 = v138->fields._size;
                                          if ( (unsigned int)v162 >= v160->max_length )
                                          {
                                            v164 = v161[4];
                                            v165 = v138;
                                            v166 = (Il2CppObject *)v159;
                                            goto LABEL_191;
                                          }
                                          v163 = &v160->obj.klass + v162;
                                          v138->fields._size = v162 + 1;
                                          v163[4] = (Il2CppClass *)v159;
                                          v157 = (ServantStatusBattleListViewItem_o *)(v163 + 4);
                                          v158 = (int)v159;
                                        }
                                        sub_1B6406C(v157, v158, v151, v152);
LABEL_192:
                                        if ( v142 == ++v141 )
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
                          v121 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                   questRestrictionInfo,
                                                   index,
                                                   0LL);
                          gameObject = (int64_t)System_String__Format(message, v121, 0LL);
                          if ( messageLabel )
                          {
                            v94 = (System_String_o *)gameObject;
                            gameObject = (int64_t)messageLabel;
LABEL_136:
                            UILabel__set_text((UILabel_o *)gameObject, v94, 0LL);
                            goto LABEL_197;
                          }
                        }
                        break;
                      case 15:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10256/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
                        goto LABEL_132;
                      default:
                        v95 = this->fields.titleLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v96 = &StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_132:
                        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v96, 0LL);
                        if ( !v95 )
                          break;
                        UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
LABEL_134:
                        gameObject = (int64_t)this->fields.messageLabel;
                        if ( !gameObject )
                          break;
                        v94 = message;
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
    sub_1B64324(gameObject);
  }
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Open_31992084(
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
  __int64 v56; // x1
  UILabel_o *v57; // x23
  Il2CppObject *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  struct PartyOrganizationConfirmItemDraw_array *v61; // x8
  __int64 v62; // x20
  __int64 v63; // x19
  int64_t v64; // x24
  System_Collections_Generic_List_object__o *v65; // x23
  unsigned int v66; // w8
  unsigned __int64 v67; // x25
  __int64 v68; // x19
  int32_t v69; // w27
  __int64 v70; // x1
  __int64 v71; // x2
  int32_t v72; // w28
  PartyOrganizationListViewItem_o *v73; // x26
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  struct UnityEngine_GameObject_o *v80; // x20
  struct PartyOrganizationConfirmItemDraw_array *v81; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v82; // x0
  bool IsMyServantOrNpcRestriction_40118712; // w0
  UILabel_o *titleLabel; // x25
  bool v85; // w24
  System_Collections_Generic_IEnumerable_T__o *v86; // x27
  bool IsSelectableNormalSupport; // w25
  __int64 v88; // x1
  __int64 v89; // x2
  _BOOL4 v90; // w19
  _BOOL4 v91; // w20
  System_Collections_Generic_List_int__o *v92; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  int v96; // w19
  UILabel_o *v97; // x20
  __int64 *v98; // x8
  UILabel_o *v99; // x23
  __int64 v100; // x1
  __int64 v101; // x2
  struct PartyOrganizationConfirmItemDraw_array *v102; // x8
  QuestRestrictionInfo_o *v103; // x27
  int max_length; // w21
  int v105; // w20
  int64_t v106; // x23
  System_Collections_Generic_List_object__o *v107; // x22
  __int64 v108; // x2
  int32_t v109; // w24
  FollowerInfo_o *v110; // x26
  PartyOrganizationListViewItem_o *v111; // x25
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  System_String_o *v118; // x1
  __int64 v119; // x1
  __int64 v120; // x2
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  __int64 v123; // x1
  __int64 v124; // x2
  System_Collections_Generic_List_int__o *v125; // x23
  int32_t v126; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x0
  int64_t v130; // x23
  __int64 v131; // x1
  __int64 v132; // x2
  struct PartyOrganizationConfirmItemDraw_array *v133; // x8
  __int64 v134; // x19
  __int64 v135; // x8
  unsigned __int64 v136; // x24
  int32_t v137; // w25
  Il2CppObject *MasterData_object; // x26
  __int64 v139; // x1
  __int64 v140; // x2
  int32_t v141; // w27
  PartyOrganizationListViewItem_o *v142; // x26
  int32_t v143; // w2
  int32_t v144; // w3
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  Il2CppClass **v148; // x0
  PartyOrganizationConfirmItemDraw_array *v149; // x1
  UnityEngine_GameObject_o *v150; // x2
  bool v151; // w4
  System_Action_o *v152; // x20
  int32_t i; // w20
  int32_t v154; // w2
  int32_t v155; // w3
  int64_t v156; // x1
  QuestRestrictionInfo_o *v157; // x0
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v159; // x0
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  System_String_o *v164; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  __int64 v167; // x1
  __int64 v168; // x2
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v170; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v172; // x22
  __int64 v173; // x2
  unsigned int v174; // w8
  unsigned __int64 v175; // x25
  System_Collections_Generic_IEnumerable_T__o *v176; // x23
  __int64 v177; // x24
  System_Collections_Generic_IEnumerable_T__o *v178; // x20
  int32_t v179; // w26
  Il2CppObject *Item; // x0
  FollowerInfo_o *v181; // x28
  PartyOrganizationRestrictionHelpDialog_o *v182; // x19
  int32_t ReturnTypeByQuestId; // w0
  __int64 v184; // x1
  __int64 v185; // x2
  int32_t LimitCount; // w29
  int64_t UserId; // x1
  PartyOrganizationListViewItem_o *v188; // x27
  int32_t v189; // w2
  int32_t v190; // w3
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  Il2CppClass **v194; // x0
  PartyOrganizationListViewItem_o *v195; // x26
  int32_t v196; // w2
  int32_t v197; // w3
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  Il2CppClass **v201; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v203; // x21
  UserServantCollectionMaster_o *v204; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49F8520 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, partyItem);
    sub_1B640C8(&BalanceConfig_TypeInfo, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1B640C8(&DataManager_TypeInfo, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1B640C8(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_1B640C8(&LocalizationManager_TypeInfo, v40);
    sub_1B640C8(&NetworkManager_TypeInfo, v41);
    sub_1B640C8(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_1B640C8(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B640C8(&StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_1B640C8(&StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_1B640C8(&StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_1B640C8(&StringLiteral_10248/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_1B640C8(&StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_1B640C8(&StringLiteral_10253/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_1B640C8(&StringLiteral_1/*""*/, v52);
    byte_49F8520 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C(
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
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
        IsMyServantOrNpcRestriction_40118712 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v85 = IsMyServantOrNpcRestriction_40118712;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_200;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v85 )
        {
          gameObject = (int64_t)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  slotNo,
                                  0,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v86 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *(_QWORD *)(gameObject + 24) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v90 = entity != 0LL;
              v91 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_159;
              v92 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v88,
                                                                v89);
              System_Collections_Generic_List_int____ctor_55113648(
                v92,
                v86,
                (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
              if ( !v92 )
                goto LABEL_200;
              items = v92->fields._items;
              v94 = Method_System_Collections_Generic_List_int__Add__;
              ++v92->fields._version;
              if ( !items )
                goto LABEL_200;
              size = v92->fields._size;
              v96 = v91 && v90;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v92,
                  0,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
              }
              else
              {
                v92->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v86 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v92,
                                                                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v96 )
              {
LABEL_159:
                gameObject = (int64_t)this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_200;
                v164 = message;
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
                v164 = (System_String_o *)gameObject;
                gameObject = (int64_t)messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v164, 0LL);
              gameObject = (int64_t)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (int64_t)DataManager__GetMasterData_object_(
                                          (DataManager_o *)gameObject,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v86 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v204 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v170 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v86[1].monitor;
                      v172 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                            System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                                            v167,
                                                                            v168);
                      System_Collections_Generic_List_object____ctor(
                        v172,
                        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v170 >= 1 )
                      {
                        if ( (int)v170 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v174 = (unsigned int)monitor;
                        else
                          v174 = v170;
                        v175 = 0LL;
                        v176 = v86 + 2;
                        v177 = v174;
                        v178 = v86;
                        while ( v175 < LODWORD(v86[1].monitor) )
                        {
                          v179 = *((_DWORD *)&v176->klass + v175);
                          if ( v179 )
                          {
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v179,
                                    (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_204;
                            gameObject = (int64_t)npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_200;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v179,
                                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v181 = (FollowerInfo_o *)Item;
                              v182 = this;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                              LimitCount = FollowerInfo__getLimitCount(v181, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_204:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              UserId = NetworkManager__get_UserId(0LL);
                              gameObject = (int64_t)v204;
                              if ( !v204 )
                                goto LABEL_200;
                              v182 = this;
                              gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                                      v204,
                                                      UserId,
                                                      v179,
                                                      0LL);
                              if ( !gameObject )
                                goto LABEL_200;
                              LimitCount = *(_DWORD *)(gameObject + 56);
                              v181 = 0LL;
                            }
                            v188 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                        v184,
                                                                        v185);
                            PartyOrganizationListViewItem___ctor_31764352(
                              v188,
                              v175,
                              v179,
                              LimitCount,
                              setupInfo,
                              questRestrictionInfo,
                              v181,
                              0,
                              0LL);
                            if ( !v172 )
                              goto LABEL_200;
                            v191 = v172->fields._items;
                            v192 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v172->fields._version;
                            if ( !v191 )
                              goto LABEL_200;
                            v193 = v172->fields._size;
                            this = v182;
                            if ( (unsigned int)v193 >= v191->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v172,
                                (Il2CppObject *)v188,
                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v194 = &v191->obj.klass + v193;
                              v172->fields._size = v193 + 1;
                              v194[4] = (Il2CppClass *)v188;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v194 + 4), (int32_t)v188, v189, v190);
                            }
                            v86 = v178;
                          }
                          else
                          {
                            v195 = (PartyOrganizationListViewItem_o *)sub_1B64314(
                                                                        PartyOrganizationListViewItem_TypeInfo,
                                                                        v56,
                                                                        v173);
                            PartyOrganizationListViewItem___ctor_31804960(v195, v175, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v172 )
                              goto LABEL_200;
                            v198 = v172->fields._items;
                            v199 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v172->fields._version;
                            if ( !v198 )
                              goto LABEL_200;
                            v200 = v172->fields._size;
                            if ( (unsigned int)v200 >= v198->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v172,
                                (Il2CppObject *)v195,
                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v201 = &v198->obj.klass + v200;
                              v172->fields._size = v200 + 1;
                              v201[4] = (Il2CppClass *)v195;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v201 + 4), (int32_t)v195, v196, v197);
                            }
                          }
                          if ( v177 == ++v175 )
                            goto LABEL_197;
                        }
                        goto LABEL_201;
                      }
LABEL_197:
                      supportMemberBase = this->fields.supportMemberBase;
                      v203 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v151 = 1;
                      v82 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v172;
                      v149 = v203;
                      v150 = supportMemberBase;
                      goto LABEL_138;
                    }
                  }
                }
              }
            }
LABEL_200:
            sub_1B64324(gameObject);
          }
          v157 = questRestrictionInfo;
          messageLabel = this->fields.messageLabel;
          v159 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v157, slotNo, 0LL);
          gameObject = (int64_t)System_String__Format(message, v159, 0LL);
          if ( !messageLabel )
            goto LABEL_200;
          v118 = (System_String_o *)gameObject;
          gameObject = (int64_t)messageLabel;
LABEL_101:
          UILabel__set_text((UILabel_o *)gameObject, v118, 0LL);
LABEL_139:
          this->fields.state = 1;
          v152 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v119, v120);
          System_Action___ctor(v152, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v152, 0, 0LL);
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
        v125 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v123,
                                                           v124);
        System_Collections_Generic_List_int____ctor(
          v125,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_200;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v126 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v126 )
            {
              gameObject = System_Collections_Generic_List_Int32Enum___get_Item(
                             RangeTypeList,
                             v126,
                             (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                        NeedIndividualityList,
                                        v126,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v125 )
                  goto LABEL_200;
                System_Collections_Generic_List_int___AddRange(
                  v125,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v126 >= NeedIndividualityList->fields._size )
              goto LABEL_111;
          }
          goto LABEL_200;
        }
LABEL_111:
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_200;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v128 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v125,
                 (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
        v129 = System_Linq_Enumerable__Intersect_int_(
                 v128,
                 CollectionList,
                 (const MethodInfo_2E5E45C *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                v129,
                                (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_200;
        v130 = gameObject;
        if ( !*(_QWORD *)(gameObject + 24) )
        {
LABEL_99:
          gameObject = (int64_t)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_200;
          v118 = message;
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
        v133 = this->fields.supportMemberObjectList;
        if ( !v133 )
          goto LABEL_200;
        v134 = *(_QWORD *)&v133->max_length;
        v107 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                              v131,
                                                              v132);
        System_Collections_Generic_List_object____ctor(
          v107,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v134 < 1 )
          goto LABEL_134;
        v135 = *(_QWORD *)(v130 + 24);
        if ( (int)v135 < 1 )
          goto LABEL_134;
        v136 = 0LL;
        while ( v136 < (unsigned int)v135 )
        {
          v137 = *(_DWORD *)(v130 + 32 + 4 * v136);
          gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_200;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)MasterData_object,
                                  gameObject,
                                  v137,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v141 = *(_DWORD *)(gameObject + 56);
          v142 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v139, v140);
          PartyOrganizationListViewItem___ctor_31764352(
            v142,
            v136,
            v137,
            v141,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v107 )
            goto LABEL_200;
          v145 = v107->fields._items;
          v146 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v107->fields._version;
          if ( !v145 )
            goto LABEL_200;
          v147 = v107->fields._size;
          if ( (unsigned int)v147 >= v145->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v107,
              (Il2CppObject *)v142,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v148 = &v145->obj.klass + v147;
            v107->fields._size = v147 + 1;
            v148[4] = (Il2CppClass *)v142;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v148 + 4), (int32_t)v142, v143, v144);
          }
          if ( (__int64)++v136 < (int)v134 )
          {
            LODWORD(v135) = *(_DWORD *)(v130 + 24);
            if ( (__int64)v136 < (int)v135 )
              continue;
          }
          goto LABEL_134;
        }
        goto LABEL_201;
      case 3:
        v97 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = &StringLiteral_10253/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_97;
      case 4:
      case 5:
        v55 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v55 )
          goto LABEL_200;
        UILabel__set_text(v55, (System_String_o *)gameObject, 0LL);
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
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        v58 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_200;
        v61 = this->fields.supportMemberObjectList;
        if ( !v61 )
          goto LABEL_200;
        v62 = *(_QWORD *)&v61->max_length;
        v63 = *(_QWORD *)(gameObject + 24);
        v64 = gameObject;
        v65 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                             v59,
                                                             v60);
        System_Collections_Generic_List_object____ctor(
          v65,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v63 < 1 || (int)v62 < 1 )
          goto LABEL_43;
        if ( (int)v62 - 1 >= (unsigned int)(v63 - 1) )
          v66 = v63;
        else
          v66 = v62;
        v67 = 0LL;
        v68 = v66;
        do
        {
          if ( v67 >= *(unsigned int *)(v64 + 24) )
            goto LABEL_201;
          v69 = *(_DWORD *)(v64 + 32 + 4 * v67);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager__get_UserId(0LL);
          if ( !v58 )
            goto LABEL_200;
          gameObject = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                  (UserServantCollectionMaster_o *)v58,
                                  gameObject,
                                  v69,
                                  0LL);
          if ( !gameObject )
            goto LABEL_200;
          v72 = *(_DWORD *)(gameObject + 56);
          v73 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v70, v71);
          PartyOrganizationListViewItem___ctor_31764352(
            v73,
            v67,
            v69,
            v72,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v65 )
            goto LABEL_200;
          v76 = v65->fields._items;
          v77 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v65->fields._version;
          if ( !v76 )
            goto LABEL_200;
          v78 = v65->fields._size;
          if ( (unsigned int)v78 >= v76->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v65,
              (Il2CppObject *)v73,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v65->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
          }
          ++v67;
        }
        while ( v68 != v67 );
LABEL_43:
        v80 = this->fields.supportMemberBase;
        v81 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v82 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v65;
        goto LABEL_137;
      case 6:
        v99 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v99 )
          goto LABEL_200;
        UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_200;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (int64_t)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_200;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v102 = this->fields.supportMemberObjectList;
        if ( !v102 )
          goto LABEL_200;
        v103 = questRestrictionInfo;
        max_length = v102->max_length;
        v105 = *(_DWORD *)(gameObject + 24);
        v106 = gameObject;
        v107 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                              v100,
                                                              v101);
        System_Collections_Generic_List_object____ctor(
          v107,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v105 < 1 )
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
            v156 = gameObject;
            if ( *(_BYTE *)(gameObject + 128) )
            {
              if ( !*(_BYTE *)(gameObject + 232) )
                break;
            }
          }
          if ( !v107 )
            goto LABEL_200;
          v160 = v107->fields._items;
          v161 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v107->fields._version;
          if ( !v160 )
            goto LABEL_200;
          v162 = v107->fields._size;
          if ( (unsigned int)v162 >= v160->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v107,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
          }
          else
          {
            v163 = &v160->obj.klass + v162;
            v107->fields._size = v162 + 1;
            v163[4] = (Il2CppClass *)v156;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v163 + 4), v156, v154, v155);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v105 - 1) )
            v105 = max_length;
          v109 = 0;
          while ( (unsigned int)v109 < *(_DWORD *)(v106 + 24) )
          {
            v110 = *(FollowerInfo_o **)(v106 + 8LL * v109 + 32);
            if ( !v110 )
              goto LABEL_200;
            if ( !v110->fields.isMySvtOrNpc )
            {
              v111 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v56, v108);
              PartyOrganizationListViewItem___ctor_31768112(v111, v109, v110, 0, setupInfo, v103, 0LL, 0, 0, 0, 0LL);
              if ( !v107 )
                goto LABEL_200;
              v114 = v107->fields._items;
              v115 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v107->fields._version;
              if ( !v114 )
                goto LABEL_200;
              v116 = v107->fields._size;
              if ( (unsigned int)v116 >= v114->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v107,
                  (Il2CppObject *)v111,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
              }
              else
              {
                v117 = &v114->obj.klass + v116;
                v107->fields._size = v116 + 1;
                v117[4] = (Il2CppClass *)v111;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v111, v112, v113);
              }
            }
            if ( v105 == ++v109 )
              goto LABEL_134;
          }
LABEL_201:
          sub_1B6432C(gameObject, v56);
        }
LABEL_134:
        v80 = this->fields.supportMemberBase;
        v81 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v82 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v107;
LABEL_137:
        v149 = v81;
        v150 = v80;
        v151 = 0;
LABEL_138:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v82, v149, v150, 1, v151, 0LL);
        goto LABEL_139;
      case 9:
        v97 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = &StringLiteral_10257/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_97;
      default:
        v97 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v98 = &StringLiteral_10254/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_97:
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)*v98, 0LL);
        if ( !v97 )
          goto LABEL_200;
        UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_49F851C & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_49F851C = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B645E4(v8);
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

  if ( (byte_49F851D & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_49F851D = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B645E4(v8);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6C24;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6BDC;
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
  if ( (byte_49F8524 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F8524 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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