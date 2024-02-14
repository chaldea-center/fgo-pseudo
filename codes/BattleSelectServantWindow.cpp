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
    sub_B0D97C(this);
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

  if ( (byte_4211D62 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, call);
    byte_4211D62 = 1;
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
    sub_B0D97C(parentPanel);
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
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4211D68 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211D68 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4211D67 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v3);
    sub_B0D8A4(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4211D67 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B0D8AC(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B0D97C(v13);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v12, 2, 0LL, 0LL);
  }
}


void __fastcall BattleSelectServantWindow__Open(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowOuterClickComponent_OuterClickCall_o *v10; // x20

  if ( (byte_4211D61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSelectServantWindow_onCloseButton__, call);
    sub_B0D8A4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4211D61 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v10 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B0D974(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v8,
                                                              v9);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v10,
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
    sub_B0D97C(this);
  if ( svtList->max_length <= index )
  {
LABEL_11:
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
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
  int32_t v5; // w0
  BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x0

  if ( (byte_4211D65 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, *(_QWORD *)&uniqeId);
    byte_4211D65 = 1;
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
  sub_B0D840(&this->fields.selectCallBack, callback);
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
  BattleServantData_array *v6; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *title_label; // x24
  UITexture_o *gameObject; // x0
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v19; // w21
  UILabel_o *v20; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v22; // w8
  unsigned int v23; // w20
  BalanceConfig_c *v24; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v27; // x20
  __int64 v28; // x21
  unsigned __int64 v29; // x9
  UnityEngine_Object_o *v30; // x19
  struct UITexture_array *v31; // x8
  WebViewObject_o *Component_WebViewObject; // x25
  int v33; // s0
  struct UITexture_array *v37; // x8
  signed __int64 v38; // x19
  struct UITexture_array *v39; // x24
  BattleServantData_o *v40; // x26
  Il2CppClass **v41; // x22
  UITexture_o *v42; // x27
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w19
  UITexture_o *v45; // x27
  struct UITexture_array *v46; // x8
  UnityEngine_Transform_o *v47; // x27
  struct UILabel_array *v48; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v49; // x8
  struct UITexture_array *v50; // x8
  UnityEngine_Transform_o *transform; // x25
  struct UITexture_array *v52; // x8
  UnityEngine_Transform_o *v53; // x19
  int v54; // s0
  __int64 v57; // x0
  __int64 v58; // x0
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-68h]
  BattleServantData_array *v62; // [xsp+20h] [xbp-60h]
  bool IsQuestClear_25410236; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = svtList;
  if ( (byte_4211D63 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtList);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIButton___, v8);
    sub_B0D8A4(&CondType_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_2436/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v13);
    sub_B0D8A4(&StringLiteral_2429/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v14);
    byte_4211D63 = 1;
  }
  this->fields.svtList = v6;
  sub_B0D840(&this->fields.svtList, v6);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_94;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_94;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( v19 < max_length )
    {
      v20 = notTargetLabelList->m_Items[v19];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2429/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v20 )
        goto LABEL_94;
      UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_17;
    }
LABEL_97:
    v57 = sub_B0D9A8(gameObject);
    sub_B0D948(v57, 0LL);
  }
LABEL_17:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_94;
  v22 = commandSpellAddFunctionLabels->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( v23 < v22 )
    {
      gameObject = (UITexture_o *)commandSpellAddFunctionLabels->m_Items[v23];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v22 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v23 >= v22 )
        goto LABEL_24;
    }
    goto LABEL_97;
  }
LABEL_24:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_25410236 = 0;
  }
  else
  {
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v24->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25410236 = CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (UITexture_o *)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_25410236, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_94;
  m_Items = v6->m_Items;
  v27 = 0LL;
  v28 = 32LL;
  v62 = v6;
  while ( 1 )
  {
    v29 = servantTop->max_length;
    if ( (__int64)v27 >= (int)v29 )
      break;
    if ( v27 >= v29 )
      goto LABEL_97;
    v30 = (UnityEngine_Object_o *)servantTop->m_Items[v27];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UITexture_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v31 = this->fields.servantTop;
      if ( !v31 )
        goto LABEL_94;
      if ( v27 >= v31->max_length )
        goto LABEL_97;
      gameObject = v31->m_Items[v27];
      if ( !gameObject )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)gameObject,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v33, 0LL);
      if ( !v6 )
        goto LABEL_94;
      v37 = this->fields.servantTop;
      if ( !v37 )
        goto LABEL_94;
      if ( v27 >= v37->max_length )
        goto LABEL_97;
      gameObject = v37->m_Items[v27];
      if ( !gameObject )
        goto LABEL_94;
      v38 = (int)v6->max_length;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      if ( (__int64)v27 >= v38 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v50 = this->fields.servantTop;
        if ( !v50 )
          goto LABEL_94;
        if ( v27 >= v50->max_length )
          goto LABEL_97;
        gameObject = v50->m_Items[v27];
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
        if ( v27 >= v6->max_length )
          goto LABEL_97;
        v39 = this->fields.servantTop;
        if ( !v39 )
          goto LABEL_94;
        if ( v27 >= v39->max_length )
          goto LABEL_97;
        v40 = m_Items[v27];
        if ( !v40 )
          goto LABEL_94;
        v41 = &v39->obj.klass + v27;
        v42 = (UITexture_o *)v41[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v27], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v40, 1, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        gameObject = ServantAssetLoadManager__loadStatusFace(v42, DispImageSvtId, DispLimitCount, 0LL);
        v45 = gameObject;
        if ( gameObject )
        {
          gameObject = (UITexture_o *)sub_B0D964(gameObject, v39->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v58 = sub_B0D99C();
            sub_B0D948(v58, 0LL);
          }
        }
        if ( v27 >= v39->max_length )
          goto LABEL_97;
        v41[4] = (Il2CppClass *)v45;
        sub_B0D840((char *)v39 + v28, v45);
        v46 = this->fields.servantTop;
        if ( !v46 )
          goto LABEL_94;
        if ( v27 >= v46->max_length )
          goto LABEL_97;
        gameObject = v46->m_Items[v27];
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_94;
        v47 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.svtRoot,
                                      0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v47 )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(v47, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = (UITexture_o *)BattleServantData__CheckNotTargetSkill(v40, skillId, 0LL);
        v6 = v62;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gray = UnityEngine_Color__get_gray(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, gray, 0LL);
          v48 = this->fields.notTargetLabelList;
          if ( !v48 )
            goto LABEL_94;
          if ( v27 >= v48->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v48->m_Items[v27];
          if ( !gameObject )
            goto LABEL_94;
          gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_25410236 )
        {
          v49 = this->fields.commandSpellAddFunctionLabels;
          if ( !v49 )
            goto LABEL_94;
          if ( v27 >= v49->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v49->m_Items[v27];
          if ( !gameObject )
            goto LABEL_94;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v40,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v52 = this->fields.servantTop;
      if ( !v52 )
        goto LABEL_94;
      if ( v27 >= v52->max_length )
        goto LABEL_97;
      gameObject = v52->m_Items[v27];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      v53 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_one(0LL);
      if ( !v53 )
        goto LABEL_94;
      UnityEngine_Transform__set_localScale(v53, *(UnityEngine_Vector3_o *)&v54, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v27;
    v28 += 8LL;
    if ( !servantTop )
      goto LABEL_94;
  }
  gameObject = (UITexture_o *)this->fields.svtRoot;
  if ( !gameObject )
LABEL_94:
    sub_B0D97C(gameObject);
  ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))gameObject->klass->vtable._8_set_alpha.method)(
    gameObject,
    gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211D66 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13044/*"Sprite"*/, method);
    byte_4211D66 = 1;
  }
  return (System_String_o *)StringLiteral_13044/*"Sprite"*/;
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
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B0D97C(gameObject);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__setUseClose(
        BattleSelectServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cnancelButton; // x21
  UnityEngine_Collider_o *v6; // x0

  if ( (byte_4211D64 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flg);
    byte_4211D64 = 1;
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
    v6 = this->fields.cnancelButton;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_Collider__set_enabled(v6, flg, 0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211EEF & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4211EEF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow_SelectServantCallBack__Invoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BattleSelectServantWindow_SelectServantCallBack_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  BattleSelectServantWindow_SelectServantCallBack_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BattleSelectServantWindow_SelectServantCallBack_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BattleSelectServantWindow_SelectServantCallBack_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&uniqueId, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)uniqueId, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)uniqueId, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)uniqueId, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)uniqueId,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)uniqueId, v21);
    goto LABEL_37;
  }
}