void PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22E08 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4C22E08 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C2D538(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
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
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_34135344(this, 0, v2);
}


void PartyOrganizationRestrictionHelpDialog__Close_34135344(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C22E06 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4C22E06 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4C22E03 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22E03 = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C22E07 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4C22E07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  __int64 v24; // x2
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x21
  struct PartyOrganizationConfirmItemDraw_array *v28; // x8
  il2cpp_array_size_t v29; // x20
  struct System_String_o *v30; // x19
  UserServantCollectionMaster_o *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x24
  unsigned int v33; // w8
  unsigned __int64 v34; // x26
  int32_t v35; // w28
  Il2CppObject *v36; // x25
  int32_t rangeType; // w29
  int v38; // w8
  bool IsGrandServant; // w21
  unsigned int v40; // w20
  FollowerInfo_o *v41; // x19
  struct System_Int32_array *targetVals2; // x23
  __int64 v43; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t v45; // w0
  PartyOrganizationListViewItem_o *v46; // x19
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x19
  struct PartyOrganizationConfirmItemDraw_array *v54; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v55; // x0
  UILabel_o *v56; // x19
  System_Collections_Generic_IEnumerable_T__o *v57; // x25
  System_Collections_Generic_List_int__o *v58; // x19
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  UILabel_o *v62; // x19
  UnityEngine_Transform_o *v63; // x0
  int targetVals_high; // w23
  int v65; // w20
  UILabel_o *v66; // x19
  __int64 *v67; // x8
  UILabel_o *titleLabel; // x19
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v73; // x13
  System_String_o *v74; // x1
  UILabel_o *v75; // x19
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v77; // w20
  int name; // w19
  RestrictionEntity_o *v79; // x23
  System_Collections_Generic_List_object__o *v80; // x22
  int32_t v81; // w21
  int v82; // w26
  FollowerInfo_o *v83; // x24
  PartyOrganizationListViewItem_o *v84; // x19
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  struct UILabel_o *v91; // x19
  Il2CppObject *v92; // x0
  int32_t j; // w19
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  float y; // s8
  struct UILabel_o *v97; // x8
  unsigned int v98; // w10
  signed int v99; // w20
  float mSpacingY; // s9
  float v101; // s8
  unsigned int v102; // w9
  unsigned int v103; // w8
  UnityEngine_Transform_o *v104; // x0
  float v105; // s0
  float v106; // s8
  unsigned int v107; // w19
  UnityEngine_Transform_o *v108; // x0
  float v109; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  System_Int32_array *v111; // x21
  struct PartyOrganizationConfirmItemDraw_array *v112; // x8
  il2cpp_array_size_t v113; // x20
  il2cpp_array_size_t v114; // x19
  UserServantCollectionMaster_o *v115; // x24
  System_Collections_Generic_List_object__o *v116; // x23
  unsigned int v117; // w8
  unsigned __int64 v118; // x25
  int32_t *m_Items; // x29
  __int64 v120; // x22
  int32_t v121; // w19
  System_Int32_array *v122; // x20
  int32_t v123; // w27
  bool v124; // w28
  PartyOrganizationListViewItem_o *v125; // x21
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  PartyOrganizationConfirmItemDraw_array *v132; // x1
  UnityEngine_GameObject_o *v133; // x2
  bool v134; // w4
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  UILabel_o *messageSelfOrSupportLabel; // x19
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v141; // x8
  il2cpp_array_size_t v142; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v144; // x22
  unsigned int v145; // w8
  unsigned __int64 v146; // x24
  __int64 v147; // x23
  int32_t v148; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v150; // x19
  int32_t v151; // w0
  int32_t LimitCount; // w28
  int32_t v153; // w0
  bool v154; // w29
  PartyOrganizationListViewItem_o *v155; // x21
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppClass **v161; // x0
  CGThumbnailListItem_o *v162; // x0
  int32_t v163; // w1
  PartyOrganizationListViewItem_o *v164; // x19
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  Il2CppClass **v168; // x0
  __int64 v169; // x8
  System_Collections_Generic_List_object__o *v170; // x0
  Il2CppObject *v171; // x1
  struct UnityEngine_GameObject_o *v172; // x19
  struct PartyOrganizationConfirmItemDraw_array *v173; // x20
  System_Action_o *v174; // x19
  __int64 v175; // [xsp+28h] [xbp-A8h]
  UserServantCollectionMaster_o *v176; // [xsp+30h] [xbp-A0h]
  UserServantCollectionMaster_o *v177; // [xsp+30h] [xbp-A0h]
  PartyOrganizationRestrictionHelpDialog_o *v178; // [xsp+38h] [xbp-98h]
  QuestRestrictionInfo_o *v180; // [xsp+48h] [xbp-88h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  if ( (byte_4C22E04 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C2D490(&StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C2D490(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C2D490(&StringLiteral_10274/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C2D490(&StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1C2D490(&StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1C2D490(&StringLiteral_10273/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C2D490(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C2D490(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10275/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/);
    byte_4C22E04 = 1;
  }
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
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
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    TransformHelper__SetLocalPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v178 = this;
    v180 = questRestrictionInfo;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
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
          v73 = questRestrictionEntityList->m_Items[index];
          if ( !v73 )
            goto LABEL_298;
          if ( gameObject->fields.id == v73->fields.restrictionId )
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
        v74 = (System_String_o *)gameObject;
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
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_169;
      case 6:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_169;
      case 7:
        v75 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v75 )
          goto LABEL_298;
        UILabel__set_text(v75, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_298;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_298;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v77 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v79 = gameObject;
        v80 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v80,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v77 >= 1 )
          {
            v81 = 0;
            if ( v77 - 1 >= (unsigned int)(name - 1) )
              v82 = name;
            else
              v82 = v77;
            while ( (unsigned int)v81 < LODWORD(v79->fields.name) )
            {
              v83 = (FollowerInfo_o *)*((_QWORD *)&v79->fields.type + v81);
              if ( !v83 )
                goto LABEL_298;
              if ( !v83->fields.isMySvtOrNpc )
              {
                v84 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_33993044(
                  v84,
                  v81,
                  v83,
                  0,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0,
                  0,
                  0,
                  0,
                  0);
                if ( !v80 )
                  goto LABEL_298;
                items = v80->fields._items;
                v88 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v80->fields._version;
                if ( !items )
                  goto LABEL_298;
                size = v80->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v80,
                    (Il2CppObject *)v84,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                }
                else
                {
                  v90 = &items->obj.klass + size;
                  v80->fields._size = size + 1;
                  v90[4] = (Il2CppClass *)v84;
                  sub_1C2D434((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v84, v85, v86);
                }
              }
              if ( v82 == ++v81 )
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
        if ( v80 )
        {
          v135 = v80->fields._items;
          v136 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v80->fields._version;
          if ( v135 )
          {
            v137 = v80->fields._size;
            if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
            }
            else
            {
              v138 = &v135->obj.klass + v137;
              v80->fields._size = v137 + 1;
              v138[4] = (Il2CppClass *)v17;
              sub_1C2D434((CGThumbnailListItem_o *)(v138 + 4), (int32_t)v17, v94, v95);
            }
LABEL_154:
            supportMemberBase = this->fields.supportMemberBase;
            v54 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v55 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v80;
LABEL_241:
            v132 = v54;
            v133 = supportMemberBase;
            v134 = 0;
LABEL_294:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v55, v132, v133, 1, v134, 0);
            goto LABEL_295;
          }
        }
        goto LABEL_298;
      case 8:
      case 14:
        v23 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
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
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_298;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                              questRestrictionInfo,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        v28 = this->fields.supportMemberObjectList;
        if ( !v28 )
          goto LABEL_298;
        v29 = v28->max_length;
        v30 = gameObject->fields.name;
        v31 = (UserServantCollectionMaster_o *)gameObject;
        v32 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v30 < 1 || (int)v29 < 1 )
          goto LABEL_71;
        if ( (int)v29 - 1 >= (unsigned int)((_DWORD)v30 - 1) )
          v33 = (unsigned int)v30;
        else
          v33 = v29;
        v34 = 0;
        v175 = v33;
        v176 = v31;
        do
        {
          if ( v34 >= LODWORD(v31->fields._MasterName_k__BackingField) )
            goto LABEL_299;
          v35 = *(&v31->fields.revision + v34);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_298;
          v36 = MasterData_object;
          gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                (UserServantCollectionMaster_o *)MasterData_object,
                                                *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 64LL),
                                                v35,
                                                0);
          if ( !gameObject )
            goto LABEL_298;
          rangeType = gameObject->fields.rangeType;
          gameObject = (RestrictionEntity_o *)UserServantCollectionEntity__IsGrandServant(
                                                (UserServantCollectionEntity_o *)gameObject,
                                                0);
          if ( !QuestFollowerList )
            goto LABEL_298;
          v38 = QuestFollowerList->max_length;
          IsGrandServant = (char)gameObject;
          if ( v38 >= 1 )
          {
            v40 = 0;
            while ( 1 )
            {
              if ( v40 >= v38 )
                goto LABEL_299;
              v41 = QuestFollowerList->m_Items[v40];
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0);
              if ( !v41 )
                goto LABEL_298;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v41, 0, (int32_t)gameObject, 0);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v43 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v183.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v183.fields.fakeValue = v43;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                      v183,
                                                      0);
                questRestrictionInfo = v180;
                if ( (_DWORD)gameObject == v35 )
                  break;
              }
              v38 = QuestFollowerList->max_length;
              if ( (int)++v40 >= v38 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v180->fields.questId, 0);
            rangeType = FollowerInfo__getLimitCount(v41, 0, ReturnTypeByQuestId, 0);
            v45 = FollowerInfo__GetReturnTypeByQuestId(v180->fields.questId, 0);
            IsGrandServant = FollowerInfo__IsGrandServant(v41, 0, v45, 0);
          }
LABEL_65:
          v46 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34031660(
            v46,
            v34,
            v35,
            rangeType,
            setupInfo,
            questRestrictionInfo,
            0,
            0,
            IsGrandServant,
            0);
          if ( !v32 )
            goto LABEL_298;
          v49 = v32->fields._items;
          this = v178;
          v50 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v32->fields._version;
          if ( !v49 )
            goto LABEL_298;
          v51 = v32->fields._size;
          v31 = v176;
          MasterData_object = v36;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v46,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v32->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v46;
            sub_1C2D434((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
          }
          ++v34;
        }
        while ( v34 != v175 );
LABEL_71:
        supportMemberBase = this->fields.supportMemberBase;
        v54 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v55 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v32;
        goto LABEL_241;
      case 10:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_169;
      case 11:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_169;
      case 12:
      case 16:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !v56 )
          goto LABEL_298;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0);
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
        v57 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v58 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58115124(
                v58,
                v57,
                (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
              if ( !v58 )
                goto LABEL_298;
              v59 = v58->fields._items;
              v60 = Method_System_Collections_Generic_List_int__Add__;
              ++v58->fields._version;
              if ( !v59 )
                goto LABEL_298;
              v61 = v58->fields._size;
              if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v58,
                  0,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v58->fields._size = v61 + 1;
                v59->m_Items[v61] = 0;
              }
              v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v58,
                                                                     (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v57 )
                  {
                    v141 = this->fields.supportMemberObjectList;
                    v177 = (UserServantCollectionMaster_o *)gameObject;
                    if ( v141 )
                    {
                      v142 = v141->max_length;
                      monitor = v57[1].monitor;
                      v144 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v144,
                        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v142 < 1 )
                      {
LABEL_291:
                        v172 = this->fields.supportMemberBase;
                        v173 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v134 = 1;
                        v55 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v144;
                        v132 = v173;
                        v133 = v172;
                        goto LABEL_294;
                      }
                      if ( (int)v142 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                        v145 = (unsigned int)monitor;
                      else
                        v145 = v142;
                      v146 = 0;
                      v147 = v145;
                      while ( 1 )
                      {
                        if ( v146 >= LODWORD(v57[1].monitor) )
                          goto LABEL_299;
                        v148 = *((_DWORD *)&v57[2].klass + v146);
                        if ( v148 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v148,
                                  (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_302;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v148,
                                   (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                          if ( Item )
                          {
                            v150 = (FollowerInfo_o *)Item;
                            v151 = FollowerInfo__GetReturnTypeByQuestId(v180->fields.questId, 0);
                            LimitCount = FollowerInfo__getLimitCount(v150, 0, v151, 0);
                            v153 = FollowerInfo__GetReturnTypeByQuestId(v180->fields.questId, 0);
                            v154 = FollowerInfo__IsGrandServant(v150, 0, v153, 0);
                          }
                          else
                          {
LABEL_302:
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4C211E1 )
                            {
                              sub_1C2D490(&NetworkManager_TypeInfo);
                              byte_4C211E1 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            }
                            if ( !v177 )
                              goto LABEL_298;
                            gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                  v177,
                                                                  *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                            + 64LL),
                                                                  v148,
                                                                  0);
                            if ( !gameObject )
                              goto LABEL_298;
                            LimitCount = gameObject->fields.rangeType;
                            v154 = UserServantCollectionEntity__IsGrandServant(
                                     (UserServantCollectionEntity_o *)gameObject,
                                     0);
                            v150 = 0;
                          }
                          v155 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34031660(
                            v155,
                            v146,
                            v148,
                            LimitCount,
                            setupInfo,
                            v180,
                            v150,
                            0,
                            v154,
                            0);
                          if ( !v144 )
                            goto LABEL_298;
                          v158 = v144->fields._items;
                          this = v178;
                          v159 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v144->fields._version;
                          if ( !v158 )
                            goto LABEL_298;
                          v160 = v144->fields._size;
                          if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
                          {
                            v169 = v159[4];
                            v170 = v144;
                            v171 = (Il2CppObject *)v155;
LABEL_289:
                            System_Collections_Generic_List_object___AddWithResize(
                              v170,
                              v171,
                              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v169 + 192) + 112LL));
                            goto LABEL_290;
                          }
                          v161 = &v158->obj.klass + v160;
                          v144->fields._size = v160 + 1;
                          v161[4] = (Il2CppClass *)v155;
                          v162 = (CGThumbnailListItem_o *)(v161 + 4);
                          v163 = (int)v155;
                        }
                        else
                        {
                          v164 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34030324(v164, v146, 1, 0, 0, 1, 0, 0);
                          if ( !v144 )
                            goto LABEL_298;
                          v165 = v144->fields._items;
                          v166 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v144->fields._version;
                          if ( !v165 )
                            goto LABEL_298;
                          v167 = v144->fields._size;
                          if ( (unsigned int)v167 >= LODWORD(v165->max_length) )
                          {
                            v169 = v166[4];
                            v170 = v144;
                            v171 = (Il2CppObject *)v164;
                            goto LABEL_289;
                          }
                          v168 = &v165->obj.klass + v167;
                          v144->fields._size = v167 + 1;
                          v168[4] = (Il2CppClass *)v164;
                          v162 = (CGThumbnailListItem_o *)(v168 + 4);
                          v163 = (int)v164;
                        }
                        sub_1C2D434(v162, v163, v156, v157);
LABEL_290:
                        if ( v147 == ++v146 )
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
        v91 = *p_messageLabel;
        v92 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v92, 0);
        if ( !v91 )
          goto LABEL_298;
        v74 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v91;
        break;
      case 15:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_169;
      case 21:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10275/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/;
        goto LABEL_169;
      default:
        if ( type == 101 )
        {
          v62 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
          if ( v62 )
          {
            UILabel__set_text(v62, (System_String_o *)gameObject, 0);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
              TransformHelper__SetLocalPositionY(v63, 211.0, 0);
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
                            if ( !byte_4C21465 )
                            {
                              sub_1C2D490(&System_Math_TypeInfo);
                              byte_4C21465 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v97 = *p_messageLabel;
                            v98 = vcvtps_s32_f32(y);
                            v99 = ceilf(y) == INFINITY ? 0x80000000 : v98;
                            if ( !v97 )
                              goto LABEL_298;
                            mSpacingY = (float)v97->fields.mSpacingY;
                            if ( !byte_4C21465 )
                            {
                              sub_1C2D490(&System_Math_TypeInfo);
                              byte_4C21465 = 1;
                            }
                            v101 = (float)((float)v99 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v102 = vcvtps_s32_f32(v101);
                            v103 = ceilf(v101) == INFINITY ? 0x80000000 : v102;
                            if ( !gameObject )
                              goto LABEL_298;
                            v65 = v99 - v103;
                          }
                          else
                          {
                            v65 = targetVals_high
                                / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                - gameObject[8].fields.id;
                          }
                          v104 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                          TransformHelper__SetLocalPositionY(v104, -59.0, 0);
                          if ( !byte_4C21465 )
                          {
                            sub_1C2D490(&System_Math_TypeInfo);
                            byte_4C21465 = 1;
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
                              v105 = (float)v65 * 0.5;
                              v106 = ceilf(v105);
                              v107 = vcvtps_s32_f32(v105);
                              v108 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
                              v109 = (float)(int)(v107 + 8);
                              if ( v106 == INFINITY )
                                v109 = -2147500000.0;
                              TransformHelper__SetLocalPositionY(v108, v109, 0);
                              if ( questRestrictionInfo )
                              {
                                v110 = System_Linq_Enumerable__Distinct_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.overwriteLimitCountSvtIds,
                                         (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
                                v111 = System_Linq_Enumerable__ToArray_int_(
                                         v110,
                                         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v111 )
                                {
                                  v112 = this->fields.supportMemberObjectList;
                                  if ( v112 )
                                  {
                                    v113 = v112->max_length;
                                    v114 = v111->max_length;
                                    v115 = (UserServantCollectionMaster_o *)gameObject;
                                    v116 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v116,
                                      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                    if ( (int)v114 >= 1 && (int)v113 >= 1 )
                                    {
                                      if ( (int)v113 - 1 >= (unsigned int)(v114 - 1) )
                                        v117 = v114;
                                      else
                                        v117 = v113;
                                      v118 = 0;
                                      m_Items = v111->m_Items;
                                      v120 = v117;
                                      while ( v118 < LODWORD(v111->max_length) )
                                      {
                                        v121 = m_Items[v118];
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                        if ( !byte_4C211E1 )
                                        {
                                          sub_1C2D490(&NetworkManager_TypeInfo);
                                          byte_4C211E1 = 1;
                                        }
                                        gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        }
                                        if ( !v115 )
                                          goto LABEL_298;
                                        v122 = v111;
                                        gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                              v115,
                                                                              *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                                        + 64LL),
                                                                              v121,
                                                                              0);
                                        if ( !gameObject )
                                          goto LABEL_298;
                                        v123 = gameObject->fields.rangeType;
                                        v124 = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                                        v125 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                                        PartyOrganizationListViewItem___ctor_34031660(
                                          v125,
                                          v118,
                                          v121,
                                          v123,
                                          setupInfo,
                                          v180,
                                          0,
                                          0,
                                          v124,
                                          0);
                                        if ( !v116 )
                                          goto LABEL_298;
                                        v128 = v116->fields._items;
                                        v129 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                        ++v116->fields._version;
                                        if ( !v128 )
                                          goto LABEL_298;
                                        v130 = v116->fields._size;
                                        if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v116,
                                            (Il2CppObject *)v125,
                                            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v131 = &v128->obj.klass + v130;
                                          v116->fields._size = v130 + 1;
                                          v131[4] = (Il2CppClass *)v125;
                                          sub_1C2D434((CGThumbnailListItem_o *)(v131 + 4), (int32_t)v125, v126, v127);
                                        }
                                        ++v118;
                                        v111 = v122;
                                        if ( v120 == v118 )
                                          goto LABEL_238;
                                      }
LABEL_299:
                                      sub_1C2D6F4(gameObject, v17, v24);
                                    }
LABEL_238:
                                    this = v178;
                                    supportMemberBase = v178->fields.supportMemberBase;
                                    v54 = v178->fields.supportMemberObjectList;
                                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                    v55 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v116;
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
          sub_1C2D6EC(gameObject, v17);
        }
LABEL_103:
        v66 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v67 = &StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_169:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v67, 0);
        if ( !v66 )
          goto LABEL_298;
        UILabel__set_text(v66, (System_String_o *)gameObject, 0);
LABEL_171:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_298;
        v74 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v74, 0);
LABEL_295:
    this->fields.state = 1;
    v174 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v174, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v174, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationRestrictionHelpDialog__Open_34130548(
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
  __int64 v20; // x2
  UILabel_o *v21; // x23
  Il2CppObject *v22; // x22
  struct PartyOrganizationConfirmItemDraw_array *v23; // x8
  il2cpp_array_size_t v24; // x21
  __int64 v25; // x19
  _DWORD *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x23
  unsigned int v28; // w8
  unsigned __int64 v29; // x25
  __int64 v30; // x19
  int32_t v31; // w27
  int32_t v32; // w29
  bool v33; // w21
  PartyOrganizationListViewItem_o *v34; // x28
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  struct UnityEngine_GameObject_o *v41; // x20
  struct PartyOrganizationConfirmItemDraw_array *v42; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v43; // x0
  bool IsMyServantOrNpcRestriction_43206784; // w0
  UILabel_o *titleLabel; // x25
  bool v46; // w24
  System_Collections_Generic_IEnumerable_T__o *v47; // x28
  bool IsSelectableNormalSupport; // w25
  bool v49; // w20
  System_Collections_Generic_List_int__o *v50; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  UILabel_o *v54; // x20
  __int64 *v55; // x8
  UILabel_o *v56; // x23
  struct PartyOrganizationConfirmItemDraw_array *v57; // x8
  int v58; // w21
  int v59; // w20
  _QWORD *v60; // x23
  System_Collections_Generic_List_object__o *v61; // x22
  int32_t v62; // w24
  FollowerInfo_o *v63; // x26
  PartyOrganizationListViewItem_o *v64; // x25
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  PartyOrganizationRestrictionHelpDialog_o *v71; // x9
  PartyOrganizationConfirmItemDraw_c *v72; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v75; // x23
  int32_t v76; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  _QWORD *v80; // x23
  struct PartyOrganizationConfirmItemDraw_array *v81; // x8
  il2cpp_array_size_t v82; // x19
  __int64 v83; // x8
  unsigned __int64 v84; // x24
  int32_t v85; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v87; // w21
  bool v88; // w28
  PartyOrganizationListViewItem_o *v89; // x27
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  PartyOrganizationConfirmItemDraw_array *v96; // x1
  UnityEngine_GameObject_o *v97; // x2
  bool v98; // w4
  System_Action_o *v99; // x20
  int32_t i; // w20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  UILabel_o *messageLabel; // x21
  Il2CppObject *v104; // x0
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  System_String_o *v109; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  il2cpp_array_size_t max_length; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v115; // x22
  unsigned int v116; // w8
  unsigned __int64 v117; // x25
  System_Collections_Generic_IEnumerable_T__o *v118; // x21
  __int64 v119; // x24
  int32_t v120; // w27
  System_Collections_Generic_IEnumerable_T__o *v121; // x19
  Il2CppObject *Item; // x0
  FollowerInfo_o *v123; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  int32_t v126; // w0
  bool IsGrandServant; // w23
  PartyOrganizationListViewItem_o *v128; // x29
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  PartyOrganizationListViewItem_o *v135; // x26
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v143; // x21
  UserServantCollectionMaster_o *v144; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v146; // [xsp+30h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C22E05 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C2D490(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C2D490(&StringLiteral_10274/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C2D490(&StringLiteral_10273/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C2D490(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C2D490(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22E05 = 1;
  }
  v15 = this;
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    v146 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_43206784 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0);
        titleLabel = this->fields.titleLabel;
        v46 = IsMyServantOrNpcRestriction_43206784;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        if ( v46 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                         questRestrictionInfo,
                         &npcInfoDictionary,
                         slotNo,
                         0,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v47 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, slotNo, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v49 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_168;
              v50 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58115124(
                v50,
                v47,
                (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
              if ( !v50 )
                goto LABEL_213;
              items = v50->fields._items;
              v52 = Method_System_Collections_Generic_List_int__Add__;
              ++v50->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v50->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v50,
                  0,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                v50->fields._size = size + 1;
                items->m_Items[size] = 0;
              }
              v47 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v50,
                                                                     (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v49 )
              {
LABEL_168:
                gameObject = this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v109 = message;
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
                v109 = (System_String_o *)gameObject;
                gameObject = messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v109, 0);
              gameObject = this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v47 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v144 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      max_length = supportMemberObjectList->max_length;
                      monitor = v47[1].monitor;
                      v115 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v115,
                        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)max_length >= 1 )
                      {
                        if ( (int)max_length - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v116 = (unsigned int)monitor;
                        else
                          v116 = max_length;
                        v117 = 0;
                        v118 = v47 + 2;
                        v119 = v116;
                        while ( v117 < LODWORD(v47[1].monitor) )
                        {
                          v120 = *((_DWORD *)&v118->klass + v117);
                          if ( v120 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            v121 = v47;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v120,
                                    (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v120,
                                     (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v123 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0);
                              LimitCount = FollowerInfo__getLimitCount(v123, 0, ReturnTypeByQuestId, 0);
                              v126 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
                              IsGrandServant = FollowerInfo__IsGrandServant(v123, 0, v126, 0);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4C211E1 )
                              {
                                sub_1C2D490(&NetworkManager_TypeInfo);
                                byte_4C211E1 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( !v144 )
                                goto LABEL_213;
                              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                                             v144,
                                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                                             v120,
                                             0);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *((_DWORD *)gameObject + 14);
                              IsGrandServant = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                              v123 = 0;
                            }
                            v128 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34031660(
                              v128,
                              v117,
                              v120,
                              LimitCount,
                              setupInfo,
                              v146,
                              v123,
                              0,
                              IsGrandServant,
                              0);
                            if ( !v115 )
                              goto LABEL_213;
                            v131 = v115->fields._items;
                            v132 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v115->fields._version;
                            if ( !v131 )
                              goto LABEL_213;
                            v133 = v115->fields._size;
                            v47 = v121;
                            if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v115,
                                (Il2CppObject *)v128,
                                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v134 = &v131->obj.klass + v133;
                              v115->fields._size = v133 + 1;
                              v134[4] = (Il2CppClass *)v128;
                              sub_1C2D434((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v128, v129, v130);
                            }
                            questRestrictionInfo = v146;
                          }
                          else
                          {
                            v135 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34030324(v135, v117, 1, 0, 0, 1, 0, 0);
                            if ( !v115 )
                              goto LABEL_213;
                            v138 = v115->fields._items;
                            v139 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v115->fields._version;
                            if ( !v138 )
                              goto LABEL_213;
                            v140 = v115->fields._size;
                            if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v115,
                                (Il2CppObject *)v135,
                                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v141 = &v138->obj.klass + v140;
                              v115->fields._size = v140 + 1;
                              v141[4] = (Il2CppClass *)v135;
                              sub_1C2D434((CGThumbnailListItem_o *)(v141 + 4), (int32_t)v135, v136, v137);
                            }
                          }
                          if ( v119 == ++v117 )
                            goto LABEL_210;
                        }
                        goto LABEL_214;
                      }
LABEL_210:
                      supportMemberBase = this->fields.supportMemberBase;
                      v143 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v98 = 1;
                      v43 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v115;
                      v96 = v143;
                      v97 = supportMemberBase;
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
            v104 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0);
            gameObject = System_String__Format(message, v104, 0);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
              goto LABEL_147;
            }
          }
LABEL_213:
          sub_1C2D6EC(gameObject, v17);
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0);
        v75 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v75,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v76 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v76 )
            {
              gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                     RangeTypeList,
                                     v76,
                                     (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v76,
                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v75 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v75,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v76 >= NeedIndividualityList->fields._size )
              goto LABEL_114;
          }
          goto LABEL_213;
        }
LABEL_114:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0);
        v78 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v75,
                (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
        v79 = System_Linq_Enumerable__Intersect_int_(
                v78,
                CollectionList,
                (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v79,
                       (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v15 = this;
        v80 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_103:
          gameObject = v15->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0);
LABEL_148:
            v15->fields.state = 1;
            v99 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v99, (Il2CppObject *)v15, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v15, v99, 0, 0);
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
        v81 = this->fields.supportMemberObjectList;
        if ( !v81 )
          goto LABEL_213;
        v82 = v81->max_length;
        v61 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v61,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v82 >= 1 )
        {
          v83 = v80[3];
          if ( (int)v83 >= 1 )
          {
            v84 = 0;
            while ( v84 < (unsigned int)v83 )
            {
              v85 = *((_DWORD *)v80 + v84 + 8);
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !gameObject )
                goto LABEL_213;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
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
                             v85,
                             0);
              if ( !gameObject )
                goto LABEL_213;
              v87 = *((_DWORD *)gameObject + 14);
              v88 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
              v89 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34031660(
                v89,
                v84,
                v85,
                v87,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                v88,
                0);
              if ( !v61 )
                goto LABEL_213;
              v92 = v61->fields._items;
              v15 = this;
              v93 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v61->fields._version;
              if ( !v92 )
                goto LABEL_213;
              v94 = v61->fields._size;
              if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v61,
                  (Il2CppObject *)v89,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
              }
              else
              {
                v95 = &v92->obj.klass + v94;
                v61->fields._size = v94 + 1;
                v95[4] = (Il2CppClass *)v89;
                sub_1C2D434((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v89, v90, v91);
              }
              if ( (__int64)++v84 < (int)v82 )
              {
                LODWORD(v83) = *((_DWORD *)v80 + 6);
                if ( (__int64)v84 < (int)v83 )
                  continue;
              }
              goto LABEL_141;
            }
            goto LABEL_214;
          }
        }
LABEL_141:
        v71 = v15;
        v42 = v15->fields.supportMemberObjectList;
        v72 = PartyOrganizationConfirmItemDraw_TypeInfo;
        break;
      case 3:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_101;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
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
        v21 = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0);
        if ( !v21 )
          goto LABEL_213;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
        if ( !gameObject )
          goto LABEL_213;
        v23 = this->fields.supportMemberObjectList;
        if ( !v23 )
          goto LABEL_213;
        v24 = v23->max_length;
        v25 = *((_QWORD *)gameObject + 3);
        v26 = gameObject;
        v27 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v25 < 1 || (int)v24 < 1 )
          goto LABEL_47;
        if ( (int)v24 - 1 >= (unsigned int)(v25 - 1) )
          v28 = v25;
        else
          v28 = v24;
        v29 = 0;
        v30 = v28;
        do
        {
          if ( v29 >= (unsigned int)v26[6] )
            goto LABEL_214;
          v31 = v26[v29 + 8];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !v22 )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)v22,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v31,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v32 = *((_DWORD *)gameObject + 14);
          v33 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
          v34 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34031660(v34, v29, v31, v32, setupInfo, v146, 0, 0, v33, 0);
          if ( !v27 )
            goto LABEL_213;
          v37 = v27->fields._items;
          v38 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v27->fields._version;
          if ( !v37 )
            goto LABEL_213;
          v39 = v27->fields._size;
          if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v34,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &v37->obj.klass + v39;
            v27->fields._size = v39 + 1;
            v40[4] = (Il2CppClass *)v34;
            sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v34, v35, v36);
          }
          ++v29;
        }
        while ( v30 != v29 );
LABEL_47:
        v41 = this->fields.supportMemberBase;
        v42 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v43 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v27;
        goto LABEL_145;
      case 6:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v56 )
          goto LABEL_213;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v57 = this->fields.supportMemberObjectList;
        if ( !v57 )
          goto LABEL_213;
        v58 = v57->max_length;
        v59 = *((_DWORD *)gameObject + 6);
        v60 = gameObject;
        v61 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v61,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v59 < 1 )
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
          if ( !v61 )
            goto LABEL_213;
          v105 = v61->fields._items;
          v106 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v61->fields._version;
          if ( !v105 )
            goto LABEL_213;
          v107 = v61->fields._size;
          if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v61,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v108 = &v105->obj.klass + v107;
            v61->fields._size = v107 + 1;
            v108[4] = v17;
            sub_1C2D434((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v17, v101, v102);
          }
        }
        else if ( v58 >= 1 )
        {
          if ( v58 - 1 < (unsigned int)(v59 - 1) )
            v59 = v58;
          v62 = 0;
          while ( (unsigned int)v62 < *((_DWORD *)v60 + 6) )
          {
            v63 = (FollowerInfo_o *)v60[v62 + 4];
            if ( !v63 )
              goto LABEL_213;
            if ( !v63->fields.isMySvtOrNpc )
            {
              v64 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33993044(
                v64,
                v62,
                v63,
                0,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                0,
                0,
                0);
              if ( !v61 )
                goto LABEL_213;
              v67 = v61->fields._items;
              v68 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v61->fields._version;
              if ( !v67 )
                goto LABEL_213;
              v69 = v61->fields._size;
              if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v61,
                  (Il2CppObject *)v64,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
              }
              else
              {
                v70 = &v67->obj.klass + v69;
                v61->fields._size = v69 + 1;
                v70[4] = (Il2CppClass *)v64;
                sub_1C2D434((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v64, v65, v66);
              }
            }
            if ( v59 == ++v62 )
              goto LABEL_97;
          }
LABEL_214:
          sub_1C2D6F4(gameObject, v17, v20);
        }
LABEL_97:
        v71 = this;
        v72 = PartyOrganizationConfirmItemDraw_TypeInfo;
        v42 = this->fields.supportMemberObjectList;
        break;
      case 9:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_101;
      default:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = &StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_101:
        gameObject = LocalizationManager__Get((System_String_o *)*v55, 0);
        if ( !v54 )
          goto LABEL_213;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0);
        goto LABEL_103;
    }
    v41 = v71->fields.supportMemberBase;
    if ( !v72->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v72);
    v43 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v61;
LABEL_145:
    v96 = v42;
    v97 = v41;
    v98 = 0;
LABEL_146:
    PartyOrganizationConfirmItemDraw__SetPartyIcon(v43, v96, v97, 1, v98, 0);
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

  if ( (byte_4C22E01 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4C22E01 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C2D9AC(v8);
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

  if ( (byte_4C22E02 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4C22E02 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6C6E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C69C;
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
  if ( (byte_4C22ED2 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22ED2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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