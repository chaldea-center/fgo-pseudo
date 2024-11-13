void __fastcall BattleSelectServantWindow___ctor(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


void __fastcall BattleSelectServantWindow__Awake(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x8
  int max_length; // w8
  int v4; // w9

  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    sub_1BCAA3C(this, method);
  max_length = commandSpellAddFunctionLabels->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall BattleSelectServantWindow__Close(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_4B19264 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, call, method);
    byte_4B19264 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    parentPanel = this->fields.classBoardWindowButton;
    if ( parentPanel )
    {
      UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(parentPanel, call);
  }
LABEL_9:
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleSelectServantWindow__EndCloseClassBoardEffectListDialog(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4B1926A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1926A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  this->fields.isOpenClassBoardEffectListDialog = 0;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
}


void __fastcall BattleSelectServantWindow__OnClickClassBoardWindow(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B19269 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v4, v5);
    sub_1BCA7E0(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19269 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v11 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v18, v19);
    CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, 0, 0, v17, 2, 0LL, 0LL);
  }
}


void __fastcall BattleSelectServantWindow__Open(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v12; // x20

  if ( (byte_4B19263 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectServantWindow_onCloseButton__, call, method);
    sub_1BCA7E0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5, v6);
    byte_4B19263 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1BCAA3C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v12 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1BCAA2C(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v9,
                                                              v10,
                                                              v11);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v12,
    0LL);
}


void __fastcall BattleSelectServantWindow__SelectA(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 0, v2);
}


void __fastcall BattleSelectServantWindow__SelectB(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 1, v2);
}


void __fastcall BattleSelectServantWindow__SelectC(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__SelectCommon(
        BattleSelectServantWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UILabel_array *notTargetLabelList; // x8
  BattleSelectServantWindow_o *v5; // x19
  const MethodInfo *v6; // x2
  struct BattleServantData_array *svtList; // x8
  BattleServantData_o *v8; // x8

  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_10;
  if ( notTargetLabelList->max_length <= index )
    goto LABEL_11;
  v5 = this;
  this = (BattleSelectServantWindow_o *)notTargetLabelList->m_Items[index];
  if ( !this )
    goto LABEL_10;
  this = (BattleSelectServantWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleSelectServantWindow_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  svtList = v5->fields.svtList;
  if ( !svtList )
LABEL_10:
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
LABEL_11:
    sub_1BCAA44(this, *(_QWORD *)&index);
  v8 = svtList->m_Items[index];
  if ( !v8 )
    goto LABEL_10;
  BattleSelectServantWindow__SelectServant(v5, v8->fields.uniqueId, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__SelectServant(
        BattleSelectServantWindow_o *this,
        int32_t uniqeId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x8

  if ( (byte_4B19267 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectServantWindow_SelectServant__, *(_QWORD *)&uniqeId, method);
    byte_4B19267 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    if ( uniqeId >= 1 )
      v7 = 10;
    else
      v7 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v6, v7, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))selectCallBack->fields.m_target)(
        selectCallBack->fields.original_method_info,
        (unsigned int)uniqeId,
        *(_QWORD *)&selectCallBack->fields.extra_arg);
  }
}


void __fastcall BattleSelectServantWindow__SetCallBack(
        BattleSelectServantWindow_o *this,
        BattleSelectServantWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.selectCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCallBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__SetServantData(
        BattleSelectServantWindow_o *this,
        BattleServantData_array *svtList,
        int32_t skillId,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleServantData_array *v8; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  UILabel_o *title_label; // x24
  __int64 gameObject; // x0
  __int64 v27; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v30; // w21
  UILabel_o *v31; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v33; // w8
  unsigned int v34; // w20
  BalanceConfig_c *v35; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  UnityEngine_Object_c **v38; // x21
  unsigned __int64 v39; // x20
  __int64 v40; // x24
  __int64 *v41; // x25
  unsigned __int64 v42; // x9
  UnityEngine_Object_o *v43; // x19
  struct UITexture_array *v44; // x8
  UIButtonColor_o *v45; // x26
  struct UITexture_array *v46; // x8
  signed __int64 v47; // x19
  struct UITexture_array *v48; // x25
  BattleServantData_o *v49; // x27
  UnityEngine_Object_c **v50; // x23
  Il2CppClass **v51; // x21
  UITexture_o *v52; // x28
  int32_t DispImageSvtId; // w22
  __int64 v54; // x1
  int32_t DispLimitCount; // w19
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x28
  struct UITexture_array *v63; // x8
  UnityEngine_Transform_o *v64; // x28
  struct UILabel_array *v65; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v66; // x8
  struct UITexture_array *v67; // x8
  UnityEngine_Transform_o *transform; // x26
  struct UITexture_array *v69; // x8
  __int64 v70; // x2
  UnityEngine_Transform_o *v71; // x26
  __int64 v72; // x0
  BattleServantData_array *v75; // [xsp+18h] [xbp-78h]
  BattleServantData_o **m_Items; // [xsp+20h] [xbp-70h]
  bool IsQuestClear_38310172; // [xsp+2Ch] [xbp-64h]
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = svtList;
  if ( (byte_4B19265 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtList, *(_QWORD *)&skillId);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIButton___, v10, v11);
    sub_1BCA7E0(&CondType_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_2889/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2882/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v22, v23);
    byte_4B19265 = 1;
  }
  this->fields.svtList = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtList,
    (int64_t)v8,
    *(int64_t *)&skillId,
    commandSpellId,
    (System_String_o *)battleData,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_90;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_90;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = notTargetLabelList->m_Items[v30];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v31 )
        goto LABEL_90;
      UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_15;
    }
LABEL_93:
    sub_1BCAA44(gameObject, v27);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_90;
  v33 = commandSpellAddFunctionLabels->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0;
    while ( v34 < v33 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v34];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v33 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v34 >= v33 )
        goto LABEL_22;
    }
    goto LABEL_93;
  }
LABEL_22:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_38310172 = 0;
  }
  else
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
      v35 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v35->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
    IsQuestClear_38310172 = CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_38310172, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_90;
  v38 = &UnityEngine_Object_TypeInfo;
  m_Items = v8->m_Items;
  v39 = 0LL;
  v40 = 32LL;
  v41 = &qword_4B10000;
  v75 = v8;
  while ( 1 )
  {
    v42 = servantTop->max_length;
    if ( (__int64)v39 >= (int)v42 )
      break;
    if ( v39 >= v42 )
      goto LABEL_93;
    v43 = (UnityEngine_Object_o *)servantTop->m_Items[v39];
    if ( !(*v38)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v38, v27);
    gameObject = UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
    if ( (gameObject & 1) == 0 )
    {
      v44 = this->fields.servantTop;
      if ( !v44 )
        goto LABEL_90;
      if ( v39 >= v44->max_length )
        goto LABEL_93;
      gameObject = (__int64)v44->m_Items[v39];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_90;
      v79.fields.r = 1.0;
      v79.fields.g = 1.0;
      v79.fields.b = 1.0;
      v79.fields.a = 1.0;
      v45 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v79, 0LL);
      if ( !v8 )
        goto LABEL_90;
      v46 = this->fields.servantTop;
      if ( !v46 )
        goto LABEL_90;
      if ( v39 >= v46->max_length )
        goto LABEL_93;
      gameObject = (__int64)v46->m_Items[v39];
      if ( !gameObject )
        goto LABEL_90;
      v47 = (int)v8->max_length;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      if ( (__int64)v39 >= v47 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v67 = this->fields.servantTop;
        if ( !v67 )
          goto LABEL_90;
        if ( v39 >= v67->max_length )
          goto LABEL_93;
        gameObject = (__int64)v67->m_Items[v39];
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !transform )
          goto LABEL_90;
        UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( v39 >= v8->max_length )
          goto LABEL_93;
        v48 = this->fields.servantTop;
        if ( !v48 )
          goto LABEL_90;
        if ( v39 >= v48->max_length )
          goto LABEL_93;
        v49 = m_Items[v39];
        if ( !v49 )
          goto LABEL_90;
        v50 = v38;
        v51 = &v48->obj.klass + v39;
        v52 = (UITexture_o *)v51[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v39], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v49, 1, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v54);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v52, DispImageSvtId, DispLimitCount, 0LL);
        v62 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1BCA91C(gameObject, v48->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v72 = sub_1BCAA60(0LL);
            sub_1BCA908(v72, 0LL);
          }
        }
        if ( v39 >= v48->max_length )
          goto LABEL_93;
        v51[4] = (Il2CppClass *)v62;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v48 + v40), v62, v56, v57, v58, v59, v60, v61);
        v63 = this->fields.servantTop;
        if ( !v63 )
          goto LABEL_90;
        if ( v39 >= v63->max_length )
          goto LABEL_93;
        gameObject = (__int64)v63->m_Items[v39];
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_90;
        v64 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.svtRoot,
                                0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v64 )
          goto LABEL_90;
        UnityEngine_Transform__set_parent(v64, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = BattleServantData__CheckNotTargetSkill(v49, skillId, 0LL);
        v38 = v50;
        v8 = v75;
        v41 = &qword_4B10000;
        if ( (gameObject & 1) != 0 )
        {
          v80.fields.r = 0.5;
          v80.fields.g = 0.5;
          v80.fields.b = 0.5;
          v80.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v45, v80, 0LL);
          v65 = this->fields.notTargetLabelList;
          if ( !v65 )
            goto LABEL_90;
          if ( v39 >= v65->max_length )
            goto LABEL_93;
          gameObject = (__int64)v65->m_Items[v39];
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_38310172 )
        {
          v66 = this->fields.commandSpellAddFunctionLabels;
          if ( !v66 )
            goto LABEL_90;
          if ( v39 >= v66->max_length )
            goto LABEL_93;
          gameObject = (__int64)v66->m_Items[v39];
          if ( !gameObject )
            goto LABEL_90;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v49,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v69 = this->fields.servantTop;
      if ( !v69 )
        goto LABEL_90;
      if ( v39 >= v69->max_length )
        goto LABEL_93;
      gameObject = (__int64)v69->m_Items[v39];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v71 = (UnityEngine_Transform_o *)gameObject;
      if ( !*((_BYTE *)v41 + 2502) )
      {
        gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v70);
        *((_BYTE *)v41 + 2502) = 1;
      }
      if ( !v71 )
        goto LABEL_90;
      UnityEngine_Transform__set_localScale(v71, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v39;
    v40 += 8LL;
    if ( !servantTop )
      goto LABEL_90;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_90:
    sub_1BCAA3C(gameObject, v27);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 440LL))(
    gameObject,
    *(_QWORD *)(*(_QWORD *)gameObject + 448LL));
}


void __fastcall BattleSelectServantWindow__SetServantRootTutorialPosition(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *svtRoot; // x0
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4

  svtRoot = (UnityEngine_Component_o *)this->fields.svtRoot;
  if ( !svtRoot || (svtRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(svtRoot, 0LL)) == 0LL )
    sub_1BCAA3C(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0LL);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19268 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13069/*"Sprite"*/, method, v2);
    byte_4B19268 = 1;
  }
  return (System_String_o *)StringLiteral_13069/*"Sprite"*/;
}


void __fastcall BattleSelectServantWindow__onCloseButton(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectServantWindow__SelectServant(this, -1, v2);
}


void __fastcall BattleSelectServantWindow__setInitialPos(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *v6; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v6 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
    byte_4B109C1 = 1;
  }
  if ( !v6 )
LABEL_6:
    sub_1BCAA3C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__setUseClose(
        BattleSelectServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  v5 = flg;
  if ( (byte_4B19266 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B19266 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow_SelectServantCallBack___ctor(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1064C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10604;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectServantWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = uniqueId;
  if ( (byte_4B1926B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&uniqueId, callback);
    byte_4B1926B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__Invoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    uniqueId,
    *(_QWORD *)&this->fields.extra_arg);
}