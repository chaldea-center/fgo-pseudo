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
    sub_B2C434(this, method);
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

  if ( (byte_4184E33 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, call);
    byte_4184E33 = 1;
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
    sub_B2C434(parentPanel, call);
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

  if ( (byte_4184E39 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184E39 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4184E38 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v3);
    sub_B2C35C(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4184E38 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B2C364(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B2C434(v11, v12);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v10, 2, 0LL, 0LL);
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
  BattleWindowOuterClickComponent_OuterClickCall_o *v8; // x20

  if ( (byte_4184E32 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSelectServantWindow_onCloseButton__, call);
    sub_B2C35C(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4184E32 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B2C434(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B2C42C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v8,
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
    sub_B2C434(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
  {
LABEL_11:
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
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

  if ( (byte_4184E36 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, *(_QWORD *)&uniqeId);
    byte_4184E36 = 1;
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
  sub_B2C2F8(&this->fields.selectCallBack, callback);
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
  __int64 v17; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v20; // w21
  UILabel_o *v21; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v23; // w8
  unsigned int v24; // w20
  BalanceConfig_c *v25; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v28; // x20
  __int64 v29; // x21
  unsigned __int64 v30; // x9
  UnityEngine_Object_o *v31; // x19
  struct UITexture_array *v32; // x8
  WebViewObject_o *Component_WebViewObject; // x25
  int v34; // s0
  struct UITexture_array *v38; // x8
  signed __int64 v39; // x19
  struct UITexture_array *v40; // x24
  BattleServantData_o *v41; // x26
  Il2CppClass **v42; // x22
  UITexture_o *v43; // x27
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w19
  UITexture_o *v46; // x27
  struct UITexture_array *v47; // x8
  UnityEngine_Transform_o *v48; // x27
  struct UILabel_array *v49; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v50; // x8
  struct UITexture_array *v51; // x8
  UnityEngine_Transform_o *transform; // x25
  struct UITexture_array *v53; // x8
  UnityEngine_Transform_o *v54; // x19
  int v55; // s0
  __int64 v58; // x0
  __int64 v59; // x0
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-68h]
  BattleServantData_array *v63; // [xsp+20h] [xbp-60h]
  bool IsQuestClear_25746984; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = svtList;
  if ( (byte_4184E34 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, svtList);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIButton___, v8);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2426/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v13);
    sub_B2C35C(&StringLiteral_2419/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v14);
    byte_4184E34 = 1;
  }
  this->fields.svtList = v6;
  sub_B2C2F8(&this->fields.svtList, v6);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2426/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_94;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_94;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( v20 < max_length )
    {
      v21 = notTargetLabelList->m_Items[v20];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UITexture_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2419/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v21 )
        goto LABEL_94;
      UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_17;
    }
LABEL_97:
    v58 = sub_B2C460(gameObject);
    sub_B2C400(v58, 0LL);
  }
LABEL_17:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_94;
  v23 = commandSpellAddFunctionLabels->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( v24 < v23 )
    {
      gameObject = (UITexture_o *)commandSpellAddFunctionLabels->m_Items[v24];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v23 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_24;
    }
    goto LABEL_97;
  }
LABEL_24:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_25746984 = 0;
  }
  else
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v25->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25746984 = CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (UITexture_o *)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_25746984, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_94;
  m_Items = v6->m_Items;
  v28 = 0LL;
  v29 = 32LL;
  v63 = v6;
  while ( 1 )
  {
    v30 = servantTop->max_length;
    if ( (__int64)v28 >= (int)v30 )
      break;
    if ( v28 >= v30 )
      goto LABEL_97;
    v31 = (UnityEngine_Object_o *)servantTop->m_Items[v28];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UITexture_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v32 = this->fields.servantTop;
      if ( !v32 )
        goto LABEL_94;
      if ( v28 >= v32->max_length )
        goto LABEL_97;
      gameObject = v32->m_Items[v28];
      if ( !gameObject )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)gameObject,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v34, 0LL);
      if ( !v6 )
        goto LABEL_94;
      v38 = this->fields.servantTop;
      if ( !v38 )
        goto LABEL_94;
      if ( v28 >= v38->max_length )
        goto LABEL_97;
      gameObject = v38->m_Items[v28];
      if ( !gameObject )
        goto LABEL_94;
      v39 = (int)v6->max_length;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      if ( (__int64)v28 >= v39 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v51 = this->fields.servantTop;
        if ( !v51 )
          goto LABEL_94;
        if ( v28 >= v51->max_length )
          goto LABEL_97;
        gameObject = v51->m_Items[v28];
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
        if ( v28 >= v6->max_length )
          goto LABEL_97;
        v40 = this->fields.servantTop;
        if ( !v40 )
          goto LABEL_94;
        if ( v28 >= v40->max_length )
          goto LABEL_97;
        v41 = m_Items[v28];
        if ( !v41 )
          goto LABEL_94;
        v42 = &v40->obj.klass + v28;
        v43 = (UITexture_o *)v42[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v28], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v41, 1, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        gameObject = ServantAssetLoadManager__loadStatusFace(v43, DispImageSvtId, DispLimitCount, 0LL);
        v46 = gameObject;
        if ( gameObject )
        {
          gameObject = (UITexture_o *)sub_B2C41C(gameObject, v40->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v59 = sub_B2C454();
            sub_B2C400(v59, 0LL);
          }
        }
        if ( v28 >= v40->max_length )
          goto LABEL_97;
        v42[4] = (Il2CppClass *)v46;
        sub_B2C2F8((char *)v40 + v29, v46);
        v47 = this->fields.servantTop;
        if ( !v47 )
          goto LABEL_94;
        if ( v28 >= v47->max_length )
          goto LABEL_97;
        gameObject = v47->m_Items[v28];
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_94;
        v48 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.svtRoot,
                                      0LL);
        if ( !gameObject )
          goto LABEL_94;
        gameObject = (UITexture_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v48 )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(v48, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = (UITexture_o *)BattleServantData__CheckNotTargetSkill(v41, skillId, 0LL);
        v6 = v63;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gray = UnityEngine_Color__get_gray(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, gray, 0LL);
          v49 = this->fields.notTargetLabelList;
          if ( !v49 )
            goto LABEL_94;
          if ( v28 >= v49->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v49->m_Items[v28];
          if ( !gameObject )
            goto LABEL_94;
          gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_25746984 )
        {
          v50 = this->fields.commandSpellAddFunctionLabels;
          if ( !v50 )
            goto LABEL_94;
          if ( v28 >= v50->max_length )
            goto LABEL_97;
          gameObject = (UITexture_o *)v50->m_Items[v28];
          if ( !gameObject )
            goto LABEL_94;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v41,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v53 = this->fields.servantTop;
      if ( !v53 )
        goto LABEL_94;
      if ( v28 >= v53->max_length )
        goto LABEL_97;
      gameObject = v53->m_Items[v28];
      if ( !gameObject )
        goto LABEL_94;
      gameObject = (UITexture_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
      if ( !v54 )
        goto LABEL_94;
      UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v28;
    v29 += 8LL;
    if ( !servantTop )
      goto LABEL_94;
  }
  gameObject = (UITexture_o *)this->fields.svtRoot;
  if ( !gameObject )
LABEL_94:
    sub_B2C434(gameObject, v17);
  ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))gameObject->klass->vtable._8_set_alpha.method)(
    gameObject,
    gameObject->klass->vtable._9_CalculateFinalAlpha.methodPtr);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184E37 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13000/*"Sprite"*/, method);
    byte_4184E37 = 1;
  }
  return (System_String_o *)StringLiteral_13000/*"Sprite"*/;
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
    sub_B2C434(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__setUseClose(
        BattleSelectServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4184E35 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, flg);
    byte_4184E35 = 1;
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
      sub_B2C434(0LL, v6);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41850C3 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_41850C3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  BattleSelectServantWindow_SelectServantCallBack_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  BattleSelectServantWindow_SelectServantCallBack_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&uniqueId, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)uniqueId, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)uniqueId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)uniqueId, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)uniqueId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)uniqueId, v22);
    goto LABEL_37;
  }
}