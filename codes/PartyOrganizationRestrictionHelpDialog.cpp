void PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2C42A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4D2C42A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C93B7C(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v9; // x20
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationRestrictionHelpDialog__Close(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRestrictionHelpDialog__Close_34958024(this, 0, v2);
}


void PartyOrganizationRestrictionHelpDialog__Close_34958024(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2C428 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_4D2C428 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
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

  if ( (byte_4D2C425 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C425 = 1;
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
    sub_1C93D2C(titleLabel, method);
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

  if ( (byte_4D2C429 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_4D2C429 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRestrictionHelpDialog__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  QuestRestrictionInfo_o *v11; // x27
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
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x19
  struct PartyOrganizationConfirmItemDraw_array *v57; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v58; // x0
  UILabel_o *v59; // x19
  System_Collections_Generic_IEnumerable_T__o *v60; // x25
  System_Collections_Generic_List_int__o *v61; // x19
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  UILabel_o *v65; // x19
  UnityEngine_Transform_o *v66; // x0
  int targetVals_high; // w23
  int v68; // w20
  UILabel_o *v69; // x19
  __int64 *v70; // x8
  UILabel_o *titleLabel; // x19
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  int i; // w12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x13
  QuestRestrictionEntity_o *v76; // x13
  System_String_o *v77; // x1
  UILabel_o *v78; // x19
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int v80; // w20
  int name; // w19
  RestrictionEntity_o *v82; // x23
  System_Collections_Generic_List_object__o *v83; // x22
  int32_t v84; // w21
  int v85; // w26
  FollowerInfo_o *v86; // x24
  PartyOrganizationListViewItem_o *v87; // x19
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  struct UILabel_o *v98; // x19
  Il2CppObject *v99; // x0
  int32_t j; // w19
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  float y; // s8
  struct UILabel_o *v108; // x8
  unsigned int v109; // w10
  signed int v110; // w20
  float mSpacingY; // s9
  float v112; // s8
  unsigned int v113; // w9
  unsigned int v114; // w8
  UnityEngine_Transform_o *v115; // x0
  float v116; // s0
  float v117; // s8
  unsigned int v118; // w19
  UnityEngine_Transform_o *v119; // x0
  float v120; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  System_Int32_array *v122; // x21
  struct PartyOrganizationConfirmItemDraw_array *v123; // x8
  il2cpp_array_size_t v124; // x20
  il2cpp_array_size_t v125; // x19
  UserServantCollectionMaster_o *v126; // x24
  System_Collections_Generic_List_object__o *v127; // x23
  unsigned int v128; // w8
  unsigned __int64 v129; // x25
  int32_t *m_Items; // x29
  __int64 v131; // x22
  int32_t v132; // w19
  System_Int32_array *v133; // x20
  int32_t v134; // w27
  bool v135; // w28
  PartyOrganizationListViewItem_o *v136; // x21
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x0
  PartyOrganizationConfirmItemDraw_array *v147; // x1
  UnityEngine_GameObject_o *v148; // x2
  bool v149; // w4
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  UILabel_o *messageSelfOrSupportLabel; // x19
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v156; // x8
  il2cpp_array_size_t v157; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v159; // x22
  unsigned int v160; // w8
  unsigned __int64 v161; // x24
  __int64 v162; // x23
  int32_t v163; // w27
  Il2CppObject *Item; // x0
  FollowerInfo_o *v165; // x19
  int32_t v166; // w0
  int32_t LimitCount; // w28
  int32_t v168; // w0
  bool v169; // w29
  PartyOrganizationListViewItem_o *v170; // x21
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  GrandQuestFolderBoardItem_o *v181; // x0
  int32_t v182; // w1
  PartyOrganizationListViewItem_o *v183; // x19
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  __int64 v188; // x8
  System_Collections_Generic_List_object__o *v189; // x0
  Il2CppObject *v190; // x1
  struct UnityEngine_GameObject_o *v191; // x19
  struct PartyOrganizationConfirmItemDraw_array *v192; // x20
  System_Action_o *v193; // x19
  __int64 v194; // [xsp+28h] [xbp-A8h]
  UserServantCollectionMaster_o *v195; // [xsp+30h] [xbp-A0h]
  UserServantCollectionMaster_o *v196; // [xsp+30h] [xbp-A0h]
  PartyOrganizationRestrictionHelpDialog_o *v197; // [xsp+38h] [xbp-98h]
  QuestRestrictionInfo_o *v199; // [xsp+48h] [xbp-88h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // 0:x0.16

  v11 = questRestrictionInfo;
  if ( (byte_4D2C426 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10342/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10351/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_1C93AD4(&StringLiteral_10343/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C93AD4(&StringLiteral_10353/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/);
    byte_4D2C426 = 1;
  }
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      type,
      (int32_t)message,
      (System_String_o *)setupInfo,
      (int32_t)questRestrictionInfo,
      (int64_t)callback,
      *(System_String_o **)&index);
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
    gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    TransformHelper__SetLocalPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v197 = this;
    v199 = v11;
    switch ( type )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_298;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)System_String__IsNullOrEmpty(message, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_171;
        if ( !v11 )
          goto LABEL_298;
        restrictionEntityList = v11->fields.restrictionEntityList;
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
          questRestrictionEntityList = v11->fields.questRestrictionEntityList;
          if ( !questRestrictionEntityList )
            goto LABEL_298;
          if ( LODWORD(questRestrictionEntityList->max_length) <= index )
            goto LABEL_299;
          v76 = questRestrictionEntityList->m_Items[index];
          if ( !v76 )
            goto LABEL_298;
          if ( gameObject->fields.id == v76->fields.restrictionId )
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
        v77 = (System_String_o *)gameObject;
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
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10351/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
        goto LABEL_169;
      case 6:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10353/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_169;
      case 7:
        v78 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v78 )
          goto LABEL_298;
        UILabel__set_text(v78, (System_String_o *)gameObject, 0);
        gameObject = (RestrictionEntity_o *)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_298;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_298;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !v11 )
          goto LABEL_298;
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)NpcFollowerMaster__GetQuestFollowerList(
                                              (NpcFollowerMaster_o *)gameObject,
                                              v11->fields.questId,
                                              v11->fields.questPhase,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_298;
        v80 = supportMemberObjectList->max_length;
        name = (int)gameObject->fields.name;
        v82 = gameObject;
        v83 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v83,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( name >= 1 )
        {
          if ( v80 >= 1 )
          {
            v84 = 0;
            if ( v80 - 1 >= (unsigned int)(name - 1) )
              v85 = name;
            else
              v85 = v80;
            while ( (unsigned int)v84 < LODWORD(v82->fields.name) )
            {
              v86 = (FollowerInfo_o *)*((_QWORD *)&v82->fields.type + v84);
              if ( !v86 )
                goto LABEL_298;
              if ( !v86->fields.isMySvtOrNpc )
              {
                v87 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_34811784(v87, v84, v86, 0, 0, setupInfo, v11, 0, 0, 0, 0, 0, 0);
                if ( !v83 )
                  goto LABEL_298;
                items = v83->fields._items;
                v95 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v83->fields._version;
                if ( !items )
                  goto LABEL_298;
                size = v83->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v83,
                    (Il2CppObject *)v87,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
                }
                else
                {
                  v97 = &items->obj.klass + size;
                  v83->fields._size = size + 1;
                  v97[4] = (Il2CppClass *)v87;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
                }
              }
              if ( v85 == ++v84 )
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
        if ( v83 )
        {
          v150 = v83->fields._items;
          v151 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v83->fields._version;
          if ( v150 )
          {
            v152 = v83->fields._size;
            if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v83,
                (Il2CppObject *)gameObject,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
            }
            else
            {
              v153 = &v150->obj.klass + v152;
              v83->fields._size = v152 + 1;
              v153[4] = (Il2CppClass *)v17;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v153 + 4), (int32_t)v17, v101, v102, v103, v104, v105, v106);
            }
LABEL_154:
            supportMemberBase = this->fields.supportMemberBase;
            v57 = this->fields.supportMemberObjectList;
            if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
            v58 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v83;
LABEL_241:
            v147 = v57;
            v148 = supportMemberBase;
            v149 = 0;
LABEL_294:
            PartyOrganizationConfirmItemDraw__SetPartyIcon(v58, v147, v148, 1, v149, 0);
            goto LABEL_295;
          }
        }
        goto LABEL_298;
      case 8:
      case 14:
        v23 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v23 )
          goto LABEL_298;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0);
        if ( !v11 )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                              v11,
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
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)gameObject,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !gameObject )
          goto LABEL_298;
        QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)gameObject,
                              v11->fields.questId,
                              v11->fields.questPhase,
                              0);
        gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_298;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(v11, 0);
        if ( !gameObject )
          goto LABEL_298;
        v27 = this->fields.supportMemberObjectList;
        if ( !v27 )
          goto LABEL_298;
        v28 = v27->max_length;
        v29 = gameObject->fields.name;
        v30 = (UserServantCollectionMaster_o *)gameObject;
        v31 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v31,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v29 < 1 || (int)v28 < 1 )
          goto LABEL_71;
        if ( (int)v28 - 1 >= (unsigned int)((_DWORD)v29 - 1) )
          v32 = (unsigned int)v29;
        else
          v32 = v28;
        v33 = 0;
        v194 = v32;
        v195 = v30;
        do
        {
          if ( v33 >= LODWORD(v30->fields._MasterName_k__BackingField) )
            goto LABEL_299;
          v34 = *(&v30->fields.revision + v33);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
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
              gameObject = (RestrictionEntity_o *)FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0);
              if ( !v40 )
                goto LABEL_298;
              gameObject = (RestrictionEntity_o *)FollowerInfo__getServantLeaderInfo(v40, 0, (int32_t)gameObject, 0);
              if ( gameObject )
              {
                targetVals2 = gameObject->fields.targetVals2;
                v42 = *(_QWORD *)&gameObject->fields.rangeType;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v202.fields.currentCryptoKey = targetVals2;
                *(_QWORD *)&v202.fields.fakeValue = v42;
                gameObject = (RestrictionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                      v202,
                                                      0);
                v11 = v199;
                if ( (_DWORD)gameObject == v34 )
                  break;
              }
              v37 = QuestFollowerList->max_length;
              if ( (int)++v39 >= v37 )
                goto LABEL_65;
            }
            ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v199->fields.questId, 0);
            rangeType = FollowerInfo__getLimitCount(v40, 0, ReturnTypeByQuestId, 0);
            v44 = FollowerInfo__GetReturnTypeByQuestId(v199->fields.questId, 0);
            IsGrandServant = FollowerInfo__IsGrandServant(v40, 0, v44, 0);
          }
LABEL_65:
          v45 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34851484(
            v45,
            v33,
            v34,
            rangeType,
            setupInfo,
            v11,
            0,
            0,
            IsGrandServant,
            0);
          if ( !v31 )
            goto LABEL_298;
          v52 = v31->fields._items;
          this = v197;
          v53 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v31->fields._version;
          if ( !v52 )
            goto LABEL_298;
          v54 = v31->fields._size;
          v30 = v195;
          MasterData_object = v35;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)v45,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v31->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v45;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)v45, v46, v47, v48, v49, v50, v51);
          }
          ++v33;
        }
        while ( v33 != v194 );
LABEL_71:
        supportMemberBase = this->fields.supportMemberBase;
        v57 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v58 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v31;
        goto LABEL_241;
      case 10:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_169;
      case 11:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10348/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_169;
      case 12:
      case 16:
        v59 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !v59 )
          goto LABEL_298;
        UILabel__set_text(v59, (System_String_o *)gameObject, 0);
        if ( !v11 )
          goto LABEL_298;
        gameObject = (RestrictionEntity_o *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                              v11,
                                              &npcInfoDictionary,
                                              index,
                                              0,
                                              0);
        if ( !gameObject )
          goto LABEL_298;
        v60 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
        if ( gameObject->fields.name )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( gameObject )
          {
            QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)gameObject,
              &entity,
              v11->fields.questId,
              v11->fields.questPhase,
              0);
            if ( entity && type == 16 && !entity->fields.isNpcOnly )
            {
              v61 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_59097676(
                v61,
                v60,
                (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
              if ( !v61 )
                goto LABEL_298;
              v62 = v61->fields._items;
              v63 = Method_System_Collections_Generic_List_int__Add__;
              ++v61->fields._version;
              if ( !v62 )
                goto LABEL_298;
              v64 = v61->fields._size;
              if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v61,
                  0,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
              }
              else
              {
                v61->fields._size = v64 + 1;
                v62->m_Items[v64] = 0;
              }
              v60 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v61,
                                                                     (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
            if ( type == 16 )
              messageSelfOrSupportLabel = this->fields.messageSelfOrSupportLabel;
            else
              messageSelfOrSupportLabel = this->fields.messageDeckLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v11, index, 0, 0);
            gameObject = (RestrictionEntity_o *)System_String__Format(message, DialogTargetName, 0);
            if ( messageSelfOrSupportLabel )
            {
              UILabel__set_text(messageSelfOrSupportLabel, (System_String_o *)gameObject, 0);
              gameObject = (RestrictionEntity_o *)this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                gameObject = (RestrictionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = (RestrictionEntity_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)gameObject,
                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v60 )
                  {
                    v156 = this->fields.supportMemberObjectList;
                    v196 = (UserServantCollectionMaster_o *)gameObject;
                    if ( v156 )
                    {
                      v157 = v156->max_length;
                      monitor = v60[1].monitor;
                      v159 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v159,
                        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor < 1 || (int)v157 < 1 )
                      {
LABEL_291:
                        v191 = this->fields.supportMemberBase;
                        v192 = this->fields.supportMemberObjectList;
                        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                        v149 = 1;
                        v58 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v159;
                        v147 = v192;
                        v148 = v191;
                        goto LABEL_294;
                      }
                      if ( (int)v157 - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                        v160 = (unsigned int)monitor;
                      else
                        v160 = v157;
                      v161 = 0;
                      v162 = v160;
                      while ( 1 )
                      {
                        if ( v161 >= LODWORD(v60[1].monitor) )
                          goto LABEL_299;
                        v163 = *((_DWORD *)&v60[2].klass + v161);
                        if ( v163 )
                        {
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                  v163,
                                  (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                            goto LABEL_302;
                          gameObject = (RestrictionEntity_o *)npcInfoDictionary;
                          if ( !npcInfoDictionary )
                            goto LABEL_298;
                          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                   v163,
                                   (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                          if ( Item )
                          {
                            v165 = (FollowerInfo_o *)Item;
                            v166 = FollowerInfo__GetReturnTypeByQuestId(v199->fields.questId, 0);
                            LimitCount = FollowerInfo__getLimitCount(v165, 0, v166, 0);
                            v168 = FollowerInfo__GetReturnTypeByQuestId(v199->fields.questId, 0);
                            v169 = FollowerInfo__IsGrandServant(v165, 0, v168, 0);
                          }
                          else
                          {
LABEL_302:
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4D2A55B )
                            {
                              sub_1C93AD4(&NetworkManager_TypeInfo);
                              byte_4D2A55B = 1;
                            }
                            gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                            }
                            if ( !v196 )
                              goto LABEL_298;
                            gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                  v196,
                                                                  *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                            + 64LL),
                                                                  v163,
                                                                  0);
                            if ( !gameObject )
                              goto LABEL_298;
                            LimitCount = gameObject->fields.rangeType;
                            v169 = UserServantCollectionEntity__IsGrandServant(
                                     (UserServantCollectionEntity_o *)gameObject,
                                     0);
                            v165 = 0;
                          }
                          v170 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34851484(
                            v170,
                            v161,
                            v163,
                            LimitCount,
                            setupInfo,
                            v199,
                            v165,
                            0,
                            v169,
                            0);
                          if ( !v159 )
                            goto LABEL_298;
                          v177 = v159->fields._items;
                          this = v197;
                          v178 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v159->fields._version;
                          if ( !v177 )
                            goto LABEL_298;
                          v179 = v159->fields._size;
                          if ( (unsigned int)v179 >= LODWORD(v177->max_length) )
                          {
                            v188 = v178[4];
                            v189 = v159;
                            v190 = (Il2CppObject *)v170;
LABEL_289:
                            System_Collections_Generic_List_object___AddWithResize(
                              v189,
                              v190,
                              *(const MethodInfo_387999C **)(*(_QWORD *)(v188 + 192) + 112LL));
                            goto LABEL_290;
                          }
                          v180 = &v177->obj.klass + v179;
                          v159->fields._size = v179 + 1;
                          v180[4] = (Il2CppClass *)v170;
                          v181 = (GrandQuestFolderBoardItem_o *)(v180 + 4);
                          v182 = (int)v170;
                        }
                        else
                        {
                          v183 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                          PartyOrganizationListViewItem___ctor_34849972(v183, v161, 1, 0, 0, 1, 0, 0, 0);
                          if ( !v159 )
                            goto LABEL_298;
                          v184 = v159->fields._items;
                          v185 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                          ++v159->fields._version;
                          if ( !v184 )
                            goto LABEL_298;
                          v186 = v159->fields._size;
                          if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
                          {
                            v188 = v185[4];
                            v189 = v159;
                            v190 = (Il2CppObject *)v183;
                            goto LABEL_289;
                          }
                          v187 = &v184->obj.klass + v186;
                          v159->fields._size = v186 + 1;
                          v187[4] = (Il2CppClass *)v183;
                          v181 = (GrandQuestFolderBoardItem_o *)(v187 + 4);
                          v182 = (int)v183;
                        }
                        sub_1C93A78(v181, v182, v171, v172, v173, v174, v175, v176);
LABEL_290:
                        if ( v162 == ++v161 )
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
        v98 = *p_messageLabel;
        v99 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v11, index, 0, 0);
        gameObject = (RestrictionEntity_o *)System_String__Format(message, v99, 0);
        if ( !v98 )
          goto LABEL_298;
        v77 = (System_String_o *)gameObject;
        gameObject = (RestrictionEntity_o *)v98;
        break;
      case 15:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10352/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
        goto LABEL_169;
      case 21:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10345/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/;
        goto LABEL_169;
      default:
        if ( type == 101 )
        {
          v65 = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
          if ( v65 )
          {
            UILabel__set_text(v65, (System_String_o *)gameObject, 0);
            gameObject = (RestrictionEntity_o *)this->fields.titleLabel;
            if ( gameObject )
            {
              v66 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
              TransformHelper__SetLocalPositionY(v66, 211.0, 0);
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
                            if ( !byte_4D2A7BA )
                            {
                              sub_1C93AD4(&System_Math_TypeInfo);
                              byte_4D2A7BA = 1;
                            }
                            gameObject = (RestrictionEntity_o *)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v108 = *p_messageLabel;
                            v109 = vcvtps_s32_f32(y);
                            v110 = ceilf(y) == INFINITY ? 0x80000000 : v109;
                            if ( !v108 )
                              goto LABEL_298;
                            mSpacingY = (float)v108->fields.mSpacingY;
                            if ( !byte_4D2A7BA )
                            {
                              sub_1C93AD4(&System_Math_TypeInfo);
                              byte_4D2A7BA = 1;
                            }
                            v112 = (float)((float)v110 / (float)targetVals_high) * mSpacingY;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            gameObject = (RestrictionEntity_o *)*p_messageLabel;
                            v113 = vcvtps_s32_f32(v112);
                            v114 = ceilf(v112) == INFINITY ? 0x80000000 : v113;
                            if ( !gameObject )
                              goto LABEL_298;
                            v68 = v110 - v114;
                          }
                          else
                          {
                            v68 = targetVals_high
                                / (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                * (gameObject[8].fields.id + LODWORD(gameObject[6].fields.targetVals))
                                - gameObject[8].fields.id;
                          }
                          v115 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                          TransformHelper__SetLocalPositionY(v115, -59.0, 0);
                          if ( !byte_4D2A7BA )
                          {
                            sub_1C93AD4(&System_Math_TypeInfo);
                            byte_4D2A7BA = 1;
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
                              v116 = (float)v68 * 0.5;
                              v117 = ceilf(v116);
                              v118 = vcvtps_s32_f32(v116);
                              v119 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
                              v120 = (float)(int)(v118 + 8);
                              if ( v117 == INFINITY )
                                v120 = -2147500000.0;
                              TransformHelper__SetLocalPositionY(v119, v120, 0);
                              if ( v11 )
                              {
                                v121 = System_Linq_Enumerable__Distinct_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v11->fields.overwriteLimitCountSvtIds,
                                         (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
                                v122 = System_Linq_Enumerable__ToArray_int_(
                                         v121,
                                         (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
                                if ( !DataManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                gameObject = (RestrictionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                                if ( v122 )
                                {
                                  v123 = this->fields.supportMemberObjectList;
                                  if ( v123 )
                                  {
                                    v124 = v123->max_length;
                                    v125 = v122->max_length;
                                    v126 = (UserServantCollectionMaster_o *)gameObject;
                                    v127 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v127,
                                      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                    if ( (int)v125 >= 1 && (int)v124 >= 1 )
                                    {
                                      if ( (int)v124 - 1 >= (unsigned int)(v125 - 1) )
                                        v128 = v125;
                                      else
                                        v128 = v124;
                                      v129 = 0;
                                      m_Items = v122->m_Items;
                                      v131 = v128;
                                      while ( v129 < LODWORD(v122->max_length) )
                                      {
                                        v132 = m_Items[v129];
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                        if ( !byte_4D2A55B )
                                        {
                                          sub_1C93AD4(&NetworkManager_TypeInfo);
                                          byte_4D2A55B = 1;
                                        }
                                        gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                          gameObject = (RestrictionEntity_o *)NetworkManager_TypeInfo;
                                        }
                                        if ( !v126 )
                                          goto LABEL_298;
                                        v133 = v122;
                                        gameObject = (RestrictionEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                                                              v126,
                                                                              *(_QWORD *)(*(_QWORD *)&gameObject[2].fields.rangeType
                                                                                        + 64LL),
                                                                              v132,
                                                                              0);
                                        if ( !gameObject )
                                          goto LABEL_298;
                                        v134 = gameObject->fields.rangeType;
                                        v135 = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                                        v136 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                                        PartyOrganizationListViewItem___ctor_34851484(
                                          v136,
                                          v129,
                                          v132,
                                          v134,
                                          setupInfo,
                                          v199,
                                          0,
                                          0,
                                          v135,
                                          0);
                                        if ( !v127 )
                                          goto LABEL_298;
                                        v143 = v127->fields._items;
                                        v144 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                        ++v127->fields._version;
                                        if ( !v143 )
                                          goto LABEL_298;
                                        v145 = v127->fields._size;
                                        if ( (unsigned int)v145 >= LODWORD(v143->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v127,
                                            (Il2CppObject *)v136,
                                            *(const MethodInfo_387999C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v146 = &v143->obj.klass + v145;
                                          v127->fields._size = v145 + 1;
                                          v146[4] = (Il2CppClass *)v136;
                                          sub_1C93A78(
                                            (GrandQuestFolderBoardItem_o *)(v146 + 4),
                                            (int32_t)v136,
                                            v137,
                                            v138,
                                            v139,
                                            v140,
                                            v141,
                                            v142);
                                        }
                                        ++v129;
                                        v122 = v133;
                                        if ( v131 == v129 )
                                          goto LABEL_238;
                                      }
LABEL_299:
                                      sub_1C93D34(gameObject);
                                    }
LABEL_238:
                                    this = v197;
                                    supportMemberBase = v197->fields.supportMemberBase;
                                    v57 = v197->fields.supportMemberObjectList;
                                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                                    v58 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v127;
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
          sub_1C93D2C(gameObject, v17);
        }
LABEL_103:
        v69 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = &StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_169:
        gameObject = (RestrictionEntity_o *)LocalizationManager__Get((System_String_o *)*v70, 0);
        if ( !v69 )
          goto LABEL_298;
        UILabel__set_text(v69, (System_String_o *)gameObject, 0);
LABEL_171:
        gameObject = (RestrictionEntity_o *)*p_messageLabel;
        if ( !*p_messageLabel )
          goto LABEL_298;
        v77 = message;
        break;
    }
    UILabel__set_text((UILabel_o *)gameObject, v77, 0);
LABEL_295:
    this->fields.state = 1;
    v193 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v193, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v193, 0, 0, 0);
  }
}


void PartyOrganizationRestrictionHelpDialog__Open_34953216(
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
  QuestRestrictionInfo_o *v10; // x29
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
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  struct UnityEngine_GameObject_o *v44; // x20
  struct PartyOrganizationConfirmItemDraw_array *v45; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v46; // x0
  bool IsMyServantOrNpcRestriction_44136444; // w0
  UILabel_o *titleLabel; // x25
  bool v49; // w24
  System_Collections_Generic_IEnumerable_T__o *v50; // x28
  bool IsSelectableNormalSupport; // w25
  bool v52; // w20
  System_Collections_Generic_List_int__o *v53; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  UILabel_o *v57; // x20
  __int64 *v58; // x8
  UILabel_o *v59; // x23
  struct PartyOrganizationConfirmItemDraw_array *v60; // x8
  int v61; // w21
  int v62; // w20
  _QWORD *v63; // x23
  System_Collections_Generic_List_object__o *v64; // x22
  int32_t v65; // w24
  FollowerInfo_o *v66; // x26
  PartyOrganizationListViewItem_o *v67; // x25
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  PartyOrganizationRestrictionHelpDialog_o *v78; // x9
  PartyOrganizationConfirmItemDraw_c *v79; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x24
  System_Collections_Generic_List_T__o *RangeTypeList; // x25
  System_Collections_Generic_List_int__o *v82; // x23
  int32_t v83; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  _QWORD *v87; // x23
  struct PartyOrganizationConfirmItemDraw_array *v88; // x8
  il2cpp_array_size_t v89; // x19
  __int64 v90; // x8
  unsigned __int64 v91; // x24
  int32_t v92; // w26
  Il2CppObject *MasterData_object; // x27
  int32_t v94; // w21
  bool v95; // w28
  PartyOrganizationListViewItem_o *v96; // x27
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  PartyOrganizationConfirmItemDraw_array *v107; // x1
  UnityEngine_GameObject_o *v108; // x2
  bool v109; // w4
  System_Action_o *v110; // x20
  int32_t i; // w20
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  UILabel_o *messageLabel; // x21
  Il2CppObject *v119; // x0
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  System_String_o *v124; // x1
  struct UILabel_o *messageDeckLabel; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  il2cpp_array_size_t max_length; // x20
  void *monitor; // x19
  System_Collections_Generic_List_object__o *v130; // x22
  unsigned int v131; // w8
  unsigned __int64 v132; // x25
  System_Collections_Generic_IEnumerable_T__o *v133; // x21
  __int64 v134; // x24
  int32_t v135; // w27
  System_Collections_Generic_IEnumerable_T__o *v136; // x19
  Il2CppObject *Item; // x0
  FollowerInfo_o *v138; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  int32_t v141; // w0
  bool IsGrandServant; // w23
  PartyOrganizationListViewItem_o *v143; // x29
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  PartyOrganizationListViewItem_o *v154; // x26
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  struct UnityEngine_GameObject_o *supportMemberBase; // x20
  struct PartyOrganizationConfirmItemDraw_array *v166; // x21
  UserServantCollectionMaster_o *v167; // [xsp+30h] [xbp-90h]
  QuestRestrictionInfo_o *v169; // [xsp+40h] [xbp-80h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-68h] BYREF

  v10 = questRestrictionInfo;
  if ( (byte_4D2C427 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C93AD4(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_10342/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10343/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_1C93AD4(&StringLiteral_10353/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C427 = 1;
  }
  v15 = this;
  entity = 0;
  npcInfoDictionary = 0;
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      slotNo,
      restrictionType,
      message,
      (int32_t)setupInfo,
      (int64_t)questRestrictionInfo,
      (System_String_o *)callback);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    v169 = v10;
    switch ( restrictionType )
    {
      case 0:
        if ( !v10 )
          goto LABEL_213;
        IsMyServantOrNpcRestriction_44136444 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                                 v10,
                                                 slotNo,
                                                 0);
        titleLabel = this->fields.titleLabel;
        v49 = IsMyServantOrNpcRestriction_44136444;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_213;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        if ( v49 )
        {
          gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(v10, &npcInfoDictionary, slotNo, 0, 0);
          if ( !gameObject )
            goto LABEL_213;
          v50 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          if ( *((_QWORD *)gameObject + 3) )
          {
            IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(v10, slotNo, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            gameObject = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
            if ( gameObject )
            {
              QuestPhaseMaster__TryGetEntity(
                (QuestPhaseMaster_o *)gameObject,
                &entity,
                v10->fields.questId,
                v10->fields.questPhase,
                0);
              if ( !IsSelectableNormalSupport )
                goto LABEL_170;
              if ( !entity )
                goto LABEL_168;
              v52 = !entity->fields.isNpcOnly;
              if ( entity->fields.isNpcOnly )
                goto LABEL_168;
              v53 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_59097676(
                v53,
                v50,
                (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
              if ( !v53 )
                goto LABEL_213;
              items = v53->fields._items;
              v55 = Method_System_Collections_Generic_List_int__Add__;
              ++v53->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v53->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v53,
                  0,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
              }
              else
              {
                v53->fields._size = size + 1;
                items->m_Items[size] = 0;
              }
              v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                                     v53,
                                                                     (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v52 )
              {
LABEL_168:
                gameObject = this->fields.messageSelfOrSupportLabel;
                if ( !gameObject )
                  goto LABEL_213;
                v124 = message;
              }
              else
              {
LABEL_170:
                messageDeckLabel = this->fields.messageDeckLabel;
                DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v10, slotNo, 0, 0);
                gameObject = System_String__Format(message, DialogTargetName, 0);
                if ( !messageDeckLabel )
                  goto LABEL_213;
                v124 = (System_String_o *)gameObject;
                gameObject = messageDeckLabel;
              }
              UILabel__set_text((UILabel_o *)gameObject, v124, 0);
              gameObject = this->fields.supportMemberBase;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  gameObject = DataManager__GetMasterData_object_(
                                 (DataManager_o *)gameObject,
                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( v50 )
                  {
                    supportMemberObjectList = this->fields.supportMemberObjectList;
                    v167 = (UserServantCollectionMaster_o *)gameObject;
                    if ( supportMemberObjectList )
                    {
                      max_length = supportMemberObjectList->max_length;
                      monitor = v50[1].monitor;
                      v130 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v130,
                        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                      if ( (int)monitor >= 1 && (int)max_length >= 1 )
                      {
                        if ( (int)max_length - 1 >= (unsigned int)((_DWORD)monitor - 1) )
                          v131 = (unsigned int)monitor;
                        else
                          v131 = max_length;
                        v132 = 0;
                        v133 = v50 + 2;
                        v134 = v131;
                        while ( v132 < LODWORD(v50[1].monitor) )
                        {
                          v135 = *((_DWORD *)&v133->klass + v132);
                          if ( v135 )
                          {
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            v136 = v50;
                            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                    v135,
                                    (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                              goto LABEL_217;
                            gameObject = npcInfoDictionary;
                            if ( !npcInfoDictionary )
                              goto LABEL_213;
                            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                                     v135,
                                     (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                            if ( Item )
                            {
                              v138 = (FollowerInfo_o *)Item;
                              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0);
                              LimitCount = FollowerInfo__getLimitCount(v138, 0, ReturnTypeByQuestId, 0);
                              v141 = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0);
                              IsGrandServant = FollowerInfo__IsGrandServant(v138, 0, v141, 0);
                            }
                            else
                            {
LABEL_217:
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4D2A55B )
                              {
                                sub_1C93AD4(&NetworkManager_TypeInfo);
                                byte_4D2A55B = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( !v167 )
                                goto LABEL_213;
                              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                                             v167,
                                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                                             v135,
                                             0);
                              if ( !gameObject )
                                goto LABEL_213;
                              LimitCount = *((_DWORD *)gameObject + 14);
                              IsGrandServant = UserServantCollectionEntity__IsGrandServant(
                                                 (UserServantCollectionEntity_o *)gameObject,
                                                 0);
                              v138 = 0;
                            }
                            v143 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34851484(
                              v143,
                              v132,
                              v135,
                              LimitCount,
                              setupInfo,
                              v169,
                              v138,
                              0,
                              IsGrandServant,
                              0);
                            if ( !v130 )
                              goto LABEL_213;
                            v150 = v130->fields._items;
                            v151 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v130->fields._version;
                            if ( !v150 )
                              goto LABEL_213;
                            v152 = v130->fields._size;
                            v50 = v136;
                            if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v130,
                                (Il2CppObject *)v143,
                                *(const MethodInfo_387999C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v153 = &v150->obj.klass + v152;
                              v130->fields._size = v152 + 1;
                              v153[4] = (Il2CppClass *)v143;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)(v153 + 4),
                                (int32_t)v143,
                                v144,
                                v145,
                                v146,
                                v147,
                                v148,
                                v149);
                            }
                            v10 = v169;
                          }
                          else
                          {
                            v154 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
                            PartyOrganizationListViewItem___ctor_34849972(v154, v132, 1, 0, 0, 1, 0, 0, 0);
                            if ( !v130 )
                              goto LABEL_213;
                            v161 = v130->fields._items;
                            v162 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                            ++v130->fields._version;
                            if ( !v161 )
                              goto LABEL_213;
                            v163 = v130->fields._size;
                            if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v130,
                                (Il2CppObject *)v154,
                                *(const MethodInfo_387999C **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v164 = &v161->obj.klass + v163;
                              v130->fields._size = v163 + 1;
                              v164[4] = (Il2CppClass *)v154;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)(v164 + 4),
                                (int32_t)v154,
                                v155,
                                v156,
                                v157,
                                v158,
                                v159,
                                v160);
                            }
                          }
                          if ( v134 == ++v132 )
                            goto LABEL_210;
                        }
                        goto LABEL_214;
                      }
LABEL_210:
                      supportMemberBase = this->fields.supportMemberBase;
                      v166 = this->fields.supportMemberObjectList;
                      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                      v109 = 1;
                      v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v130;
                      v107 = v166;
                      v108 = supportMemberBase;
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
            v119 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(v10, slotNo, 0, 0);
            gameObject = System_String__Format(message, v119, 0);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
              goto LABEL_147;
            }
          }
LABEL_213:
          sub_1C93D2C(gameObject, v17);
        }
        NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                               v10,
                                                                               slotNo,
                                                                               0);
        RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(v10, slotNo, 0);
        v82 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v82,
          (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !NeedIndividualityList )
          goto LABEL_213;
        if ( NeedIndividualityList->fields._size >= 1 )
        {
          v83 = 0;
          while ( RangeTypeList )
          {
            if ( RangeTypeList->fields._size > v83 )
            {
              gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                     RangeTypeList,
                                     v83,
                                     (const MethodInfo_385EEB4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              if ( (_DWORD)gameObject == 1 )
              {
                gameObject = System_Collections_Generic_List_object___get_Item(
                               NeedIndividualityList,
                               v83,
                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_int____get_Item__);
                if ( !v82 )
                  goto LABEL_213;
                System_Collections_Generic_List_int___AddRange(
                  v82,
                  (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                  (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
              }
            }
            if ( ++v83 >= NeedIndividualityList->fields._size )
              goto LABEL_114;
          }
          goto LABEL_213;
        }
LABEL_114:
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !gameObject )
          goto LABEL_213;
        CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                                (ServantMaster_o *)gameObject,
                                                                                0);
        v85 = System_Linq_Enumerable__Distinct_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v82,
                (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
        v86 = System_Linq_Enumerable__Intersect_int_(
                v85,
                CollectionList,
                (const MethodInfo_31CE324 *)Method_System_Linq_Enumerable_Intersect_int___);
        gameObject = System_Linq_Enumerable__ToArray_int_(
                       v86,
                       (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !gameObject )
          goto LABEL_213;
        v15 = this;
        v87 = gameObject;
        if ( !*((_QWORD *)gameObject + 3) )
        {
LABEL_103:
          gameObject = v15->fields.messageLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, message, 0);
LABEL_148:
            v15->fields.state = 1;
            v110 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v110, (Il2CppObject *)v15, Method_PartyOrganizationRestrictionHelpDialog_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)v15, v110, 0, 0, 0);
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
        v88 = this->fields.supportMemberObjectList;
        if ( !v88 )
          goto LABEL_213;
        v89 = v88->max_length;
        v64 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v64,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( (int)v89 >= 1 )
        {
          v90 = v87[3];
          if ( (int)v90 >= 1 )
          {
            v91 = 0;
            while ( v91 < (unsigned int)v90 )
            {
              v92 = *((_DWORD *)v87 + v91 + 8);
              gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !gameObject )
                goto LABEL_213;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)gameObject,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4D2A55B )
              {
                sub_1C93AD4(&NetworkManager_TypeInfo);
                byte_4D2A55B = 1;
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
                             v92,
                             0);
              if ( !gameObject )
                goto LABEL_213;
              v94 = *((_DWORD *)gameObject + 14);
              v95 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
              v96 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34851484(v96, v91, v92, v94, setupInfo, v10, 0, 0, v95, 0);
              if ( !v64 )
                goto LABEL_213;
              v103 = v64->fields._items;
              v15 = this;
              v104 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v64->fields._version;
              if ( !v103 )
                goto LABEL_213;
              v105 = v64->fields._size;
              if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v64,
                  (Il2CppObject *)v96,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
              }
              else
              {
                v106 = &v103->obj.klass + v105;
                v64->fields._size = v105 + 1;
                v106[4] = (Il2CppClass *)v96;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v106 + 4), (int32_t)v96, v97, v98, v99, v100, v101, v102);
              }
              if ( (__int64)++v91 < (int)v89 )
              {
                LODWORD(v90) = *((_DWORD *)v87 + 6);
                if ( (__int64)v91 < (int)v90 )
                  continue;
              }
              goto LABEL_141;
            }
            goto LABEL_214;
          }
        }
LABEL_141:
        v78 = v15;
        v45 = v15->fields.supportMemberObjectList;
        v79 = PartyOrganizationConfirmItemDraw_TypeInfo;
        break;
      case 3:
        v57 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = &StringLiteral_10349/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_101;
      case 4:
      case 5:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
        if ( !v19 )
          goto LABEL_213;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        if ( !v10 )
          goto LABEL_213;
        gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(v10, 0);
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
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(v10, 0);
        if ( !gameObject )
          goto LABEL_213;
        v22 = this->fields.supportMemberObjectList;
        if ( !v22 )
          goto LABEL_213;
        v23 = v22->max_length;
        v24 = *((_QWORD *)gameObject + 3);
        v25 = gameObject;
        v26 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
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
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
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
          v33 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34851484(v33, v28, v30, v31, setupInfo, v169, 0, 0, v32, 0);
          if ( !v26 )
            goto LABEL_213;
          v40 = v26->fields._items;
          v41 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v26->fields._version;
          if ( !v40 )
            goto LABEL_213;
          v42 = v26->fields._size;
          if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v33,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &v40->obj.klass + v42;
            v26->fields._size = v42 + 1;
            v43[4] = (Il2CppClass *)v33;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
          }
          ++v28;
        }
        while ( v29 != v28 );
LABEL_47:
        v44 = this->fields.supportMemberBase;
        v45 = this->fields.supportMemberObjectList;
        if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
        v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v26;
        goto LABEL_145;
      case 6:
        v59 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v59 )
          goto LABEL_213;
        UILabel__set_text(v59, (System_String_o *)gameObject, 0);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !v10 )
          goto LABEL_213;
        if ( !gameObject )
          goto LABEL_213;
        gameObject = NpcFollowerMaster__GetQuestFollowerList(
                       (NpcFollowerMaster_o *)gameObject,
                       v10->fields.questId,
                       v10->fields.questPhase,
                       0);
        if ( !gameObject )
          goto LABEL_213;
        v60 = this->fields.supportMemberObjectList;
        if ( !v60 )
          goto LABEL_213;
        v61 = v60->max_length;
        v62 = *((_DWORD *)gameObject + 6);
        v63 = gameObject;
        v64 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v64,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v62 < 1 )
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
          if ( !v64 )
            goto LABEL_213;
          v120 = v64->fields._items;
          v121 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v64->fields._version;
          if ( !v120 )
            goto LABEL_213;
          v122 = v64->fields._size;
          if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v64,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            v123 = &v120->obj.klass + v122;
            v64->fields._size = v122 + 1;
            v123[4] = v17;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v123 + 4), (int32_t)v17, v112, v113, v114, v115, v116, v117);
          }
        }
        else if ( v61 >= 1 )
        {
          if ( v61 - 1 < (unsigned int)(v62 - 1) )
            v62 = v61;
          v65 = 0;
          while ( (unsigned int)v65 < *((_DWORD *)v63 + 6) )
          {
            v66 = (FollowerInfo_o *)v63[v65 + 4];
            if ( !v66 )
              goto LABEL_213;
            if ( !v66->fields.isMySvtOrNpc )
            {
              v67 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34811784(v67, v65, v66, 0, 0, setupInfo, v10, 0, 0, 0, 0, 0, 0);
              if ( !v64 )
                goto LABEL_213;
              v74 = v64->fields._items;
              v75 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v64->fields._version;
              if ( !v74 )
                goto LABEL_213;
              v76 = v64->fields._size;
              if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v64,
                  (Il2CppObject *)v67,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
              }
              else
              {
                v77 = &v74->obj.klass + v76;
                v64->fields._size = v76 + 1;
                v77[4] = (Il2CppClass *)v67;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v67, v68, v69, v70, v71, v72, v73);
              }
            }
            if ( v62 == ++v65 )
              goto LABEL_97;
          }
LABEL_214:
          sub_1C93D34(gameObject);
        }
LABEL_97:
        v78 = this;
        v79 = PartyOrganizationConfirmItemDraw_TypeInfo;
        v45 = this->fields.supportMemberObjectList;
        break;
      case 9:
        v57 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = &StringLiteral_10353/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
        goto LABEL_101;
      default:
        v57 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = &StringLiteral_10350/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_101:
        gameObject = LocalizationManager__Get((System_String_o *)*v58, 0);
        if ( !v57 )
          goto LABEL_213;
        UILabel__set_text(v57, (System_String_o *)gameObject, 0);
        goto LABEL_103;
    }
    v44 = v78->fields.supportMemberBase;
    if ( !v79->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v79);
    v46 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v64;
LABEL_145:
    v107 = v45;
    v108 = v44;
    v109 = 0;
LABEL_146:
    PartyOrganizationConfirmItemDraw__SetPartyIcon(v46, v107, v108, 1, v109, 0);
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

  if ( (byte_4D2C423 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4D2C423 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C424 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_4D2C424 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRestrictionHelpDialog_o *)sub_1C940C8(v8);
  PartyOrganizationRestrictionHelpDialog__Init(v11, v12);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC3210;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC31C8;
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
  if ( (byte_4D2C4F7 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C4F7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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