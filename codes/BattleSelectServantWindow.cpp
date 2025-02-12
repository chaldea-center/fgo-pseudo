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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB7807 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, call);
    byte_4BB7807 = 1;
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
    sub_1C13F80(parentPanel, call);
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

  if ( (byte_4BB780D & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB780D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB780C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__, v3);
    sub_1C13D24(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB780C = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C13D3C(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1C13F80(v11, v12);
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

  if ( (byte_4BB7806 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleSelectServantWindow_onCloseButton__, call);
    sub_1C13D24(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4BB7806 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C13F80(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C13F70(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1C13F80(this, *(_QWORD *)&index);
  if ( svtList->max_length <= index )
LABEL_11:
    sub_1C13F88(this, *(_QWORD *)&index);
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

  if ( (byte_4BB780A & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleSelectServantWindow_SelectServant__, *(_QWORD *)&uniqeId);
    byte_4BB780A = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    if ( uniqeId >= 1 )
      v7 = 10;
    else
      v7 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v6, v7, 0, 0LL);
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
  sub_1C13CC8(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *title_label; // x24
  __int64 gameObject; // x0
  __int64 v19; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v22; // w21
  UILabel_o *v23; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v25; // w8
  unsigned int v26; // w20
  BalanceConfig_c *v27; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  UnityEngine_Object_c **v30; // x21
  unsigned __int64 v31; // x20
  __int64 v32; // x24
  __int64 *v33; // x25
  unsigned __int64 v34; // x9
  UnityEngine_Object_o *v35; // x19
  struct UITexture_array *v36; // x8
  UIButtonColor_o *v37; // x26
  struct UITexture_array *v38; // x8
  signed __int64 v39; // x19
  struct UITexture_array *v40; // x25
  BattleServantData_o *v41; // x27
  UnityEngine_Object_c **v42; // x23
  Il2CppClass **v43; // x21
  UITexture_o *v44; // x28
  int32_t DispImageSvtId; // w22
  int32_t DispLimitCount; // w19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x28
  struct UITexture_array *v54; // x8
  UnityEngine_Transform_o *v55; // x28
  struct UILabel_array *v56; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v57; // x8
  struct UITexture_array *v58; // x8
  UnityEngine_Transform_o *transform; // x26
  struct UITexture_array *v60; // x8
  UnityEngine_Transform_o *v61; // x26
  __int64 v62; // x0
  BattleServantData_array *v65; // [xsp+18h] [xbp-78h]
  BattleServantData_o **m_Items; // [xsp+20h] [xbp-70h]
  bool IsQuestClear_38735352; // [xsp+2Ch] [xbp-64h]
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = svtList;
  if ( (byte_4BB7808 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, svtList);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIButton___, v10);
    sub_1C13D24(&CondType_TypeInfo, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v14);
    sub_1C13D24(&StringLiteral_2898/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, v15);
    sub_1C13D24(&StringLiteral_2891/*"BATTLE_DIALOG_INTERRUPTION_MESSAGE"*/, v16);
    byte_4BB7808 = 1;
  }
  this->fields.svtList = v8;
  sub_1C13CC8(
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_90;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0LL);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_90;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( v22 < max_length )
    {
      v23 = notTargetLabelList->m_Items[v22];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_DIALOG_INTERRUPTION_MESSAGE"*/, 0LL);
      if ( !v23 )
        goto LABEL_90;
      UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_15;
    }
LABEL_93:
    sub_1C13F88(gameObject, v19);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_90;
  v25 = commandSpellAddFunctionLabels->max_length;
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( v26 < v25 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v26];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v25 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v26 >= v25 )
        goto LABEL_22;
    }
    goto LABEL_93;
  }
LABEL_22:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_38735352 = 0;
  }
  else
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v27->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_38735352 = CondType__IsQuestClear_38735352(ClassBoardReleaseQuestId, -1, 0, 0LL);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_38735352, 0LL);
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_90;
  v30 = &UnityEngine_Object_TypeInfo;
  m_Items = v8->m_Items;
  v31 = 0LL;
  v32 = 32LL;
  v33 = &qword_4BAE000;
  v65 = v8;
  while ( 1 )
  {
    v34 = servantTop->max_length;
    if ( (__int64)v31 >= (int)v34 )
      break;
    if ( v31 >= v34 )
      goto LABEL_93;
    v35 = (UnityEngine_Object_o *)servantTop->m_Items[v31];
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    gameObject = UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
    if ( (gameObject & 1) == 0 )
    {
      v36 = this->fields.servantTop;
      if ( !v36 )
        goto LABEL_90;
      if ( v31 >= v36->max_length )
        goto LABEL_93;
      gameObject = (__int64)v36->m_Items[v31];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_90;
      v69.fields.r = 1.0;
      v69.fields.g = 1.0;
      v69.fields.b = 1.0;
      v69.fields.a = 1.0;
      v37 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v69, 0LL);
      if ( !v8 )
        goto LABEL_90;
      v38 = this->fields.servantTop;
      if ( !v38 )
        goto LABEL_90;
      if ( v31 >= v38->max_length )
        goto LABEL_93;
      gameObject = (__int64)v38->m_Items[v31];
      if ( !gameObject )
        goto LABEL_90;
      v39 = (int)v8->max_length;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      if ( (__int64)v31 >= v39 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v58 = this->fields.servantTop;
        if ( !v58 )
          goto LABEL_90;
        if ( v31 >= v58->max_length )
          goto LABEL_93;
        gameObject = (__int64)v58->m_Items[v31];
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
        if ( v31 >= v8->max_length )
          goto LABEL_93;
        v40 = this->fields.servantTop;
        if ( !v40 )
          goto LABEL_90;
        if ( v31 >= v40->max_length )
          goto LABEL_93;
        v41 = m_Items[v31];
        if ( !v41 )
          goto LABEL_90;
        v42 = v30;
        v43 = &v40->obj.klass + v31;
        v44 = (UITexture_o *)v43[4];
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v31], 0LL);
        DispLimitCount = BattleServantData__getDispLimitCount(v41, 1, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v44, DispImageSvtId, DispLimitCount, 0LL);
        v53 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1C13E60(gameObject, v40->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v62 = sub_1C13FA4(0LL);
            sub_1C13E4C(v62, 0LL);
          }
        }
        if ( v31 >= v40->max_length )
          goto LABEL_93;
        v43[4] = (Il2CppClass *)v53;
        sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v40 + v32), v53, v47, v48, v49, v50, v51, v52);
        v54 = this->fields.servantTop;
        if ( !v54 )
          goto LABEL_90;
        if ( v31 >= v54->max_length )
          goto LABEL_93;
        gameObject = (__int64)v54->m_Items[v31];
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_90;
        v55 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.svtRoot,
                                0LL);
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !v55 )
          goto LABEL_90;
        UnityEngine_Transform__set_parent(v55, (UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = BattleServantData__CheckNotTargetSkill(v41, skillId, 0LL);
        v30 = v42;
        v8 = v65;
        v33 = &qword_4BAE000;
        if ( (gameObject & 1) != 0 )
        {
          v70.fields.r = 0.5;
          v70.fields.g = 0.5;
          v70.fields.b = 0.5;
          v70.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v37, v70, 0LL);
          v56 = this->fields.notTargetLabelList;
          if ( !v56 )
            goto LABEL_90;
          if ( v31 >= v56->max_length )
            goto LABEL_93;
          gameObject = (__int64)v56->m_Items[v31];
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( IsQuestClear_38735352 )
        {
          v57 = this->fields.commandSpellAddFunctionLabels;
          if ( !v57 )
            goto LABEL_90;
          if ( v31 >= v57->max_length )
            goto LABEL_93;
          gameObject = (__int64)v57->m_Items[v31];
          if ( !gameObject )
            goto LABEL_90;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v41,
            commandSpellId,
            battleData,
            0LL);
        }
      }
      v60 = this->fields.servantTop;
      if ( !v60 )
        goto LABEL_90;
      if ( v31 >= v60->max_length )
        goto LABEL_93;
      gameObject = (__int64)v60->m_Items[v31];
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v61 = (UnityEngine_Transform_o *)gameObject;
      if ( !*((_BYTE *)v33 + 3494) )
      {
        gameObject = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v19);
        *((_BYTE *)v33 + 3494) = 1;
      }
      if ( !v61 )
        goto LABEL_90;
      UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    servantTop = this->fields.servantTop;
    ++v31;
    v32 += 8LL;
    if ( !servantTop )
      goto LABEL_90;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_90:
    sub_1C13F80(gameObject, v19);
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
    sub_1C13F80(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0LL);
}


System_String_o *__fastcall BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB780B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13139/*"Spitfire"*/, method);
    byte_4BB780B = 1;
  }
  return (System_String_o *)StringLiteral_13139/*"Spitfire"*/;
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
  if ( !byte_4BAEDA1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v4);
    byte_4BAEDA1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C13F80(gameObject, v4);
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
  if ( (byte_4BB7809 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, flg);
    byte_4BB7809 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1C13F80(0LL, v7);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A58C80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A58C38;
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
  if ( (byte_4BB780E & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4BB780E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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