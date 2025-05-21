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

  if ( (byte_4B4073C & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&BaseDialog_TypeInfo, v3);
    sub_1BDB878(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_4B4073C = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BDB920(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v6, v7, v8);
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
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationRestrictionHelpDialog__Close_33595556(this, 0LL, v2);
}


void __fastcall PartyOrganizationRestrictionHelpDialog__Close_33595556(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B4073A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__, v6);
    byte_4B4073A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
    sub_1BDB81C(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4B40737 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B40737 = 1;
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
    sub_1BDBAD4(titleLabel, method);
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

  if ( (byte_4B4073B & 1) == 0 )
  {
    sub_1BDB878(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__, method);
    byte_4B4073B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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
  UILabel_o *closeLabel; // x19
  struct UILabel_o **p_messageLabel; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  UnityEngine_Transform_o *v57; // x19
  UILabel_o *v58; // x19
  __int64 v59; // x2
  UILabel_o *messageDeckLabel; // x19
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x21
  struct PartyOrganizationConfirmItemDraw_array *v63; // x8
  __int64 v64; // x20
  struct System_String_o *v65; // x19
  UserServantCollectionMaster_o *v66; // x23
  System_Collections_Generic_List_object__o *v67; // x24
  unsigned int v68; // w8
  unsigned __int64 v69; // x26
  int32_t v70; // w28
  Il2CppObject *v71; // x25
  int32_t rangeType; // w29
  int v73; // w8
  bool IsGrandServant; // w21
  unsigned int v75; // w20
  FollowerInfo_o *v76; // x19
  struct System_Int32_array *targetVals2; // x23
  __int64 v78; // x27
  int32_t ReturnTypeByQuestId; // w0
  int32_t v80; // w0
  PartyOrganizationListViewItem_o *v81; // x19
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x19
  struct PartyOrganizationConfirmItemDraw_array *v89; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v90; // x0
  UILabel_o *v91; // x19
  System_Collections_Generic_IEnumerable_T__o *v92; // x25
  System_Collections_Generic_List_int__o *v93; // x19
  struct System_Int32_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  UILabel_o *v97; // x19
  UnityEngine_Transform_o *v98; // x0
  int targetVals_high; // w23
  int v100; // w20
  UILabel_o *v101; // x19
  __int64 *v102; // x8
  UILabel_o *titleLabel; // x19
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v108; // x13
  System_String_o *v109; // x1
  UILabel_o *v110; // x19
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v112; // w20
  int name; // w19
  RestrictionEntity_o *v114; // x23
  System_Collections_Generic_List_object__o *v115; // x22
  int32_t v116; // w21
  int v117; // w26
  FollowerInfo_o *v118; // x24
  PartyOrganizationListViewItem_o *v119; // x19
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  Il2CppClass **v125; // x0
  struct UILabel_o *v126; // x19
  Il2CppObject *v127; // x0
  int32_t j; // w19
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  float v131; // s8
  struct UILabel_o *v132; // x8
  unsigned int v133; // w10
  signed int v134; // w20
  float mSpacingY; // s9
  float v136; // s8
  unsigned int v137; // w9
  unsigned int v138; // w8
  UnityEngine_Transform_o *v139; // x0
  float v140; // s0
  float v141; // s8
  unsigned int v142; // w19
  UnityEngine_Transform_o *v143; // x0
  float v144; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Int32_array *v146; // x21
  struct PartyOrganizationConfirmItemDraw_array *v147; // x8
  __int64 v148; // x20
  __int64 v149; // x19
  UserServantCollectionMaster_o *v150; // x24
  System_Collections_Generic_List_object__o *v151; // x23
  unsigned int v152; // w8
  unsigned __int64 v153; // x25
  int32_t *v154; // x29
  __int64 v155; // x22
  int32_t v156; // w19
  System_Int32_array *v157; // x20
  int32_t v158; // w27
  bool v159; // w28
  PartyOrganizationListViewItem_o *v160; // x21
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  PartyOrganizationConfirmItemDraw_array *v167; // x1
  UnityEngine_GameObject_o *v168; // x2
  bool v169; // w4
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  UILabel_o *messageSelfOrSupportLabel; // x19
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v176; // x8
  __int64 v177; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v179; // x22
  unsigned int v180; // w8
  unsigned __int64 v181; // x24
  __int64 v182; // x23
  int32_t v183; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v185; // x19
  int32_t v186; // w0
  int32_t LimitCount; // w28
  int32_t v188; // w0
  bool v189; // w29
  PartyOrganizationListViewItem_o *v190; // x21
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  Il2CppClass **v196; // x0
  CGThumbnailListItem_o *v197; // x0
  int32_t v198; // w1
  PartyOrganizationListViewItem_o *v199; // x19
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x0
  __int64 v204; // x8
  System_Collections_Generic_List_object__o *v205; // x0
  Il2CppObject *v206; // x1
  struct UnityEngine_GameObject_o *v207; // x19
  struct PartyOrganizationConfirmItemDraw_array *v208; // x20
  System_Action_o *v209; // x19
  __int64 v210; // [xsp+28h] [xbp-A8h]
  UserServantCollectionMaster_o *v211; // [xsp+30h] [xbp-A0h]
  UserServantCollectionMaster_o *v212; // [xsp+30h] [xbp-A0h]
  PartyOrganizationRestrictionHelpDialog_o *v213; // [xsp+38h] [xbp-98h]
  QuestRestrictionInfo_o *v215; // [xsp+48h] [xbp-88h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16

  if ( (byte_4B40738 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, partyItem);
    sub_1BDB878(&BalanceConfig_TypeInfo, v16);
    sub_1BDB878(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v20);
    sub_1BDB878(&DataManager_TypeInfo, v21);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v23);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v24);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v30);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_1BDB878(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v32);
    sub_1BDB878(&LocalizationManager_TypeInfo, v33);
    sub_1BDB878(&NetworkManager_TypeInfo, v34);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_1BDB878(&PartyOrganizationConfirmItemDraw_TypeInfo, v36);
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, v37);
    sub_1BDB878(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v38);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_1BDB878(&StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/, v40);
    sub_1BDB878(&StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v41);
    sub_1BDB878(&StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v42);
    sub_1BDB878(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v43);
    sub_1BDB878(&StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/, v44);
    sub_1BDB878(&StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/, v45);
    sub_1BDB878(&StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v46);
    sub_1BDB878(&StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v47);
    sub_1BDB878(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v48);
    sub_1BDB878(&StringLiteral_1/*""*/, v49);
    byte_4B40738 = 1;
  }
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (const MethodInfo *)message);
    gameObject = (RestrictionEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_295;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_295;
    ((void (__fastcall *)(RestrictionEntity_o *, _QWORD, __int64, void *))gameObject->klass[1]._1.events)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.properties);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_295;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    p_messageLabel = &this->fields.messageLabel;
    gameObject = (RestrictionEntity_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_295;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_295;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_295;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_295;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_295;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_295;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
    TransformHelper__SetLocalPositionY(transform, -80.0, 0LL);
    gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_295;
    v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    TransformHelper__SetLocalPositionY(v55, 210.0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    UILabel__set_fontSize((UILabel_o *)gameObject, 30, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    UIWidget__set_width((UIWidget_o *)gameObject, 700, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    UILabel__set_spacingY((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0LL);
    gameObject = (RestrictionEntity_o *)*p_messageLabel;
    if ( !*p_messageLabel )
      goto LABEL_295;
    v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !byte_4B3E911 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v56);
      byte_4B3E911 = 1;
    }
    TransformHelper__SetLocalPosition(v57, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v213 = this;
    v215 = questRestrictionInfo;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_295;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)System_String__IsNullOrEmpty(message, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_168;
        if ( !questRestrictionInfo )
          goto LABEL_295;
        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
        if ( !restrictionEntityList )
          goto LABEL_295;
        max_length = restrictionEntityList->max_length;
        if ( max_length <= (unsigned int)index )
          goto LABEL_296;
        if ( max_length < 1 )
          goto LABEL_121;
        for ( i = 0; i != max_length; ++i )
        {
          gameObject = restrictionEntityList->m_Items[i];
          if ( !gameObject )
            goto LABEL_295;
          questRestrictionEntityList = questRestrictionInfo->fields.questRestrictionEntityList;
          if ( !questRestrictionEntityList )
            goto LABEL_295;
          if ( questRestrictionEntityList->max_length <= index )
            goto LABEL_296;
          v108 = questRestrictionEntityList->m_Items[index];
          if ( !v108 )
            goto LABEL_295;
          if ( gameObject->fields.id == v108->fields.restrictionId )
            goto LABEL_122;
        }
LABEL_121:
        gameObject = restrictionEntityList->m_Items[index];
        if ( !gameObject )
          goto LABEL_295;
LABEL_122:
        gameObject = (RestrictionEntity_o *)RestrictionEntity__GetClassIndividualityRestrictionMessage(gameObject, 0LL);
        if ( !*p_messageLabel )
          goto LABEL_295;
        v109 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        break;
      case 2:
      case 4:
      case 5:
      case 9:
      case 13:
        goto LABEL_103;
      case 3:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10285/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_166;
      case 6:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_166;
      case 7:
        v110 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v110 )
          goto LABEL_295;
        UILabel__set_text(v110, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_295;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_295;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_295;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_295;
        if ( !gameObject )
          goto LABEL_295;
        gameObject = (RestrictionEntity_o *)NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              questRestrictionInfo->fields.questId,
                                              questRestrictionInfo->fields.questPhase,
                                              0LL);
        if ( !gameObject )
          goto LABEL_295;
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_295;
        v112 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v114 = gameObject;
        v115 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v115,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v112 >= 1 )
          {
            v116 = 0;
            if ( v112 - 1 >= (unsigned int)(name - 1) )
              v117 = name;
            else
              v117 = v112;
            while ( (unsigned int)v116 < LODWORD(v114->fields.name) )
            {
              v118 = (FollowerInfo_o *)*((_QWORD *)&v114->fields.type + v116);
              if ( !v118 )
                goto LABEL_295;
              if ( !v118->fields.isMySvtOrNpc )
              {
                v119 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_33332208(
                  v119,
                  v116,
                  v118,
                  0,
                  0,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  0,
                  0,
                  0,
                  0LL);
                if ( !v115 )
                  goto LABEL_295;
                items = v115->fields._items;
                v123 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v115->fields._version;
                if ( !items )
                  goto LABEL_295;
                size = v115->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v115,
                    (Il2CppObject *)v119,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                }
                else
                {
                  v125 = &items->obj.klass + size;
                  v115->fields._size = size + 1;
                  v125[4] = (Il2CppClass *)v119;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v119, v120, v121);
                }
              }
              if ( v117 == ++v116 )
                goto LABEL_154;
            }
            goto LABEL_296;
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
            goto LABEL_295;
          gameObject = (RestrictionEntity_o *)PartyListViewItem__GetMember(partyItem, j, 0LL);
          if ( !gameObject )
            goto LABEL_295;
          v51 = gameObject;
          if ( LOBYTE(gameObject[2].klass) )
          {
            if ( !LOBYTE(gameObject[4].klass) )
              break;
          }
        }
        if ( v115 )
        {
          v170 = v115->fields._items;
          v171 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v115->fields._version;
          if ( v170 )
          {
            v172 = v115->fields._size;
            if ( (unsigned int)v172 >= v170->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v115,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
            }
            else
            {
              v173 = &v170->obj.klass + v172;
              v115->fields._size = v172 + 1;
              v173[4] = (Il2CppClass *)v51;
              sub_1BDB81C((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v51, v129, v130);
            }
LABEL_154:
            supportMemberBase = this->fields.supportMemberBase;
            v89 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v90 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v115;
LABEL_238:
            v167 = v89;
            v168 = supportMemberBase;
            v169 = 0;
LABEL_291:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v90, v167, v168, 1, v169, 0LL);
            goto LABEL_292;
          }
        }
        goto LABEL_295;
      case 8:
      case 14:
        v58 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v58 )
          goto LABEL_295;
        UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_295;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                              questRestrictionInfo,
                                              0LL);
        if ( !gameObject )
          goto LABEL_295;
        if ( !LODWORD(gameObject->fields.name) )
          goto LABEL_296;
        messageDeckLabel = this->fields.messageDeckLabel;
        gameObject = (RestrictionEntity_o *)System_String__Format(
                                              message,
                                              *(Il2CppObject **)&gameObject->fields.type,
                                              0LL);
        if ( !messageDeckLabel )
          goto LABEL_295;
        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_295;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_295;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_295;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              questRestrictionInfo->fields.questId,
                              questRestrictionInfo->fields.questPhase,
                              0LL);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_295;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                              questRestrictionInfo,
                                              0LL);
        if ( !gameObject )
          goto LABEL_295;
        v63 = this->fields.supportMemberObjectList;
        if ( !v63 )
          goto LABEL_295;
        v64 = *(_QWORD *)&v63->max_length;
        v65 = gameObject->fields.name;
        v66 = (UserServantCollectionMaster_o *)gameObject;
        v67 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v67,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v65 < 1 || (int)v64 < 1 )
          goto LABEL_71;
        if ( (int)v64 - 1 >= (unsigned int)((_DWORD)v65 - 1) )
          v68 = (unsigned int)v65;
        else
          v68 = v64;
        v69 = 0LL;
        v210 = v68;
        v211 = v66;
        do
        {
          if ( v69 >= LODWORD(v66->fields._MasterName_k__BackingField) )
            goto LABEL_296;
          v70 = *(&v66->fields.revision + v69);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B3ED56 )
          {
            sub_1BDB878(&NetworkManager_TypeInfo, v51);
            byte_4B3ED56 = 1;
          }
          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_295;
          v71 = MasterData_object;
          gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                (UserServantCollectionMaster_o *)MasterData_object,
                                                *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType + 64LL),
                                                v70,
                                                0LL);
          if ( !gameObject )
            goto LABEL_295;
          rangeType = gameObject->fields.rangeType;
          gameObject = (RestrictionEntity_o *)UserServantCollectionEntity__IsGrandServant(
                                                (UserServantCollectionEntity_o *)gameObject,
                                                0LL);
          if ( !QuestFollowerList )
            goto LABEL_295;
          v73 = QuestFollowerList->max_length;
          IsGrandServant = (char)gameObject;
          if ( v73 >= 1 )
          {
            v75 = 0;
            while ( 1 )
            {
              if ( v75 >= v73 )
                goto LABEL_296;
              v76 = QuestFollowerList->m_Items[v75];
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                    questRestrictionInfo->fields.questId,
                                                    0LL);
              if ( !v76 )
                goto LABEL_295;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v76, 0, (int32_t)gameObject, 0LL);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v78 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v218.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v218.fields.fakeValue = v78;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                      v218,
                                                      0LL);
                questRestrictionInfo = v215;
                if ( (_DWORD)gameObject == v70 )
                  break;
              }
              v73 = QuestFollowerList->max_length;
              if ( (int)++v75 >= v73 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v215->fields.questId, 0LL);
            rangeType = FollowerInfo__getLimitCount(v76, 0, ReturnTypeByQuestId, 0LL);
            v80 = FollowerInfo__GetReturnTypeByQuestId(v215->fields.questId, 0LL);
            IsGrandServant = FollowerInfo__IsGrandServant(v76, 0, v80, 0LL);
          }
LABEL_65:
          v81 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33387792(
            v81,
            v69,
            v70,
            rangeType,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            IsGrandServant,
            0LL);
          if ( !v67 )
            goto LABEL_295;
          v84 = v67->fields._items;
          this = v213;
          v85 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v67->fields._version;
          if ( !v84 )
            goto LABEL_295;
          v86 = v67->fields._size;
          v66 = v211;
          MasterData_object = v71;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v67,
              (Il2CppObject *)v81,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = &v84->obj.klass + v86;
            v67->fields._size = v86 + 1;
            v87[4] = (Il2CppClass *)v81;
            sub_1BDB81C((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v81, v82, v83);
          }
          ++v69;
        }
        while ( v69 != v210 );
LABEL_71:
        supportMemberBase = this->fields.supportMemberBase;
        v89 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v90 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v67;
        goto LABEL_238;
      case 10:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_166;
      case 11:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_166;
      case 12:
      case 16:
        v91 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !v91 )
          goto LABEL_295;
        UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_295;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                              questRestrictionInfo,
                                              &npcInfoDictionary,
                                              index,
                                              0,
                                              0LL);
        if ( !gameObject )
          goto LABEL_295;
        v92 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v93 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_57378420(
                v93,
                v92,
                (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
              if ( !v93 )
                goto LABEL_295;
              v94 = v93->fields._items;
              v95 = Method_System_Collections_Generic_List_int__Add__;
              ++v93->fields._version;
              if ( !v94 )
                goto LABEL_295;
              v96 = v93->fields._size;
              if ( (unsigned int)v96 >= v94->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v93,
                  0,
                  *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
              }
              else
              {
                v93->fields._size = v96 + 1;
                v94->m_Items[v96 + 1] = 0;
              }
              v92 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v93,
                                                                     (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v92 )
                  {
                    v176 = this->fields.supportMemberObjectList;
                    v212 = (UserServantCollectionMaster_o *)gameObject;
                    if ( v176 )
                    {
                      v177 = *(_QWORD *)&v176->max_length;
                      monitor = v92[1].monitor;
                      v179 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v179,
                        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v177 < 1 )
                      {
LABEL_288:
                        v207 = this->fields.supportMemberBase;
                        v208 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v169 = 1;
                        v90 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v179;
                        v167 = v208;
                        v168 = v207;
                        goto LABEL_291;
                      }
                      if ( (int)v177 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                        v180 = (unsigned int)monitor;
                      else
                        v180 = v177;
                      v181 = 0LL;
                      v182 = v180;
                      while ( 1 )
                      {
                        if ( v181 >= LODWORD(v92[1].monitor) )
                          goto LABEL_296;
                        v183 = *((_DWORD *)&v92[2].klass + v181);
                        if ( v183 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_295;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v183,
                                  (const MethodInfo_333B514 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_299;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_295;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v183,
                                   (const MethodInfo_333B280 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                          if ( Item )
                          {
                            v185 = (FollowerInfo_o *)Item;
                            v186 = FollowerInfo__GetReturnTypeByQuestId(v215->fields.questId, 0LL);
                            LimitCount = FollowerInfo__getLimitCount(v185, 0, v186, 0LL);
                            v188 = FollowerInfo__GetReturnTypeByQuestId(v215->fields.questId, 0LL);
                            v189 = FollowerInfo__IsGrandServant(v185, 0, v188, 0LL);
                          }
                          else
                          {
LABEL_299:
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4B3ED56 )
                            {
                              sub_1BDB878(&NetworkManager_TypeInfo, v51);
                              byte_4B3ED56 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            }
                            if ( !v212 )
                              goto LABEL_295;
                            gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                  v212,
                                                                  *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                            + 64LL),
                                                                  v183,
                                                                  0LL);
                            if ( !gameObject )
                              goto LABEL_295;
                            LimitCount = gameObject->fields.rangeType;
                            v189 = UserServantCollectionEntity__IsGrandServant(
                                     (UserServantCollectionEntity_o *)gameObject,
                                     0LL);
                            v185 = 0LL;
                          }
                          v190 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_33387792(
                            v190,
                            v181,
                            v183,
                            LimitCount,
                            setupInfo,
                            v215,
                            v185,
                            0,
                            v189,
                            0LL);
                          if ( !v179 )
                            goto LABEL_295;
                          v193 = v179->fields._items;
                          this = v213;
                          v194 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v179->fields._version;
                          if ( !v193 )
                            goto LABEL_295;
                          v195 = v179->fields._size;
                          if ( (unsigned int)v195 >= v193->max_length )
                          {
                            v204 = v194[4];
                            v205 = v179;
                            v206 = (Il2CppObject *)v190;
LABEL_286:
                            System_Collections_Generic_List_object___AddWithResize(
                              v205,
                              v206,
                              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v204 + 192) + 112LL));
                            goto LABEL_287;
                          }
                          v196 = &v193->obj.klass + v195;
                          v179->fields._size = v195 + 1;
                          v196[4] = (Il2CppClass *)v190;
                          v197 = (CGThumbnailListItem_o *)(v196 + 4);
                          v198 = (int)v190;
                        }
                        else
                        {
                          v199 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_33386572(v199, v181, 1, 0LL, 0LL, 1, 0, 0LL);
                          if ( !v179 )
                            goto LABEL_295;
                          v200 = v179->fields._items;
                          v201 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v179->fields._version;
                          if ( !v200 )
                            goto LABEL_295;
                          v202 = v179->fields._size;
                          if ( (unsigned int)v202 >= v200->max_length )
                          {
                            v204 = v201[4];
                            v205 = v179;
                            v206 = (Il2CppObject *)v199;
                            goto LABEL_286;
                          }
                          v203 = &v200->obj.klass + v202;
                          v179->fields._size = v202 + 1;
                          v203[4] = (Il2CppClass *)v199;
                          v197 = (CGThumbnailListItem_o *)(v203 + 4);
                          v198 = (int)v199;
                        }
                        sub_1BDB81C(v197, v198, v191, v192);
LABEL_287:
                        if ( v182 == ++v181 )
                          goto LABEL_288;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_295;
        }
        v126 = *p_messageLabel;
        v127 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0LL);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v127, 0LL);
        if ( !v126 )
          goto LABEL_295;
        v109 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v126;
        break;
      case 15:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10286/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_166;
      default:
        if ( type == 101 )
        {
          v97 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
          if ( v97 )
          {
            UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v98 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
              TransformHelper__SetLocalPositionY(v98, 211.0, 0LL);
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
                              goto LABEL_295;
                            UIWidget__set_height((UIWidget_o *)gameObject, 150, 0LL);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            if ( !*p_messageLabel )
                              goto LABEL_295;
                            LODWORD(v131) = HIDWORD(*(unsigned __int64 *)&UILabel__get_printedSize(
                                                                            (UILabel_o *)gameObject,
                                                                            0LL));
                            if ( !byte_4B3EFD1 )
                            {
                              sub_1BDB878(&System_Math_TypeInfo, v51);
                              byte_4B3EFD1 = 1;
                            }
                            gameObject = (RestrictionEntity_o *)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v132 = *p_messageLabel;
                            v133 = vcvtps_s32_f32(v131);
                            v134 = ceilf(v131) == INFINITY ? 0x80000000 : v133;
                            if ( !v132 )
                              goto LABEL_295;
                            mSpacingY = (float)v132->fields.mSpacingY;
                            if ( !byte_4B3EFD1 )
                            {
                              sub_1BDB878(&System_Math_TypeInfo, v51);
                              byte_4B3EFD1 = 1;
                            }
                            v136 = (float)((float)v134 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v137 = vcvtps_s32_f32(v136);
                            v138 = ceilf(v136) == INFINITY ? 0x80000000 : v137;
                            if ( !gameObject )
                              goto LABEL_295;
                            v100 = v134 - v138;
                          }
                          else
                          {
                            v100 = targetVals_high
                                 / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                 * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                 - gameObject[8].fields.id;
                          }
                          v139 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
                          TransformHelper__SetLocalPositionY(v139, -59.0, 0LL);
                          if ( !byte_4B3EFD1 )
                          {
                            sub_1BDB878(&System_Math_TypeInfo, v51);
                            byte_4B3EFD1 = 1;
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
                              v140 = (float)v100 * 0.5;
                              v141 = ceilf(v140);
                              v142 = vcvtps_s32_f32(v140);
                              v143 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
                              v144 = (float)(int)(v142 + 8);
                              if ( v141 == INFINITY )
                                v144 = -2147500000.0;
                              TransformHelper__SetLocalPositionY(v143, v144, 0LL);
                              if ( questRestrictionInfo )
                              {
                                v145 = System_Linq_Enumerable__Distinct_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.overwriteLimitCountSvtIds,
                                         (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
                                v146 = System_Linq_Enumerable__ToArray_int_(
                                         v145,
                                         (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v146 )
                                {
                                  v147 = this->fields.supportMemberObjectList;
                                  if ( v147 )
                                  {
                                    v148 = *(_QWORD *)&v147->max_length;
                                    v149 = *(_QWORD *)&v146->max_length;
                                    v150 = (UserServantCollectionMaster_o *)gameObject;
                                    v151 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v151,
                                      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                    if ( (int)v149 >= 1 && (int)v148 >= 1 )
                                    {
                                      if ( (int)v148 - 1 >= (unsigned int)(v149 - 1) )
                                        v152 = v149;
                                      else
                                        v152 = v148;
                                      v153 = 0LL;
                                      v154 = &v146->m_Items[1];
                                      v155 = v152;
                                      while ( v153 < v146->max_length )
                                      {
                                        v156 = v154[v153];
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                        if ( !byte_4B3ED56 )
                                        {
                                          sub_1BDB878(&NetworkManager_TypeInfo, v51);
                                          byte_4B3ED56 = 1;
                                        }
                                        gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        }
                                        if ( !v150 )
                                          goto LABEL_295;
                                        v157 = v146;
                                        gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                              v150,
                                                                              *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                                        + 64LL),
                                                                              v156,
                                                                              0LL);
                                        if ( !gameObject )
                                          goto LABEL_295;
                                        v158 = gameObject->fields.rangeType;
                                        v159 = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0LL);
                                        v160 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                                        PartyOrganizationListViewItem___ctor_33387792(
                                          v160,
                                          v153,
                                          v156,
                                          v158,
                                          setupInfo,
                                          v215,
                                          0LL,
                                          0,
                                          v159,
                                          0LL);
                                        if ( !v151 )
                                          goto LABEL_295;
                                        v163 = v151->fields._items;
                                        v164 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                        ++v151->fields._version;
                                        if ( !v163 )
                                          goto LABEL_295;
                                        v165 = v151->fields._size;
                                        if ( (unsigned int)v165 >= v163->max_length )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v151,
                                            (Il2CppObject *)v160,
                                            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v166 = &v163->obj.klass + v165;
                                          v151->fields._size = v165 + 1;
                                          v166[4] = (Il2CppClass *)v160;
                                          sub_1BDB81C((CGThumbnailListItem_o *)(v166 + 4), (int32_t)v160, v161, v162);
                                        }
                                        ++v153;
                                        v146 = v157;
                                        if ( v155 == v153 )
                                          goto LABEL_235;
                                      }
LABEL_296:
                                      sub_1BDBADC(gameObject, v51, v59);
                                    }
LABEL_235:
                                    this = v213;
                                    supportMemberBase = v213->fields.supportMemberBase;
                                    v89 = v213->fields.supportMemberObjectList;
                                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                    v90 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v151;
                                    goto LABEL_238;
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
LABEL_295:
          sub_1BDBAD4(gameObject, v51);
        }
LABEL_103:
        v101 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = &StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_166:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v102, 0LL);
        if ( !v101 )
          goto LABEL_295;
        UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
LABEL_168:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_295;
        v109 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v109, 0LL);
LABEL_292:
    this->fields.state = 1;
    v209 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v209, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v209, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRestrictionHelpDialog__Open_33590760(
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
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  PartyOrganizationRestrictionHelpDialog_o *v52; // x21
  void *gameObject; // x0
  Il2CppClass *v54; // x1
  UILabel_o *closeLabel; // x26
  UILabel_o *v56; // x23
  __int64 v57; // x2
  UILabel_o *v58; // x23
  Il2CppObject *v59; // x22
  struct PartyOrganizationConfirmItemDraw_array *v60; // x8
  __int64 v61; // x21
  __int64 v62; // x19
  _DWORD *v63; // x24
  System_Collections_Generic_List_object__o *v64; // x23
  unsigned int v65; // w8
  unsigned __int64 v66; // x25
  __int64 v67; // x19
  int32_t v68; // w27
  int32_t v69; // w29
  bool v70; // w21
  PartyOrganizationListViewItem_o *v71; // x28
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  struct UnityEngine_GameObject_o *v78; // x20
  struct PartyOrganizationConfirmItemDraw_array *v79; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v80; // x0
  bool IsMyServantOrNpcRestriction_42377380; // w0
  UILabel_o *titleLabel; // x25
  bool v83; // w24
  System_Collections_Generic_IEnumerable_T__o *v84; // x28
  bool IsSelectableNormalSupport; // w25
  _BOOL4 v86; // w19
  _BOOL4 v87; // w20
  System_Collections_Generic_List_int__o *v88; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  int v92; // w19
  UILabel_o *v93; // x20
  __int64 *v94; // x8
  UILabel_o *v95; // x23
  struct PartyOrganizationConfirmItemDraw_array *v96; // x8
  int max_length; // w21
  int v98; // w20
  _QWORD *v99; // x23
  System_Collections_Generic_List_object__o *v100; // x22
  int32_t v101; // w24
  FollowerInfo_o *v102; // x26
  PartyOrganizationListViewItem_o *v103; // x25
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  PartyOrganizationRestrictionHelpDialog_o *v110; // x9
  PartyOrganizationConfirmItemDraw_c *v111; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v114; // x23
  int32_t v115; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  _QWORD *v119; // x23
  struct PartyOrganizationConfirmItemDraw_array *v120; // x8
  __int64 v121; // x19
  __int64 v122; // x8
  unsigned __int64 v123; // x24
  int32_t v124; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v126; // w21
  bool v127; // w28
  PartyOrganizationListViewItem_o *v128; // x27
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  PartyOrganizationConfirmItemDraw_array *v135; // x1
  UnityEngine_GameObject_o *v136; // x2
  bool v137; // w4
  System_Action_o *v138; // x20
  int32_t i; // w20
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UILabel_o *messageLabel; // x21
  Il2CppObject *v143; // x0
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  System_String_o *v148; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v152; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v154; // x22
  unsigned int v155; // w8
  unsigned __int64 v156; // x25
  System_Collections_Generic_IEnumerable_T__o *v157; // x21
  __int64 v158; // x24
  int32_t v159; // w27
  System_Collections_Generic_IEnumerable_T__o *v160; // x19
  Il2CppObject *Item; // x0
  FollowerInfo_o *v162; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  int32_t v165; // w0
  bool IsGrandServant; // w23
  PartyOrganizationListViewItem_o *v167; // x29
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  PartyOrganizationListViewItem_o *v174; // x26
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v182; // x21
  UserServantCollectionMaster_o *v183; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v185; // [xsp+30h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B40739 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, partyItem);
    sub_1BDB878(&BalanceConfig_TypeInfo, v15);
    sub_1BDB878(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1BDB878(&DataManager_TypeInfo, v20);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__, v22);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v23);
    sub_1BDB878(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____get_Count__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____get_Item__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v36);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_1BDB878(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v38);
    sub_1BDB878(&LocalizationManager_TypeInfo, v39);
    sub_1BDB878(&NetworkManager_TypeInfo, v40);
    sub_1BDB878(&PartyOrganizationConfirmItemDraw_TypeInfo, v41);
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, v42);
    sub_1BDB878(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, v43);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_1BDB878(&StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, v45);
    sub_1BDB878(&StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, v46);
    sub_1BDB878(&StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, v47);
    sub_1BDB878(&StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, v48);
    sub_1BDB878(&StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/, v49);
    sub_1BDB878(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/, v50);
    sub_1BDB878(&StringLiteral_1/*""*/, v51);
    byte_4B40739 = 1;
  }
  v52 = this;
  entity = 0LL;
  npcInfoDictionary = 0LL;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BDB81C(
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0LL);
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
    v185 = questRestrictionInfo;
    switch ( restrictionType )
    {
      case 0:
        if ( !questRestrictionInfo )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_42377380 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
                                                 questRestrictionInfo,
                                                 slotNo,
                                                 0LL);
        titleLabel = this->fields.titleLabel;
        v83 = IsMyServantOrNpcRestriction_42377380;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        if ( v83 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                         questRestrictionInfo,
                         &npcInfoDictionary,
                         slotNo,
                         0,
                         0LL);
          if ( !gameObject )
            goto LABEL_213;
          v84 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(
                                          questRestrictionInfo,
                                          slotNo,
                                          0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                questRestrictionInfo->fields.questId,
                questRestrictionInfo->fields.questPhase,
                0LL);
              if ( !IsSelectableNormalSupport )
                goto LABEL_170;
              if ( !entity )
                goto LABEL_168;
              v86 = entity != 0LL;
              v87 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_168;
              v88 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_57378420(
                v88,
                v84,
                (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
              if ( !v88 )
                goto LABEL_213;
              items = v88->fields._items;
              v90 = Method_System_Collections_Generic_List_int__Add__;
              ++v88->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v88->fields._size;
              v92 = v87 && v86;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v88,
                  0,
                  *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
              }
              else
              {
                v88->fields._size = size + 1;
                items->m_Items[size + 1] = 0;
              }
              v84 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v88,
                                                                     (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v92 )
              {
LABEL_168:
                gameObject = this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v148 = message;
              }
              else
              {
LABEL_170:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                     questRestrictionInfo,
                                                     slotNo,
                                                     0,
                                                     0LL);
                gameObject = System_String__Format(message, DialogTargetName, 0LL);
                if ( !messageDeckLabel )
                  goto LABEL_213;
                v148 = (System_String_o *)gameObject;
                gameObject = messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v148, 0LL);
              gameObject = this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v84 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v183 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      v152 = *(_QWORD *)&supportMemberObjectList->max_length;
                      monitor = v84[1].monitor;
                      v154 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v154,
                        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)v152 >= 1 )
                      {
                        if ( (int)v152 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v155 = (unsigned int)monitor;
                        else
                          v155 = v152;
                        v156 = 0LL;
                        v157 = v84 + 2;
                        v158 = v155;
                        while ( v156 < LODWORD(v84[1].monitor) )
                        {
                          v159 = *((_DWORD *)&v157->klass + v156);
                          if ( v159 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            v160 = v84;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v159,
                                    (const MethodInfo_333B514 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v159,
                                     (const MethodInfo_333B280 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v162 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                                                      questRestrictionInfo->fields.questId,
                                                      0LL);
                              LimitCount = FollowerInfo__getLimitCount(v162, 0, ReturnTypeByQuestId, 0LL);
                              v165 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
                              IsGrandServant = FollowerInfo__IsGrandServant(v162, 0, v165, 0LL);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4B3ED56 )
                              {
                                sub_1BDB878(&NetworkManager_TypeInfo, v54);
                                byte_4B3ED56 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( !v183 )
                                goto LABEL_213;
                              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                                             v183,
                                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                                             v159,
                                             0LL);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *((_DWORD *)gameObject + 14);
                              IsGrandServant = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0LL);
                              v162 = 0LL;
                            }
                            v167 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_33387792(
                              v167,
                              v156,
                              v159,
                              LimitCount,
                              setupInfo,
                              v185,
                              v162,
                              0,
                              IsGrandServant,
                              0LL);
                            if ( !v154 )
                              goto LABEL_213;
                            v170 = v154->fields._items;
                            v171 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v154->fields._version;
                            if ( !v170 )
                              goto LABEL_213;
                            v172 = v154->fields._size;
                            v84 = v160;
                            if ( (unsigned int)v172 >= v170->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v154,
                                (Il2CppObject *)v167,
                                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v173 = &v170->obj.klass + v172;
                              v154->fields._size = v172 + 1;
                              v173[4] = (Il2CppClass *)v167;
                              sub_1BDB81C((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v167, v168, v169);
                            }
                            questRestrictionInfo = v185;
                          }
                          else
                          {
                            v174 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_33386572(v174, v156, 1, 0LL, 0LL, 1, 0, 0LL);
                            if ( !v154 )
                              goto LABEL_213;
                            v177 = v154->fields._items;
                            v178 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v154->fields._version;
                            if ( !v177 )
                              goto LABEL_213;
                            v179 = v154->fields._size;
                            if ( (unsigned int)v179 >= v177->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v154,
                                (Il2CppObject *)v174,
                                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v180 = &v177->obj.klass + v179;
                              v154->fields._size = v179 + 1;
                              v180[4] = (Il2CppClass *)v174;
                              sub_1BDB81C((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v174, v175, v176);
                            }
                          }
                          if ( v158 == ++v156 )
                            goto LABEL_210;
                        }
                        goto LABEL_214;
                      }
LABEL_210:
                      supportMemberBase = this->fields.supportMemberBase;
                      v182 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v137 = 1;
                      v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v154;
                      v135 = v182;
                      v136 = supportMemberBase;
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
            v143 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0LL);
            gameObject = System_String__Format(message, v143, 0LL);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
              goto LABEL_147;
            }
          }
LABEL_213:
          sub_1BDBAD4(gameObject, v54);
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               questRestrictionInfo,
                                                                               slotNo,
                                                                               0LL);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                  questRestrictionInfo,
                                                                  slotNo,
                                                                  0LL);
        v114 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v114,
          (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
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
                                     (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v115,
                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v114 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v114,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v115 >= NeedIndividualityList->fields._size )
              goto LABEL_114;
          }
          goto LABEL_213;
        }
LABEL_114:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0LL);
        v117 = System_Linq_Enumerable__Distinct_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v114,
                 (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
        v118 = System_Linq_Enumerable__Intersect_int_(
                 v117,
                 CollectionList,
                 (const MethodInfo_305A540 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v118,
                       (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v52 = this;
        v119 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_103:
          gameObject = v52->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
LABEL_148:
            v52->fields.state = 1;
            v138 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v138,
              (Il2CppObject *)v52,
              Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)v52, v138, 0, 0LL);
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
        v100 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v100,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v121 >= 1 )
        {
          v122 = v119[3];
          if ( (int)v122 >= 1 )
          {
            v123 = 0LL;
            while ( v123 < (unsigned int)v122 )
            {
              v124 = *((_DWORD *)v119 + v123 + 8);
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !gameObject )
                goto LABEL_213;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B3ED56 )
              {
                sub_1BDB878(&NetworkManager_TypeInfo, v54);
                byte_4B3ED56 = 1;
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
                             v124,
                             0LL);
              if ( !gameObject )
                goto LABEL_213;
              v126 = *((_DWORD *)gameObject + 14);
              v127 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0LL);
              v128 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33387792(
                v128,
                v123,
                v124,
                v126,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v127,
                0LL);
              if ( !v100 )
                goto LABEL_213;
              v131 = v100->fields._items;
              v52 = this;
              v132 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v100->fields._version;
              if ( !v131 )
                goto LABEL_213;
              v133 = v100->fields._size;
              if ( (unsigned int)v133 >= v131->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v100,
                  (Il2CppObject *)v128,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
              }
              else
              {
                v134 = &v131->obj.klass + v133;
                v100->fields._size = v133 + 1;
                v134[4] = (Il2CppClass *)v128;
                sub_1BDB81C((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v128, v129, v130);
              }
              if ( (__int64)++v123 < (int)v121 )
              {
                LODWORD(v122) = *((_DWORD *)v119 + 6);
                if ( (__int64)v123 < (int)v122 )
                  continue;
              }
              goto LABEL_141;
            }
            goto LABEL_214;
          }
        }
LABEL_141:
        v110 = v52;
        v79 = v52->fields.supportMemberObjectList;
        v111 = PartyOrganizationConfirmItemDraw_TypeInfo;
        break;
      case 3:
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v94 = &StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_101;
      case 4:
      case 5:
        v56 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0LL);
        if ( !v56 )
          goto LABEL_213;
        UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
        if ( !questRestrictionInfo )
          goto LABEL_213;
        gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                       questRestrictionInfo,
                       0LL);
        if ( !gameObject )
          goto LABEL_103;
        if ( !*((_DWORD *)gameObject + 6) )
          goto LABEL_214;
        v58 = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0LL);
        if ( !v58 )
          goto LABEL_213;
        UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v59 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0LL);
        if ( !gameObject )
          goto LABEL_213;
        v60 = this->fields.supportMemberObjectList;
        if ( !v60 )
          goto LABEL_213;
        v61 = *(_QWORD *)&v60->max_length;
        v62 = *((_QWORD *)gameObject + 3);
        v63 = gameObject;
        v64 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v64,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v62 < 1 || (int)v61 < 1 )
          goto LABEL_47;
        if ( (int)v61 - 1 >= (unsigned int)(v62 - 1) )
          v65 = v62;
        else
          v65 = v61;
        v66 = 0LL;
        v67 = v65;
        do
        {
          if ( v66 >= (unsigned int)v63[6] )
            goto LABEL_214;
          v68 = v63[v66 + 8];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B3ED56 )
          {
            sub_1BDB878(&NetworkManager_TypeInfo, v54);
            byte_4B3ED56 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !v59 )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)v59,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v68,
                         0LL);
          if ( !gameObject )
            goto LABEL_213;
          v69 = *((_DWORD *)gameObject + 14);
          v70 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0LL);
          v71 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33387792(v71, v66, v68, v69, setupInfo, v185, 0LL, 0, v70, 0LL);
          if ( !v64 )
            goto LABEL_213;
          v74 = v64->fields._items;
          v75 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v64->fields._version;
          if ( !v74 )
            goto LABEL_213;
          v76 = v64->fields._size;
          if ( (unsigned int)v76 >= v74->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v64,
              (Il2CppObject *)v71,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &v74->obj.klass + v76;
            v64->fields._size = v76 + 1;
            v77[4] = (Il2CppClass *)v71;
            sub_1BDB81C((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v71, v72, v73);
          }
          ++v66;
        }
        while ( v67 != v66 );
LABEL_47:
        v78 = this->fields.supportMemberBase;
        v79 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v64;
        goto LABEL_145;
      case 6:
        v95 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10279/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0LL);
        if ( !v95 )
          goto LABEL_213;
        UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        v96 = this->fields.supportMemberObjectList;
        if ( !v96 )
          goto LABEL_213;
        max_length = v96->max_length;
        v98 = *((_DWORD *)gameObject + 6);
        v99 = gameObject;
        v100 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v100,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v98 < 1 )
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
            gameObject = PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !gameObject )
              goto LABEL_213;
            v54 = (Il2CppClass *)gameObject;
            if ( *((_BYTE *)gameObject + 128) )
            {
              if ( !*((_BYTE *)gameObject + 256) )
                break;
            }
          }
          if ( !v100 )
            goto LABEL_213;
          v144 = v100->fields._items;
          v145 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v100->fields._version;
          if ( !v144 )
            goto LABEL_213;
          v146 = v100->fields._size;
          if ( (unsigned int)v146 >= v144->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v100,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            v147 = &v144->obj.klass + v146;
            v100->fields._size = v146 + 1;
            v147[4] = v54;
            sub_1BDB81C((CGThumbnailListItem_o *)(v147 + 4), (int32_t)v54, v140, v141);
          }
        }
        else if ( max_length >= 1 )
        {
          if ( max_length - 1 < (unsigned int)(v98 - 1) )
            v98 = max_length;
          v101 = 0;
          while ( (unsigned int)v101 < *((_DWORD *)v99 + 6) )
          {
            v102 = (FollowerInfo_o *)v99[v101 + 4];
            if ( !v102 )
              goto LABEL_213;
            if ( !v102->fields.isMySvtOrNpc )
            {
              v103 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33332208(
                v103,
                v101,
                v102,
                0,
                0,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                0,
                0,
                0LL);
              if ( !v100 )
                goto LABEL_213;
              v106 = v100->fields._items;
              v107 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v100->fields._version;
              if ( !v106 )
                goto LABEL_213;
              v108 = v100->fields._size;
              if ( (unsigned int)v108 >= v106->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v100,
                  (Il2CppObject *)v103,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
              }
              else
              {
                v109 = &v106->obj.klass + v108;
                v100->fields._size = v108 + 1;
                v109[4] = (Il2CppClass *)v103;
                sub_1BDB81C((CGThumbnailListItem_o *)(v109 + 4), (int32_t)v103, v104, v105);
              }
            }
            if ( v98 == ++v101 )
              goto LABEL_97;
          }
LABEL_214:
          sub_1BDBADC(gameObject, v54, v57);
        }
LABEL_97:
        v110 = this;
        v111 = PartyOrganizationConfirmItemDraw_TypeInfo;
        v79 = this->fields.supportMemberObjectList;
        break;
      case 9:
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v94 = &StringLiteral_10287/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_101;
      default:
        v93 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v94 = &StringLiteral_10284/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_101:
        gameObject = LocalizationManager__Get((System_String_o *)*v94, 0LL);
        if ( !v93 )
          goto LABEL_213;
        UILabel__set_text(v93, (System_String_o *)gameObject, 0LL);
        goto LABEL_103;
    }
    v78 = v110->fields.supportMemberBase;
    if ( !v111->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v111);
    v80 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v100;
LABEL_145:
    v135 = v79;
    v136 = v78;
    v137 = 0;
LABEL_146:
    PartyOrganizationConfirmItemDraw__SetPartyIcon(v80, v135, v136, 1, v137, 0LL);
LABEL_147:
    v52 = this;
    goto LABEL_148;
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

  if ( (byte_4B40735 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4B40735 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1BDBD94(v8);
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

  if ( (byte_4B40736 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, value);
    byte_4B40736 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1BDBD94(v8);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1FA0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1F9C4;
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
  if ( (byte_4B4073D & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, result);
    byte_4B4073D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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