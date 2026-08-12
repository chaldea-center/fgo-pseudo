void PartyOrganizationRestrictionHelpDialog___ctor(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_596C0D4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_596C0D4 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_2213B20(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v12, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationRestrictionHelpDialog__Callback(
        PartyOrganizationRestrictionHelpDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v9; // x20
  struct PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  PartyOrganizationRestrictionHelpDialog__Close_41085732(this, 0, v2);
}


void PartyOrganizationRestrictionHelpDialog__Close_41085732(
        PartyOrganizationRestrictionHelpDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596C0D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationRestrictionHelpDialog_EndClose__);
    byte_596C0D2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationRestrictionHelpDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationRestrictionHelpDialog__EndClose(
        PartyOrganizationRestrictionHelpDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRestrictionHelpDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596C0CF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C0CF = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596C0D3 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    byte_596C0D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRestrictionHelpDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  int32_t state; // w8
  __int64 gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *closeLabel; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *titleLabel; // x20
  __int64 *v27; // x8
  UILabel_o *v28; // x21
  UnityEngine_Transform_o *v29; // x0
  struct UILabel_o *v30; // x8
  int mHeight; // w19
  unsigned int v32; // w19
  UILabel_o *v33; // x21
  __int64 v34; // x2
  System_Int32_array *v35; // x24
  System_Collections_Generic_List_int__o *v36; // x21
  UILabel_o *v37; // x21
  QuestRestrictionInfo_o *v38; // x23
  UILabel_o *v39; // x21
  FollowerInfo_array *QuestFollowerList; // x22
  Il2CppObject *MasterData_object; // x27
  struct PartyOrganizationConfirmItemDraw_array *v42; // x8
  __int64 v43; // x24
  int v44; // w19
  il2cpp_array_size_t v45; // x20
  System_Collections_Generic_List_object__o *v46; // x25
  __int64 v47; // x2
  unsigned __int64 v48; // x26
  __int64 v49; // x9
  int32_t v50; // w28
  int32_t v51; // w29
  int v52; // w8
  bool v53; // w21
  unsigned int v54; // w20
  FollowerInfo_o *v55; // x27
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x19
  __int64 v59; // x23
  int32_t v60; // w0
  int32_t v61; // w0
  PartyOrganizationListViewItem_o *v62; // x27
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  struct PartyOrganizationConfirmItemDraw_array *v73; // x19
  struct UnityEngine_GameObject_o *v74; // x20
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v75; // x0
  UILabel_o *v76; // x21
  struct RestrictionEntity_array *restrictionEntityList; // x11
  int max_length; // w8
  RestrictionEntity_o *v79; // x9
  __int64 *m_Items; // x11
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x12
  QuestRestrictionEntity_o *v82; // x12
  System_String_o *v83; // x1
  UILabel_o *v84; // x21
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  __int64 v86; // x23
  int v87; // w20
  il2cpp_array_size_t v88; // x19
  System_Collections_Generic_List_object__o *v89; // x22
  __int64 v90; // x2
  __int64 v91; // x24
  int v92; // w28
  FollowerInfo_o *v93; // x25
  PartyOrganizationListViewItem_o *v94; // x21
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct System_Object_array *items; // x8
  _QWORD *v102; // x9
  __int64 size; // x10
  Il2CppClass **v104; // x0
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *DialogTargetName; // x0
  UILabel_o *messageDeckLabel; // x21
  Il2CppObject *v108; // x0
  struct PartyOrganizationConfirmItemDraw_array *v109; // x8
  __int64 v110; // x19
  il2cpp_array_size_t v111; // x20
  System_Collections_Generic_List_object__o *v112; // x23
  __int64 v113; // x2
  unsigned __int64 v114; // x25
  int32_t v115; // w27
  __int64 v116; // x2
  Il2CppObject *Item; // x0
  FollowerInfo_o *v118; // x21
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w29
  int32_t v121; // w0
  bool IsGrandServant; // w26
  PartyOrganizationListViewItem_o *v123; // x28
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  PartyOrganizationListViewItem_o *v134; // x21
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  struct PartyOrganizationConfirmItemDraw_array *v145; // x19
  struct UnityEngine_GameObject_o *v146; // x20
  PartyOrganizationConfirmItemDraw_array *v147; // x1
  UnityEngine_GameObject_o *v148; // x2
  bool v149; // w4
  UnityEngine_Vector2_o printedSize; // kr00_8
  struct UILabel_o *v151; // x8
  int v152; // w21
  UnityEngine_Transform_o *v153; // x0
  __int64 v154; // x2
  float v155; // s0
  float v156; // s8
  signed int v157; // w19
  UnityEngine_Transform_o *v158; // x0
  float v159; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  System_Int32_array *v163; // x27
  struct PartyOrganizationConfirmItemDraw_array *v164; // x8
  UserServantCollectionMaster_o *v165; // x23
  int v166; // w19
  il2cpp_array_size_t v167; // x20
  System_Collections_Generic_List_object__o *v168; // x24
  __int64 v169; // x2
  unsigned __int64 v170; // x25
  __int64 v171; // x29
  int32_t *v172; // x22
  int32_t v173; // w21
  System_Int32_array *v174; // x20
  int32_t v175; // w19
  bool v176; // w28
  PartyOrganizationListViewItem_o *v177; // x27
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  int32_t i; // w20
  struct PartyOrganizationConfirmItemDraw_array *v189; // x20
  struct UnityEngine_GameObject_o *supportMemberBase; // x21
  System_Action_o *v191; // x19
  __int64 v192; // [xsp+30h] [xbp-A0h]
  UserServantCollectionMaster_o *v193; // [xsp+38h] [xbp-98h]
  UserServantCollectionMaster_o *v194; // [xsp+38h] [xbp-98h]
  PartyOrganizationRestrictionHelpDialog_o *v195; // [xsp+40h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_596C0D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10701/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_2213A60(&StringLiteral_10691/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_2213A60(&StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_2213A60(&StringLiteral_10693/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_2213A60(&StringLiteral_10700/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/);
    sub_2213A60(&StringLiteral_10697/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/);
    sub_2213A60(&StringLiteral_10692/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_2213A60(&StringLiteral_10702/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_2213A60(&StringLiteral_10698/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10694/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/);
    byte_596C0D0 = 1;
  }
  state = this->fields.state;
  npcInfoDictionary = 0;
  entity = 0;
  if ( (state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&type,
      message,
      (int32_t)setupInfo,
      (int32_t)questRestrictionInfo,
      (bool)callback,
      index);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_293;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
    closeLabel = this->fields.closeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10691/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
    if ( !closeLabel )
      goto LABEL_293;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)this->fields.messageDeckLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)this->fields.messageSelfOrSupportLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    gameObject = (__int64)this->fields.partyMemberBase;
    if ( !gameObject )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.supportMemberBase;
    if ( !gameObject )
      goto LABEL_293;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    TransformHelper__SetLocalPositionY(transform, -80.0, 0);
    gameObject = (__int64)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_293;
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    TransformHelper__SetLocalPositionY(v22, 210.0, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_fontSize((UILabel_o *)gameObject, 30, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UIWidget__set_width((UIWidget_o *)gameObject, 700, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_spacingY((UILabel_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    UILabel__set_overflowMethod((UILabel_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_293;
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    TransformHelper__SetLocalPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v195 = this;
    if ( type <= 10 )
    {
      if ( type <= 6 )
      {
        if ( type != 1 )
        {
          if ( type == 3 )
          {
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
            v27 = &StringLiteral_10700/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TOTAL_COST_TITLE"*/;
            goto LABEL_182;
          }
          if ( type == 6 )
          {
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
            v27 = &StringLiteral_10702/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
            goto LABEL_182;
          }
          goto LABEL_179;
        }
        v76 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( !v76 )
          goto LABEL_293;
        UILabel__set_text(v76, (System_String_o *)gameObject, 0);
        gameObject = System_String__IsNullOrEmpty(message, 0);
        if ( (gameObject & 1) == 0 )
          goto LABEL_184;
        if ( !questRestrictionInfo )
          goto LABEL_293;
        restrictionEntityList = questRestrictionInfo->fields.restrictionEntityList;
        if ( !restrictionEntityList )
          goto LABEL_293;
        max_length = restrictionEntityList->max_length;
        if ( max_length > (unsigned int)index )
        {
          v79 = restrictionEntityList->m_Items[index];
          if ( max_length < 1 )
          {
LABEL_148:
            gameObject = (__int64)v79;
            if ( v79 )
            {
LABEL_149:
              gameObject = (__int64)RestrictionEntity__GetClassIndividualityRestrictionMessage(
                                      (RestrictionEntity_o *)gameObject,
                                      0);
              if ( this->fields.messageLabel )
              {
                v83 = (System_String_o *)gameObject;
                gameObject = (__int64)this->fields.messageLabel;
LABEL_186:
                UILabel__set_text((UILabel_o *)gameObject, v83, 0);
LABEL_291:
                this->fields.state = 1;
                v191 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v191,
                  (Il2CppObject *)this,
                  Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                  0);
                BaseDialog__Open((BaseDialog_o *)this, v191, 0, 0, 0);
                return;
              }
            }
          }
          else
          {
            m_Items = (__int64 *)restrictionEntityList->m_Items;
            while ( 1 )
            {
              gameObject = *m_Items;
              if ( !*m_Items )
                break;
              questRestrictionEntityList = questRestrictionInfo->fields.questRestrictionEntityList;
              if ( !questRestrictionEntityList )
                break;
              if ( LODWORD(questRestrictionEntityList->max_length) <= index )
                goto LABEL_294;
              v82 = questRestrictionEntityList->m_Items[index];
              if ( !v82 )
                break;
              if ( *(_DWORD *)(gameObject + 16) == v82->fields.restrictionId )
                goto LABEL_149;
              --max_length;
              ++m_Items;
              if ( !max_length )
                goto LABEL_148;
            }
          }
          goto LABEL_293;
        }
LABEL_294:
        sub_2213CE4(gameObject);
      }
      if ( type == 7 )
      {
        v84 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10693/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v84 )
          goto LABEL_293;
        UILabel__set_text(v84, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_293;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = (__int64)this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_293;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_293;
        gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( !questRestrictionInfo )
          goto LABEL_293;
        if ( !gameObject )
          goto LABEL_293;
        gameObject = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                                (NpcFollowerMaster_o *)gameObject,
                                questRestrictionInfo->fields.questId,
                                questRestrictionInfo->fields.questPhase,
                                0);
        if ( !gameObject )
          goto LABEL_293;
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_293;
        v86 = gameObject;
        v87 = *(_DWORD *)(gameObject + 24);
        v88 = supportMemberObjectList->max_length;
        v89 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v89,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v87 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = (__int64)BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17, v90);
              gameObject = (__int64)BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*(_QWORD *)(gameObject + 184) + 172LL) )
              goto LABEL_286;
            if ( !partyItem )
              goto LABEL_293;
            gameObject = (__int64)PartyListViewItem__GetMember(partyItem, i, 0);
            if ( !gameObject )
              goto LABEL_293;
            v17 = gameObject;
            if ( *(_BYTE *)(gameObject + 136) )
            {
              if ( !*(_BYTE *)(gameObject + 256) )
                break;
            }
          }
          if ( !v89 )
            goto LABEL_293;
          sub_1FFEDA8(v89, gameObject, Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( (int)v88 >= 1 )
        {
          v91 = 0;
          if ( (int)v88 >= (__int64)v87 )
            v92 = v87;
          else
            v92 = v88;
          while ( (unsigned int)v91 < *(_DWORD *)(v86 + 24) )
          {
            v93 = *(FollowerInfo_o **)(v86 + 32 + 8 * v91);
            if ( !v93 )
              goto LABEL_293;
            if ( !v93->fields.isMySvtOrNpc )
            {
              v94 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_40942508(
                v94,
                v91,
                v93,
                0,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                0,
                0,
                0,
                0,
                0);
              if ( !v89 )
                goto LABEL_293;
              items = v89->fields._items;
              v102 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v89->fields._version;
              if ( !items )
                goto LABEL_293;
              size = v89->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v89,
                  (Il2CppObject *)v94,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
              }
              else
              {
                v104 = &items->obj.klass + size;
                v89->fields._size = size + 1;
                v104[4] = (Il2CppClass *)v94;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v104 + 4), (int32_t)v94, v95, v96, v97, v98, v99, v100);
              }
            }
            if ( v92 == (_DWORD)++v91 )
              goto LABEL_286;
          }
          goto LABEL_294;
        }
LABEL_286:
        supportMemberBase = this->fields.supportMemberBase;
        v189 = this->fields.supportMemberObjectList;
        if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v17, v90);
        v75 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v89;
        v147 = v189;
        v148 = supportMemberBase;
        goto LABEL_289;
      }
      if ( type != 8 )
      {
        if ( type == 10 )
        {
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          v27 = &StringLiteral_10698/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
          goto LABEL_182;
        }
        goto LABEL_179;
      }
    }
    else
    {
      if ( type > 14 )
      {
        if ( type <= 20 )
        {
          if ( type == 15 )
          {
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
            v27 = &StringLiteral_10701/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_INDIVIDUALITY_TITLE"*/;
            goto LABEL_182;
          }
          if ( type != 16 )
          {
LABEL_179:
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
            v27 = &StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
LABEL_182:
            gameObject = (__int64)LocalizationManager__Get((System_String_o *)*v27, 0);
            if ( !titleLabel )
              goto LABEL_293;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
LABEL_184:
            gameObject = (__int64)this->fields.messageLabel;
            if ( gameObject )
            {
              v83 = message;
              goto LABEL_186;
            }
            goto LABEL_293;
          }
LABEL_61:
          v33 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
          if ( !v33 )
            goto LABEL_293;
          UILabel__set_text(v33, (System_String_o *)gameObject, 0);
          gameObject = (__int64)questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_293;
          gameObject = (__int64)QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                                  questRestrictionInfo,
                                  &npcInfoDictionary,
                                  index,
                                  0,
                                  0);
          if ( !gameObject )
            goto LABEL_293;
          v35 = (System_Int32_array *)gameObject;
          if ( !*(_QWORD *)(gameObject + 24) )
          {
            messageLabel = this->fields.messageLabel;
            DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(
                                                 questRestrictionInfo,
                                                 index,
                                                 0,
                                                 0);
            gameObject = (__int64)System_String__Format(message, DialogTargetName, 0);
            if ( messageLabel )
            {
              v83 = (System_String_o *)gameObject;
              gameObject = (__int64)messageLabel;
              goto LABEL_186;
            }
            goto LABEL_293;
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v34);
          gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !gameObject )
            goto LABEL_293;
          QuestPhaseMaster__TryGetEntity(
            (QuestPhaseMaster_o *)gameObject,
            &entity,
            questRestrictionInfo->fields.questId,
            questRestrictionInfo->fields.questPhase,
            0);
          if ( type == 16 && entity )
          {
            if ( !entity->fields.isNpcOnly )
            {
              v36 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_71723804(
                v36,
                (System_Collections_Generic_IEnumerable_T__o *)v35,
                (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
              if ( !v36 )
                goto LABEL_293;
              sub_20047CC(v36, 0, Method_System_Collections_Generic_List_int__Add__);
              v35 = System_Collections_Generic_List_int___ToArray(
                      v36,
                      (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
            }
          }
          else if ( type != 16 )
          {
            messageDeckLabel = this->fields.messageDeckLabel;
            goto LABEL_192;
          }
          messageDeckLabel = this->fields.messageSelfOrSupportLabel;
LABEL_192:
          v108 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, index, 0, 0);
          gameObject = (__int64)System_String__Format(message, v108, 0);
          if ( !messageDeckLabel )
            goto LABEL_293;
          UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0);
          gameObject = (__int64)this->fields.supportMemberBase;
          if ( !gameObject )
            goto LABEL_293;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_293;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !v35 )
            goto LABEL_293;
          v109 = this->fields.supportMemberObjectList;
          v194 = (UserServantCollectionMaster_o *)gameObject;
          if ( !v109 )
            goto LABEL_293;
          LODWORD(v110) = v35->max_length;
          v111 = v109->max_length;
          v112 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v112,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
          if ( (int)v110 >= 1 && (int)v111 >= 1 )
          {
            v114 = 0;
            if ( (int)v110 >= (int)v111 )
              v110 = (unsigned int)v111;
            else
              v110 = (unsigned int)v110;
            while ( v114 < LODWORD(v35->max_length) )
            {
              v115 = v35->m_Items[v114];
              if ( v115 )
              {
                gameObject = (__int64)npcInfoDictionary;
                if ( !npcInfoDictionary )
                  goto LABEL_293;
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                        v115,
                        (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
                  goto LABEL_297;
                gameObject = (__int64)npcInfoDictionary;
                if ( !npcInfoDictionary )
                  goto LABEL_293;
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                         v115,
                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
                if ( Item )
                {
                  v118 = (FollowerInfo_o *)Item;
                  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
                  LimitCount = FollowerInfo__getLimitCount(v118, 0, ReturnTypeByQuestId, 0);
                  v121 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
                  IsGrandServant = FollowerInfo__IsGrandServant(v118, 0, v121, 0);
                }
                else
                {
LABEL_297:
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v116);
                  if ( !byte_5969EF2 )
                  {
                    sub_2213A60(&NetworkManager_TypeInfo);
                    byte_5969EF2 = 1;
                  }
                  gameObject = (__int64)NetworkManager_TypeInfo;
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v116);
                    gameObject = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( !v194 )
                    goto LABEL_293;
                  gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                          v194,
                                          *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                          v115,
                                          0);
                  if ( !gameObject )
                    goto LABEL_293;
                  LimitCount = *(_DWORD *)(gameObject + 64);
                  IsGrandServant = UserServantCollectionEntity__IsGrandServant(
                                     (UserServantCollectionEntity_o *)gameObject,
                                     0);
                  v118 = 0;
                }
                v123 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_40981588(
                  v123,
                  v114,
                  v115,
                  LimitCount,
                  setupInfo,
                  questRestrictionInfo,
                  v118,
                  0,
                  IsGrandServant,
                  0);
                if ( !v112 )
                  goto LABEL_293;
                v130 = v112->fields._items;
                this = v195;
                v131 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v112->fields._version;
                if ( !v130 )
                  goto LABEL_293;
                v132 = v112->fields._size;
                if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v112,
                    (Il2CppObject *)v123,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                }
                else
                {
                  v133 = &v130->obj.klass + v132;
                  v112->fields._size = v132 + 1;
                  v133[4] = (Il2CppClass *)v123;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v133 + 4),
                    (int32_t)v123,
                    v124,
                    v125,
                    v126,
                    v127,
                    v128,
                    v129);
                }
              }
              else
              {
                v134 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_40980060(v134, v114, 1, 0, 0, 1, 0, 0, 0);
                if ( !v112 )
                  goto LABEL_293;
                v141 = v112->fields._items;
                v142 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                ++v112->fields._version;
                if ( !v141 )
                  goto LABEL_293;
                v143 = v112->fields._size;
                if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v112,
                    (Il2CppObject *)v134,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
                }
                else
                {
                  v144 = &v141->obj.klass + v143;
                  v112->fields._size = v143 + 1;
                  v144[4] = (Il2CppClass *)v134;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v144 + 4),
                    (int32_t)v134,
                    v135,
                    v136,
                    v137,
                    v138,
                    v139,
                    v140);
                }
              }
              if ( v110 == ++v114 )
                goto LABEL_229;
            }
            goto LABEL_294;
          }
LABEL_229:
          v146 = this->fields.supportMemberBase;
          v145 = this->fields.supportMemberObjectList;
          if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v17, v113);
          v75 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v112;
          v147 = v145;
          v148 = v146;
          v149 = 1;
LABEL_290:
          PartyOrganizationConfirmItemDraw__SetPartyIcon(v75, v147, v148, 1, v149, 0);
          goto LABEL_291;
        }
        if ( type == 21 )
        {
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          v27 = &StringLiteral_10694/*"PARTY_ORGANIZATION_RESTRICTION_HELP_GRAND_SERVANT_TITLE"*/;
          goto LABEL_182;
        }
        if ( type != 101 )
          goto LABEL_179;
        v28 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
        if ( v28 )
        {
          UILabel__set_text(v28, (System_String_o *)gameObject, 0);
          gameObject = (__int64)this->fields.titleLabel;
          if ( gameObject )
          {
            v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            TransformHelper__SetLocalPositionY(v29, 211.0, 0);
            gameObject = (__int64)this->fields.messageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0);
              gameObject = (__int64)this->fields.messageLabel;
              if ( gameObject )
              {
                UILabel__set_fontSize((UILabel_o *)gameObject, 25, 0);
                gameObject = (__int64)this->fields.messageLabel;
                if ( gameObject )
                {
                  UILabel__set_overflowMethod((UILabel_o *)gameObject, 2, 0);
                  gameObject = (__int64)this->fields.messageLabel;
                  if ( gameObject )
                  {
                    UILabel__set_spacingY((UILabel_o *)gameObject, 5, 0);
                    gameObject = (__int64)this->fields.messageLabel;
                    if ( gameObject )
                    {
                      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                     gameObject,
                                     *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
                      v30 = this->fields.messageLabel;
                      if ( v30 )
                      {
                        mHeight = v30->fields.mHeight;
                        if ( mHeight >= 151 )
                        {
                          UILabel__set_overflowMethod(this->fields.messageLabel, 0, 0);
                          gameObject = (__int64)this->fields.messageLabel;
                          if ( !gameObject )
                            goto LABEL_293;
                          UIWidget__set_height((UIWidget_o *)gameObject, 150, 0);
                          gameObject = (__int64)this->fields.messageLabel;
                          if ( !gameObject )
                            goto LABEL_293;
                          printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
                          gameObject = sub_272EDA4(0, printedSize.fields.y);
                          v151 = this->fields.messageLabel;
                          if ( !v151 )
                            goto LABEL_293;
                          v152 = gameObject;
                          gameObject = sub_272EDA4(
                                         0,
                                         (float)((float)(int)gameObject / (float)mHeight)
                                       * (float)v151->fields.mSpacingY);
                          v30 = this->fields.messageLabel;
                          if ( !v30 )
                            goto LABEL_293;
                          v32 = v152 - gameObject;
                        }
                        else
                        {
                          v32 = mHeight
                              - v30->fields.mSpacingY
                              - mHeight % (v30->fields.mSpacingY + v30->fields.mFontSize);
                        }
                        v153 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0);
                        TransformHelper__SetLocalPositionY(v153, -59.0, 0);
                        if ( !byte_596A15B )
                        {
                          sub_2213A60(&System_Math_TypeInfo);
                          byte_596A15B = 1;
                        }
                        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17, v154);
                        gameObject = (__int64)this->fields.supportMemberBase;
                        if ( gameObject )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                          gameObject = (__int64)this->fields.supportMemberBase;
                          if ( gameObject )
                          {
                            v155 = vcvts_n_f32_s32(v32, 1u);
                            v156 = ceilf(v155);
                            v157 = vcvtps_s32_f32(v155) + 8;
                            v158 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
                            v159 = (float)v157;
                            if ( v156 == INFINITY )
                              v159 = -2147500000.0;
                            TransformHelper__SetLocalPositionY(v158, v159, 0);
                            if ( questRestrictionInfo )
                            {
                              v160 = System_Linq_Enumerable__Distinct_int_(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.overwriteLimitCountSvtIds,
                                       (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
                              v163 = System_Linq_Enumerable__ToArray_int_(
                                       v160,
                                       (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
                              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v161, v162);
                              gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                              if ( v163 )
                              {
                                v164 = this->fields.supportMemberObjectList;
                                if ( v164 )
                                {
                                  v165 = (UserServantCollectionMaster_o *)gameObject;
                                  v166 = v163->max_length;
                                  v167 = v164->max_length;
                                  v168 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
                                  System_Collections_Generic_List_object____ctor(
                                    v168,
                                    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
                                  if ( v166 >= 1 && (int)v167 >= 1 )
                                  {
                                    v170 = 0;
                                    if ( v166 >= (int)v167 )
                                      v171 = (unsigned int)v167;
                                    else
                                      v171 = (unsigned int)v166;
                                    v172 = v163->m_Items;
                                    while ( v170 < LODWORD(v163->max_length) )
                                    {
                                      v173 = v172[v170];
                                      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v169);
                                      if ( !byte_5969EF2 )
                                      {
                                        sub_2213A60(&NetworkManager_TypeInfo);
                                        byte_5969EF2 = 1;
                                      }
                                      gameObject = (__int64)NetworkManager_TypeInfo;
                                      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                      {
                                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v169);
                                        gameObject = (__int64)NetworkManager_TypeInfo;
                                      }
                                      if ( !v165 )
                                        goto LABEL_293;
                                      v174 = v163;
                                      gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                                              v165,
                                                              *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                              v173,
                                                              0);
                                      if ( !gameObject )
                                        goto LABEL_293;
                                      v175 = *(_DWORD *)(gameObject + 64);
                                      v176 = UserServantCollectionEntity__IsGrandServant(
                                               (UserServantCollectionEntity_o *)gameObject,
                                               0);
                                      v177 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
                                      PartyOrganizationListViewItem___ctor_40981588(
                                        v177,
                                        v170,
                                        v173,
                                        v175,
                                        setupInfo,
                                        questRestrictionInfo,
                                        0,
                                        0,
                                        v176,
                                        0);
                                      if ( !v168 )
                                        goto LABEL_293;
                                      v184 = v168->fields._items;
                                      v185 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                                      ++v168->fields._version;
                                      if ( !v184 )
                                        goto LABEL_293;
                                      v186 = v168->fields._size;
                                      if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          v168,
                                          (Il2CppObject *)v177,
                                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v187 = &v184->obj.klass + v186;
                                        v168->fields._size = v186 + 1;
                                        v187[4] = (Il2CppClass *)v177;
                                        sub_2213A04(
                                          (MissionNaviTransitionBoardItem_o *)(v187 + 4),
                                          (int32_t)v177,
                                          v178,
                                          v179,
                                          v180,
                                          v181,
                                          v182,
                                          v183);
                                      }
                                      ++v170;
                                      v163 = v174;
                                      if ( v171 == v170 )
                                        goto LABEL_271;
                                    }
                                    goto LABEL_294;
                                  }
LABEL_271:
                                  this = v195;
                                  v74 = v195->fields.supportMemberBase;
                                  v73 = v195->fields.supportMemberObjectList;
                                  if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v17, v169);
                                  v75 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v168;
                                  goto LABEL_274;
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
LABEL_293:
        sub_2213CDC(gameObject, v17);
      }
      if ( type == 11 )
      {
        titleLabel = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
        v27 = &StringLiteral_10697/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MY_SERVANT_NUM"*/;
        goto LABEL_182;
      }
      if ( type == 12 )
        goto LABEL_61;
      if ( type != 14 )
        goto LABEL_179;
    }
    v37 = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10692/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
    v38 = questRestrictionInfo;
    if ( !v37 )
      goto LABEL_293;
    UILabel__set_text(v37, (System_String_o *)gameObject, 0);
    if ( !questRestrictionInfo )
      goto LABEL_293;
    gameObject = (__int64)QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                            questRestrictionInfo,
                            0);
    if ( !gameObject )
      goto LABEL_293;
    if ( *(_DWORD *)(gameObject + 24) )
    {
      v39 = this->fields.messageDeckLabel;
      gameObject = (__int64)System_String__Format(message, *(Il2CppObject **)(gameObject + 32), 0);
      if ( !v39 )
        goto LABEL_293;
      UILabel__set_text(v39, (System_String_o *)gameObject, 0);
      gameObject = (__int64)this->fields.supportMemberBase;
      if ( !gameObject )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_293;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
      if ( !gameObject )
        goto LABEL_293;
      QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)gameObject,
                            questRestrictionInfo->fields.questId,
                            questRestrictionInfo->fields.questPhase,
                            0);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_293;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      gameObject = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
      if ( !gameObject )
        goto LABEL_293;
      v42 = this->fields.supportMemberObjectList;
      if ( !v42 )
        goto LABEL_293;
      v43 = gameObject;
      v44 = *(_DWORD *)(gameObject + 24);
      v45 = v42->max_length;
      v46 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      if ( v44 < 1 || (int)v45 < 1 )
      {
LABEL_121:
        v74 = this->fields.supportMemberBase;
        v73 = this->fields.supportMemberObjectList;
        if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v17, v47);
        v75 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v46;
LABEL_274:
        v147 = v73;
        v148 = v74;
LABEL_289:
        v149 = 0;
        goto LABEL_290;
      }
      v48 = 0;
      if ( v44 >= (int)v45 )
        v49 = (unsigned int)v45;
      else
        v49 = (unsigned int)v44;
      v192 = v49;
      v193 = (UserServantCollectionMaster_o *)MasterData_object;
      while ( v48 < *(unsigned int *)(v43 + 24) )
      {
        v50 = *(_DWORD *)(v43 + 4 * v48 + 32);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v47);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        gameObject = (__int64)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v47);
          gameObject = (__int64)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_293;
        gameObject = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                v50,
                                0);
        if ( !gameObject )
          goto LABEL_293;
        v51 = *(_DWORD *)(gameObject + 64);
        gameObject = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
        if ( !QuestFollowerList )
          goto LABEL_293;
        v52 = QuestFollowerList->max_length;
        v53 = gameObject;
        if ( v52 >= 1 )
        {
          v54 = 0;
          while ( 1 )
          {
            if ( v54 >= v52 )
              goto LABEL_294;
            v55 = QuestFollowerList->m_Items[v54];
            gameObject = FollowerInfo__GetReturnTypeByQuestId(v38->fields.questId, 0);
            if ( !v55 )
              goto LABEL_293;
            gameObject = (__int64)FollowerInfo__getServantLeaderInfo(v55, 0, gameObject, 0);
            if ( gameObject )
            {
              v58 = *(_QWORD *)(gameObject + 48);
              v59 = *(_QWORD *)(gameObject + 56);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57);
              *(_QWORD *)&v200.fields.currentCryptoKey = v58;
              *(_QWORD *)&v200.fields.fakeValue = v59;
              gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v200, 0);
              v38 = questRestrictionInfo;
              if ( (_DWORD)gameObject == v50 )
                break;
            }
            v52 = QuestFollowerList->max_length;
            if ( (int)++v54 >= v52 )
              goto LABEL_115;
          }
          v60 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
          v51 = FollowerInfo__getLimitCount(v55, 0, v60, 0);
          v61 = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
          v53 = FollowerInfo__IsGrandServant(v55, 0, v61, 0);
        }
LABEL_115:
        v62 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40981588(v62, v48, v50, v51, setupInfo, v38, 0, 0, v53, 0);
        if ( !v46 )
          goto LABEL_293;
        v69 = v46->fields._items;
        this = v195;
        v70 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
        ++v46->fields._version;
        if ( !v69 )
          goto LABEL_293;
        v71 = v46->fields._size;
        if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            (Il2CppObject *)v62,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v69->obj.klass + v71;
          v46->fields._size = v71 + 1;
          v72[4] = (Il2CppClass *)v62;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v62, v63, v64, v65, v66, v67, v68);
        }
        MasterData_object = (Il2CppObject *)v193;
        if ( ++v48 == v192 )
          goto LABEL_121;
      }
    }
    goto LABEL_294;
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationRestrictionHelpDialog__Open_41081032(
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
  int32_t state; // w8
  void *gameObject; // x0
  void *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *closeLabel; // x26
  __int64 v22; // x2
  UILabel_o *titleLabel; // x20
  __int64 *v24; // x8
  UILabel_o *v25; // x23
  UILabel_o *messageDeckLabel; // x23
  Il2CppObject *MasterData_object; // x22
  struct PartyOrganizationConfirmItemDraw_array *v28; // x8
  _DWORD *v29; // x23
  int v30; // w19
  il2cpp_array_size_t v31; // x20
  System_Collections_Generic_List_object__o *v32; // x24
  __int64 v33; // x2
  unsigned __int64 v34; // x25
  int32_t v35; // w27
  int32_t v36; // w29
  bool IsGrandServant; // w21
  PartyOrganizationListViewItem_o *v38; // x28
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  struct PartyOrganizationConfirmItemDraw_array *v49; // x20
  struct UnityEngine_GameObject_o *supportMemberBase; // x21
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v51; // x0
  System_String_o *v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  bool IsMyServantOrNpcRestriction_50456184; // w8
  UILabel_o *v56; // x23
  int v57; // w9
  System_Int32_array *v58; // x26
  __int64 v59; // x1
  __int64 v60; // x2
  bool IsSelectableNormalSupport; // w25
  System_Collections_Generic_List_int__o *v62; // x24
  System_String_o *v63; // x1
  UILabel_o *v64; // x24
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  _QWORD *v66; // x24
  int v67; // w20
  il2cpp_array_size_t max_length; // x19
  System_Collections_Generic_List_object__o *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x23
  int v72; // w27
  FollowerInfo_o *v73; // x26
  PartyOrganizationListViewItem_o *v74; // x25
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_object__o *NeedIndividualityList; // x25
  System_Collections_Generic_List_T__o *RangeTypeList; // x24
  System_Collections_Generic_List_int__o *v87; // x23
  int32_t v88; // w26
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  _QWORD *v92; // x23
  struct PartyOrganizationConfirmItemDraw_array *v93; // x8
  il2cpp_array_size_t v94; // x19
  __int64 v95; // x8
  unsigned __int64 v96; // x24
  int32_t v97; // w26
  __int64 v98; // x2
  Il2CppObject *v99; // x27
  int32_t v100; // w21
  bool v101; // w28
  PartyOrganizationListViewItem_o *v102; // x27
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  int32_t i; // w20
  struct UILabel_o *messageLabel; // x21
  Il2CppObject *v115; // x0
  struct UILabel_o *v116; // x25
  Il2CppObject *DialogTargetName; // x0
  struct PartyOrganizationConfirmItemDraw_array *v118; // x8
  int v119; // w19
  il2cpp_array_size_t v120; // x20
  System_Collections_Generic_List_object__o *v121; // x24
  __int64 v122; // x2
  unsigned __int64 v123; // x25
  __int64 v124; // x21
  int32_t *m_Items; // x23
  System_Int32_array *v126; // x20
  int32_t v127; // w27
  __int64 v128; // x2
  Il2CppObject *Item; // x0
  FollowerInfo_o *v130; // x28
  int32_t ReturnTypeByQuestId; // w0
  int32_t LimitCount; // w26
  int32_t v133; // w0
  bool v134; // w22
  PartyOrganizationListViewItem_o *v135; // x29
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  struct System_Object_array *v142; // x8
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  PartyOrganizationListViewItem_o *v145; // x27
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  Il2CppClass **v155; // x0
  struct PartyOrganizationConfirmItemDraw_array *v156; // x20
  struct UnityEngine_GameObject_o *v157; // x21
  PartyOrganizationConfirmItemDraw_array *v158; // x1
  UnityEngine_GameObject_o *v159; // x2
  bool v160; // w4
  System_Action_o *v161; // x20
  UserServantCollectionMaster_o *v162; // [xsp+30h] [xbp-90h]
  PartyOrganizationRestrictionHelpDialog_o *v163; // [xsp+38h] [xbp-88h]
  QuestRestrictionInfo_o *v165; // [xsp+48h] [xbp-78h]
  QuestPhaseEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcInfoDictionary; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_596C0D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationRestrictionHelpDialog_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10691/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/);
    sub_2213A60(&StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/);
    sub_2213A60(&StringLiteral_10693/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/);
    sub_2213A60(&StringLiteral_10692/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/);
    sub_2213A60(&StringLiteral_10702/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/);
    sub_2213A60(&StringLiteral_10698/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C0D1 = 1;
  }
  state = this->fields.state;
  entity = 0;
  npcInfoDictionary = 0;
  if ( (state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&slotNo,
      *(System_String_o **)&restrictionType,
      (int32_t)message,
      (int32_t)setupInfo,
      (bool)questRestrictionInfo,
      (bool)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_213;
    v165 = questRestrictionInfo;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10691/*"PARTY_ORGANIZATION_RESTRICTION_HELP_CLOSE"*/, 0);
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
    v163 = this;
    if ( restrictionType > 3 )
    {
      if ( (unsigned int)(restrictionType - 4) >= 2 )
      {
        if ( restrictionType != 6 )
        {
          if ( restrictionType == 9 )
          {
            titleLabel = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v22);
            v24 = &StringLiteral_10702/*"PARTY_ORGANIZATION_RESTRICTION_HELP_UNIQUE_SVT_ONLY_TITLE"*/;
LABEL_63:
            gameObject = LocalizationManager__Get((System_String_o *)*v24, 0);
            if ( !titleLabel )
              goto LABEL_213;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
LABEL_65:
            gameObject = this->fields.messageLabel;
            if ( gameObject )
            {
              v52 = message;
LABEL_67:
              UILabel__set_text((UILabel_o *)gameObject, v52, 0);
LABEL_211:
              this->fields.state = 1;
              v161 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v161,
                (Il2CppObject *)this,
                Method_PartyOrganizationRestrictionHelpDialog_EndOpen__,
                0);
              BaseDialog__Open((BaseDialog_o *)this, v161, 0, 0, 0);
              return;
            }
            goto LABEL_213;
          }
LABEL_60:
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v22);
          v24 = &StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/;
          goto LABEL_63;
        }
        v64 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v22);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10693/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_SUPPORT_POSITION_TITLE"*/, 0);
        if ( !v64 )
          goto LABEL_213;
        UILabel__set_text(v64, (System_String_o *)gameObject, 0);
        gameObject = this->fields.messageDeckLabel;
        if ( !gameObject )
          goto LABEL_213;
        UILabel__set_text((UILabel_o *)gameObject, message, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        supportMemberObjectList = this->fields.supportMemberObjectList;
        if ( !supportMemberObjectList )
          goto LABEL_213;
        v66 = gameObject;
        v67 = *((_DWORD *)gameObject + 6);
        max_length = supportMemberObjectList->max_length;
        v69 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v69,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v67 < 1 )
        {
          for ( i = 0; ; ++i )
          {
            gameObject = BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v70);
              gameObject = BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*((_QWORD *)gameObject + 23) + 172LL) )
              goto LABEL_206;
            if ( !partyItem )
              goto LABEL_213;
            gameObject = PartyListViewItem__GetMember(partyItem, i, 0);
            if ( !gameObject )
              goto LABEL_213;
            v18 = gameObject;
            if ( *((_BYTE *)gameObject + 136) )
            {
              if ( !*((_BYTE *)gameObject + 256) )
                break;
            }
          }
          if ( !v69 )
            goto LABEL_213;
          sub_1FFEDA8(v69, gameObject, Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
        else if ( (int)max_length >= 1 )
        {
          v71 = 0;
          if ( (int)max_length >= (__int64)v67 )
            v72 = v67;
          else
            v72 = max_length;
          while ( (unsigned int)v71 < *((_DWORD *)v66 + 6) )
          {
            v73 = (FollowerInfo_o *)v66[v71 + 4];
            if ( !v73 )
              goto LABEL_213;
            if ( !v73->fields.isMySvtOrNpc )
            {
              v74 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_40942508(v74, v71, v73, 0, 0, setupInfo, v165, 0, 0, 0, 0, 0, 0);
              if ( !v69 )
                goto LABEL_213;
              items = v69->fields._items;
              v82 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
              ++v69->fields._version;
              if ( !items )
                goto LABEL_213;
              size = v69->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v69,
                  (Il2CppObject *)v74,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
              }
              else
              {
                v84 = &items->obj.klass + size;
                v69->fields._size = size + 1;
                v84[4] = (Il2CppClass *)v74;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v84 + 4), (int32_t)v74, v75, v76, v77, v78, v79, v80);
              }
            }
            if ( v72 == (_DWORD)++v71 )
              goto LABEL_206;
          }
          goto LABEL_214;
        }
        goto LABEL_206;
      }
      v25 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v22);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10692/*"PARTY_ORGANIZATION_RESTRICTION_HELP_FIXED_MY_SERVANT_POSITION"*/, 0);
      if ( !v25 )
        goto LABEL_213;
      UILabel__set_text(v25, (System_String_o *)gameObject, 0);
      if ( !questRestrictionInfo )
        goto LABEL_213;
      gameObject = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                     questRestrictionInfo,
                     0);
      if ( !gameObject )
        goto LABEL_65;
      if ( *((_DWORD *)gameObject + 6) )
      {
        messageDeckLabel = this->fields.messageDeckLabel;
        gameObject = System_String__Format(message, *((Il2CppObject **)gameObject + 4), 0);
        if ( !messageDeckLabel )
          goto LABEL_213;
        UILabel__set_text(messageDeckLabel, (System_String_o *)gameObject, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        gameObject = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(questRestrictionInfo, 0);
        if ( !gameObject )
          goto LABEL_213;
        v28 = this->fields.supportMemberObjectList;
        if ( !v28 )
          goto LABEL_213;
        v29 = gameObject;
        v30 = *((_DWORD *)gameObject + 6);
        v31 = v28->max_length;
        v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v30 < 1 || (int)v31 < 1 )
        {
LABEL_57:
          supportMemberBase = this->fields.supportMemberBase;
          v49 = this->fields.supportMemberObjectList;
          if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v18, v33);
          v51 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v32;
          goto LABEL_209;
        }
        v34 = 0;
        if ( v30 >= (int)v31 )
          v31 = (unsigned int)v31;
        else
          v31 = (unsigned int)v30;
        while ( v34 < (unsigned int)v29[6] )
        {
          v35 = v29[v34 + 8];
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v33);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v33);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_213;
          gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                         (UserServantCollectionMaster_o *)MasterData_object,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         v35,
                         0);
          if ( !gameObject )
            goto LABEL_213;
          v36 = *((_DWORD *)gameObject + 16);
          IsGrandServant = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
          v38 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_40981588(v38, v34, v35, v36, setupInfo, v165, 0, 0, IsGrandServant, 0);
          if ( !v32 )
            goto LABEL_213;
          v45 = v32->fields._items;
          this = v163;
          v46 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v32->fields._version;
          if ( !v45 )
            goto LABEL_213;
          v47 = v32->fields._size;
          if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v38,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v32->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v38;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v38, v39, v40, v41, v42, v43, v44);
          }
          if ( v31 == ++v34 )
            goto LABEL_57;
        }
      }
      goto LABEL_214;
    }
    if ( restrictionType )
    {
      if ( restrictionType == 3 )
      {
        titleLabel = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v22);
        v24 = &StringLiteral_10698/*"PARTY_ORGANIZATION_RESTRICTION_HELP_SERVANT_NUM"*/;
        goto LABEL_63;
      }
      goto LABEL_60;
    }
    if ( !questRestrictionInfo )
      goto LABEL_213;
    IsMyServantOrNpcRestriction_50456184 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                                             questRestrictionInfo,
                                             slotNo,
                                             0);
    v56 = this->fields.titleLabel;
    v57 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( !IsMyServantOrNpcRestriction_50456184 )
    {
      if ( !v57 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
      if ( !v56 )
        goto LABEL_213;
      UILabel__set_text(v56, (System_String_o *)gameObject, 0);
      NeedIndividualityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfo__GetNeedIndividualityList(
                                                                             questRestrictionInfo,
                                                                             slotNo,
                                                                             0);
      RangeTypeList = (System_Collections_Generic_List_T__o *)QuestRestrictionInfo__GetRangeTypeList(
                                                                questRestrictionInfo,
                                                                slotNo,
                                                                0);
      v87 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v87,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !NeedIndividualityList )
        goto LABEL_213;
      if ( NeedIndividualityList->fields._size >= 1 )
      {
        v88 = 0;
        while ( RangeTypeList )
        {
          if ( RangeTypeList->fields._size > v88 )
          {
            gameObject = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                   RangeTypeList,
                                   v88,
                                   (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
            if ( (_DWORD)gameObject == 1 )
            {
              gameObject = System_Collections_Generic_List_object___get_Item(
                             NeedIndividualityList,
                             v88,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_int____get_Item__);
              if ( !v87 )
                goto LABEL_213;
              System_Collections_Generic_List_int___AddRange(
                v87,
                (System_Collections_Generic_IEnumerable_T__o *)gameObject,
                (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
          if ( ++v88 >= NeedIndividualityList->fields._size )
            goto LABEL_122;
        }
        goto LABEL_213;
      }
LABEL_122:
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_213;
      gameObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)gameObject,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !gameObject )
        goto LABEL_213;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)gameObject,
                                                                              0);
      v90 = System_Linq_Enumerable__Distinct_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v87,
              (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
      v91 = System_Linq_Enumerable__Intersect_int_(
              v90,
              CollectionList,
              (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
      gameObject = System_Linq_Enumerable__ToArray_int_(
                     v91,
                     (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !gameObject )
        goto LABEL_213;
      v92 = gameObject;
      if ( !*((_QWORD *)gameObject + 3) )
        goto LABEL_65;
      gameObject = this->fields.messageDeckLabel;
      if ( !gameObject )
        goto LABEL_213;
      UILabel__set_text((UILabel_o *)gameObject, message, 0);
      gameObject = this->fields.supportMemberBase;
      if ( !gameObject )
        goto LABEL_213;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v93 = this->fields.supportMemberObjectList;
      if ( !v93 )
        goto LABEL_213;
      v94 = v93->max_length;
      v69 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v69,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      v95 = v92[3];
      if ( (int)v95 < 1 || (int)v94 < 1 )
      {
LABEL_206:
        supportMemberBase = this->fields.supportMemberBase;
        v49 = this->fields.supportMemberObjectList;
        if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v18, v70);
        v51 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v69;
LABEL_209:
        v158 = v49;
        v159 = supportMemberBase;
        v160 = 0;
LABEL_210:
        PartyOrganizationConfirmItemDraw__SetPartyIcon(v51, v158, v159, 1, v160, 0);
        goto LABEL_211;
      }
      v96 = 0;
      while ( v96 < (unsigned int)v95 )
      {
        v97 = *((_DWORD *)v92 + v96 + 8);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        v99 = DataManager__GetMasterData_object_(
                (DataManager_o *)gameObject,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v98);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        gameObject = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v98);
          gameObject = NetworkManager_TypeInfo;
        }
        if ( !v99 )
          goto LABEL_213;
        gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)v99,
                       *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                       v97,
                       0);
        if ( !gameObject )
          goto LABEL_213;
        v100 = *((_DWORD *)gameObject + 16);
        v101 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
        v102 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40981588(v102, v96, v97, v100, setupInfo, v165, 0, 0, v101, 0);
        if ( !v69 )
          goto LABEL_213;
        v109 = v69->fields._items;
        v110 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
        ++v69->fields._version;
        if ( !v109 )
          goto LABEL_213;
        v111 = v69->fields._size;
        if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v69,
            (Il2CppObject *)v102,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
        }
        else
        {
          v112 = &v109->obj.klass + v111;
          v69->fields._size = v111 + 1;
          v112[4] = (Il2CppClass *)v102;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v112 + 4), (int32_t)v102, v103, v104, v105, v106, v107, v108);
        }
        LODWORD(v95) = *((_DWORD *)v92 + 6);
        if ( (__int64)++v96 >= (int)v95 || (__int64)v96 >= (int)v94 )
          goto LABEL_206;
      }
LABEL_214:
      sub_2213CE4(gameObject);
    }
    if ( !v57 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10699/*"PARTY_ORGANIZATION_RESTRICTION_HELP_TITLE"*/, 0);
    if ( !v56 )
      goto LABEL_213;
    UILabel__set_text(v56, (System_String_o *)gameObject, 0);
    gameObject = QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
                   questRestrictionInfo,
                   &npcInfoDictionary,
                   slotNo,
                   0,
                   0);
    if ( !gameObject )
      goto LABEL_213;
    v58 = (System_Int32_array *)gameObject;
    if ( *((_QWORD *)gameObject + 3) )
    {
      IsSelectableNormalSupport = QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, slotNo, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v60);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !gameObject )
        goto LABEL_213;
      QuestPhaseMaster__TryGetEntity(
        (QuestPhaseMaster_o *)gameObject,
        &entity,
        questRestrictionInfo->fields.questId,
        questRestrictionInfo->fields.questPhase,
        0);
      if ( !IsSelectableNormalSupport )
      {
        v116 = this->fields.messageDeckLabel;
        DialogTargetName = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0);
        gameObject = System_String__Format(message, DialogTargetName, 0);
        if ( !v116 )
          goto LABEL_213;
        v63 = (System_String_o *)gameObject;
        gameObject = v116;
        goto LABEL_163;
      }
      if ( entity && !entity->fields.isNpcOnly )
      {
        v62 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_71723804(
          v62,
          (System_Collections_Generic_IEnumerable_T__o *)v58,
          (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
        if ( !v62 )
          goto LABEL_213;
        sub_20047CC(v62, 0, Method_System_Collections_Generic_List_int__Add__);
        v58 = System_Collections_Generic_List_int___ToArray(
                v62,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
      gameObject = this->fields.messageSelfOrSupportLabel;
      if ( gameObject )
      {
        v63 = message;
LABEL_163:
        UILabel__set_text((UILabel_o *)gameObject, v63, 0);
        gameObject = this->fields.supportMemberBase;
        if ( !gameObject )
          goto LABEL_213;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_213;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !v58 )
          goto LABEL_213;
        v118 = this->fields.supportMemberObjectList;
        v162 = (UserServantCollectionMaster_o *)gameObject;
        if ( !v118 )
          goto LABEL_213;
        v119 = v58->max_length;
        v120 = v118->max_length;
        v121 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v121,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
        if ( v119 < 1 || (int)v120 < 1 )
        {
LABEL_201:
          v157 = this->fields.supportMemberBase;
          v156 = this->fields.supportMemberObjectList;
          if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v18, v122);
          v51 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v121;
          v158 = v156;
          v159 = v157;
          v160 = 1;
          goto LABEL_210;
        }
        v123 = 0;
        if ( v119 >= (int)v120 )
          v124 = (unsigned int)v120;
        else
          v124 = (unsigned int)v119;
        m_Items = v58->m_Items;
        v126 = v58;
        while ( v123 < LODWORD(v58->max_length) )
        {
          v127 = m_Items[v123];
          if ( v127 )
          {
            gameObject = npcInfoDictionary;
            if ( !npcInfoDictionary )
              goto LABEL_213;
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                    v127,
                    (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__) )
              goto LABEL_217;
            gameObject = npcInfoDictionary;
            if ( !npcInfoDictionary )
              goto LABEL_213;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)npcInfoDictionary,
                     v127,
                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__get_Item__);
            if ( Item )
            {
              v130 = (FollowerInfo_o *)Item;
              ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v165->fields.questId, 0);
              LimitCount = FollowerInfo__getLimitCount(v130, 0, ReturnTypeByQuestId, 0);
              v133 = FollowerInfo__GetReturnTypeByQuestId(v165->fields.questId, 0);
              v134 = FollowerInfo__IsGrandServant(v130, 0, v133, 0);
            }
            else
            {
LABEL_217:
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v128);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              gameObject = NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v128);
                gameObject = NetworkManager_TypeInfo;
              }
              if ( !v162 )
                goto LABEL_213;
              gameObject = UserServantCollectionMaster__GetEntityDefinitely(
                             v162,
                             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                             v127,
                             0);
              if ( !gameObject )
                goto LABEL_213;
              LimitCount = *((_DWORD *)gameObject + 16);
              v134 = UserServantCollectionEntity__IsGrandServant((UserServantCollectionEntity_o *)gameObject, 0);
              v130 = 0;
            }
            v135 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_40981588(
              v135,
              v123,
              v127,
              LimitCount,
              setupInfo,
              v165,
              v130,
              0,
              v134,
              0);
            if ( !v121 )
              goto LABEL_213;
            v142 = v121->fields._items;
            ++v121->fields._version;
            if ( !v142 )
              goto LABEL_213;
            v143 = v121->fields._size;
            v58 = v126;
            if ( (unsigned int)v143 >= LODWORD(v142->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v121,
                (Il2CppObject *)v135,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
            }
            else
            {
              v144 = &v142->obj.klass + v143;
              v121->fields._size = v143 + 1;
              v144[4] = (Il2CppClass *)v135;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v144 + 4),
                (int32_t)v135,
                v136,
                v137,
                v138,
                v139,
                v140,
                v141);
            }
            this = v163;
          }
          else
          {
            v145 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_40980060(v145, v123, 1, 0, 0, 1, 0, 0, 0);
            if ( !v121 )
              goto LABEL_213;
            v152 = v121->fields._items;
            v153 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
            ++v121->fields._version;
            if ( !v152 )
              goto LABEL_213;
            v154 = v121->fields._size;
            if ( (unsigned int)v154 >= LODWORD(v152->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v121,
                (Il2CppObject *)v145,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
            }
            else
            {
              v155 = &v152->obj.klass + v154;
              v121->fields._size = v154 + 1;
              v155[4] = (Il2CppClass *)v145;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v155 + 4),
                (int32_t)v145,
                v146,
                v147,
                v148,
                v149,
                v150,
                v151);
            }
          }
          if ( v124 == ++v123 )
            goto LABEL_201;
        }
        goto LABEL_214;
      }
    }
    else
    {
      messageLabel = this->fields.messageLabel;
      v115 = (Il2CppObject *)QuestRestrictionInfo__GetDialogTargetName(questRestrictionInfo, slotNo, 0, 0);
      gameObject = System_String__Format(message, v115, 0);
      if ( messageLabel )
      {
        v52 = (System_String_o *)gameObject;
        gameObject = messageLabel;
        goto LABEL_67;
      }
    }
LABEL_213:
    sub_2213CDC(gameObject, v18);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationRestrictionHelpDialog_o *v13; // x0
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C0CD & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_596C0CD = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationRestrictionHelpDialog_o *)sub_221405C(
                                                      v8,
                                                      PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10);
  PartyOrganizationRestrictionHelpDialog__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationRestrictionHelpDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C0CE & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    byte_596C0CE = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationRestrictionHelpDialog_o *)sub_221405C(
                                                      v8,
                                                      PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10);
  PartyOrganizationRestrictionHelpDialog__Init(v13, v14);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2004AC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2004A80;
}


System_IAsyncResult_o *PartyOrganizationRestrictionHelpDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void PartyOrganizationRestrictionHelpDialog_CallbackFunc__EndInvoke(
        PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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