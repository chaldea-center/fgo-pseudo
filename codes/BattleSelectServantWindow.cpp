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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_42E57B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    byte_42E57B4 = 1;
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
    sub_B5D69C(parentPanel, call);
  }
LABEL_10:
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleSelectServantWindow__EndCloseClassBoardEffectListDialog(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_42E57BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E57BA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42E57B9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E57B9 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v15 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B5D5CC(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v16 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v15, v15[3]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v19, v20);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v18, 2, 0LL, 0LL);
  }
}


void __fastcall BattleSelectServantWindow__Open(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v11; // x20

  if ( (byte_42E57B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSelectServantWindow_onCloseButton__, (_DWORD)call, (_DWORD)method, v3);
    sub_B5D5C4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v6, v7, v8);
    byte_42E57B3 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B5D69C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v11 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B5D694(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v11,
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
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
  {
LABEL_11:
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
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
  __int64 v3; // x3
  int32_t v6; // w0
  BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x0

  if ( (byte_42E57B7 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, uniqeId, (_DWORD)method, v3);
    byte_42E57B7 = 1;
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
      v6 = 12;
    }
    else
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v6 = 10;
    }
    SeManager__PlayCommonSe(v6, 0LL);
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
  sub_B5D560(&this->fields.selectCallBack);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UILabel_o *title_label; // x24
  UITexture_o *gameObject; // x0
  __int64 v31; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v34; // w21
  UILabel_o *v35; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v37; // w8
  unsigned int v38; // w20
  BalanceConfig_c *v39; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v42; // x20
  __int64 v43; // x21
  unsigned __int64 v44; // x9
  UnityEngine_Object_o *v45; // x19
  struct UITexture_array *v46; // x8
  WebViewObject_o *Component_WebViewObject; // x25
  int v48; // s0
  struct UITexture_array *v52; // x8
  signed __int64 v53; // x19
  struct UITexture_array *v54; // x24
  BattleServantData_o *v55; // x26
  Il2CppClass **v56; // x22
  UITexture_o *v57; // x27
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w19
  UITexture_o *v60; // x27
  struct UITexture_array *v61; // x8
  UnityEngine_Transform_o *v62; // x27
  struct UILabel_array *v63; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v64; // x8
  struct UITexture_array *v65; // x8
  UnityEngine_Transform_o *transform; // x25
  struct UITexture_array *v67; // x8
  UnityEngine_Transform_o *v68; // x19
  int v69; // s0
  __int64 v72; // x0
  __int64 v73; // x0
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-68h]
  BattleServantData_array *v77; // [xsp+20h] [xbp-60h]
  bool IsQuestClear_25877652; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = svtList;
  if ( (byte_42E57B5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtList, skillId, *(_QWORD *)&commandSpellId);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIButton___, v8, v9, v10);
    sub_B5D5C4(&CondType_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2466/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2459/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v26, v27, v28);
    byte_42E57B5 = 1;
  }
  this->fields.svtList = v6;
  sub_B5D560(&this->fields.svtList);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_94;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_94;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      v35 = notTargetLabelList->m_Items[v34];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2459/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v35 )
        goto LABEL_94;
      UILabel__set_text(v35, (System_String_o *)gameObject, 0LL);
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_17;
    }
LABEL_97:
    v72 = sub_B5D6C8(gameObject);
    sub_B5D668(v72, 0LL);
  }
LABEL_17:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_94;
  v37 = commandSpellAddFunctionLabels->max_length;
  if ( v37 >= 1 )
  {
    v38 = 0;
    while ( v38 < v37 )
    {
      gameObject = (UITexture_o *)commandSpellAddFunctionLabels->m_Items[v38];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v37 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v38 >= v37 )
        goto LABEL_24;
    }
    goto LABEL_97;
  }
LABEL_24:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_25877652 = 0;
  }
  else
  {
    v39 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v39->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25877652 = CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (UITexture_o *)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_25877652, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_94;
  m_Items = v6->m_Items;
  v42 = 0LL;
  v43 = 32LL;
  v77 = v6;
  while ( 1 )
  {
    v44 = servantTop->max_length;
    if ( (__int64)v42 >= (int)v44 )
      break;
    if ( v42 >= v44 )
      goto LABEL_97;
    v45 = (UnityEngine_Object_o *)servantTop->m_Items[v42];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UITexture_o *)UnityEngine_Object__op_Equality(v45, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v46 = this->fields.servantTop;
      if ( !v46 )
        goto LABEL_94;
      if ( v42 >= v46->max_length )
        goto LABEL_97;
      gameObject = v46->m_Items[v42];
      if ( !gameObject )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)gameObject,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v48, 0LL);
      if ( !v6 )
        goto LABEL_94;
      v52 = this->fields.servantTop;
      if ( !v52 )
        goto LABEL_94;
      if ( v42 >= v52->max_length )
        goto LABEL_97;
      gameObject = v52->m_Items[v42];
      if ( !gameObject )
        goto LABEL_94;
      v53 = (int)v6->max_length;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      if ( (__int64)v42 >= v53 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v65 = this->fields.servantTop;
        if ( !v65 )
          goto LABEL_94;
        if ( v42 >= v65->max_length )
          goto LABEL_97;
        gameObject = v65->m_Items[v42];
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
        if ( v42 >= v6->max_length )
          goto LABEL_97;
        v54 = this->fields.servantTop;
        if ( !v54 )
          goto LABEL_94;
        if ( v42 >= v54->max_length )
          goto LABEL_97;
        v55 = m_Items[v42];
        if ( !v55 )
          goto LABEL_94;
        v56 = &v54->obj.klass + v42;
        v57 = (UITexture_o *)v56[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v42], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v55, 1, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        gameObject = ServantAssetLoadManager__loadStatusFace(v57, DispImageSvtId, DispLimitCount, 0LL);
        v60 = gameObject;
        if ( gameObject )
        {
          gameObject = (UITexture_o *)sub_B5D684(gameObject, v54->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v73 = sub_B5D6BC();
            sub_B5D668(v73, 0LL);
          }
        }
        if ( v42 >= v54->max_length )
          goto LABEL_97;
        v56[4] = (Il2CppClass *)v60;
        sub_B5D560((char *)v54 + v43);
        v61 = this->fields.servantTop;
        if ( !v61 )
          goto LABEL_94;
        if ( v42 >= v61->max_length )
          goto LABEL_97;
        gameObject = v61->m_Items[v42];
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_94;
        v62 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.svtRoot,
                                      0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v62 )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(v62, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = (UITexture_o *)BattleServantData__CheckNotTargetSkill(v55, skillId, 0LL);
        v6 = v77;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gray = UnityEngine_Color__get_gray(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, gray, 0LL);
          v63 = this->fields.notTargetLabelList;
          if ( !v63 )
            goto LABEL_94;
          if ( v42 >= v63->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v63->m_Items[v42];
          if ( !gameObject )
            goto LABEL_94;
          gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_25877652 )
        {
          v64 = this->fields.commandSpellAddFunctionLabels;
          if ( !v64 )
            goto LABEL_94;
          if ( v42 >= v64->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v64->m_Items[v42];
          if ( !gameObject )
            goto LABEL_94;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v55,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v67 = this->fields.servantTop;
      if ( !v67 )
        goto LABEL_94;
      if ( v42 >= v67->max_length )
        goto LABEL_97;
      gameObject = v67->m_Items[v42];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      v68 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_one(0LL);
      if ( !v68 )
        goto LABEL_94;
      UnityEngine_Transform__set_localScale(v68, *(UnityEngine_Vector3_o *)&v69, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v42;
    v43 += 8LL;
    if ( !servantTop )
      goto LABEL_94;
  }
  gameObject = (UITexture_o *)this->fields.svtRoot;
  if ( !gameObject )
LABEL_94:
    sub_B5D69C(gameObject, v31);
  ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))gameObject->klass->vtable._8_set_alpha.method)(
    gameObject,
    gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E57B8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13156/*"Sprite"*/, (_DWORD)method, v2, v3);
    byte_42E57B8 = 1;
  }
  return (System_String_o *)StringLiteral_13156/*"Sprite"*/;
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
    sub_B5D69C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleSelectServantWindow__setUseClose(
        BattleSelectServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  if ( (byte_42E57B6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flg, (_DWORD)method, v3);
    byte_42E57B6 = 1;
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
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  if ( (byte_42E60DB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, uniqueId, (_DWORD)callback, object);
    byte_42E60DB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattleSelectServantWindow_SelectServantCallBack_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&uniqueId, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)uniqueId, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)uniqueId, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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