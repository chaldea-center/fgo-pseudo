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
    sub_B7076C(this, method);
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

  if ( (byte_434ECA4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECA4 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    parentPanel = this->fields.classBoardWindowButton;
    if ( parentPanel )
    {
      UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B7076C(parentPanel, call);
  }
LABEL_10:
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleSelectServantWindow__EndCloseClassBoardEffectListDialog(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_434ECAA & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434ECAA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_434ECA9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_B70694(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434ECA9 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B7069C(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B7076C(v8, v9);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v7, 2, 0LL, 0LL);
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

  if ( (byte_434ECA3 & 1) == 0 )
  {
    sub_B70694(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_B70694(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_434ECA3 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B7076C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B70764(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  __int64 v9; // x0

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
    sub_B7076C(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
  {
LABEL_11:
    v9 = sub_B70798(this);
    sub_B70738(v9, 0LL);
  }
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
  int32_t v5; // w0
  BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x0

  if ( (byte_434ECA7 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_434ECA7 = 1;
  }
  if ( !this->fields.isSelected )
  {
    if ( uniqeId < 1 )
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v5 = 12;
    }
    else
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v5 = 10;
    }
    SeManager__PlayCommonSe(v5, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
      BattleSelectServantWindow_SelectServantCallBack__Invoke(selectCallBack, uniqeId, 0LL);
  }
}


void __fastcall BattleSelectServantWindow__SetCallBack(
        BattleSelectServantWindow_o *this,
        BattleSelectServantWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.selectCallBack = callback;
  sub_B70630(&this->fields.selectCallBack);
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
  UILabel_o *title_label; // x24
  UITexture_o *gameObject; // x0
  __int64 v10; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v13; // w21
  UILabel_o *v14; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v16; // w8
  unsigned int v17; // w20
  BalanceConfig_c *v18; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v21; // x20
  __int64 v22; // x21
  unsigned __int64 v23; // x9
  UnityEngine_Object_o *v24; // x19
  struct UITexture_array *v25; // x8
  WebViewObject_o *Component_WebViewObject; // x25
  int v27; // s0
  struct UITexture_array *v31; // x8
  signed __int64 v32; // x19
  struct UITexture_array *v33; // x24
  BattleServantData_o *v34; // x26
  Il2CppClass **v35; // x22
  UITexture_o *v36; // x27
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w19
  UITexture_o *v39; // x27
  struct UITexture_array *v40; // x8
  UnityEngine_Transform_o *v41; // x27
  struct UILabel_array *v42; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v43; // x8
  struct UITexture_array *v44; // x8
  UnityEngine_Transform_o *transform; // x25
  struct UITexture_array *v46; // x8
  UnityEngine_Transform_o *v47; // x19
  int v48; // s0
  __int64 v51; // x0
  __int64 v52; // x0
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-68h]
  BattleServantData_array *v56; // [xsp+20h] [xbp-60h]
  bool IsQuestClear_24296868; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434ECA5 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_2473/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_B70694(&StringLiteral_2466/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_434ECA5 = 1;
  }
  this->fields.svtList = svtList;
  sub_B70630(&this->fields.svtList);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_94;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_94;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = notTargetLabelList->m_Items[v13];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v14 )
        goto LABEL_94;
      UILabel__set_text(v14, (System_String_o *)gameObject, 0LL);
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_17;
    }
LABEL_97:
    v51 = sub_B70798(gameObject);
    sub_B70738(v51, 0LL);
  }
LABEL_17:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_94;
  v16 = commandSpellAddFunctionLabels->max_length;
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < v16 )
    {
      gameObject = (UITexture_o *)commandSpellAddFunctionLabels->m_Items[v17];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v16 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v17 >= v16 )
        goto LABEL_24;
    }
    goto LABEL_97;
  }
LABEL_24:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_24296868 = 0;
  }
  else
  {
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_24296868 = CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (UITexture_o *)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_24296868, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_94;
  m_Items = svtList->m_Items;
  v21 = 0LL;
  v22 = 32LL;
  v56 = svtList;
  while ( 1 )
  {
    v23 = servantTop->max_length;
    if ( (__int64)v21 >= (int)v23 )
      break;
    if ( v21 >= v23 )
      goto LABEL_97;
    v24 = (UnityEngine_Object_o *)servantTop->m_Items[v21];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UITexture_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v25 = this->fields.servantTop;
      if ( !v25 )
        goto LABEL_94;
      if ( v21 >= v25->max_length )
        goto LABEL_97;
      gameObject = v25->m_Items[v21];
      if ( !gameObject )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)gameObject,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v27, 0LL);
      if ( !svtList )
        goto LABEL_94;
      v31 = this->fields.servantTop;
      if ( !v31 )
        goto LABEL_94;
      if ( v21 >= v31->max_length )
        goto LABEL_97;
      gameObject = v31->m_Items[v21];
      if ( !gameObject )
        goto LABEL_94;
      v32 = (int)svtList->max_length;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      if ( (__int64)v21 >= v32 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v44 = this->fields.servantTop;
        if ( !v44 )
          goto LABEL_94;
        if ( v21 >= v44->max_length )
          goto LABEL_97;
        gameObject = v44->m_Items[v21];
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !transform )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        if ( v21 >= svtList->max_length )
          goto LABEL_97;
        v33 = this->fields.servantTop;
        if ( !v33 )
          goto LABEL_94;
        if ( v21 >= v33->max_length )
          goto LABEL_97;
        v34 = m_Items[v21];
        if ( !v34 )
          goto LABEL_94;
        v35 = &v33->obj.klass + v21;
        v36 = (UITexture_o *)v35[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v21], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v34, 1, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        gameObject = ServantAssetLoadManager__loadStatusFace(v36, DispImageSvtId, DispLimitCount, 0LL);
        v39 = gameObject;
        if ( gameObject )
        {
          gameObject = (UITexture_o *)sub_B70754(gameObject, v33->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v52 = sub_B7078C();
            sub_B70738(v52, 0LL);
          }
        }
        if ( v21 >= v33->max_length )
          goto LABEL_97;
        v35[4] = (Il2CppClass *)v39;
        sub_B70630((char *)v33 + v22);
        v40 = this->fields.servantTop;
        if ( !v40 )
          goto LABEL_94;
        if ( v21 >= v40->max_length )
          goto LABEL_97;
        gameObject = v40->m_Items[v21];
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_94;
        v41 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.svtRoot,
                                      0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v41 )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = (UITexture_o *)BattleServantData__CheckNotTargetSkill(v34, skillId, 0LL);
        svtList = v56;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gray = UnityEngine_Color__get_gray(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, gray, 0LL);
          v42 = this->fields.notTargetLabelList;
          if ( !v42 )
            goto LABEL_94;
          if ( v21 >= v42->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v42->m_Items[v21];
          if ( !gameObject )
            goto LABEL_94;
          gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_24296868 )
        {
          v43 = this->fields.commandSpellAddFunctionLabels;
          if ( !v43 )
            goto LABEL_94;
          if ( v21 >= v43->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v43->m_Items[v21];
          if ( !gameObject )
            goto LABEL_94;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v34,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v46 = this->fields.servantTop;
      if ( !v46 )
        goto LABEL_94;
      if ( v21 >= v46->max_length )
        goto LABEL_97;
      gameObject = v46->m_Items[v21];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
      if ( !v47 )
        goto LABEL_94;
      UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v48, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v21;
    v22 += 8LL;
    if ( !servantTop )
      goto LABEL_94;
  }
  gameObject = (UITexture_o *)this->fields.svtRoot;
  if ( !gameObject )
LABEL_94:
    sub_B7076C(gameObject, v10);
  ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))gameObject->klass->vtable._8_set_alpha.method)(
    gameObject,
    gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_434ECA8 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13179/*"Sprite"*/);
    byte_434ECA8 = 1;
  }
  return (System_String_o *)StringLiteral_13179/*"Sprite"*/;
}


void __fastcall BattleSelectServantWindow__onCloseButton(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectServantWindow__SelectServant(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__setInitialPos(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B7076C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleSelectServantWindow__setUseClose(
        BattleSelectServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_434ECA6 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECA6 = 1;
  }
  this->fields.useClose = flg;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0LL, 0LL) )
  {
    v7 = this->fields.cnancelButton;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_Collider__set_enabled(v7, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow_SelectServantCallBack___ctor(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleSelectServantWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = uniqueId;
  if ( (byte_434F83D & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434F83D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow_SelectServantCallBack__Invoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BattleSelectServantWindow_SelectServantCallBack_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  BattleSelectServantWindow_SelectServantCallBack_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  BattleSelectServantWindow_SelectServantCallBack_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BattleSelectServantWindow_SelectServantCallBack_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&uniqueId);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)uniqueId, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, (unsigned int)uniqueId, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)uniqueId, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)uniqueId,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)uniqueId, v20);
    goto LABEL_37;
  }
}