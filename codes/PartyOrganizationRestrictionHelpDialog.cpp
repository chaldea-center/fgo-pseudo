void PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3EAC1 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4C3EAC1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C37100(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
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
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_34344968(this, 0, v2);
}


void PartyOrganizationRestrictionHelpDialog__Close_34344968(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3EABF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4C3EABF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
    sub_1C36FFC(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4C3EABC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3EABC = 1;
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
    sub_1C372B4(titleLabel);
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

  if ( (byte_4C3EAC0 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4C3EAC0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  UILabel_o *closeLabel; // x19
  struct UILabel_o **p_messageLabel; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x19
  UILabel_o *v22; // x19
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x21
  struct PartyOrganizationConfirmItemDraw_array *v26; // x8
  il2cpp_array_size_t v27; // x20
  struct System_String_o *v28; // x19
  UserServantCollectionMaster_o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x24
  unsigned int v31; // w8
  unsigned __int64 v32; // x26
  int32_t v33; // w28
  Il2CppObject *v34; // x25
  int32_t rangeType; // w29
  int v36; // w8
  bool IsGrandServant; // w21
  unsigned int v38; // w20
  FollowerInfo_o *v39; // x19
  struct System_Int32_array *targetVals2; // x23
  __int64 v41; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t v43; // w0
  PartyOrganizationListViewItem_o *v44; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x19
  struct PartyOrganizationConfirmItemDraw_array *v52; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v53; // x0
  UILabel_o *v54; // x19
  System_Collections_Generic_IEnumerable_T__o *v55; // x25
  System_Collections_Generic_List_int__o *v56; // x19
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  UILabel_o *v60; // x19
  UnityEngine_Transform_o *v61; // x0
  int targetVals_high; // w23
  int v63; // w20
  UILabel_o *v64; // x19
  __int64 *v65; // x8
  UILabel_o *titleLabel; // x19
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v71; // x13
  System_String_o *v72; // x1
  UILabel_o *v73; // x19
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v75; // w20
  int name; // w19
  RestrictionEntity_o *v77; // x23
  System_Collections_Generic_List_object__o *v78; // x22
  int32_t v79; // w21
  int v80; // w26
  FollowerInfo_o *v81; // x24
  PartyOrganizationListViewItem_o *v82; // x19
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x0
  struct UILabel_o *v89; // x19
  Il2CppObject *v90; // x0
  int32_t j; // w19
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  RestrictionEntity_o *v94; // x1
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

  if ( (byte_4C3EABD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_10289/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C37058(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C37058(&StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C37058(&StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C37058(&StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1C37058(&StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1C37058(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C37058(&StringLiteral_10290/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C37058(&StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/);
    byte_4C3EABD = 1;
  }
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(
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
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    TransformHelper__SetLocalPositionY(v20, 210.0, 0);
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
    v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    TransformHelper__SetLocalPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v177 = this;
    v179 = questRestrictionInfo;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
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
          v71 = questRestrictionEntityList->m_Items[index];
          if ( !v71 )
            goto LABEL_298;
          if ( gameObject->fields.id == v71->fields.restrictionId )
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
        v72 = (System_String_o *)gameObject;
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
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10288/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_169;
      case 6:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10290/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_169;
      case 7:
        v73 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v73 )
          goto LABEL_298;
        UILabel__set_text(v73, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_298;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_298;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v75 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v77 = gameObject;
        v78 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v78,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v75 >= 1 )
          {
            v79 = 0;
            if ( v75 - 1 >= (unsigned int)(name - 1) )
              v80 = name;
            else
              v80 = v75;
            while ( (unsigned int)v79 < LODWORD(v77->fields.name) )
            {
              v81 = (FollowerInfo_o *)*((_QWORD *)&v77->fields.type + v79);
              if ( !v81 )
                goto LABEL_298;
              if ( !v81->fields.isMySvtOrNpc )
              {
                v82 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_34202652(
                  v82,
                  v79,
                  v81,
                  0,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0,
                  0,
                  0,
                  0,
                  0);
                if ( !v78 )
                  goto LABEL_298;
                items = v78->fields._items;
                v86 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v78->fields._version;
                if ( !items )
                  goto LABEL_298;
                size = v78->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v78,
                    (Il2CppObject *)v82,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = &items->obj.klass + size;
                  v78->fields._size = size + 1;
                  v88[4] = (Il2CppClass *)v82;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v82, v83, v84);
                }
              }
              if ( v80 == ++v79 )
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
          v94 = gameObject;
          if ( LOBYTE(gameObject[2].monitor) )
          {
            if ( !LOBYTE(gameObject[4].monitor) )
              break;
          }
        }
        if ( v78 )
        {
          v134 = v78->fields._items;
          v135 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v78->fields._version;
          if ( v134 )
          {
            v136 = v78->fields._size;
            if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v78,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
            }
            else
            {
              v137 = &v134->obj.klass + v136;
              v78->fields._size = v136 + 1;
              v137[4] = (Il2CppClass *)v94;
              sub_1C36FFC((CGThumbnailListItem_o *)(v137 + 4), (int32_t)v94, v92, v93);
            }
LABEL_154:
            supportMemberBase = this->fields.supportMemberBase;
            v52 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v53 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v78;
LABEL_241:
            v131 = v52;
            v132 = supportMemberBase;
            v133 = 0;
LABEL_294:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v53, v131, v132, 1, v133, 0);
            goto LABEL_295;
          }
        }
        goto LABEL_298;
      case 8:
      case 14:
        v22 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v22 )
          goto LABEL_298;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
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
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_298;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                              questRestrictionInfo,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        v26 = this->fields.supportMemberObjectList;
        if ( !v26 )
          goto LABEL_298;
        v27 = v26->max_length;
        v28 = gameObject->fields.name;
        v29 = (UserServantCollectionMaster_o *)gameObject;
        v30 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v30,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v28 < 1 || (int)v27 < 1 )
          goto LABEL_71;
        if ( (int)v27 - 1 >= (unsigned int)((_DWORD)v28 - 1) )
          v31 = (unsigned int)v28;
        else
          v31 = v27;
        v32 = 0;
        v174 = v31;
        v175 = v29;
        do
        {
          if ( v32 >= LODWORD(v29->fields._MasterName_k__BackingField) )
            goto LABEL_299;
          v33 = *(&v29->fields.revision + v32);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_298;
          v34 = MasterData_object;
          gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                (UserServantCollectionMaster_o *)MasterData_object,
                                                *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 64LL),
                                                v33,
                                                0);
          if ( !gameObject )
            goto LABEL_298;
          rangeType = gameObject->fields.rangeType;
          gameObject = (RestrictionEntity_o *)UserServantCollectionEntity__IsGrandServant(
                                                (UserServantCollectionEntity_o *)gameObject,
                                                0);
          if ( !QuestFollowerList )
            goto LABEL_298;
          v36 = QuestFollowerList->max_length;
          IsGrandServant = (char)gameObject;
          if ( v36 >= 1 )
          {
            v38 = 0;
            while ( 1 )
            {
              if ( v38 >= v36 )
                goto LABEL_299;
              v39 = QuestFollowerList->m_Items[v38];
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0);
              if ( !v39 )
                goto LABEL_298;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v39, 0, (int32_t)gameObject, 0);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v41 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v182.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v182.fields.fakeValue = v41;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                      v182,
                                                      0);
                questRestrictionInfo = v179;
                if ( (_DWORD)gameObject == v33 )
                  break;
              }
              v36 = QuestFollowerList->max_length;
              if ( (int)++v38 >= v36 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
            rangeType = FollowerInfo__getLimitCount(v39, 0, ReturnTypeByQuestId, 0);
            v43 = FollowerInfo__GetReturnTypeByQuestId(v179->fields.questId, 0);
            IsGrandServant = FollowerInfo__IsGrandServant(v39, 0, v43, 0);
          }
LABEL_65:
          v44 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34241268(
            v44,
            v32,
            v33,
            rangeType,
            setupInfo,
            questRestrictionInfo,
            0,
            0,
            IsGrandServant,
            0);
          if ( !v30 )
            goto LABEL_298;
          v47 = v30->fields._items;
          this = v177;
          v48 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v30->fields._version;
          if ( !v47 )
            goto LABEL_298;
          v49 = v30->fields._size;
          v29 = v175;
          MasterData_object = v34;
          if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v44,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v30->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v44;
            sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v44, v45, v46);
          }
          ++v32;
        }
        while ( v32 != v174 );
LABEL_71:
        supportMemberBase = this->fields.supportMemberBase;
        v52 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v53 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v30;
        goto LABEL_241;
      case 10:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_169;
      case 11:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_169;
      case 12:
      case 16:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !v54 )
          goto LABEL_298;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0);
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
        v55 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v56 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58218708(
                v56,
                v55,
                (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
              if ( !v56 )
                goto LABEL_298;
              v57 = v56->fields._items;
              v58 = Method_System_Collections_Generic_List_int__Add__;
              ++v56->fields._version;
              if ( !v57 )
                goto LABEL_298;
              v59 = v56->fields._size;
              if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v56,
                  0,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v56->fields._size = v59 + 1;
                v57->m_Items[v59] = 0;
              }
              v55 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v56,
                                                                     (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v55 )
                  {
                    v140 = this->fields.supportMemberObjectList;
                    v176 = (UserServantCollectionMaster_o *)gameObject;
                    if ( v140 )
                    {
                      v141 = v140->max_length;
                      monitor = v55[1].monitor;
                      v143 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v143,
                        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v141 < 1 )
                      {
LABEL_291:
                        v171 = this->fields.supportMemberBase;
                        v172 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v133 = 1;
                        v53 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v143;
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
                        if ( v145 >= LODWORD(v55[1].monitor) )
                          goto LABEL_299;
                        v147 = *((_DWORD *)&v55[2].klass + v145);
                        if ( v147 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v147,
                                  (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_302;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v147,
                                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
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
                            if ( !byte_4C3CD62 )
                            {
                              sub_1C37058(&NetworkManager_TypeInfo);
                              byte_4C3CD62 = 1;
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
                          v154 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34241268(
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
                              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v168 + 192) + 112LL));
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
                          v163 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34239932(v163, v145, 1, 0, 0, 1, 0, 0);
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
                        sub_1C36FFC(v161, v162, v155, v156);
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
        v89 = *p_messageLabel;
        v90 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v90, 0);
        if ( !v89 )
          goto LABEL_298;
        v72 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v89;
        break;
      case 15:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10289/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_169;
      case 21:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/;
        goto LABEL_169;
      default:
        if ( type == 101 )
        {
          v60 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
          if ( v60 )
          {
            UILabel__set_text(v60, (System_String_o *)gameObject, 0);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
              TransformHelper__SetLocalPositionY(v61, 211.0, 0);
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
                            if ( !byte_4C3CFE8 )
                            {
                              sub_1C37058(&System_Math_TypeInfo);
                              byte_4C3CFE8 = 1;
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
                            if ( !byte_4C3CFE8 )
                            {
                              sub_1C37058(&System_Math_TypeInfo);
                              byte_4C3CFE8 = 1;
                            }
                            v100 = (float)((float)v98 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v101 = vcvtps_s32_f32(v100);
                            v102 = ceilf(v100) == INFINITY ? 0x80000000 : v101;
                            if ( !gameObject )
                              goto LABEL_298;
                            v63 = v98 - v102;
                          }
                          else
                          {
                            v63 = targetVals_high
                                / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                - gameObject[8].fields.id;
                          }
                          v103 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                          TransformHelper__SetLocalPositionY(v103, -59.0, 0);
                          if ( !byte_4C3CFE8 )
                          {
                            sub_1C37058(&System_Math_TypeInfo);
                            byte_4C3CFE8 = 1;
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
                              v104 = (float)v63 * 0.5;
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
                                         (const MethodInfo_310AE44 *)Method_System_Linq_Enumerable_Distinct_int___);
                                v110 = System_Linq_Enumerable__ToArray_int_(
                                         v109,
                                         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v110 )
                                {
                                  v111 = this->fields.supportMemberObjectList;
                                  if ( v111 )
                                  {
                                    v112 = v111->max_length;
                                    v113 = v110->max_length;
                                    v114 = (UserServantCollectionMaster_o *)gameObject;
                                    v115 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v115,
                                      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
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
                                        if ( !byte_4C3CD62 )
                                        {
                                          sub_1C37058(&NetworkManager_TypeInfo);
                                          byte_4C3CD62 = 1;
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
                                        v124 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                                        PartyOrganizationListViewItem___ctor_34241268(
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
                                            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v130 = &v127->obj.klass + v129;
                                          v115->fields._size = v129 + 1;
                                          v130[4] = (Il2CppClass *)v124;
                                          sub_1C36FFC((CGThumbnailListItem_o *)(v130 + 4), (int32_t)v124, v125, v126);
                                        }
                                        ++v117;
                                        v110 = v121;
                                        if ( v119 == v117 )
                                          goto LABEL_238;
                                      }
LABEL_299:
                                      sub_1C372BC(gameObject);
                                    }
LABEL_238:
                                    this = v177;
                                    supportMemberBase = v177->fields.supportMemberBase;
                                    v52 = v177->fields.supportMemberObjectList;
                                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                    v53 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v115;
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
          sub_1C372B4(gameObject);
        }
LABEL_103:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = &StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_169:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v65, 0);
        if ( !v64 )
          goto LABEL_298;
        UILabel__set_text(v64, (System_String_o *)gameObject, 0);
LABEL_171:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_298;
        v72 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v72, 0);
LABEL_295:
    this->fields.state = 1;
    v173 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v173, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v173, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationRestrictionHelpDialog__Open_34340168(
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
  UILabel_o *closeLabel; // x26
  UILabel_o *v18; // x23
  UILabel_o *v19; // x23
  Il2CppObject *v20; // x22
  struct PartyOrganizationConfirmItemDraw_array *v21; // x8
  il2cpp_array_size_t v22; // x21
  __int64 v23; // x19
  _DWORD *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x23
  unsigned int v26; // w8
  unsigned __int64 v27; // x25
  __int64 v28; // x19
  int32_t v29; // w27
  int32_t v30; // w29
  bool v31; // w21
  PartyOrganizationListViewItem_o *v32; // x28
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  struct UnityEngine_GameObject_o *v39; // x20
  struct PartyOrganizationConfirmItemDraw_array *v40; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v41; // x0
  bool IsMyServantOrNpcRestriction_43442220; // w0
  UILabel_o *titleLabel; // x25
  bool v44; // w24
  System_Collections_Generic_IEnumerable_T__o *v45; // x28
  bool IsSelectableNormalSupport; // w25
  bool v47; // w20
  System_Collections_Generic_List_int__o *v48; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  UILabel_o *v52; // x20
  __int64 *v53; // x8
  UILabel_o *v54; // x23
  struct PartyOrganizationConfirmItemDraw_array *v55; // x8
  int v56; // w21
  int v57; // w20
  _QWORD *v58; // x23
  System_Collections_Generic_List_object__o *v59; // x22
  int32_t v60; // w24
  FollowerInfo_o *v61; // x26
  PartyOrganizationListViewItem_o *v62; // x25
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  PartyOrganizationRestrictionHelpDialog_o *v69; // x9
  PartyOrganizationConfirmItemDraw_c *v70; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v73; // x23
  int32_t v74; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  _QWORD *v78; // x23
  struct PartyOrganizationConfirmItemDraw_array *v79; // x8
  il2cpp_array_size_t v80; // x19
  __int64 v81; // x8
  unsigned __int64 v82; // x24
  int32_t v83; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v85; // w21
  bool v86; // w28
  PartyOrganizationListViewItem_o *v87; // x27
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  PartyOrganizationConfirmItemDraw_array *v94; // x1
  UnityEngine_GameObject_o *v95; // x2
  bool v96; // w4
  System_Action_o *v97; // x20
  int32_t i; // w20
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  Il2CppClass *v101; // x1
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

  if ( (byte_4C3EABE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C37058(&StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C37058(&StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C37058(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C37058(&StringLiteral_10290/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C37058(&StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3EABE = 1;
  }
  v15 = this;
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
        IsMyServantOrNpcRestriction_43442220 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43442220(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0);
        titleLabel = this->fields.titleLabel;
        v44 = IsMyServantOrNpcRestriction_43442220;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        if ( v44 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                         questRestrictionInfo,
                         &npcInfoDictionary,
                         slotNo,
                         0,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v45 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, slotNo, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v47 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_168;
              v48 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58218708(
                v48,
                v45,
                (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
              if ( !v48 )
                goto LABEL_213;
              items = v48->fields._items;
              v50 = Method_System_Collections_Generic_List_int__Add__;
              ++v48->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v48->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v48,
                  0,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v48->fields._size = size + 1;
                items->m_Items[size] = 0;
              }
              v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v48,
                                                                     (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v47 )
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
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v45 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v143 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      max_length = supportMemberObjectList->max_length;
                      monitor = v45[1].monitor;
                      v114 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v114,
                        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)max_length >= 1 )
                      {
                        if ( (int)max_length - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v115 = (unsigned int)monitor;
                        else
                          v115 = max_length;
                        v116 = 0;
                        v117 = v45 + 2;
                        v118 = v115;
                        while ( v116 < LODWORD(v45[1].monitor) )
                        {
                          v119 = *((_DWORD *)&v117->klass + v116);
                          if ( v119 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            v120 = v45;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v119,
                                    (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v119,
                                     (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
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
                              if ( !byte_4C3CD62 )
                              {
                                sub_1C37058(&NetworkManager_TypeInfo);
                                byte_4C3CD62 = 1;
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
                            v127 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34241268(
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
                            v45 = v120;
                            if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v114,
                                (Il2CppObject *)v127,
                                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v133 = &v130->obj.klass + v132;
                              v114->fields._size = v132 + 1;
                              v133[4] = (Il2CppClass *)v127;
                              sub_1C36FFC((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v127, v128, v129);
                            }
                            questRestrictionInfo = v145;
                          }
                          else
                          {
                            v134 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34239932(v134, v116, 1, 0, 0, 1, 0, 0);
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
                                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v140 = &v137->obj.klass + v139;
                              v114->fields._size = v139 + 1;
                              v140[4] = (Il2CppClass *)v134;
                              sub_1C36FFC((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v134, v135, v136);
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
                      v96 = 1;
                      v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v114;
                      v94 = v142;
                      v95 = supportMemberBase;
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
          sub_1C372B4(gameObject);
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0);
        v73 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v73,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v74 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v74 )
            {
              gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                     RangeTypeList,
                                     v74,
                                     (const MethodInfo_378853C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v74,
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v73 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v73,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v74 >= NeedIndividualityList->fields._size )
              goto LABEL_114;
          }
          goto LABEL_213;
        }
LABEL_114:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0);
        v76 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                (const MethodInfo_310AE44 *)Method_System_Linq_Enumerable_Distinct_int___);
        v77 = System_Linq_Enumerable__Intersect_int_(
                v76,
                CollectionList,
                (const MethodInfo_3112308 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v77,
                       (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v15 = this;
        v78 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_103:
          gameObject = v15->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0);
LABEL_148:
            v15->fields.state = 1;
            v97 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v97, (Il2CppObject *)v15, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v15, v97, 0, 0, 0);
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
        v79 = this->fields.supportMemberObjectList;
        if ( !v79 )
          goto LABEL_213;
        v80 = v79->max_length;
        v59 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v59,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v80 >= 1 )
        {
          v81 = v78[3];
          if ( (int)v81 >= 1 )
          {
            v82 = 0;
            while ( v82 < (unsigned int)v81 )
            {
              v83 = *((_DWORD *)v78 + v82 + 8);
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !gameObject )
                goto LABEL_213;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C3CD62 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C3CD62 = 1;
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
                             v83,
                             0);
              if ( !gameObject )
                goto LABEL_213;
              v85 = *((_DWORD *)gameObject + 14);
              v86 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
              v87 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34241268(
                v87,
                v82,
                v83,
                v85,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                v86,
                0);
              if ( !v59 )
                goto LABEL_213;
              v90 = v59->fields._items;
              v15 = this;
              v91 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v59->fields._version;
              if ( !v90 )
                goto LABEL_213;
              v92 = v59->fields._size;
              if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v59,
                  (Il2CppObject *)v87,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
              }
              else
              {
                v93 = &v90->obj.klass + v92;
                v59->fields._size = v92 + 1;
                v93[4] = (Il2CppClass *)v87;
                sub_1C36FFC((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
              }
              if ( (__int64)++v82 < (int)v80 )
              {
                LODWORD(v81) = *((_DWORD *)v78 + 6);
                if ( (__int64)v82 < (int)v81 )
                  continue;
              }
              goto LABEL_141;
            }
            goto LABEL_214;
          }
        }
LABEL_141:
        v69 = v15;
        v40 = v15->fields.supportMemberObjectList;
        v70 = PartyOrganizationConfirmItemDraw_TypeInfo;
        break;
      case 3:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_101;
      case 4:
      case 5:
        v18 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v18 )
          goto LABEL_213;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                       questRestrictionInfo,
                       0);
        if ( !gameObject )
          goto LABEL_103;
        if ( !*((_DWORD *)gameObject + 6) )
          goto LABEL_214;
        v19 = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0);
        if ( !v19 )
          goto LABEL_213;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v20 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
        if ( !gameObject )
          goto LABEL_213;
        v21 = this->fields.supportMemberObjectList;
        if ( !v21 )
          goto LABEL_213;
        v22 = v21->max_length;
        v23 = *((_QWORD *)gameObject + 3);
        v24 = gameObject;
        v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v23 < 1 || (int)v22 < 1 )
          goto LABEL_47;
        if ( (int)v22 - 1 >= (unsigned int)(v23 - 1) )
          v26 = v23;
        else
          v26 = v22;
        v27 = 0;
        v28 = v26;
        do
        {
          if ( v27 >= (unsigned int)v24[6] )
            goto LABEL_214;
          v29 = v24[v27 + 8];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !v20 )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)v20,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v29,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v30 = *((_DWORD *)gameObject + 14);
          v31 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
          v32 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34241268(v32, v27, v29, v30, setupInfo, v145, 0, 0, v31, 0);
          if ( !v25 )
            goto LABEL_213;
          v35 = v25->fields._items;
          v36 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v25->fields._version;
          if ( !v35 )
            goto LABEL_213;
          v37 = v25->fields._size;
          if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)v32,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v25->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v32;
            sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
          }
          ++v27;
        }
        while ( v28 != v27 );
LABEL_47:
        v39 = this->fields.supportMemberBase;
        v40 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v25;
        goto LABEL_145;
      case 6:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v54 )
          goto LABEL_213;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v55 = this->fields.supportMemberObjectList;
        if ( !v55 )
          goto LABEL_213;
        v56 = v55->max_length;
        v57 = *((_DWORD *)gameObject + 6);
        v58 = gameObject;
        v59 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v59,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v57 < 1 )
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
            v101 = (Il2CppClass *)gameObject;
            if ( *((_BYTE *)gameObject + 136) )
            {
              if ( !*((_BYTE *)gameObject + 264) )
                break;
            }
          }
          if ( !v59 )
            goto LABEL_213;
          v104 = v59->fields._items;
          v105 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v59->fields._version;
          if ( !v104 )
            goto LABEL_213;
          v106 = v59->fields._size;
          if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v107 = &v104->obj.klass + v106;
            v59->fields._size = v106 + 1;
            v107[4] = v101;
            sub_1C36FFC((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v101, v99, v100);
          }
        }
        else if ( v56 >= 1 )
        {
          if ( v56 - 1 < (unsigned int)(v57 - 1) )
            v57 = v56;
          v60 = 0;
          while ( (unsigned int)v60 < *((_DWORD *)v58 + 6) )
          {
            v61 = (FollowerInfo_o *)v58[v60 + 4];
            if ( !v61 )
              goto LABEL_213;
            if ( !v61->fields.isMySvtOrNpc )
            {
              v62 = (PartyOrganizationListViewItem_o *)sub_1C372A4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34202652(
                v62,
                v60,
                v61,
                0,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                0,
                0,
                0);
              if ( !v59 )
                goto LABEL_213;
              v65 = v59->fields._items;
              v66 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v59->fields._version;
              if ( !v65 )
                goto LABEL_213;
              v67 = v59->fields._size;
              if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v59,
                  (Il2CppObject *)v62,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &v65->obj.klass + v67;
                v59->fields._size = v67 + 1;
                v68[4] = (Il2CppClass *)v62;
                sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
              }
            }
            if ( v57 == ++v60 )
              goto LABEL_97;
          }
LABEL_214:
          sub_1C372BC(gameObject);
        }
LABEL_97:
        v69 = this;
        v70 = PartyOrganizationConfirmItemDraw_TypeInfo;
        v40 = this->fields.supportMemberObjectList;
        break;
      case 9:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10290/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_101;
      default:
        v52 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v53 = &StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_101:
        gameObject = LocalizationManager__Get((System_String_o *)*v53, 0);
        if ( !v52 )
          goto LABEL_213;
        UILabel__set_text(v52, (System_String_o *)gameObject, 0);
        goto LABEL_103;
    }
    v39 = v69->fields.supportMemberBase;
    if ( !v70->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v70);
    v41 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v59;
LABEL_145:
    v94 = v40;
    v95 = v39;
    v96 = 0;
LABEL_146:
    PartyOrganizationConfirmItemDraw__SetPartyIcon(v41, v94, v95, 1, v96, 0);
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

  if ( (byte_4C3EABA & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4C3EABA = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C37574(v8);
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

  if ( (byte_4C3EABB & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4C3EABB = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C37574(v8);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A76390;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76348;
}


System_IAsyncResult_o *PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C3EC6A & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3EC6A = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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