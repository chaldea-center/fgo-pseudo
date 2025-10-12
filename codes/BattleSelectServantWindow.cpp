void BattleSelectServantWindow___ctor(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


void BattleSelectServantWindow__Awake(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x8
  int max_length; // w8
  int v4; // w9
  struct BranchSkillLabelComponent_array *branchSkillLabelComponents; // x8
  int v6; // w8
  int v7; // w9

  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_8;
  max_length = commandSpellAddFunctionLabels->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
  branchSkillLabelComponents = this->fields.branchSkillLabelComponents;
  if ( !branchSkillLabelComponents )
LABEL_8:
    sub_1C32E7C(this);
  v6 = branchSkillLabelComponents->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < v6 );
}


void BattleSelectServantWindow__Close(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_4C3AFDA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AFDA = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0, 0) )
  {
    parentPanel = this->fields.classBoardWindowButton;
    if ( parentPanel )
    {
      UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C32E7C(parentPanel);
  }
LABEL_9:
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleSelectServantWindow__EndCloseClassBoardEffectListDialog(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4C3AFE0 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3AFE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  this->fields.isOpenClassBoardEffectListDialog = 0;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
}


void BattleSelectServantWindow__OnClickClassBoardWindow(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  UnityEngine_Object_o *battleData; // x20
  bool v7; // w0
  System_Collections_ICollection_o *ServantListIfSwitchPartyBattle; // x20
  BattleData_o *classStatisticsInfos; // x0
  BattleServantData_array *battleServantList; // x22
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_4C3AFDF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_1C32C20(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_1C32C20(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3AFDF = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    battleData = (UnityEngine_Object_o *)this->fields.battleData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(battleData, 0, 0);
    ServantListIfSwitchPartyBattle = 0;
    if ( !v7 )
    {
      classStatisticsInfos = this->fields.battleData;
      if ( !classStatisticsInfos )
        goto LABEL_23;
      ServantListIfSwitchPartyBattle = (System_Collections_ICollection_o *)BattleData__GetServantListIfSwitchPartyBattle(
                                                                             classStatisticsInfos,
                                                                             0);
    }
    if ( BasicHelper__IsNullOrEmpty(ServantListIfSwitchPartyBattle, 0) )
      battleServantList = 0;
    else
      battleServantList = (BattleServantData_array *)ServantListIfSwitchPartyBattle;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = (BattleData_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(
                                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                                               0);
    if ( Instance )
    {
      CommonUI__OpenClassBoardEffectListDialog(
        (CommonUI_o *)Instance,
        1,
        0,
        0,
        v12,
        2,
        0,
        0,
        0,
        (ClassStatisticsInfo_array *)classStatisticsInfos,
        battleServantList,
        0);
      return;
    }
LABEL_23:
    sub_1C32E7C(classStatisticsInfos);
  }
}


void BattleSelectServantWindow__Open(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v7; // x20

  if ( (byte_4C3AFD9 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_1C32C20(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C3AFD9 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C32E6C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSelectServantWindow_onCloseButton__,
    0);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack((BattleWindowOuterClickManagerComponent_o *)this, v7, 0);
}


void BattleSelectServantWindow__SelectA(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 0, v2);
}


void BattleSelectServantWindow__SelectB(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 1, v2);
}


void BattleSelectServantWindow__SelectC(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectServantWindow__SelectCommon(this, 2, v2);
}


void BattleSelectServantWindow__SelectCommon(
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
  if ( LODWORD(notTargetLabelList->max_length) <= index )
    goto LABEL_11;
  v5 = this;
  this = (BattleSelectServantWindow_o *)notTargetLabelList->m_Items[index];
  if ( !this )
    goto LABEL_10;
  this = (BattleSelectServantWindow_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_10;
  this = (BattleSelectServantWindow_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  svtList = v5->fields.svtList;
  if ( !svtList )
LABEL_10:
    sub_1C32E7C(this);
  if ( LODWORD(svtList->max_length) <= index )
LABEL_11:
    sub_1C32E84(this);
  v8 = svtList->m_Items[index];
  if ( !v8 )
    goto LABEL_10;
  BattleSelectServantWindow__SelectServant(v5, v8->fields.uniqueId, v6);
}


void BattleSelectServantWindow__SelectServant(
        BattleSelectServantWindow_o *this,
        int32_t uniqeId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x8

  if ( (byte_4C3AFDD & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectServantWindow_SelectServant__);
    byte_4C3AFDD = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    if ( uniqeId >= 1 )
      v7 = 10;
    else
      v7 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v6, v7, 0, 0);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))selectCallBack->fields.invoke_impl)(
        selectCallBack->fields.method_code,
        (unsigned int)uniqeId,
        selectCallBack->fields.method);
  }
}


void BattleSelectServantWindow__SetCallBack(
        BattleSelectServantWindow_o *this,
        BattleSelectServantWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selectCallBack = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectServantWindow__SetServantData(
        BattleSelectServantWindow_o *this,
        BattleServantData_array *svtList,
        BattleSkillInfoData_o *skillInfo,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *v6; // x29
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UILabel_o *title_label; // x20
  __int64 gameObject; // x0
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v15; // w20
  UILabel_o *v16; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v18; // w8
  unsigned int v19; // w20
  struct BranchSkillLabelComponent_array *branchSkillLabelComponents; // x19
  int v21; // w8
  unsigned int v22; // w20
  BalanceConfig_c *v23; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v26; // x24
  __int64 v27; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v29; // x19
  struct UITexture_array *v30; // x8
  UIButtonColor_o *v31; // x27
  struct UITexture_array *v32; // x8
  signed __int64 v33; // x19
  unsigned int *v34; // x21
  BattleServantData_o *v35; // x28
  unsigned int *v36; // x25
  BattleSkillInfoData_o *v37; // x23
  UITexture_o *v38; // x29
  int32_t DispImageSvtId; // w20
  int32_t DispLimitCount; // w19
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x29
  struct UITexture_array *v44; // x8
  UnityEngine_Transform_o *v45; // x29
  struct BranchSkillLabelComponent_array *v46; // x8
  struct UILabel_array *v47; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v48; // x8
  struct UITexture_array *v49; // x8
  UnityEngine_Transform_o *transform; // x20
  struct UITexture_array *v51; // x8
  UnityEngine_Transform_o *v52; // x20
  __int64 v53; // x0
  BattleServantData_array *v56; // [xsp+10h] [xbp-80h]
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-78h]
  bool IsQuestClear_40225464; // [xsp+20h] [xbp-70h]
  int32_t skillId; // [xsp+24h] [xbp-6Ch]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = skillInfo;
  if ( (byte_4C3AFDB & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2751/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_1C32C20(&StringLiteral_2744/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_4C3AFDB = 1;
  }
  battleBranchSkillInfo = 0;
  this->fields.svtList = svtList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.svtList,
    (int32_t)svtList,
    (int32_t)skillInfo,
    *(const MethodInfo **)&commandSpellId);
  this->fields.battleData = battleData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)battleData, v9, v10);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2751/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0);
  if ( !title_label )
    goto LABEL_108;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_108;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = notTargetLabelList->m_Items[v15];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2744/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0);
      if ( !v16 )
        goto LABEL_108;
      UILabel__set_text(v16, (System_String_o *)gameObject, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_15;
    }
LABEL_111:
    sub_1C32E84(gameObject);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_108;
  v18 = commandSpellAddFunctionLabels->max_length;
  if ( v18 >= 1 )
  {
    v19 = 0;
    while ( v19 < v18 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v19];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v18 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v19 >= v18 )
        goto LABEL_22;
    }
    goto LABEL_111;
  }
LABEL_22:
  branchSkillLabelComponents = this->fields.branchSkillLabelComponents;
  if ( !branchSkillLabelComponents )
    goto LABEL_108;
  v21 = branchSkillLabelComponents->max_length;
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( v22 < v21 )
    {
      gameObject = (__int64)branchSkillLabelComponents->m_Items[v22];
      if ( !gameObject )
        goto LABEL_108;
      BranchSkillLabelComponent__SetActive((BranchSkillLabelComponent_o *)gameObject, 0, 0);
      v21 = branchSkillLabelComponents->max_length;
      if ( (int)++v22 >= v21 )
        goto LABEL_28;
    }
    goto LABEL_111;
  }
LABEL_28:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_40225464 = 0;
  }
  else
  {
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v23->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40225464 = CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_40225464, 0);
  if ( v6 )
  {
    gameObject = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v6->klass->vtable._5_get_skillId.methodPtr)(
                   v6,
                   v6->klass->vtable._5_get_skillId.method);
    skillId = gameObject;
  }
  else
  {
    skillId = 0;
  }
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_108;
  v26 = 0;
  v56 = svtList;
  m_Items = svtList->m_Items;
  v27 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(servantTop->max_length);
    if ( (__int64)v26 >= (int)max_length_low )
      break;
    if ( v26 >= max_length_low )
      goto LABEL_111;
    v29 = (UnityEngine_Object_o *)servantTop->m_Items[v26];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Equality(v29, 0, 0);
    if ( (gameObject & 1) == 0 )
    {
      v30 = this->fields.servantTop;
      if ( !v30 )
        goto LABEL_108;
      if ( v26 >= LODWORD(v30->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v30->m_Items[v26];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_108;
      v61.fields.r = 1.0;
      v61.fields.g = 1.0;
      v61.fields.b = 1.0;
      v61.fields.a = 1.0;
      v31 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v61, 0);
      if ( !svtList )
        goto LABEL_108;
      v32 = this->fields.servantTop;
      if ( !v32 )
        goto LABEL_108;
      if ( v26 >= LODWORD(v32->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v32->m_Items[v26];
      if ( !gameObject )
        goto LABEL_108;
      v33 = SLODWORD(svtList->max_length);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      if ( (__int64)v26 >= v33 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v49 = this->fields.servantTop;
        if ( !v49 )
          goto LABEL_108;
        if ( v26 >= LODWORD(v49->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v49->m_Items[v26];
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_108;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !transform )
          goto LABEL_108;
        UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( v26 >= LODWORD(svtList->max_length) )
          goto LABEL_111;
        v34 = (unsigned int *)this->fields.servantTop;
        if ( !v34 )
          goto LABEL_108;
        if ( v26 >= v34[6] )
          goto LABEL_111;
        v35 = m_Items[v26];
        if ( !v35 )
          goto LABEL_108;
        v36 = &v34[2 * v26];
        v37 = v6;
        v38 = (UITexture_o *)*((_QWORD *)v36 + 4);
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v26], 0);
        DispLimitCount = BattleServantData__getDispLimitCount(v35, 1, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v38, DispImageSvtId, DispLimitCount, 0);
        v43 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1C32D5C(gameObject, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !gameObject )
          {
            v53 = sub_1C32EA0(0);
            sub_1C32D48(v53, 0);
          }
        }
        if ( v26 >= v34[6] )
          goto LABEL_111;
        *((_QWORD *)v36 + 4) = v43;
        sub_1C32BC4((CGThumbnailListItem_o *)&v34[v27], v43, v41, v42);
        v44 = this->fields.servantTop;
        if ( !v44 )
          goto LABEL_108;
        if ( v26 >= LODWORD(v44->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v44->m_Items[v26];
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !this->fields.svtRoot )
          goto LABEL_108;
        v45 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !v45 )
          goto LABEL_108;
        UnityEngine_Transform__set_parent(v45, (UnityEngine_Transform_o *)gameObject, 0);
        v6 = v37;
        if ( v37 && BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(v37, &battleBranchSkillInfo, v35, 0) )
        {
          gameObject = (__int64)battleBranchSkillInfo;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = ((__int64 (__fastcall *)(BattleBranchSkillInfoData_o *, const MethodInfo *))battleBranchSkillInfo->klass->vtable._5_get_skillId.methodPtr)(
                         battleBranchSkillInfo,
                         battleBranchSkillInfo->klass->vtable._5_get_skillId.method);
          v46 = this->fields.branchSkillLabelComponents;
          skillId = gameObject;
          if ( !v46 )
            goto LABEL_108;
          if ( v26 >= LODWORD(v46->max_length) )
            goto LABEL_111;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = (__int64)v46->m_Items[v26];
          if ( !gameObject )
            goto LABEL_108;
          BranchSkillLabelComponent__SetData(
            (BranchSkillLabelComponent_o *)gameObject,
            (int32_t)battleBranchSkillInfo->fields._DetailText_k__BackingField,
            *(System_String_o **)&battleBranchSkillInfo->fields.isAnd,
            0);
        }
        gameObject = BattleServantData__CheckNotTargetSkill(v35, skillId, 0);
        if ( (gameObject & 1) != 0 )
        {
          v62.fields.r = 0.5;
          v62.fields.g = 0.5;
          v62.fields.b = 0.5;
          v62.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v31, v62, 0);
          v47 = this->fields.notTargetLabelList;
          if ( !v47 )
            goto LABEL_108;
          if ( v26 >= LODWORD(v47->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v47->m_Items[v26];
          if ( !gameObject )
            goto LABEL_108;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        }
        if ( IsQuestClear_40225464 )
        {
          v48 = this->fields.commandSpellAddFunctionLabels;
          if ( !v48 )
            goto LABEL_108;
          if ( v26 >= LODWORD(v48->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v48->m_Items[v26];
          if ( !gameObject )
            goto LABEL_108;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v35,
            commandSpellId,
            battleData,
            0);
        }
        svtList = v56;
      }
      v51 = this->fields.servantTop;
      if ( !v51 )
        goto LABEL_108;
      if ( v26 >= LODWORD(v51->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v51->m_Items[v26];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v52 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C313D6 )
      {
        gameObject = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( !v52 )
        goto LABEL_108;
      UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    servantTop = this->fields.servantTop;
    ++v26;
    v27 += 2;
    if ( !servantTop )
      goto LABEL_108;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_108:
    sub_1C32E7C(gameObject);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 440LL))(
    gameObject,
    *(_QWORD *)(*(_QWORD *)gameObject + 448LL));
}


void BattleSelectServantWindow__SetServantRootTutorialPosition(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *svtRoot; // x0
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4

  svtRoot = (UnityEngine_Component_o *)this->fields.svtRoot;
  if ( !svtRoot || (svtRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(svtRoot, 0)) == 0 )
    sub_1C32E7C(svtRoot);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0);
}


System_String_o *BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3AFDE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_13006/*"Sprite"*/);
    byte_4C3AFDE = 1;
  }
  return (System_String_o *)StringLiteral_13006/*"Sprite"*/;
}


void BattleSelectServantWindow__onCloseButton(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectServantWindow__SelectServant(this, -1, v2);
}


void BattleSelectServantWindow__setInitialPos(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_1C32E7C(gameObject);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectServantWindow__setUseClose(BattleSelectServantWindow_o *this, bool flg, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cnancelButton; // x21
  UnityEngine_Collider_o *v7; // x0

  v5 = flg;
  if ( (byte_4C3AFDC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AFDC = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0, 0) )
  {
    v7 = this->fields.cnancelButton;
    if ( !v7 )
      sub_1C32E7C(0);
    UnityEngine_Collider__set_enabled(v7, flg, 0);
  }
}


void BattleSelectServantWindow_SelectServantCallBack___ctor(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7AF64;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7AF1C;
}


System_IAsyncResult_o *BattleSelectServantWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = uniqueId;
  if ( (byte_4C3AFE1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    byte_4C3AFE1 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void BattleSelectServantWindow_SelectServantCallBack__Invoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    uniqueId,
    this->fields.method);
}