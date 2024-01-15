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
    sub_B170D4();
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
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_40F7549 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, call);
    byte_40F7549 = 1;
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
    v7 = this->fields.classBoardWindowButton;
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
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

  if ( (byte_40F754F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F754F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F754E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v3);
    sub_B16FFC(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F754E = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v14, 2, 0LL, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v12; // x20

  if ( (byte_40F7548 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSelectServantWindow_onCloseButton__, call);
    sub_B16FFC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_40F7548 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v12 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v8,
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleServantData_array *svtList; // x8
  BattleServantData_o *v9; // x8

  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_10;
  if ( notTargetLabelList->max_length <= index )
    goto LABEL_11;
  v5 = this;
  v6 = (UnityEngine_Component_o *)notTargetLabelList->m_Items[index];
  if ( !v6 )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  this = (BattleSelectServantWindow_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  svtList = v5->fields.svtList;
  if ( !svtList )
LABEL_10:
    sub_B170D4();
  if ( svtList->max_length <= index )
  {
LABEL_11:
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  v9 = svtList->m_Items[index];
  if ( !v9 )
    goto LABEL_10;
  BattleSelectServantWindow__SelectServant(v5, v9->fields.uniqueId, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantWindow__SelectServant(
        BattleSelectServantWindow_o *this,
        int32_t uniqeId,
        const MethodInfo *method)
{
  int32_t v5; // w0
  BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x0

  if ( (byte_40F754C & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, *(_QWORD *)&uniqeId);
    byte_40F754C = 1;
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
  sub_B16F98(&this->fields.selectCallBack, callback);
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
  System_String_o *v16; // x0
  UITexture_o *Manager__loadStatusFace; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v22; // w21
  UILabel_o *v23; // x24
  System_String_o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v27; // w8
  unsigned int v28; // w20
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  BalanceConfig_c *v31; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  UnityEngine_GameObject_o *classBoardWindowButton; // x0
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v35; // x20
  __int64 v36; // x21
  unsigned __int64 v37; // x9
  UnityEngine_Object_o *v38; // x19
  struct UITexture_array *v39; // x8
  UnityEngine_Component_o *v40; // x0
  WebViewObject_o *Component_WebViewObject; // x25
  int v42; // s0
  struct UITexture_array *v46; // x8
  UnityEngine_Component_o *v47; // x0
  signed __int64 v48; // x19
  UnityEngine_GameObject_o *v49; // x0
  struct UITexture_array *v50; // x24
  BattleServantData_o *v51; // x26
  Il2CppClass **v52; // x22
  UITexture_o *v53; // x27
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w19
  UITexture_o *v56; // x27
  struct UITexture_array *v57; // x8
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Transform_o *v61; // x27
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  struct UILabel_array *v64; // x8
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  struct CommandSpellAddFunctionLabelComponent_array *v67; // x8
  CommandSpellAddFunctionLabelComponent_o *v68; // x0
  struct UITexture_array *v69; // x8
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Transform_o *v74; // x0
  struct UITexture_array *v75; // x8
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Transform_o *v78; // x19
  int v79; // s0
  struct UIGrid_o *svtRoot; // x0
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-68h]
  BattleServantData_array *v86; // [xsp+20h] [xbp-60h]
  bool IsQuestClear_25438860; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = svtList;
  if ( (byte_40F754A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtList);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIButton___, v8);
    sub_B16FFC(&CondType_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2417/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v13);
    sub_B16FFC(&StringLiteral_2409/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v14);
    byte_40F754A = 1;
  }
  this->fields.svtList = v6;
  sub_B16F98(&this->fields.svtList, v6);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2417/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_94;
  UILabel__set_text(title_label, v16, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_94;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( v22 < max_length )
    {
      v23 = notTargetLabelList->m_Items[v22];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2409/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v23 )
        goto LABEL_94;
      UILabel__set_text(v23, v24, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
      if ( !gameObject )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_17;
    }
LABEL_97:
    sub_B17100(Manager__loadStatusFace, v18, v19);
    sub_B170A0();
  }
LABEL_17:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_94;
  v27 = commandSpellAddFunctionLabels->max_length;
  if ( v27 >= 1 )
  {
    v28 = 0;
    while ( v28 < v27 )
    {
      v29 = (UnityEngine_Component_o *)commandSpellAddFunctionLabels->m_Items[v28];
      if ( !v29 )
        goto LABEL_94;
      v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
      if ( !v30 )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(v30, 0, 0LL);
      v27 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v28 >= v27 )
        goto LABEL_24;
    }
    goto LABEL_97;
  }
LABEL_24:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_25438860 = 0;
  }
  else
  {
    v31 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v31->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25438860 = CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  classBoardWindowButton = this->fields.classBoardWindowButton;
  if ( !classBoardWindowButton )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(classBoardWindowButton, IsQuestClear_25438860, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_94;
  m_Items = v6->m_Items;
  v35 = 0LL;
  v36 = 32LL;
  v86 = v6;
  while ( 1 )
  {
    v37 = servantTop->max_length;
    if ( (__int64)v35 >= (int)v37 )
      break;
    if ( v35 >= v37 )
      goto LABEL_97;
    v38 = (UnityEngine_Object_o *)servantTop->m_Items[v35];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Manager__loadStatusFace = (UITexture_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
    if ( ((unsigned __int8)Manager__loadStatusFace & 1) == 0 )
    {
      v39 = this->fields.servantTop;
      if ( !v39 )
        goto LABEL_94;
      if ( v35 >= v39->max_length )
        goto LABEL_97;
      v40 = (UnityEngine_Component_o *)v39->m_Items[v35];
      if ( !v40 )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v40,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v42, 0LL);
      if ( !v6 )
        goto LABEL_94;
      v46 = this->fields.servantTop;
      if ( !v46 )
        goto LABEL_94;
      if ( v35 >= v46->max_length )
        goto LABEL_97;
      v47 = (UnityEngine_Component_o *)v46->m_Items[v35];
      if ( !v47 )
        goto LABEL_94;
      v48 = (int)v6->max_length;
      v49 = UnityEngine_Component__get_gameObject(v47, 0LL);
      if ( !v49 )
        goto LABEL_94;
      if ( (__int64)v35 >= v48 )
      {
        UnityEngine_GameObject__SetActive(v49, 0, 0LL);
        v69 = this->fields.servantTop;
        if ( !v69 )
          goto LABEL_94;
        if ( v35 >= v69->max_length )
          goto LABEL_97;
        v70 = (UnityEngine_Component_o *)v69->m_Items[v35];
        if ( !v70 )
          goto LABEL_94;
        v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
        if ( !v71 )
          goto LABEL_94;
        transform = UnityEngine_GameObject__get_transform(v71, 0LL);
        v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !v73 )
          goto LABEL_94;
        v74 = UnityEngine_GameObject__get_transform(v73, 0LL);
        if ( !transform )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(transform, v74, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v49, 1, 0LL);
        if ( v35 >= v6->max_length )
          goto LABEL_97;
        v50 = this->fields.servantTop;
        if ( !v50 )
          goto LABEL_94;
        if ( v35 >= v50->max_length )
          goto LABEL_97;
        v51 = m_Items[v35];
        if ( !v51 )
          goto LABEL_94;
        v52 = &v50->obj.klass + v35;
        v53 = (UITexture_o *)v52[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v35], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v51, 1, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v53, DispImageSvtId, DispLimitCount, 0LL);
        v56 = Manager__loadStatusFace;
        if ( Manager__loadStatusFace )
        {
          Manager__loadStatusFace = (UITexture_o *)sub_B170BC(Manager__loadStatusFace, v50->obj.klass->_1.element_class);
          if ( !Manager__loadStatusFace )
          {
            sub_B170F4();
            sub_B170A0();
          }
        }
        if ( v35 >= v50->max_length )
          goto LABEL_97;
        v52[4] = (Il2CppClass *)v56;
        sub_B16F98((char *)v50 + v36, v56);
        v57 = this->fields.servantTop;
        if ( !v57 )
          goto LABEL_94;
        if ( v35 >= v57->max_length )
          goto LABEL_97;
        v58 = (UnityEngine_Component_o *)v57->m_Items[v35];
        if ( !v58 )
          goto LABEL_94;
        v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
        if ( !v59 )
          goto LABEL_94;
        v60 = UnityEngine_GameObject__get_transform(v59, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_94;
        v61 = v60;
        v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !v62 )
          goto LABEL_94;
        v63 = UnityEngine_GameObject__get_transform(v62, 0LL);
        if ( !v61 )
          goto LABEL_94;
        UnityEngine_Transform__set_parent(v61, v63, 0LL);
        Manager__loadStatusFace = (UITexture_o *)BattleServantData__CheckNotTargetSkill(v51, skillId, 0LL);
        v6 = v86;
        if ( ((unsigned __int8)Manager__loadStatusFace & 1) != 0 )
        {
          gray = UnityEngine_Color__get_gray(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)Component_WebViewObject, gray, 0LL);
          v64 = this->fields.notTargetLabelList;
          if ( !v64 )
            goto LABEL_94;
          if ( v35 >= v64->max_length )
            goto LABEL_97;
          v65 = (UnityEngine_Component_o *)v64->m_Items[v35];
          if ( !v65 )
            goto LABEL_94;
          v66 = UnityEngine_Component__get_gameObject(v65, 0LL);
          if ( !v66 )
            goto LABEL_94;
          UnityEngine_GameObject__SetActive(v66, 1, 0LL);
        }
        if ( IsQuestClear_25438860 )
        {
          v67 = this->fields.commandSpellAddFunctionLabels;
          if ( !v67 )
            goto LABEL_94;
          if ( v35 >= v67->max_length )
            goto LABEL_97;
          v68 = v67->m_Items[v35];
          if ( !v68 )
            goto LABEL_94;
          CommandSpellAddFunctionLabelComponent__SetData(v68, v51, commandSpellId, battleData, 0LL);
        }
      }
      v75 = this->fields.servantTop;
      if ( !v75 )
        goto LABEL_94;
      if ( v35 >= v75->max_length )
        goto LABEL_97;
      v76 = (UnityEngine_Component_o *)v75->m_Items[v35];
      if ( !v76 )
        goto LABEL_94;
      v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
      if ( !v77 )
        goto LABEL_94;
      v78 = UnityEngine_GameObject__get_transform(v77, 0LL);
      *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Vector3__get_one(0LL);
      if ( !v78 )
        goto LABEL_94;
      UnityEngine_Transform__set_localScale(v78, *(UnityEngine_Vector3_o *)&v79, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v35;
    v36 += 8LL;
    if ( !servantTop )
      goto LABEL_94;
  }
  svtRoot = this->fields.svtRoot;
  if ( !svtRoot )
LABEL_94:
    sub_B170D4();
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))svtRoot->klass->vtable._8_Reposition.method)(
    svtRoot,
    svtRoot->klass->vtable._9_ResetPosition.methodPtr);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F754D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12944/*"Sprite"*/, method);
    byte_40F754D = 1;
  }
  return (System_String_o *)StringLiteral_12944/*"Sprite"*/;
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
    sub_B170D4();
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

  if ( (byte_40F754B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    byte_40F754B = 1;
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
      sub_B170D4();
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
  sub_B16F98(p_method, object);
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
  if ( (byte_40F71B9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40F71B9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&uniqueId, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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