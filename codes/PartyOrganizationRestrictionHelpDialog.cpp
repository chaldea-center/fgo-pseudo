void __fastcall PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A4A258 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&BaseDialog_TypeInfo, v3);
    sub_1B863B8(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4A4A258 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B86460(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v6, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Callback(
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
    p_callbackFunc->klass = 0LL;
    sub_1B8635C(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_32884836(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_32884836(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A4A256 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v6);
    byte_4A4A256 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__EndClose(
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
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8635C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A4A253 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A253 = 1;
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
    sub_1B86614(titleLabel, method);
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

  if ( (byte_4A4A257 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_4A4A257 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  RestrictionEntity_o *gameObject; // x0
  RestrictionEntity_o *v51; // x1
  UILabel_o *closeLabel; // x21
  struct UILabel_o **p_messageLabel; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  UnityEngine_Transform_o *v57; // x21
  UILabel_o *v58; // x21
  UILabel_o *messageDeckLabel; // x21
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x21
  struct PartyOrganizationConfirmItemDraw_array *v62; // x8
  __int64 v63; // x20
  struct System_String_o *v64; // x19
  RestrictionEntity_o *v65; // x25
  System_Collections_Generic_List_object__o *v66; // x24
  unsigned int v67; // w8
  unsigned __int64 v68; // x26
  __int64 *v69; // x20
  int32_t v70; // w28
  int v71; // w8
  int32_t rangeType; // w29
  unsigned int v73; // w20
  FollowerInfo_o *v74; // x21
  __int64 v75; // x19
  struct System_Int32_array *targetVals2; // x27
  int32_t ReturnTypeByQuestId; // w0
  PartyOrganizationListViewItem_o *v78; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v86; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v87; // x0
  UILabel_o *v88; // x21
  System_Collections_Generic_IEnumerable_T__o *v89; // x25
  System_Collections_Generic_List_int__o *v90; // x21
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  UILabel_o *v94; // x21
  UnityEngine_Transform_o *v95; // x0
  int targetVals_high; // w23
  int v97; // w19
  UILabel_o *v98; // x20
  __int64 *v99; // x8
  UILabel_o *titleLabel; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v105; // x13
  System_String_o *v106; // x1
  UILabel_o *v107; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v109; // w21
  int name; // w20
  RestrictionEntity_o *v111; // x23
  System_Collections_Generic_List_object__o *v112; // x22
  int32_t v113; // w24
  int v114; // w26
  FollowerInfo_o *v115; // x25
  PartyOrganizationListViewItem_o *v116; // x21
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  Il2CppClass **v122; // x0
  struct UILabel_o *v123; // x21
  Il2CppObject *v124; // x0
  int32_t j; // w20
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  float v128; // s8
  struct UILabel_o *v129; // x8
  unsigned int v130; // w10
  signed int v131; // w20
  float mSpacingY; // s9
  float v133; // s8
  unsigned int v134; // w9
  unsigned int v135; // w8
  UnityEngine_Transform_o *v136; // x0
  float v137; // s0
  float v138; // s8
  unsigned int v139; // w19
  UnityEngine_Transform_o *v140; // x0
  float v141; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  System_Int32_array *v143; // x22
  struct PartyOrganizationConfirmItemDraw_array *v144; // x8
  __int64 v145; // x20
  __int64 v146; // x19
  UserServantCollectionMaster_o *v147; // x24
  System_Collections_Generic_List_object__o *v148; // x23
  unsigned int v149; // w8
  unsigned __int64 v150; // x25
  __int64 v151; // x29
  int32_t v152; // w27
  int32_t v153; // w19
  PartyOrganizationListViewItem_o *v154; // x21
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  Il2CppClass **v160; // x0
  PartyOrganizationConfirmItemDraw_array *v161; // x1
  UnityEngine_GameObject_o *v162; // x2
  bool v163; // w4
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  UILabel_o *messageSelfOrSupportLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v170; // x8
  __int64 v171; // x21
  void *monitor; // x20
  UserServantCollectionMaster_o *v173; // x23
  System_Collections_Generic_List_object__o *v174; // x22
  unsigned int v175; // w8
  unsigned __int64 v176; // x24
  __int64 v177; // x26
  int32_t v178; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v180; // x28
  int32_t v181; // w0
  int32_t LimitCount; // w29
  PartyOrganizationListViewItem_o *v183; // x21
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  int32_t version; // w10
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  struct UnityEngine_GameObject_o *v191; // x20
  struct PartyOrganizationConfirmItemDraw_array *v192; // x21
  System_Action_o *v193; // x19
  __int64 v194; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v195; // [xsp+20h] [xbp-A0h]
  PartyOrganizationRestrictionHelpDialog_o *v196; // [xsp+28h] [xbp-98h]
  QuestRestrictionInfo_o *v198; // [xsp+38h] [xbp-88h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16

  if ( (byte_4A4A254 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, partyItem);
    sub_1B863B8(&BalanceConfig_TypeInfo, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v20);
    sub_1B863B8(&DataManager_TypeInfo, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v30);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_1B863B8(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v32);
    sub_1B863B8(&LocalizationManager_TypeInfo, v33);
    sub_1B863B8(&NetworkManager_TypeInfo, v34);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_1B863B8(&PartyOrganizationConfirmItemDraw_TypeInfo, v36);
    sub_1B863B8(&PartyOrganizationListViewItem_TypeInfo, v37);
    sub_1B863B8(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v38);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_1B863B8(&StringLiteral_10136/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v40);
    sub_1B863B8(&StringLiteral_10127/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v41);
    sub_1B863B8(&StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v42);
    sub_1B863B8(&StringLiteral_10129/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v43);
    sub_1B863B8(&StringLiteral_10135/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v44);
    sub_1B863B8(&StringLiteral_10132/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v45);
    sub_1B863B8(&StringLiteral_10128/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v46);
    sub_1B863B8(&StringLiteral_10137/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v47);
    sub_1B863B8(&StringLiteral_10133/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v48);
    sub_1B863B8(&StringLiteral_1/*""*/, v49);
    byte_4A4A254 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (const MethodInfo *)message);
    gameObject = (RestrictionEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_292;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_292;
    ((void (__fastcall *)(RestrictionEntity_o *, _QWORD, __int64, void *))gameObject->klass[1]._1.events)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.properties);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10127/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_292;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    p_messageLabel = &this->fields.messageLabel;
    gameObject = (RestrictionEntity_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_292;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_292;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_292;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_292;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_292;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_292;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
    TransformHelper__SetLocalPositionY(transform, -80.0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_292;
    v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    TransformHelper__SetLocalPositionY(v55, 210.0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    UILabel__set_fontSize((UILabel_o *)gameObject, 30, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    UIWidget__set_width((UIWidget_o *)gameObject, 700, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    UILabel__set_spacingY((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_292;
    v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !byte_4A487E1 )
    {
      sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v56);
      byte_4A487E1 = 1;
    }
    TransformHelper__SetLocalPosition(v57, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v196 = this;
    v198 = questRestrictionInfo;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_292;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)System_String__IsNullOrEmpty(message, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_169;
        if ( !questRestrictionInfo )
          goto LABEL_292;
        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
        if ( !restrictionEntityList )
          goto LABEL_292;
        max_length = restrictionEntityList->max_length;
        if ( max_length <= (unsigned int)index )
          goto LABEL_293;
        if ( max_length < 1 )
          goto LABEL_122;
        for ( i = 0; i != max_length; ++i )
        {
          gameObject = restrictionEntityList->m_Items[i];
          if ( !gameObject )
            goto LABEL_292;
          questRestrictionEntityList = questRestrictionInfo->fields.questRestrictionEntityList;
          if ( !questRestrictionEntityList )
            goto LABEL_292;
          if ( questRestrictionEntityList->max_length <= index )
            goto LABEL_293;
          v105 = questRestrictionEntityList->m_Items[index];
          if ( !v105 )
            goto LABEL_292;
          if ( gameObject->fields.id == v105->fields.restrictionId )
            goto LABEL_123;
        }
LABEL_122:
        gameObject = restrictionEntityList->m_Items[index];
        if ( !gameObject )
          goto LABEL_292;
LABEL_123:
        gameObject = (RestrictionEntity_o *)RestrictionEntity__GetClassIndividualityRestrictionMessage(gameObject, 0LL);
        if ( !*p_messageLabel )
          goto LABEL_292;
        v106 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        break;
      case 2:
      case 4:
      case 5:
      case 9:
      case 13:
        goto LABEL_104;
      case 3:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10135/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_167;
      case 6:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10137/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_167;
      case 7:
        v107 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10129/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v107 )
          goto LABEL_292;
        UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_292;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_292;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_292;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_292;
        if ( !gameObject )
          goto LABEL_292;
        gameObject = (RestrictionEntity_o *)NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
        if ( !gameObject )
          goto LABEL_292;
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_292;
        v109 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v111 = gameObject;
        v112 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v112,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v109 >= 1 )
          {
            v113 = 0;
            if ( v109 - 1 >= (unsigned int)(name - 1) )
              v114 = name;
            else
              v114 = v109;
            while ( (unsigned int)v113 < LODWORD(v111->fields.name) )
            {
              v115 = (FollowerInfo_o *)*((_QWORD *)&v111->fields.type + v113);
              if ( !v115 )
                goto LABEL_292;
              if ( !v115->fields.isMySvtOrNpc )
              {
                v116 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_32555344(
                  v116,
                  v113,
                  v115,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  0,
                  0,
                  0,
                  0LL);
                if ( !v112 )
                  goto LABEL_292;
                items = v112->fields._items;
                v120 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v112->fields._version;
                if ( !items )
                  goto LABEL_292;
                size = v112->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v112,
                    (Il2CppObject *)v116,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
                }
                else
                {
                  v122 = &items->obj.klass + size;
                  v112->fields._size = size + 1;
                  v122[4] = (Il2CppClass *)v116;
                  sub_1B8635C((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v116, v117, v118);
                }
              }
              if ( v114 == ++v113 )
                goto LABEL_155;
            }
            goto LABEL_293;
          }
          goto LABEL_155;
        }
        for ( j = 0; ; ++j )
        {
          gameObject = (RestrictionEntity_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            gameObject = (RestrictionEntity_o *)BalanceConfig_TypeInfo;
          }
          if ( j >= *(_DWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 156LL) )
            goto LABEL_155;
          if ( !partyItem )
            goto LABEL_292;
          gameObject = (RestrictionEntity_o *)PartyListViewItem__GetMember(partyItem, j, 0LL);
          if ( !gameObject )
            goto LABEL_292;
          v51 = gameObject;
          if ( LOBYTE(gameObject[2].klass) )
          {
            if ( !LOBYTE(gameObject[3].fields.rangeType) )
              break;
          }
        }
        if ( v112 )
        {
          v164 = v112->fields._items;
          v165 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v112->fields._version;
          if ( v164 )
          {
            v166 = v112->fields._size;
            if ( (unsigned int)v166 >= v164->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v112,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
            }
            else
            {
              v167 = &v164->obj.klass + v166;
              v112->fields._size = v166 + 1;
              v167[4] = (Il2CppClass *)v51;
              sub_1B8635C((CGThumbnailListItem_o *)(v167 + 4), (int32_t)v51, v126, v127);
            }
LABEL_155:
            supportMemberBase = this->fields.supportMemberBase;
            v86 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v87 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v112;
LABEL_239:
            v161 = v86;
            v162 = supportMemberBase;
            v163 = 0;
LABEL_288:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v87, v161, v162, 1, v163, 0LL);
            goto LABEL_289;
          }
        }
        goto LABEL_292;
      case 8:
      case 14:
        v58 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10128/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v58 )
          goto LABEL_292;
        UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_292;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                              questRestrictionInfo,
                                              0LL);
        if ( !gameObject )
          goto LABEL_292;
        if ( !LODWORD(gameObject->fields.name) )
          goto LABEL_293;
        messageDeckLabel = this->fields.messageDeckLabel;
        gameObject = (RestrictionEntity_o *)System_String__Format(
                                              message,
                                              *(Il2CppObject **)&gameObject->fields.type,
                                              0LL);
        if ( !messageDeckLabel )
          goto LABEL_292;
        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_292;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_292;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_292;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_292;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                              questRestrictionInfo,
                                              0LL);
        if ( !gameObject )
          goto LABEL_292;
        v62 = this->fields.supportMemberObjectList;
        if ( !v62 )
          goto LABEL_292;
        v63 = *(_QWORD *)&v62->max_length;
        v64 = gameObject->fields.name;
        v65 = gameObject;
        v66 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v66,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v64 < 1 || (int)v63 < 1 )
          goto LABEL_72;
        if ( (int)v63 - 1 >= (unsigned int)((_DWORD)v64 - 1) )
          v67 = (unsigned int)v64;
        else
          v67 = v63;
        v68 = 0LL;
        v69 = &qword_4A48000;
        v194 = v67;
        v195 = MasterData_object;
        do
        {
          if ( v68 >= LODWORD(v65->fields.name) )
            goto LABEL_293;
          v70 = *(&v65->fields.type + v68);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !*((_BYTE *)v69 + 3109) )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v51);
            *((_BYTE *)v69 + 3109) = 1;
          }
          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_292;
          gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                (UserServantCollectionMaster_o *)MasterData_object,
                                                *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 64LL),
                                                v70,
                                                0LL);
          if ( !gameObject || !QuestFollowerList )
            goto LABEL_292;
          v71 = QuestFollowerList->max_length;
          rangeType = gameObject->fields.rangeType;
          if ( v71 >= 1 )
          {
            v73 = 0;
            while ( 1 )
            {
              if ( v73 >= v71 )
                goto LABEL_293;
              v74 = QuestFollowerList->m_Items[v73];
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
              if ( !v74 )
                goto LABEL_292;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v74, 0, (int32_t)gameObject, 0LL);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v75 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v201.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v201.fields.fakeValue = v75;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                      v201,
                                                      0LL);
                questRestrictionInfo = v198;
                if ( (_DWORD)gameObject == v70 )
                  break;
              }
              v71 = QuestFollowerList->max_length;
              if ( (int)++v73 >= v71 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v198->fields.questId, 0LL);
            rangeType = FollowerInfo__getLimitCount(v74, 0, ReturnTypeByQuestId, 0LL);
LABEL_65:
            v69 = &qword_4A48000;
          }
          v78 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32551548(
            v78,
            v68,
            v70,
            rangeType,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v66 )
            goto LABEL_292;
          v81 = v66->fields._items;
          this = v196;
          v82 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v66->fields._version;
          if ( !v81 )
            goto LABEL_292;
          v83 = v66->fields._size;
          if ( (unsigned int)v83 >= v81->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v66,
              (Il2CppObject *)v78,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v66->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)v78;
            sub_1B8635C((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v78, v79, v80);
          }
          MasterData_object = v195;
          ++v68;
        }
        while ( v68 != v194 );
LABEL_72:
        supportMemberBase = this->fields.supportMemberBase;
        v86 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v87 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v66;
        goto LABEL_239;
      case 10:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10133/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_167;
      case 11:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10132/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_167;
      case 12:
      case 16:
        v88 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !v88 )
          goto LABEL_292;
        UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_292;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                              questRestrictionInfo,
                                              &npcInfoDictionary,
                                              index,
                                              0,
                                              0LL);
        if ( !gameObject )
          goto LABEL_292;
        v89 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v90 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_56488456(
                v90,
                v89,
                (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
              if ( !v90 )
                goto LABEL_292;
              v91 = v90->fields._items;
              v92 = Method_System_Collections_Generic_List_int__Add__;
              ++v90->fields._version;
              if ( !v91 )
                goto LABEL_292;
              v93 = v90->fields._size;
              if ( (unsigned int)v93 >= v91->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v90,
                  0,
                  *(const MethodInfo_35DF934 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v90->fields._size = v93 + 1;
                v91->m_Items[v93 + 1] = 0;
              }
              v89 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v90,
                                                                     (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            if ( type == 16 )
              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
            else
              messageSelfOrSupportLabel = this->fields.messageDeckLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                 questRestrictionInfo,
                                                 index,
                                                 0,
                                                 0LL);
            gameObject = (RestrictionEntity_o *)System_String__Format(message, DialogTargetName, 0LL);
            if ( messageSelfOrSupportLabel )
            {
              UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)gameObject, 0LL);
              gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v89 )
                  {
                    v170 = this->fields.supportMemberObjectList;
                    if ( v170 )
                    {
                      v171 = *(_QWORD *)&v170->max_length;
                      monitor = v89[1].monitor;
                      v173 = (UserServantCollectionMaster_o *)gameObject;
                      v174 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v174,
                        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v171 < 1 )
                      {
LABEL_285:
                        v191 = this->fields.supportMemberBase;
                        v192 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v163 = 1;
                        v87 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v174;
                        v161 = v192;
                        v162 = v191;
                        goto LABEL_288;
                      }
                      if ( (int)v171 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                        v175 = (unsigned int)monitor;
                      else
                        v175 = v171;
                      v176 = 0LL;
                      v177 = v175;
                      while ( v176 < LODWORD(v89[1].monitor) )
                      {
                        v178 = *((_DWORD *)&v89[2].klass + v176);
                        if ( v178 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_292;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v178,
                                  (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_296;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_292;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v178,
                                   (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                          if ( Item )
                          {
                            v180 = (FollowerInfo_o *)Item;
                            v181 = FollowerInfo__GetReturnTypeByQuestId(v198->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v180, 0, v181, 0LL);
                          }
                          else
                          {
LABEL_296:
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4A48C25 )
                            {
                              sub_1B863B8(&NetworkManager_TypeInfo, v51);
                              byte_4A48C25 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            }
                            if ( !v173 )
                              goto LABEL_292;
                            gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                  v173,
                                                                  *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                            + 64LL),
                                                                  v178,
                                                                  0LL);
                            if ( !gameObject )
                              goto LABEL_292;
                            LimitCount = gameObject->fields.rangeType;
                            v180 = 0LL;
                          }
                          v183 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_32551548(
                            v183,
                            v176,
                            v178,
                            LimitCount,
                            setupInfo,
                            v198,
                            v180,
                            0,
                            0LL);
                          if ( !v174 )
                            goto LABEL_292;
                          version = v174->fields._version;
                          v187 = v174->fields._items;
                          this = v196;
                        }
                        else
                        {
                          v183 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_32589396(v183, v176, 1, 0LL, 0LL, 1, 0, 0LL);
                          if ( !v174 )
                            goto LABEL_292;
                          version = v174->fields._version;
                          v187 = v174->fields._items;
                        }
                        v188 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                        v174->fields._version = version + 1;
                        if ( !v187 )
                          goto LABEL_292;
                        v189 = v174->fields._size;
                        if ( (unsigned int)v189 >= v187->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v174,
                            (Il2CppObject *)v183,
                            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v190 = &v187->obj.klass + v189;
                          v174->fields._size = v189 + 1;
                          v190[4] = (Il2CppClass *)v183;
                          sub_1B8635C((CGThumbnailListItem_o *)(v190 + 4), (int32_t)v183, v184, v185);
                        }
                        if ( v177 == ++v176 )
                          goto LABEL_285;
                      }
                      goto LABEL_293;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_292;
        }
        v123 = *p_messageLabel;
        v124 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0LL);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v124, 0LL);
        if ( !v123 )
          goto LABEL_292;
        v106 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v123;
        break;
      case 15:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10136/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_167;
      default:
        if ( type == 101 )
        {
          v94 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
          if ( v94 )
          {
            UILabel__set_text(v94, (System_String_o *)gameObject, 0LL);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v95 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              TransformHelper__SetLocalPositionY(v95, 211.0, 0LL);
              gameObject = (RestrictionEntity_o *)*p_messageLabel;
              if ( *p_messageLabel )
              {
                UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
                gameObject = (RestrictionEntity_o *)*p_messageLabel;
                if ( *p_messageLabel )
                {
                  UILabel__set_fontSize((UILabel_o *)gameObject, 25, 0LL);
                  gameObject = (RestrictionEntity_o *)*p_messageLabel;
                  if ( *p_messageLabel )
                  {
                    UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0LL);
                    gameObject = (RestrictionEntity_o *)*p_messageLabel;
                    if ( *p_messageLabel )
                    {
                      UILabel__set_spacingY((UILabel_o *)gameObject, 5, 0LL);
                      gameObject = (RestrictionEntity_o *)*p_messageLabel;
                      if ( *p_messageLabel )
                      {
                        (*(void (__fastcall **)(RestrictionEntity_o *, void *))&gameObject->klass[2]._1.byval_arg.bits)(
                          gameObject,
                          gameObject->klass[2]._1.this_arg.data);
                        gameObject = (RestrictionEntity_o *)*p_messageLabel;
                        if ( *p_messageLabel )
                        {
                          targetVals_high = HIDWORD(gameObject[2].fields.targetVals);
                          if ( targetVals_high >= 151 )
                          {
                            UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            if ( !*p_messageLabel )
                              goto LABEL_292;
                            UIWidget__set_height((UIWidget_o *)gameObject, 150, 0LL);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            if ( !*p_messageLabel )
                              goto LABEL_292;
                            LODWORD(v128) = HIDWORD(*(unsigned __int64 *)&UILabel__get_printedSize(
                                                                            (UILabel_o *)gameObject,
                                                                            0LL));
                            if ( !byte_4A48E98 )
                            {
                              sub_1B863B8(&System_Math_TypeInfo, v51);
                              byte_4A48E98 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v129 = *p_messageLabel;
                            v130 = vcvtps_s32_f32(v128);
                            v131 = ceilf(v128) == INFINITY ? 0x80000000 : v130;
                            if ( !v129 )
                              goto LABEL_292;
                            mSpacingY = (float)v129->fields.mSpacingY;
                            if ( !byte_4A48E98 )
                            {
                              sub_1B863B8(&System_Math_TypeInfo, v51);
                              byte_4A48E98 = 1;
                            }
                            v133 = (float)((float)v131 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v134 = vcvtps_s32_f32(v133);
                            v135 = ceilf(v133) == INFINITY ? 0x80000000 : v134;
                            if ( !gameObject )
                              goto LABEL_292;
                            v97 = v131 - v135;
                          }
                          else
                          {
                            v97 = targetVals_high
                                / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                - gameObject[8].fields.id;
                          }
                          v136 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
                          TransformHelper__SetLocalPositionY(v136, -59.0, 0LL);
                          if ( !byte_4A48E98 )
                          {
                            sub_1B863B8(&System_Math_TypeInfo, v51);
                            byte_4A48E98 = 1;
                          }
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
                          if ( gameObject )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                            gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
                            if ( gameObject )
                            {
                              v137 = (float)v97 * 0.5;
                              v138 = ceilf(v137);
                              v139 = vcvtps_s32_f32(v137);
                              v140 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
                              v141 = (float)(int)(v139 + 8);
                              if ( v138 == INFINITY )
                                v141 = -2147500000.0;
                              TransformHelper__SetLocalPositionY(v140, v141, 0LL);
                              if ( questRestrictionInfo )
                              {
                                v142 = System_Linq_Enumerable__Distinct_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.overwriteLimitCountSvtIds,
                                         (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
                                v143 = System_Linq_Enumerable__ToArray_int_(
                                         v142,
                                         (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v143 )
                                {
                                  v144 = this->fields.supportMemberObjectList;
                                  if ( v144 )
                                  {
                                    v145 = *(_QWORD *)&v144->max_length;
                                    v146 = *(_QWORD *)&v143->max_length;
                                    v147 = (UserServantCollectionMaster_o *)gameObject;
                                    v148 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v148,
                                      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                    if ( (int)v146 < 1 || (int)v145 < 1 )
                                    {
LABEL_236:
                                      supportMemberBase = this->fields.supportMemberBase;
                                      v86 = this->fields.supportMemberObjectList;
                                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                      v87 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v148;
                                      goto LABEL_239;
                                    }
                                    if ( (int)v145 - 1 >= (unsigned int)(v146 - 1) )
                                      v149 = v146;
                                    else
                                      v149 = v145;
                                    v150 = 0LL;
                                    v151 = v149;
                                    while ( v150 < v143->max_length )
                                    {
                                      v152 = v143->m_Items[v150 + 1];
                                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                      if ( !byte_4A48C25 )
                                      {
                                        sub_1B863B8(&NetworkManager_TypeInfo, v51);
                                        byte_4A48C25 = 1;
                                      }
                                      gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                        gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                      }
                                      if ( !v147 )
                                        goto LABEL_292;
                                      gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                            v147,
                                                                            *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                                      + 64LL),
                                                                            v152,
                                                                            0LL);
                                      if ( !gameObject )
                                        goto LABEL_292;
                                      v153 = gameObject->fields.rangeType;
                                      v154 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                                      PartyOrganizationListViewItem___ctor_32551548(
                                        v154,
                                        v150,
                                        v152,
                                        v153,
                                        setupInfo,
                                        v198,
                                        0LL,
                                        0,
                                        0LL);
                                      if ( !v148 )
                                        goto LABEL_292;
                                      v157 = v148->fields._items;
                                      v158 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                      ++v148->fields._version;
                                      if ( !v157 )
                                        goto LABEL_292;
                                      v159 = v148->fields._size;
                                      if ( (unsigned int)v159 >= v157->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          v148,
                                          (Il2CppObject *)v154,
                                          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v160 = &v157->obj.klass + v159;
                                        v148->fields._size = v159 + 1;
                                        v160[4] = (Il2CppClass *)v154;
                                        sub_1B8635C((CGThumbnailListItem_o *)(v160 + 4), (int32_t)v154, v155, v156);
                                      }
                                      if ( v151 == ++v150 )
                                        goto LABEL_236;
                                    }
LABEL_293:
                                    sub_1B8661C(gameObject, v51);
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
LABEL_292:
          sub_1B86614(gameObject, v51);
        }
LABEL_104:
        v98 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = &StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_167:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v99, 0LL);
        if ( !v98 )
          goto LABEL_292;
        UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
LABEL_169:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_292;
        v106 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v106, 0LL);
LABEL_289:
    this->fields.state = 1;
    v193 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v193, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v193, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog__Open_32880080(
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
  void *gameObject; // x0
  Il2CppClass *v54; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v56; // x23
  UILabel_o *v57; // x23
  Il2CppObject *v58; // x22
  struct PartyOrganizationConfirmItemDraw_array *v59; // x8
  __int64 v60; // x27
  __int64 v61; // x19
  _DWORD *v62; // x24
  System_Collections_Generic_List_object__o *v63; // x23
  unsigned int v64; // w8
  unsigned __int64 v65; // x25
  __int64 v66; // x19
  int32_t v67; // w27
  int32_t v68; // w29
  PartyOrganizationListViewItem_o *v69; // x28
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  UnityEngine_GameObject_o *v76; // x20
  PartyOrganizationConfirmItemDraw_array *v77; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v78; // x0
  bool IsMyServantOrNpcRestriction_41505772; // w0
  UILabel_o *titleLabel; // x25
  bool v81; // w24
  System_Collections_Generic_IEnumerable_T__o *v82; // x26
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
  PartyOrganizationRestrictionHelpDialog_o *v95; // x27
  int max_length; // w21
  int v97; // w20
  _QWORD *v98; // x23
  System_Collections_Generic_List_object__o *v99; // x22
  int32_t v100; // w24
  FollowerInfo_o *v101; // x26
  PartyOrganizationListViewItem_o *v102; // x25
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  UnityEngine_GameObject_o *v109; // x20
  PartyOrganizationConfirmItemDraw_array *v110; // x21
  System_Action_o *v111; // x20
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v114; // x23
  int32_t v115; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  _QWORD *v119; // x23
  struct PartyOrganizationConfirmItemDraw_array *v120; // x8
  __int64 v121; // x19
  System_Collections_Generic_List_object__o *v122; // x22
  __int64 v123; // x8
  unsigned __int64 v124; // x24
  int32_t v125; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v127; // w28
  PartyOrganizationListViewItem_o *v128; // x27
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  int32_t i; // w20
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  PartyOrganizationRestrictionHelpDialog_o *v138; // x19
  UILabel_o *messageLabel; // x21
  Il2CppObject *v140; // x0
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  System_String_o *v145; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v149; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v151; // x22
  unsigned int v152; // w8
  unsigned __int64 v153; // x25
  System_Collections_Generic_IEnumerable_T__o *v154; // x23
  __int64 v155; // x24
  System_Collections_Generic_IEnumerable_T__o *v156; // x19
  int32_t v157; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v159; // x29
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  PartyOrganizationListViewItem_o *v162; // x28
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  Il2CppClass **v168; // x0
  PartyOrganizationListViewItem_o *v169; // x27
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  struct System_Object_array *v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  Il2CppClass **v175; // x0
  PartyOrganizationRestrictionHelpDialog_o *v176; // x9
  PartyOrganizationConfirmItemDraw_array *v177; // x21
  UnityEngine_GameObject_o *supportMemberBase; // x20
  PartyOrganizationRestrictionHelpDialog_o *v179; // [xsp+18h] [xbp-88h]
  UserServantCollectionMaster_o *v180; // [xsp+18h] [xbp-88h]
  QuestRestrictionInfo_o *v181; // [xsp+20h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A4A255 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, partyItem);
    sub_1B863B8(&BalanceConfig_TypeInfo, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1B863B8(&DataManager_TypeInfo, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v25);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Count__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Item__, v36);
    sub_1B863B8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v37);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1B863B8(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v39);
    sub_1B863B8(&LocalizationManager_TypeInfo, v40);
    sub_1B863B8(&NetworkManager_TypeInfo, v41);
    sub_1B863B8(&PartyOrganizationConfirmItemDraw_TypeInfo, v42);
    sub_1B863B8(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_1B863B8(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v44);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B863B8(&StringLiteral_10127/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v46);
    sub_1B863B8(&StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v47);
    sub_1B863B8(&StringLiteral_10129/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v48);
    sub_1B863B8(&StringLiteral_10128/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v49);
    sub_1B863B8(&StringLiteral_10137/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v50);
    sub_1B863B8(&StringLiteral_10133/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v51);
    sub_1B863B8(&StringLiteral_1/*""*/, v52);
    byte_4A4A255 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      slotNo,
      *(const MethodInfo **)&restrictionType);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_213;
    (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10127/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_213;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_213;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_213;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v181 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_41505772 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v81 = IsMyServantOrNpcRestriction_41505772;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v81 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                         questRestrictionInfo,
                         &npcInfoDictionary,
                         slotNo,
                         0,
                         0LL);
          if ( !gameObject )
            goto LABEL_213;
          v82 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0LL);
              if ( !IsSelectableNormalSupport )
                goto LABEL_169;
              if ( !entity )
                goto LABEL_167;
              v84 = entity != 0LL;
              v85 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_167;
              v86 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_56488456(
                v86,
                v82,
                (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
              if ( !v86 )
                goto LABEL_213;
              items = v86->fields._items;
              v88 = Method_System_Collections_Generic_List_int__Add__;
              ++v86->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v86->fields._size;
              v90 = v85 && v84;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v86,
                  0,
                  *(const MethodInfo_35DF934 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
              }
              else
              {
                v86->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v86,
                                                                     (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v90 )
              {
LABEL_167:
                gameObject = this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v145 = message;
              }
              else
              {
LABEL_169:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0,
                                                     0LL);
                gameObject = System_String__Format(message, DialogTargetName, 0LL);
                if ( !messageDeckLabel )
                  goto LABEL_213;
                v145 = (System_String_o *)gameObject;
                gameObject = messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v145, 0LL);
              gameObject = this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v82 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v180 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v149 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v82[1].monitor;
                      v151 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v151,
                        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v149 >= 1 )
                      {
                        if ( (int)v149 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v152 = (unsigned int)monitor;
                        else
                          v152 = v149;
                        v153 = 0LL;
                        v154 = v82 + 2;
                        v155 = v152;
                        v156 = v82;
                        while ( v153 < LODWORD(v82[1].monitor) )
                        {
                          v157 = *((_DWORD *)&v154->klass + v153);
                          if ( v157 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v157,
                                    (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v157,
                                     (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v159 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v181->fields.questId, 0LL);
                              LimitCount = FollowerInfo__getLimitCount(v159, 0, ReturnTypeByQuestId, 0LL);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4A48C25 )
                              {
                                sub_1B863B8(&NetworkManager_TypeInfo, v54);
                                byte_4A48C25 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( !v180 )
                                goto LABEL_213;
                              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                                             v180,
                                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                                             v157,
                                             0LL);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *((_DWORD *)gameObject + 14);
                              v159 = 0LL;
                            }
                            v162 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_32551548(
                              v162,
                              v153,
                              v157,
                              LimitCount,
                              setupInfo,
                              v181,
                              v159,
                              0,
                              0LL);
                            if ( !v151 )
                              goto LABEL_213;
                            v165 = v151->fields._items;
                            v166 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v151->fields._version;
                            if ( !v165 )
                              goto LABEL_213;
                            v167 = v151->fields._size;
                            v82 = v156;
                            if ( (unsigned int)v167 >= v165->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v151,
                                (Il2CppObject *)v162,
                                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v168 = &v165->obj.klass + v167;
                              v151->fields._size = v167 + 1;
                              v168[4] = (Il2CppClass *)v162;
                              sub_1B8635C((CGThumbnailListItem_o *)(v168 + 4), (int32_t)v162, v163, v164);
                            }
                          }
                          else
                          {
                            v169 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_32589396(v169, v153, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v151 )
                              goto LABEL_213;
                            v172 = v151->fields._items;
                            v173 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v151->fields._version;
                            if ( !v172 )
                              goto LABEL_213;
                            v174 = v151->fields._size;
                            if ( (unsigned int)v174 >= v172->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v151,
                                (Il2CppObject *)v169,
                                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v175 = &v172->obj.klass + v174;
                              v151->fields._size = v174 + 1;
                              v175[4] = (Il2CppClass *)v169;
                              sub_1B8635C((CGThumbnailListItem_o *)(v175 + 4), (int32_t)v169, v170, v171);
                            }
                          }
                          if ( v155 == ++v153 )
                            goto LABEL_209;
                        }
                        goto LABEL_214;
                      }
LABEL_209:
                      v176 = this;
                      v177 = this->fields.supportMemberObjectList;
                      supportMemberBase = v176->fields.supportMemberBase;
                      v138 = v176;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      PartyOrganizationConfirmItemDraw__SetPartyIcon(
                        (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v151,
                        v177,
                        supportMemberBase,
                        1,
                        1,
                        0LL);
                      goto LABEL_212;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v138 = this;
            messageLabel = this->fields.messageLabel;
            v140 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0LL);
            gameObject = System_String__Format(message, v140, 0LL);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
LABEL_212:
              this = v138;
              goto LABEL_108;
            }
          }
LABEL_213:
          sub_1B86614(gameObject, v54);
        }
        v179 = this;
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v114 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v114,
          (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v115 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v115 )
            {
              gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                     RangeTypeList,
                                     v115,
                                     (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v115,
                               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v114 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v114,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v115 >= NeedIndividualityList->fields._size )
              goto LABEL_119;
          }
          goto LABEL_213;
        }
LABEL_119:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v117 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v114,
                 (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
        v118 = System_Linq_Enumerable__Intersect_int_(
                 v117,
                 CollectionList,
                 (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v118,
                       (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v119 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_106:
          gameObject = this->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_108:
            this->fields.state = 1;
            v111 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v111,
              (Il2CppObject *)this,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v111, 0, 0LL);
            return;
          }
          goto LABEL_213;
        }
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v120 = this->fields.supportMemberObjectList;
        if ( !v120 )
          goto LABEL_213;
        v121 = *(_QWORD *)&v120->max_length;
        v122 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v122,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v121 < 1 || (v123 = v119[3], (int)v123 < 1) )
        {
LABEL_146:
          v76 = this->fields.supportMemberBase;
          v77 = this->fields.supportMemberObjectList;
          if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
          v78 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v122;
LABEL_50:
          PartyOrganizationConfirmItemDraw__SetPartyIcon(v78, v77, v76, 1, 0, 0LL);
          this = v179;
          goto LABEL_108;
        }
        v124 = 0LL;
        while ( v124 < (unsigned int)v123 )
        {
          v125 = *((_DWORD *)v119 + v124 + 8);
          gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_213;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v54);
            byte_4A48C25 = 1;
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
                         v125,
                         0LL);
          if ( !gameObject )
            goto LABEL_213;
          v127 = *((_DWORD *)gameObject + 14);
          v128 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32551548(v128, v124, v125, v127, setupInfo, v181, 0LL, 0, 0LL);
          if ( !v122 )
            goto LABEL_213;
          v131 = v122->fields._items;
          v132 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v122->fields._version;
          if ( !v131 )
            goto LABEL_213;
          v133 = v122->fields._size;
          if ( (unsigned int)v133 >= v131->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v122,
              (Il2CppObject *)v128,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = &v131->obj.klass + v133;
            v122->fields._size = v133 + 1;
            v134[4] = (Il2CppClass *)v128;
            sub_1B8635C((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v128, v129, v130);
          }
          if ( (__int64)++v124 < (int)v121 )
          {
            LODWORD(v123) = *((_DWORD *)v119 + 6);
            if ( (__int64)v124 < (int)v123 )
              continue;
          }
          goto LABEL_146;
        }
        goto LABEL_214;
      case 3:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10133/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_104;
      case 4:
      case 5:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10128/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v56 )
          goto LABEL_213;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                       questRestrictionInfo,
                       0LL);
        if ( !gameObject )
          goto LABEL_106;
        if ( !*((_DWORD *)gameObject + 6) )
          goto LABEL_214;
        v57 = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0LL);
        if ( !v57 )
          goto LABEL_213;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v58 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_213;
        v59 = this->fields.supportMemberObjectList;
        v179 = this;
        if ( !v59 )
          goto LABEL_213;
        v60 = *(_QWORD *)&v59->max_length;
        v61 = *((_QWORD *)gameObject + 3);
        v62 = gameObject;
        v63 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v61 < 1 || (int)v60 < 1 )
          goto LABEL_47;
        if ( (int)v60 - 1 >= (unsigned int)(v61 - 1) )
          v64 = v61;
        else
          v64 = v60;
        v65 = 0LL;
        v66 = v64;
        do
        {
          if ( v65 >= (unsigned int)v62[6] )
            goto LABEL_214;
          v67 = v62[v65 + 8];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v54);
            byte_4A48C25 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !v58 )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)v58,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v67,
                         0LL);
          if ( !gameObject )
            goto LABEL_213;
          v68 = *((_DWORD *)gameObject + 14);
          v69 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32551548(v69, v65, v67, v68, setupInfo, v181, 0LL, 0, 0LL);
          if ( !v63 )
            goto LABEL_213;
          v72 = v63->fields._items;
          v73 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v63->fields._version;
          if ( !v72 )
            goto LABEL_213;
          v74 = v63->fields._size;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v63,
              (Il2CppObject *)v69,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v63->fields._size = v74 + 1;
            v75[4] = (Il2CppClass *)v69;
            sub_1B8635C((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
          }
          ++v65;
        }
        while ( v66 != v65 );
LABEL_47:
        v76 = this->fields.supportMemberBase;
        v77 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v78 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v63;
        goto LABEL_50;
      case 6:
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10129/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v93 )
          goto LABEL_213;
        UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        if ( !gameObject )
          goto LABEL_213;
        gameObject = NpcFollowerMaster__GetQuestFollowerList(
                       (NpcFollowerMaster_o *)gameObject,
                       questRestrictionInfo->fields.questId,
                       questRestrictionInfo->fields.questPhase,
                       0LL);
        if ( !gameObject )
          goto LABEL_213;
        v94 = this->fields.supportMemberObjectList;
        if ( !v94 )
          goto LABEL_213;
        v95 = this;
        max_length = v94->max_length;
        v97 = *((_DWORD *)gameObject + 6);
        v98 = gameObject;
        v99 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v99,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v97 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              gameObject = BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*((_QWORD *)gameObject + 23) + 156LL) )
              goto LABEL_98;
            if ( !partyItem )
              goto LABEL_213;
            gameObject = PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_213;
            v54 = (Il2CppClass *)gameObject;
            if ( *((_BYTE *)gameObject + 128) )
            {
              if ( !*((_BYTE *)gameObject + 248) )
                break;
            }
          }
          if ( !v99 )
            goto LABEL_213;
          v141 = v99->fields._items;
          v142 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v99->fields._version;
          if ( !v141 )
            goto LABEL_213;
          v143 = v99->fields._size;
          if ( (unsigned int)v143 >= v141->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            v144 = &v141->obj.klass + v143;
            v99->fields._size = v143 + 1;
            v144[4] = v54;
            sub_1B8635C((CGThumbnailListItem_o *)(v144 + 4), (int32_t)v54, v136, v137);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v97 - 1) )
            v97 = max_length;
          v100 = 0;
          while ( (unsigned int)v100 < *((_DWORD *)v98 + 6) )
          {
            v101 = (FollowerInfo_o *)v98[v100 + 4];
            if ( !v101 )
              goto LABEL_213;
            if ( !v101->fields.isMySvtOrNpc )
            {
              v102 = (PartyOrganizationListViewItem_o *)sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32555344(
                v102,
                v100,
                v101,
                0,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                0,
                0,
                0LL);
              if ( !v99 )
                goto LABEL_213;
              v105 = v99->fields._items;
              v106 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v99->fields._version;
              if ( !v105 )
                goto LABEL_213;
              v107 = v99->fields._size;
              if ( (unsigned int)v107 >= v105->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v99,
                  (Il2CppObject *)v102,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
              }
              else
              {
                v108 = &v105->obj.klass + v107;
                v99->fields._size = v107 + 1;
                v108[4] = (Il2CppClass *)v102;
                sub_1B8635C((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v102, v103, v104);
              }
            }
            if ( v97 == ++v100 )
              goto LABEL_98;
          }
LABEL_214:
          sub_1B8661C(gameObject, v54);
        }
LABEL_98:
        v109 = v95->fields.supportMemberBase;
        v110 = v95->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        PartyOrganizationConfirmItemDraw__SetPartyIcon(
          (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v99,
          v110,
          v109,
          1,
          0,
          0LL);
        this = v95;
        goto LABEL_108;
      case 9:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10137/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_104;
      default:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_10134/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_104:
        gameObject = LocalizationManager__Get((System_String_o *)*v92, 0LL);
        if ( !v91 )
          goto LABEL_213;
        UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
        goto LABEL_106;
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

  if ( (byte_4A4A251 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4A4A251 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B868D4(v8);
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

  if ( (byte_4A4A252 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4A4A252 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1B868D4(v8);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CD3F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD3B0;
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
  if ( (byte_4A4A259 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A4A259 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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