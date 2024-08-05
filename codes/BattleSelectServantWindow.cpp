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
    sub_1B64ACC(this, method);
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

  if ( (byte_4A01477 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, call);
    byte_4A01477 = 1;
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
    sub_1B64ACC(parentPanel, call);
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

  if ( (byte_4A0147D & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0147D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A0147C & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v3);
    sub_1B64870(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0147C = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B64888(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1B64ACC(v11, v12);
    CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, 0, 0, v10, 2, 0LL, 0LL);
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

  if ( (byte_4A01476 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleSelectServantWindow_onCloseButton__, call);
    sub_1B64870(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4A01476 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1B64ACC(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B64ABC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1B64ACC(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
LABEL_11:
    sub_1B64AD4(this, *(_QWORD *)&index);
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

  if ( (byte_4A0147A & 1) == 0 )
  {
    sub_1B64870(&Method_BattleSelectServantWindow_SelectServant__, *(_QWORD *)&uniqeId);
    byte_4A0147A = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BattleSelectServantWindow__SetServantData(
        BattleSelectServantWindow_o *this,
        BattleServantData_array *svtList,
        int32_t skillId,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleServantData_array *v6; // x23
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *title_label; // x24
  __int64 gameObject; // x0
  __int64 v17; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v20; // w21
  UILabel_o *v21; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v23; // w8
  unsigned int v24; // w20
  BalanceConfig_c *v25; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  UnityEngine_Object_c **v28; // x21
  unsigned __int64 v29; // x20
  __int64 v30; // x24
  __int64 *v31; // x25
  unsigned __int64 v32; // x9
  UnityEngine_Object_o *v33; // x19
  struct UITexture_array *v34; // x8
  UIButtonColor_o *v35; // x26
  struct UITexture_array *v36; // x8
  signed __int64 v37; // x19
  struct UITexture_array *v38; // x25
  BattleServantData_o *v39; // x27
  UnityEngine_Object_c **v40; // x23
  Il2CppClass **v41; // x21
  UITexture_o *v42; // x28
  int32_t DispImageSvtId; // w22
  int32_t DispLimitCount; // w19
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x28
  struct UITexture_array *v48; // x8
  UnityEngine_Transform_o *v49; // x28
  struct UILabel_array *v50; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v51; // x8
  struct UITexture_array *v52; // x8
  UnityEngine_Transform_o *transform; // x26
  struct UITexture_array *v54; // x8
  UnityEngine_Transform_o *v55; // x26
  __int64 v56; // x0
  BattleServantData_array *v59; // [xsp+18h] [xbp-78h]
  BattleServantData_o **m_Items; // [xsp+20h] [xbp-70h]
  bool IsQuestClear_37290360; // [xsp+2Ch] [xbp-64h]
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = svtList;
  if ( (byte_4A01478 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, svtList);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIButton___, v8);
    sub_1B64870(&CondType_TypeInfo, v9);
    sub_1B64870(&LocalizationManager_TypeInfo, v10);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64870(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1B64870(&StringLiteral_2850/*"BATTLE_DIALOG_SELECT_SERVANT"*/, v13);
    sub_1B64870(&StringLiteral_2843/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, v14);
    byte_4A01478 = 1;
  }
  this->fields.svtList = v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.svtList, (int32_t)v6, skillId, commandSpellId);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_90;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_90;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( v20 < max_length )
    {
      v21 = notTargetLabelList->m_Items[v20];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2843/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0LL);
      if ( !v21 )
        goto LABEL_90;
      UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_15;
    }
LABEL_93:
    sub_1B64AD4(gameObject, v17);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_90;
  v23 = commandSpellAddFunctionLabels->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( v24 < v23 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v24];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v23 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_22;
    }
    goto LABEL_93;
  }
LABEL_22:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_37290360 = 0;
  }
  else
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v25->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_37290360 = CondType__IsQuestClear_37290360(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_37290360, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_90;
  v28 = &UnityEngine_Object_TypeInfo;
  m_Items = v6->m_Items;
  v29 = 0LL;
  v30 = 32LL;
  v31 = &qword_49F9000;
  v59 = v6;
  while ( 1 )
  {
    v32 = servantTop->max_length;
    if ( (__int64)v29 >= (int)v32 )
      break;
    if ( v29 >= v32 )
      goto LABEL_93;
    v33 = (UnityEngine_Object_o *)servantTop->m_Items[v29];
    if ( !(*v28)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v28);
    gameObject = UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
    if ( (gameObject & 1) == 0 )
    {
      v34 = this->fields.servantTop;
      if ( !v34 )
        goto LABEL_90;
      if ( v29 >= v34->max_length )
        goto LABEL_93;
      gameObject = (__int64)v34->m_Items[v29];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_90;
      v63.fields.r = 1.0;
      v63.fields.g = 1.0;
      v63.fields.b = 1.0;
      v63.fields.a = 1.0;
      v35 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v63, 0LL);
      if ( !v6 )
        goto LABEL_90;
      v36 = this->fields.servantTop;
      if ( !v36 )
        goto LABEL_90;
      if ( v29 >= v36->max_length )
        goto LABEL_93;
      gameObject = (__int64)v36->m_Items[v29];
      if ( !gameObject )
        goto LABEL_90;
      v37 = (int)v6->max_length;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      if ( (__int64)v29 >= v37 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v52 = this->fields.servantTop;
        if ( !v52 )
          goto LABEL_90;
        if ( v29 >= v52->max_length )
          goto LABEL_93;
        gameObject = (__int64)v52->m_Items[v29];
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
        if ( v29 >= v6->max_length )
          goto LABEL_93;
        v38 = this->fields.servantTop;
        if ( !v38 )
          goto LABEL_90;
        if ( v29 >= v38->max_length )
          goto LABEL_93;
        v39 = m_Items[v29];
        if ( !v39 )
          goto LABEL_90;
        v40 = v28;
        v41 = &v38->obj.klass + v29;
        v42 = (UITexture_o *)v41[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v29], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v39, 1, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v42, DispImageSvtId, DispLimitCount, 0LL);
        v47 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1B649AC(gameObject, v38->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v56 = sub_1B64AF0(0LL);
            sub_1B64998(v56, 0LL);
          }
        }
        if ( v29 >= v38->max_length )
          goto LABEL_93;
        v41[4] = (Il2CppClass *)v47;
        sub_1B64814((ServantStatusBattleListViewItem_o *)((char *)v38 + v30), v47, v45, v46);
        v48 = this->fields.servantTop;
        if ( !v48 )
          goto LABEL_90;
        if ( v29 >= v48->max_length )
          goto LABEL_93;
        gameObject = (__int64)v48->m_Items[v29];
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_90;
        v49 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.svtRoot,
                                0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v49 )
          goto LABEL_90;
        UnityEngine_Transform__set_parent(v49, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = BattleServantData__CheckNotTargetSkill(v39, skillId, 0LL);
        v28 = v40;
        v6 = v59;
        v31 = &qword_49F9000;
        if ( (gameObject & 1) != 0 )
        {
          v64.fields.r = 0.5;
          v64.fields.g = 0.5;
          v64.fields.b = 0.5;
          v64.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v35, v64, 0LL);
          v50 = this->fields.notTargetLabelList;
          if ( !v50 )
            goto LABEL_90;
          if ( v29 >= v50->max_length )
            goto LABEL_93;
          gameObject = (__int64)v50->m_Items[v29];
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_37290360 )
        {
          v51 = this->fields.commandSpellAddFunctionLabels;
          if ( !v51 )
            goto LABEL_90;
          if ( v29 >= v51->max_length )
            goto LABEL_93;
          gameObject = (__int64)v51->m_Items[v29];
          if ( !gameObject )
            goto LABEL_90;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v39,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v54 = this->fields.servantTop;
      if ( !v54 )
        goto LABEL_90;
      if ( v29 >= v54->max_length )
        goto LABEL_93;
      gameObject = (__int64)v54->m_Items[v29];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v55 = (UnityEngine_Transform_o *)gameObject;
      if ( !*((_BYTE *)v31 + 518) )
      {
        gameObject = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v17);
        *((_BYTE *)v31 + 518) = 1;
      }
      if ( !v55 )
        goto LABEL_90;
      UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v29;
    v30 += 8LL;
    if ( !servantTop )
      goto LABEL_90;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_90:
    sub_1B64ACC(gameObject, v17);
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
    sub_1B64ACC(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0LL);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0147B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12849/*"Sprite"*/, method);
    byte_4A0147B = 1;
  }
  return (System_String_o *)StringLiteral_12849/*"Sprite"*/;
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
  if ( !byte_49F9201 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F9201 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B64ACC(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  if ( (byte_4A01479 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, flg);
    byte_4A01479 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1B64ACC(0LL, v7);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AFF48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AFF00;
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
  if ( (byte_4A0147E & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4A0147E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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