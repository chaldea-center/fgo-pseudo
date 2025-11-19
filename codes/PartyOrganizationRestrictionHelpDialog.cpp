void PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB1D97 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4CB1D97 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C6BAB0(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v5; // x20
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_34558116(this, 0, v2);
}


void PartyOrganizationRestrictionHelpDialog__Close_34558116(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB1D95 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4CB1D95 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C6B9AC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void PartyOrganizationRestrictionHelpDialog__EndOpen(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationRestrictionHelpDialog__Init(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CB1D92 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D92 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageDeckLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageSelfOrSupportLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)this->fields.partyMemberBase) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.supportMemberBase) == 0) )
  {
LABEL_11:
    sub_1C6BC60(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationRestrictionHelpDialog__OnClickClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB1D96 & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4CB1D96 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v5);
  }
}


void PartyOrganizationRestrictionHelpDialog__Open(
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
  RestrictionEntity_o *gameObject; // x0
  RestrictionEntity_o *v17; // x1
  UILabel_o *closeLabel; // x19
  struct UILabel_o **p_messageLabel; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x19
  UILabel_o *v23; // x19
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x21
  struct PartyOrganizationConfirmItemDraw_array *v27; // x8
  il2cpp_array_size_t v28; // x20
  struct System_String_o *v29; // x19
  UserServantCollectionMaster_o *v30; // x23
  System_Collections_Generic_List_object__o *v31; // x24
  unsigned int v32; // w8
  unsigned __int64 v33; // x26
  int32_t v34; // w28
  Il2CppObject *v35; // x25
  int32_t rangeType; // w29
  int v37; // w8
  bool IsGrandServant; // w21
  unsigned int v39; // w20
  FollowerInfo_o *v40; // x19
  struct System_Int32_array *targetVals2; // x23
  __int64 v42; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t v44; // w0
  PartyOrganizationListViewItem_o *v45; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x19
  struct PartyOrganizationConfirmItemDraw_array *v53; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v54; // x0
  UILabel_o *v55; // x19
  System_Collections_Generic_IEnumerable_T__o *v56; // x25
  System_Collections_Generic_List_int__o *v57; // x19
  struct System_Int32_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  UILabel_o *v61; // x19
  UnityEngine_Transform_o *v62; // x0
  int targetVals_high; // w23
  int v64; // w20
  UILabel_o *v65; // x19
  __int64 *v66; // x8
  UILabel_o *titleLabel; // x19
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v72; // x13
  System_String_o *v73; // x1
  UILabel_o *v74; // x19
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v76; // w20
  int name; // w19
  RestrictionEntity_o *v78; // x23
  System_Collections_Generic_List_object__o *v79; // x22
  int32_t v80; // w21
  int v81; // w26
  FollowerInfo_o *v82; // x24
  PartyOrganizationListViewItem_o *v83; // x19
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  struct UILabel_o *v90; // x19
  Il2CppObject *v91; // x0
  int32_t j; // w19
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  float y; // s8
  struct UILabel_o *v96; // x8
  unsigned int v97; // w10
  signed int v98; // w20
  float mSpacingY; // s9
  float v100; // s8
  unsigned int v101; // w9
  unsigned int v102; // w8
  UnityEngine_Transform_o *v103; // x0
  float v104; // s0
  float v105; // s8
  unsigned int v106; // w19
  UnityEngine_Transform_o *v107; // x0
  float v108; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x0
  System_Int32_array *v110; // x21
  struct PartyOrganizationConfirmItemDraw_array *v111; // x8
  il2cpp_array_size_t v112; // x20
  il2cpp_array_size_t v113; // x19
  UserServantCollectionMaster_o *v114; // x24
  System_Collections_Generic_List_object__o *v115; // x23
  unsigned int v116; // w8
  unsigned __int64 v117; // x25
  int32_t *m_Items; // x29
  __int64 v119; // x22
  int32_t v120; // w19
  System_Int32_array *v121; // x20
  int32_t v122; // w27
  bool v123; // w28
  PartyOrganizationListViewItem_o *v124; // x21
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  PartyOrganizationConfirmItemDraw_array *v131; // x1
  UnityEngine_GameObject_o *v132; // x2
  bool v133; // w4
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  UILabel_o *messageSelfOrSupportLabel; // x19
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v140; // x8
  il2cpp_array_size_t v141; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v143; // x22
  unsigned int v144; // w8
  unsigned __int64 v145; // x24
  __int64 v146; // x23
  int32_t v147; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v149; // x19
  int32_t v150; // w0
  int32_t LimitCount; // w28
  int32_t v152; // w0
  bool v153; // w29
  PartyOrganizationListViewItem_o *v154; // x21
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  Il2CppClass **v160; // x0
  CGThumbnailListItem_o *v161; // x0
  int32_t v162; // w1
  PartyOrganizationListViewItem_o *v163; // x19
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  __int64 v168; // x8
  System_Collections_Generic_List_object__o *v169; // x0
  Il2CppObject *v170; // x1
  struct UnityEngine_GameObject_o *v171; // x19
  struct PartyOrganizationConfirmItemDraw_array *v172; // x20
  System_Action_o *v173; // x19
  __int64 v174; // [xsp+28h] [xbp-A8h]
  UserServantCollectionMaster_o *v175; // [xsp+30h] [xbp-A0h]
  UserServantCollectionMaster_o *v176; // [xsp+30h] [xbp-A0h]
  PartyOrganizationRestrictionHelpDialog_o *v177; // [xsp+38h] [xbp-98h]
  QuestRestrictionInfo_o *v179; // [xsp+48h] [xbp-88h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_4CB1D93 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1C6BA08(&StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C6BA08(&StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/);
    byte_4CB1D93 = 1;
  }
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (const MethodInfo *)message);
    gameObject = (RestrictionEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_298;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (RestrictionEntity_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_298;
    ((void (__fastcall *)(RestrictionEntity_o *, _QWORD, __int64, void *))gameObject->klass[1]._1.fields)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.events);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( !closeLabel )
      goto LABEL_298;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    p_messageLabel = &this->fields.messageLabel;
    gameObject = (RestrictionEntity_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_298;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_298;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (RestrictionEntity_o *)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_298;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (RestrictionEntity_o *)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_298;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_298;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_298;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    TransformHelper__SetLocalPositionY(transform, -80.0, 0);
    gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_298;
    v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    TransformHelper__SetLocalPositionY(v21, 210.0, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    UILabel__set_fontSize((UILabel_o *)gameObject, 30, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    UIWidget__set_width((UIWidget_o *)gameObject, 700, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    UILabel__set_spacingY((UILabel_o *)gameObject, 0, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_298;
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    TransformHelper__SetLocalPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v177 = this;
    v179 = questRestrictionInfo;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_298;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)System_String__IsNullOrEmpty(message, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_171;
        if ( !questRestrictionInfo )
          goto LABEL_298;
        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
        if ( !restrictionEntityList )
          goto LABEL_298;
        max_length = restrictionEntityList->max_length;
        if ( max_length <= (unsigned int)index )
          goto LABEL_299;
        if ( max_length < 1 )
          goto LABEL_121;
        for ( i = 0; i != max_length; ++i )
        {
          gameObject = restrictionEntityList->m_Items[i];
          if ( !gameObject )
            goto LABEL_298;
          questRestrictionEntityList = questRestrictionInfo->fields.questRestrictionEntityList;
          if ( !questRestrictionEntityList )
            goto LABEL_298;
          if ( LODWORD(questRestrictionEntityList->max_length) <= index )
            goto LABEL_299;
          v72 = questRestrictionEntityList->m_Items[index];
          if ( !v72 )
            goto LABEL_298;
          if ( gameObject->fields.id == v72->fields.restrictionId )
            goto LABEL_122;
        }
LABEL_121:
        gameObject = restrictionEntityList->m_Items[index];
        if ( !gameObject )
          goto LABEL_298;
LABEL_122:
        gameObject = (RestrictionEntity_o *)RestrictionEntity__GetClassIndividualityRestrictionMessage(gameObject, 0);
        if ( !*p_messageLabel )
          goto LABEL_298;
        v73 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        break;
      case 2:
      case 4:
      case 5:
      case 9:
      case 13:
      case 17:
      case 18:
      case 19:
      case 20:
        goto LABEL_103;
      case 3:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_169;
      case 6:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_169;
      case 7:
        v74 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v74 )
          goto LABEL_298;
        UILabel__set_text(v74, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_298;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_298;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_298;
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_298;
        v76 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v78 = gameObject;
        v79 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v79,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v76 >= 1 )
          {
            v80 = 0;
            if ( v76 - 1 >= (unsigned int)(name - 1) )
              v81 = name;
            else
              v81 = v76;
            while ( (unsigned int)v80 < LODWORD(v78->fields.name) )
            {
              v82 = (FollowerInfo_o *)*((_QWORD *)&v78->fields.type + v80);
              if ( !v82 )
                goto LABEL_298;
              if ( !v82->fields.isMySvtOrNpc )
              {
                v83 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_34415404(
                  v83,
                  v80,
                  v82,
                  0,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0,
                  0,
                  0,
                  0,
                  0);
                if ( !v79 )
                  goto LABEL_298;
                items = v79->fields._items;
                v87 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v79->fields._version;
                if ( !items )
                  goto LABEL_298;
                size = v79->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v79,
                    (Il2CppObject *)v83,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                }
                else
                {
                  v89 = &items->obj.klass + size;
                  v79->fields._size = size + 1;
                  v89[4] = (Il2CppClass *)v83;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v83, v84, v85);
                }
              }
              if ( v81 == ++v80 )
                goto LABEL_154;
            }
            goto LABEL_299;
          }
          goto LABEL_154;
        }
        for ( j = 0; ; ++j )
        {
          gameObject = (RestrictionEntity_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            gameObject = (RestrictionEntity_o *)BalanceConfig_TypeInfo;
          }
          if ( j >= *(_DWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 172LL) )
            goto LABEL_154;
          if ( !partyItem )
            goto LABEL_298;
          gameObject = (RestrictionEntity_o *)PartyListViewItem__GetMember(partyItem, j, 0);
          if ( !gameObject )
            goto LABEL_298;
          v17 = gameObject;
          if ( LOBYTE(gameObject[2].monitor) )
          {
            if ( !LOBYTE(gameObject[4].monitor) )
              break;
          }
        }
        if ( v79 )
        {
          v134 = v79->fields._items;
          v135 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v79->fields._version;
          if ( v134 )
          {
            v136 = v79->fields._size;
            if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v79,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
            }
            else
            {
              v137 = &v134->obj.klass + v136;
              v79->fields._size = v136 + 1;
              v137[4] = (Il2CppClass *)v17;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v137 + 4), (int32_t)v17, v93, v94);
            }
LABEL_154:
            supportMemberBase = this->fields.supportMemberBase;
            v53 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v54 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v79;
LABEL_241:
            v131 = v53;
            v132 = supportMemberBase;
            v133 = 0;
LABEL_294:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v54, v131, v132, 1, v133, 0);
            goto LABEL_295;
          }
        }
        goto LABEL_298;
      case 8:
      case 14:
        v23 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v23 )
          goto LABEL_298;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0);
        if ( !questRestrictionInfo )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                              questRestrictionInfo,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        if ( !LODWORD(gameObject->fields.name) )
          goto LABEL_299;
        messageDeckLabel = this->fields.messageDeckLabel;
        gameObject = (RestrictionEntity_o *)System_String__Format(
                                              message,
                                              *(Il2CppObject **)&gameObject->fields.type,
                                              0);
        if ( !messageDeckLabel )
          goto LABEL_298;
        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_298;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_298;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                              questRestrictionInfo,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        v27 = this->fields.supportMemberObjectList;
        if ( !v27 )
          goto LABEL_298;
        v28 = v27->max_length;
        v29 = gameObject->fields.name;
        v30 = (UserServantCollectionMaster_o *)gameObject;
        v31 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v31,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v29 < 1 || (int)v28 < 1 )
          goto LABEL_71;
        if ( (int)v28 - 1 >= (unsigned int)((_DWORD)v29 - 1) )
          v32 = (unsigned int)v29;
        else
          v32 = v28;
        v33 = 0;
        v174 = v32;
        v175 = v30;
        do
        {
          if ( v33 >= LODWORD(v30->fields._MasterName_k__BackingField) )
            goto LABEL_299;
          v34 = *(&v30->fields.revision + v33);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_298;
          v35 = MasterData_object;
          gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                (UserServantCollectionMaster_o *)MasterData_object,
                                                *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 64LL),
                                                v34,
                                                0);
          if ( !gameObject )
            goto LABEL_298;
          rangeType = gameObject->fields.rangeType;
          gameObject = (RestrictionEntity_o *)UserServantCollectionEntity__IsGrandServant(
                                                (UserServantCollectionEntity_o *)gameObject,
                                                0);
          if ( !QuestFollowerList )
            goto LABEL_298;
          v37 = QuestFollowerList->max_length;
          IsGrandServant = (char)gameObject;
          if ( v37 >= 1 )
          {
            v39 = 0;
            while ( 1 )
            {
              if ( v39 >= v37 )
                goto LABEL_299;
              v40 = QuestFollowerList->m_Items[v39];
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0);
              if ( !v40 )
                goto LABEL_298;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v40, 0, (int32_t)gameObject, 0);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v42 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v182.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v182.fields.fakeValue = v42;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                      v182,
                                                      0);
                questRestrictionInfo = v179;
                if ( (_DWORD)gameObject == v34 )
                  break;
              }
              v37 = QuestFollowerList->max_length;
              if ( (int)++v39 >= v37 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
            rangeType = FollowerInfo__getLimitCount(v40, 0, ReturnTypeByQuestId, 0);
            v44 = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
            IsGrandServant = FollowerInfo__IsGrandServant(v40, 0, v44, 0);
          }
LABEL_65:
          v45 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34454416(
            v45,
            v33,
            v34,
            rangeType,
            setupInfo,
            questRestrictionInfo,
            0,
            0,
            IsGrandServant,
            0);
          if ( !v31 )
            goto LABEL_298;
          v48 = v31->fields._items;
          this = v177;
          v49 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v31->fields._version;
          if ( !v48 )
            goto LABEL_298;
          v50 = v31->fields._size;
          v30 = v175;
          MasterData_object = v35;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)v45,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v31->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)v45;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v45, v46, v47);
          }
          ++v33;
        }
        while ( v33 != v174 );
LABEL_71:
        supportMemberBase = this->fields.supportMemberBase;
        v53 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v54 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v31;
        goto LABEL_241;
      case 10:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_169;
      case 11:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_169;
      case 12:
      case 16:
        v55 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !v55 )
          goto LABEL_298;
        UILabel__set_text(v55, (System_String_o *)gameObject, 0);
        if ( !questRestrictionInfo )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                              questRestrictionInfo,
                                              &npcInfoDictionary,
                                              index,
                                              0,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        v56 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( gameObject )
          {
            QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)gameObject,
              &entity,
              questRestrictionInfo->fields.questId,
              questRestrictionInfo->fields.questPhase,
              0);
            if ( entity && type == 16 && !entity->fields.isNpcOnly )
            {
              v57 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58602020(
                v57,
                v56,
                (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
              if ( !v57 )
                goto LABEL_298;
              v58 = v57->fields._items;
              v59 = Method_System_Collections_Generic_List_int__Add__;
              ++v57->fields._version;
              if ( !v58 )
                goto LABEL_298;
              v60 = v57->fields._size;
              if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v57,
                  0,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v57->fields._size = v60 + 1;
                v58->m_Items[v60] = 0;
              }
              v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v57,
                                                                     (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            if ( type == 16 )
              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
            else
              messageSelfOrSupportLabel = this->fields.messageDeckLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                 questRestrictionInfo,
                                                 index,
                                                 0,
                                                 0);
            gameObject = (RestrictionEntity_o *)System_String__Format(message, DialogTargetName, 0);
            if ( messageSelfOrSupportLabel )
            {
              UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)gameObject, 0);
              gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v56 )
                  {
                    v140 = this->fields.supportMemberObjectList;
                    v176 = (UserServantCollectionMaster_o *)gameObject;
                    if ( v140 )
                    {
                      v141 = v140->max_length;
                      monitor = v56[1].monitor;
                      v143 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v143,
                        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v141 < 1 )
                      {
LABEL_291:
                        v171 = this->fields.supportMemberBase;
                        v172 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v133 = 1;
                        v54 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v143;
                        v131 = v172;
                        v132 = v171;
                        goto LABEL_294;
                      }
                      if ( (int)v141 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                        v144 = (unsigned int)monitor;
                      else
                        v144 = v141;
                      v145 = 0;
                      v146 = v144;
                      while ( 1 )
                      {
                        if ( v145 >= LODWORD(v56[1].monitor) )
                          goto LABEL_299;
                        v147 = *((_DWORD *)&v56[2].klass + v145);
                        if ( v147 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v147,
                                  (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_302;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v147,
                                   (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                          if ( Item )
                          {
                            v149 = (FollowerInfo_o *)Item;
                            v150 = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
                            LimitCount = FollowerInfo__getLimitCount(v149, 0, v150, 0);
                            v152 = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
                            v153 = FollowerInfo__IsGrandServant(v149, 0, v152, 0);
                          }
                          else
                          {
LABEL_302:
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4CB002A )
                            {
                              sub_1C6BA08(&NetworkManager_TypeInfo);
                              byte_4CB002A = 1;
                            }
                            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            }
                            if ( !v176 )
                              goto LABEL_298;
                            gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                  v176,
                                                                  *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                            + 64LL),
                                                                  v147,
                                                                  0);
                            if ( !gameObject )
                              goto LABEL_298;
                            LimitCount = gameObject->fields.rangeType;
                            v153 = UserServantCollectionEntity__IsGrandServant(
                                     (UserServantCollectionEntity_o *)gameObject,
                                     0);
                            v149 = 0;
                          }
                          v154 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34454416(
                            v154,
                            v145,
                            v147,
                            LimitCount,
                            setupInfo,
                            v179,
                            v149,
                            0,
                            v153,
                            0);
                          if ( !v143 )
                            goto LABEL_298;
                          v157 = v143->fields._items;
                          this = v177;
                          v158 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v143->fields._version;
                          if ( !v157 )
                            goto LABEL_298;
                          v159 = v143->fields._size;
                          if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
                          {
                            v168 = v158[4];
                            v169 = v143;
                            v170 = (Il2CppObject *)v154;
LABEL_289:
                            System_Collections_Generic_List_object___AddWithResize(
                              v169,
                              v170,
                              *(const MethodInfo_3800974 **)(*(_QWORD *)(v168 + 192) + 112LL));
                            goto LABEL_290;
                          }
                          v160 = &v157->obj.klass + v159;
                          v143->fields._size = v159 + 1;
                          v160[4] = (Il2CppClass *)v154;
                          v161 = (CGThumbnailListItem_o *)(v160 + 4);
                          v162 = (int)v154;
                        }
                        else
                        {
                          v163 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34453080(v163, v145, 1, 0, 0, 1, 0, 0);
                          if ( !v143 )
                            goto LABEL_298;
                          v164 = v143->fields._items;
                          v165 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v143->fields._version;
                          if ( !v164 )
                            goto LABEL_298;
                          v166 = v143->fields._size;
                          if ( (unsigned int)v166 >= LODWORD(v164->max_length) )
                          {
                            v168 = v165[4];
                            v169 = v143;
                            v170 = (Il2CppObject *)v163;
                            goto LABEL_289;
                          }
                          v167 = &v164->obj.klass + v166;
                          v143->fields._size = v166 + 1;
                          v167[4] = (Il2CppClass *)v163;
                          v161 = (CGThumbnailListItem_o *)(v167 + 4);
                          v162 = (int)v163;
                        }
                        sub_1C6B9AC(v161, v162, v155, v156);
LABEL_290:
                        if ( v146 == ++v145 )
                          goto LABEL_291;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_298;
        }
        v90 = *p_messageLabel;
        v91 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v91, 0);
        if ( !v90 )
          goto LABEL_298;
        v73 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v90;
        break;
      case 15:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_169;
      case 21:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/;
        goto LABEL_169;
      default:
        if ( type == 101 )
        {
          v61 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
          if ( v61 )
          {
            UILabel__set_text(v61, (System_String_o *)gameObject, 0);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
              TransformHelper__SetLocalPositionY(v62, 211.0, 0);
              gameObject = (RestrictionEntity_o *)*p_messageLabel;
              if ( *p_messageLabel )
              {
                UILabel__set_text((UILabel_o *)gameObject, message, 0);
                gameObject = (RestrictionEntity_o *)*p_messageLabel;
                if ( *p_messageLabel )
                {
                  UILabel__set_fontSize((UILabel_o *)gameObject, 25, 0);
                  gameObject = (RestrictionEntity_o *)*p_messageLabel;
                  if ( *p_messageLabel )
                  {
                    UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0);
                    gameObject = (RestrictionEntity_o *)*p_messageLabel;
                    if ( *p_messageLabel )
                    {
                      UILabel__set_spacingY((UILabel_o *)gameObject, 5, 0);
                      gameObject = (RestrictionEntity_o *)*p_messageLabel;
                      if ( *p_messageLabel )
                      {
                        ((void (__fastcall *)(RestrictionEntity_o *, void *))gameObject->klass[2]._1.namespaze)(
                          gameObject,
                          gameObject->klass[2]._1.byval_arg.data);
                        gameObject = (RestrictionEntity_o *)*p_messageLabel;
                        if ( *p_messageLabel )
                        {
                          targetVals_high = HIDWORD(gameObject[2].fields.targetVals);
                          if ( targetVals_high >= 151 )
                          {
                            UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            if ( !*p_messageLabel )
                              goto LABEL_298;
                            UIWidget__set_height((UIWidget_o *)gameObject, 150, 0);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            if ( !*p_messageLabel )
                              goto LABEL_298;
                            y = UILabel__get_printedSize((UILabel_o *)gameObject, 0).fields.y;
                            if ( !byte_4CB02B0 )
                            {
                              sub_1C6BA08(&System_Math_TypeInfo);
                              byte_4CB02B0 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v96 = *p_messageLabel;
                            v97 = vcvtps_s32_f32(y);
                            v98 = ceilf(y) == INFINITY ? 0x80000000 : v97;
                            if ( !v96 )
                              goto LABEL_298;
                            mSpacingY = (float)v96->fields.mSpacingY;
                            if ( !byte_4CB02B0 )
                            {
                              sub_1C6BA08(&System_Math_TypeInfo);
                              byte_4CB02B0 = 1;
                            }
                            v100 = (float)((float)v98 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v101 = vcvtps_s32_f32(v100);
                            v102 = ceilf(v100) == INFINITY ? 0x80000000 : v101;
                            if ( !gameObject )
                              goto LABEL_298;
                            v64 = v98 - v102;
                          }
                          else
                          {
                            v64 = targetVals_high
                                / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                - gameObject[8].fields.id;
                          }
                          v103 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                          TransformHelper__SetLocalPositionY(v103, -59.0, 0);
                          if ( !byte_4CB02B0 )
                          {
                            sub_1C6BA08(&System_Math_TypeInfo);
                            byte_4CB02B0 = 1;
                          }
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
                          if ( gameObject )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                            gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
                            if ( gameObject )
                            {
                              v104 = (float)v64 * 0.5;
                              v105 = ceilf(v104);
                              v106 = vcvtps_s32_f32(v104);
                              v107 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
                              v108 = (float)(int)(v106 + 8);
                              if ( v105 == INFINITY )
                                v108 = -2147500000.0;
                              TransformHelper__SetLocalPositionY(v107, v108, 0);
                              if ( questRestrictionInfo )
                              {
                                v109 = System_Linq_Enumerable__Distinct_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.overwriteLimitCountSvtIds,
                                         (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
                                v110 = System_Linq_Enumerable__ToArray_int_(
                                         v109,
                                         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v110 )
                                {
                                  v111 = this->fields.supportMemberObjectList;
                                  if ( v111 )
                                  {
                                    v112 = v111->max_length;
                                    v113 = v110->max_length;
                                    v114 = (UserServantCollectionMaster_o *)gameObject;
                                    v115 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v115,
                                      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                    if ( (int)v113 >= 1 && (int)v112 >= 1 )
                                    {
                                      if ( (int)v112 - 1 >= (unsigned int)(v113 - 1) )
                                        v116 = v113;
                                      else
                                        v116 = v112;
                                      v117 = 0;
                                      m_Items = v110->m_Items;
                                      v119 = v116;
                                      while ( v117 < LODWORD(v110->max_length) )
                                      {
                                        v120 = m_Items[v117];
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                        if ( !byte_4CB002A )
                                        {
                                          sub_1C6BA08(&NetworkManager_TypeInfo);
                                          byte_4CB002A = 1;
                                        }
                                        gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        }
                                        if ( !v114 )
                                          goto LABEL_298;
                                        v121 = v110;
                                        gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                              v114,
                                                                              *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                                        + 64LL),
                                                                              v120,
                                                                              0);
                                        if ( !gameObject )
                                          goto LABEL_298;
                                        v122 = gameObject->fields.rangeType;
                                        v123 = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                                        v124 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                                        PartyOrganizationListViewItem___ctor_34454416(
                                          v124,
                                          v117,
                                          v120,
                                          v122,
                                          setupInfo,
                                          v179,
                                          0,
                                          0,
                                          v123,
                                          0);
                                        if ( !v115 )
                                          goto LABEL_298;
                                        v127 = v115->fields._items;
                                        v128 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                        ++v115->fields._version;
                                        if ( !v127 )
                                          goto LABEL_298;
                                        v129 = v115->fields._size;
                                        if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v115,
                                            (Il2CppObject *)v124,
                                            *(const MethodInfo_3800974 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v130 = &v127->obj.klass + v129;
                                          v115->fields._size = v129 + 1;
                                          v130[4] = (Il2CppClass *)v124;
                                          sub_1C6B9AC((CGThumbnailListItem_o *)(v130 + 4), (int32_t)v124, v125, v126);
                                        }
                                        ++v117;
                                        v110 = v121;
                                        if ( v119 == v117 )
                                          goto LABEL_238;
                                      }
LABEL_299:
                                      sub_1C6BC68(gameObject);
                                    }
LABEL_238:
                                    this = v177;
                                    supportMemberBase = v177->fields.supportMemberBase;
                                    v53 = v177->fields.supportMemberObjectList;
                                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                    v54 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v115;
                                    goto LABEL_241;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_298:
          sub_1C6BC60(gameObject, v17);
        }
LABEL_103:
        v65 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = &StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_169:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v66, 0);
        if ( !v65 )
          goto LABEL_298;
        UILabel__set_text(v65, (System_String_o *)gameObject, 0);
LABEL_171:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_298;
        v73 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v73, 0);
LABEL_295:
    this->fields.state = 1;
    v173 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v173, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v173, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationRestrictionHelpDialog__Open_34553316(
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
  PartyOrganizationRestrictionHelpDialog_o *v15; // x21
  void *gameObject; // x0
  Il2CppClass *v17; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v19; // x23
  UILabel_o *v20; // x23
  Il2CppObject *v21; // x22
  struct PartyOrganizationConfirmItemDraw_array *v22; // x8
  il2cpp_array_size_t v23; // x21
  __int64 v24; // x19
  _DWORD *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  unsigned int v27; // w8
  unsigned __int64 v28; // x25
  __int64 v29; // x19
  int32_t v30; // w27
  int32_t v31; // w29
  bool v32; // w21
  PartyOrganizationListViewItem_o *v33; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct UnityEngine_GameObject_o *v40; // x20
  struct PartyOrganizationConfirmItemDraw_array *v41; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v42; // x0
  bool IsMyServantOrNpcRestriction_43687880; // w0
  UILabel_o *titleLabel; // x25
  bool v45; // w24
  System_Collections_Generic_IEnumerable_T__o *v46; // x28
  bool IsSelectableNormalSupport; // w25
  bool v48; // w20
  System_Collections_Generic_List_int__o *v49; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  UILabel_o *v53; // x20
  __int64 *v54; // x8
  UILabel_o *v55; // x23
  struct PartyOrganizationConfirmItemDraw_array *v56; // x8
  int v57; // w21
  int v58; // w20
  _QWORD *v59; // x23
  System_Collections_Generic_List_object__o *v60; // x22
  int32_t v61; // w24
  FollowerInfo_o *v62; // x26
  PartyOrganizationListViewItem_o *v63; // x25
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  PartyOrganizationRestrictionHelpDialog_o *v70; // x9
  PartyOrganizationConfirmItemDraw_c *v71; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v74; // x23
  int32_t v75; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  _QWORD *v79; // x23
  struct PartyOrganizationConfirmItemDraw_array *v80; // x8
  il2cpp_array_size_t v81; // x19
  __int64 v82; // x8
  unsigned __int64 v83; // x24
  int32_t v84; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v86; // w21
  bool v87; // w28
  PartyOrganizationListViewItem_o *v88; // x27
  int32_t v89; // w2
  const MethodInfo *v90; // x3
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
  const MethodInfo *v101; // x3
  UILabel_o *messageLabel; // x21
  Il2CppObject *v103; // x0
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  System_String_o *v108; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  il2cpp_array_size_t max_length; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v114; // x22
  unsigned int v115; // w8
  unsigned __int64 v116; // x25
  System_Collections_Generic_IEnumerable_T__o *v117; // x21
  __int64 v118; // x24
  int32_t v119; // w27
  System_Collections_Generic_IEnumerable_T__o *v120; // x19
  Il2CppObject *Item; // x0
  FollowerInfo_o *v122; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  int32_t v125; // w0
  bool IsGrandServant; // w23
  PartyOrganizationListViewItem_o *v127; // x29
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  PartyOrganizationListViewItem_o *v134; // x26
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v142; // x21
  UserServantCollectionMaster_o *v143; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v145; // [xsp+30h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CB1D94 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C6BA08(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C6BA08(&StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D94 = 1;
  }
  v15 = this;
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      slotNo,
      *(const MethodInfo **)&restrictionType);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_213;
    (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( !closeLabel )
      goto LABEL_213;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    v145 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_43687880 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0);
        titleLabel = this->fields.titleLabel;
        v45 = IsMyServantOrNpcRestriction_43687880;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        if ( v45 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                         questRestrictionInfo,
                         &npcInfoDictionary,
                         slotNo,
                         0,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v46 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, slotNo, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0);
              if ( !IsSelectableNormalSupport )
                goto LABEL_170;
              if ( !entity )
                goto LABEL_168;
              v48 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_168;
              v49 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58602020(
                v49,
                v46,
                (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
              if ( !v49 )
                goto LABEL_213;
              items = v49->fields._items;
              v51 = Method_System_Collections_Generic_List_int__Add__;
              ++v49->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v49->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v49,
                  0,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v49->fields._size = size + 1;
                items->m_Items[size] = 0;
              }
              v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v49,
                                                                     (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v48 )
              {
LABEL_168:
                gameObject = this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v108 = message;
              }
              else
              {
LABEL_170:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0,
                                                     0);
                gameObject = System_String__Format(message, DialogTargetName, 0);
                if ( !messageDeckLabel )
                  goto LABEL_213;
                v108 = (System_String_o *)gameObject;
                gameObject = messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v108, 0);
              gameObject = this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v46 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v143 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      max_length = supportMemberObjectList->max_length;
                      monitor = v46[1].monitor;
                      v114 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v114,
                        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)max_length >= 1 )
                      {
                        if ( (int)max_length - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v115 = (unsigned int)monitor;
                        else
                          v115 = max_length;
                        v116 = 0;
                        v117 = v46 + 2;
                        v118 = v115;
                        while ( v116 < LODWORD(v46[1].monitor) )
                        {
                          v119 = *((_DWORD *)&v117->klass + v116);
                          if ( v119 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            v120 = v46;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v119,
                                    (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v119,
                                     (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v122 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0);
                              LimitCount = FollowerInfo__getLimitCount(v122, 0, ReturnTypeByQuestId, 0);
                              v125 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
                              IsGrandServant = FollowerInfo__IsGrandServant(v122, 0, v125, 0);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4CB002A )
                              {
                                sub_1C6BA08(&NetworkManager_TypeInfo);
                                byte_4CB002A = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( !v143 )
                                goto LABEL_213;
                              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                                             v143,
                                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                                             v119,
                                             0);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *((_DWORD *)gameObject + 14);
                              IsGrandServant = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                              v122 = 0;
                            }
                            v127 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34454416(
                              v127,
                              v116,
                              v119,
                              LimitCount,
                              setupInfo,
                              v145,
                              v122,
                              0,
                              IsGrandServant,
                              0);
                            if ( !v114 )
                              goto LABEL_213;
                            v130 = v114->fields._items;
                            v131 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v114->fields._version;
                            if ( !v130 )
                              goto LABEL_213;
                            v132 = v114->fields._size;
                            v46 = v120;
                            if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v114,
                                (Il2CppObject *)v127,
                                *(const MethodInfo_3800974 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v133 = &v130->obj.klass + v132;
                              v114->fields._size = v132 + 1;
                              v133[4] = (Il2CppClass *)v127;
                              sub_1C6B9AC((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v127, v128, v129);
                            }
                            questRestrictionInfo = v145;
                          }
                          else
                          {
                            v134 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34453080(v134, v116, 1, 0, 0, 1, 0, 0);
                            if ( !v114 )
                              goto LABEL_213;
                            v137 = v114->fields._items;
                            v138 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v114->fields._version;
                            if ( !v137 )
                              goto LABEL_213;
                            v139 = v114->fields._size;
                            if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v114,
                                (Il2CppObject *)v134,
                                *(const MethodInfo_3800974 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v140 = &v137->obj.klass + v139;
                              v114->fields._size = v139 + 1;
                              v140[4] = (Il2CppClass *)v134;
                              sub_1C6B9AC((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v134, v135, v136);
                            }
                          }
                          if ( v118 == ++v116 )
                            goto LABEL_210;
                        }
                        goto LABEL_214;
                      }
LABEL_210:
                      supportMemberBase = this->fields.supportMemberBase;
                      v142 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v97 = 1;
                      v42 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v114;
                      v95 = v142;
                      v96 = supportMemberBase;
                      goto LABEL_146;
                    }
                  }
                }
              }
            }
          }
          else
          {
            messageLabel = this->fields.messageLabel;
            v103 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0);
            gameObject = System_String__Format(message, v103, 0);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
              goto LABEL_147;
            }
          }
LABEL_213:
          sub_1C6BC60(gameObject, v17);
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0);
        v74 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v74,
          (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v75 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v75 )
            {
              gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                     RangeTypeList,
                                     v75,
                                     (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v75,
                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v74 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v74,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v75 >= NeedIndividualityList->fields._size )
              goto LABEL_114;
          }
          goto LABEL_213;
        }
LABEL_114:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0);
        v77 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v74,
                (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
        v78 = System_Linq_Enumerable__Intersect_int_(
                v77,
                CollectionList,
                (const MethodInfo_3165AF4 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v78,
                       (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v15 = this;
        v79 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_103:
          gameObject = v15->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0);
LABEL_148:
            v15->fields.state = 1;
            v98 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
            System_Action___ctor(v98, (Il2CppObject *)v15, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v15, v98, 0, 0, 0);
            return;
          }
          goto LABEL_213;
        }
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v80 = this->fields.supportMemberObjectList;
        if ( !v80 )
          goto LABEL_213;
        v81 = v80->max_length;
        v60 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v60,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v81 >= 1 )
        {
          v82 = v79[3];
          if ( (int)v82 >= 1 )
          {
            v83 = 0;
            while ( v83 < (unsigned int)v82 )
            {
              v84 = *((_DWORD *)v79 + v83 + 8);
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !gameObject )
                goto LABEL_213;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CB002A )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB002A = 1;
              }
              gameObject = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                gameObject = NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_213;
              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)MasterData_object,
                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                             v84,
                             0);
              if ( !gameObject )
                goto LABEL_213;
              v86 = *((_DWORD *)gameObject + 14);
              v87 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
              v88 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34454416(
                v88,
                v83,
                v84,
                v86,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                v87,
                0);
              if ( !v60 )
                goto LABEL_213;
              v91 = v60->fields._items;
              v15 = this;
              v92 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v60->fields._version;
              if ( !v91 )
                goto LABEL_213;
              v93 = v60->fields._size;
              if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v60,
                  (Il2CppObject *)v88,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v94 = &v91->obj.klass + v93;
                v60->fields._size = v93 + 1;
                v94[4] = (Il2CppClass *)v88;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v88, v89, v90);
              }
              if ( (__int64)++v83 < (int)v81 )
              {
                LODWORD(v82) = *((_DWORD *)v79 + 6);
                if ( (__int64)v83 < (int)v82 )
                  continue;
              }
              goto LABEL_141;
            }
            goto LABEL_214;
          }
        }
LABEL_141:
        v70 = v15;
        v41 = v15->fields.supportMemberObjectList;
        v71 = PartyOrganizationConfirmItemDraw_TypeInfo;
        break;
      case 3:
        v53 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = &StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_101;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v19 )
          goto LABEL_213;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                       questRestrictionInfo,
                       0);
        if ( !gameObject )
          goto LABEL_103;
        if ( !*((_DWORD *)gameObject + 6) )
          goto LABEL_214;
        v20 = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0);
        if ( !v20 )
          goto LABEL_213;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
        if ( !gameObject )
          goto LABEL_213;
        v22 = this->fields.supportMemberObjectList;
        if ( !v22 )
          goto LABEL_213;
        v23 = v22->max_length;
        v24 = *((_QWORD *)gameObject + 3);
        v25 = gameObject;
        v26 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v24 < 1 || (int)v23 < 1 )
          goto LABEL_47;
        if ( (int)v23 - 1 >= (unsigned int)(v24 - 1) )
          v27 = v24;
        else
          v27 = v23;
        v28 = 0;
        v29 = v27;
        do
        {
          if ( v28 >= (unsigned int)v25[6] )
            goto LABEL_214;
          v30 = v25[v28 + 8];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !v21 )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)v21,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v30,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v31 = *((_DWORD *)gameObject + 14);
          v32 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
          v33 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34454416(v33, v28, v30, v31, setupInfo, v145, 0, 0, v32, 0);
          if ( !v26 )
            goto LABEL_213;
          v36 = v26->fields._items;
          v37 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v26->fields._version;
          if ( !v36 )
            goto LABEL_213;
          v38 = v26->fields._size;
          if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v33,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->obj.klass + v38;
            v26->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)v33;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
          }
          ++v28;
        }
        while ( v29 != v28 );
LABEL_47:
        v40 = this->fields.supportMemberBase;
        v41 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v42 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
        goto LABEL_145;
      case 6:
        v55 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v55 )
          goto LABEL_213;
        UILabel__set_text(v55, (System_String_o *)gameObject, 0);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        if ( !gameObject )
          goto LABEL_213;
        gameObject = NpcFollowerMaster__GetQuestFollowerList(
                       (NpcFollowerMaster_o *)gameObject,
                       questRestrictionInfo->fields.questId,
                       questRestrictionInfo->fields.questPhase,
                       0);
        if ( !gameObject )
          goto LABEL_213;
        v56 = this->fields.supportMemberObjectList;
        if ( !v56 )
          goto LABEL_213;
        v57 = v56->max_length;
        v58 = *((_DWORD *)gameObject + 6);
        v59 = gameObject;
        v60 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v60,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v58 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              gameObject = BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*((_QWORD *)gameObject + 23) + 172LL) )
              goto LABEL_97;
            if ( !partyItem )
              goto LABEL_213;
            gameObject = PartyListViewItem__GetMember(partyItem, i, 0);
            if ( !gameObject )
              goto LABEL_213;
            v17 = (Il2CppClass *)gameObject;
            if ( *((_BYTE *)gameObject + 136) )
            {
              if ( !*((_BYTE *)gameObject + 264) )
                break;
            }
          }
          if ( !v60 )
            goto LABEL_213;
          v104 = v60->fields._items;
          v105 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v60->fields._version;
          if ( !v104 )
            goto LABEL_213;
          v106 = v60->fields._size;
          if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v107 = &v104->obj.klass + v106;
            v60->fields._size = v106 + 1;
            v107[4] = v17;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v17, v100, v101);
          }
        }
        else if ( v57 >= 1 )
        {
          if ( v57 - 1 < (unsigned int)(v58 - 1) )
            v58 = v57;
          v61 = 0;
          while ( (unsigned int)v61 < *((_DWORD *)v59 + 6) )
          {
            v62 = (FollowerInfo_o *)v59[v61 + 4];
            if ( !v62 )
              goto LABEL_213;
            if ( !v62->fields.isMySvtOrNpc )
            {
              v63 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34415404(
                v63,
                v61,
                v62,
                0,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                0,
                0,
                0);
              if ( !v60 )
                goto LABEL_213;
              v66 = v60->fields._items;
              v67 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v60->fields._version;
              if ( !v66 )
                goto LABEL_213;
              v68 = v60->fields._size;
              if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v60,
                  (Il2CppObject *)v63,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = &v66->obj.klass + v68;
                v60->fields._size = v68 + 1;
                v69[4] = (Il2CppClass *)v63;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v63, v64, v65);
              }
            }
            if ( v58 == ++v61 )
              goto LABEL_97;
          }
LABEL_214:
          sub_1C6BC68(gameObject);
        }
LABEL_97:
        v70 = this;
        v71 = PartyOrganizationConfirmItemDraw_TypeInfo;
        v41 = this->fields.supportMemberObjectList;
        break;
      case 9:
        v53 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = &StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_101;
      default:
        v53 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = &StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_101:
        gameObject = LocalizationManager__Get((System_String_o *)*v54, 0);
        if ( !v53 )
          goto LABEL_213;
        UILabel__set_text(v53, (System_String_o *)gameObject, 0);
        goto LABEL_103;
    }
    v40 = v70->fields.supportMemberBase;
    if ( !v71->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v71);
    v42 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v60;
LABEL_145:
    v95 = v41;
    v96 = v40;
    v97 = 0;
LABEL_146:
    PartyOrganizationConfirmItemDraw__SetPartyIcon(v42, v95, v96, 1, v97, 0);
LABEL_147:
    v15 = this;
    goto LABEL_148;
  }
}


void PartyOrganizationRestrictionHelpDialog__add_callbackFunc(
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

  if ( (byte_4CB1D90 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4CB1D90 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C6BFFC(v8);
  PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(
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

  if ( (byte_4CB1D91 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4CB1D91 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationRestrictionHelpDialog_CallbackFunc_c *)v8->klass != PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C6BFFC(v8);
  PartyOrganizationRestrictionHelpDialog__Init(v11, v12);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9C3F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9C3A8;
}


System_IAsyncResult_o *PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB1F4A & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB1F4A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__Invoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}