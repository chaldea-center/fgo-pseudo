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
    sub_1B8880C(this, method);
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
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_4A5E140 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E140 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    parentPanel = this->fields.classBoardWindowButton;
    if ( parentPanel )
    {
      UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1B8880C(parentPanel, call);
  }
LABEL_9:
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleSelectServantWindow__EndCloseClassBoardEffectListDialog(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4A5E146 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E146 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5E145 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_1B885B0(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E145 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
    CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, 0, 0, v7, 2, 0LL, 0LL);
  }
}


void __fastcall BattleSelectServantWindow__Open(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v7; // x20

  if ( (byte_4A5E13F & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_1B885B0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4A5E13F = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1B8880C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B887FC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v7,
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
    sub_1B8880C(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
LABEL_11:
    sub_1B88814(this, *(_QWORD *)&index);
  v8 = svtList->m_Items[index];
  if ( !v8 )
    goto LABEL_10;
  BattleSelectServantWindow__SelectServant(v5, v8->fields.uniqueId, v6);
}


void __fastcall BattleSelectServantWindow__SelectServant(
        BattleSelectServantWindow_o *this,
        int32_t uniqeId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x8

  if ( (byte_4A5E143 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectServantWindow_SelectServant__);
    byte_4A5E143 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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

  this->fields.selectCallBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BattleSelectServantWindow__SetServantData(
        BattleSelectServantWindow_o *this,
        BattleServantData_array *svtList,
        int32_t skillId,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  UILabel_o *title_label; // x24
  __int64 gameObject; // x0
  __int64 v10; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v13; // w21
  UILabel_o *v14; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v16; // w8
  unsigned int v17; // w20
  BalanceConfig_c *v18; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  UnityEngine_Object_c **v21; // x21
  unsigned __int64 v22; // x20
  __int64 v23; // x24
  __int64 *v24; // x25
  unsigned __int64 v25; // x9
  UnityEngine_Object_o *v26; // x19
  struct UITexture_array *v27; // x8
  UIButtonColor_o *v28; // x26
  struct UITexture_array *v29; // x8
  signed __int64 v30; // x19
  struct UITexture_array *v31; // x25
  BattleServantData_o *v32; // x27
  UnityEngine_Object_c **v33; // x23
  Il2CppClass **v34; // x21
  UITexture_o *v35; // x28
  int32_t DispImageSvtId; // w22
  int32_t DispLimitCount; // w19
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x28
  struct UITexture_array *v41; // x8
  UnityEngine_Transform_o *v42; // x28
  struct UILabel_array *v43; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v44; // x8
  struct UITexture_array *v45; // x8
  UnityEngine_Transform_o *transform; // x26
  struct UITexture_array *v47; // x8
  UnityEngine_Transform_o *v48; // x26
  __int64 v49; // x0
  BattleServantData_array *v52; // [xsp+18h] [xbp-78h]
  BattleServantData_o **m_Items; // [xsp+20h] [xbp-70h]
  bool IsQuestClear_37596684; // [xsp+2Ch] [xbp-64h]
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E141 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2868/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_1B885B0(&StringLiteral_2861/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_4A5E141 = 1;
  }
  this->fields.svtList = svtList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtList, (int32_t)svtList, skillId, commandSpellId);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_90;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_90;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = notTargetLabelList->m_Items[v13];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v14 )
        goto LABEL_90;
      UILabel__set_text(v14, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_15;
    }
LABEL_93:
    sub_1B88814(gameObject, v10);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_90;
  v16 = commandSpellAddFunctionLabels->max_length;
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < v16 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v17];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v16 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v17 >= v16 )
        goto LABEL_22;
    }
    goto LABEL_93;
  }
LABEL_22:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_37596684 = 0;
  }
  else
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_37596684 = CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_37596684, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_90;
  v21 = &UnityEngine_Object_TypeInfo;
  m_Items = svtList->m_Items;
  v22 = 0LL;
  v23 = 32LL;
  v24 = &qword_4A55000;
  v52 = svtList;
  while ( 1 )
  {
    v25 = servantTop->max_length;
    if ( (__int64)v22 >= (int)v25 )
      break;
    if ( v22 >= v25 )
      goto LABEL_93;
    v26 = (UnityEngine_Object_o *)servantTop->m_Items[v22];
    if ( !(*v21)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v21);
    gameObject = UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
    if ( (gameObject & 1) == 0 )
    {
      v27 = this->fields.servantTop;
      if ( !v27 )
        goto LABEL_90;
      if ( v22 >= v27->max_length )
        goto LABEL_93;
      gameObject = (__int64)v27->m_Items[v22];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_90;
      v56.fields.r = 1.0;
      v56.fields.g = 1.0;
      v56.fields.b = 1.0;
      v56.fields.a = 1.0;
      v28 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v56, 0LL);
      if ( !svtList )
        goto LABEL_90;
      v29 = this->fields.servantTop;
      if ( !v29 )
        goto LABEL_90;
      if ( v22 >= v29->max_length )
        goto LABEL_93;
      gameObject = (__int64)v29->m_Items[v22];
      if ( !gameObject )
        goto LABEL_90;
      v30 = (int)svtList->max_length;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      if ( (__int64)v22 >= v30 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v45 = this->fields.servantTop;
        if ( !v45 )
          goto LABEL_90;
        if ( v22 >= v45->max_length )
          goto LABEL_93;
        gameObject = (__int64)v45->m_Items[v22];
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
        if ( v22 >= svtList->max_length )
          goto LABEL_93;
        v31 = this->fields.servantTop;
        if ( !v31 )
          goto LABEL_90;
        if ( v22 >= v31->max_length )
          goto LABEL_93;
        v32 = m_Items[v22];
        if ( !v32 )
          goto LABEL_90;
        v33 = v21;
        v34 = &v31->obj.klass + v22;
        v35 = (UITexture_o *)v34[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v22], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v32, 1, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v35, DispImageSvtId, DispLimitCount, 0LL);
        v40 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1B886EC(gameObject, v31->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v49 = sub_1B88830(0LL);
            sub_1B886D8(v49, 0LL);
          }
        }
        if ( v22 >= v31->max_length )
          goto LABEL_93;
        v34[4] = (Il2CppClass *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v31 + v23), v40, v38, v39);
        v41 = this->fields.servantTop;
        if ( !v41 )
          goto LABEL_90;
        if ( v22 >= v41->max_length )
          goto LABEL_93;
        gameObject = (__int64)v41->m_Items[v22];
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_90;
        v42 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.svtRoot,
                                0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v42 )
          goto LABEL_90;
        UnityEngine_Transform__set_parent(v42, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = BattleServantData__CheckNotTargetSkill(v32, skillId, 0LL);
        v21 = v33;
        svtList = v52;
        v24 = &qword_4A55000;
        if ( (gameObject & 1) != 0 )
        {
          v57.fields.r = 0.5;
          v57.fields.g = 0.5;
          v57.fields.b = 0.5;
          v57.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v28, v57, 0LL);
          v43 = this->fields.notTargetLabelList;
          if ( !v43 )
            goto LABEL_90;
          if ( v22 >= v43->max_length )
            goto LABEL_93;
          gameObject = (__int64)v43->m_Items[v22];
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_37596684 )
        {
          v44 = this->fields.commandSpellAddFunctionLabels;
          if ( !v44 )
            goto LABEL_90;
          if ( v22 >= v44->max_length )
            goto LABEL_93;
          gameObject = (__int64)v44->m_Items[v22];
          if ( !gameObject )
            goto LABEL_90;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v32,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v47 = this->fields.servantTop;
      if ( !v47 )
        goto LABEL_90;
      if ( v22 >= v47->max_length )
        goto LABEL_93;
      gameObject = (__int64)v47->m_Items[v22];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v48 = (UnityEngine_Transform_o *)gameObject;
      if ( !*((_BYTE *)v24 + 3302) )
      {
        gameObject = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        *((_BYTE *)v24 + 3302) = 1;
      }
      if ( !v48 )
        goto LABEL_90;
      UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v22;
    v23 += 8LL;
    if ( !servantTop )
      goto LABEL_90;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_90:
    sub_1B8880C(gameObject, v10);
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
    sub_1B8880C(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0LL);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E144 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12909/*"Sprite"*/);
    byte_4A5E144 = 1;
  }
  return (System_String_o *)StringLiteral_12909/*"Sprite"*/;
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
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B8880C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


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
  if ( (byte_4A5E142 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E142 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1B8880C(0LL, v7);
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
  this->fields.m_target = (Il2CppObject *)sub_19D1FB4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1F6C;
}


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
  if ( (byte_4A5E147 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E147 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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