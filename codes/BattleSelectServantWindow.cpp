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
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5A3E4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A3E4 = 1;
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
    sub_1C3E7C0(parentPanel, call);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4C5A3EA & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5A3EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
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
  __int64 v8; // x1
  System_Collections_ICollection_o *ServantListIfSwitchPartyBattle; // x20
  BattleData_o *classStatisticsInfos; // x0
  BattleServantData_array *battleServantList; // x22
  Il2CppObject *Instance; // x20
  System_Action_o *v13; // x21

  if ( (byte_4C5A3E9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_1C3E564(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_1C3E564(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5A3E9 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
        v13,
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
    sub_1C3E7C0(classStatisticsInfos, v8);
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

  if ( (byte_4C5A3E3 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_1C3E564(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C5A3E3 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C3E7C0(0, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C3E7B0(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, *(_QWORD *)&index);
  if ( LODWORD(svtList->max_length) <= index )
LABEL_11:
    sub_1C3E7C8(this, *(_QWORD *)&index);
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

  if ( (byte_4C5A3E7 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleSelectServantWindow_SelectServant__);
    byte_4C5A3E7 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
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
  __int64 v13; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v16; // w20
  UILabel_o *v17; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v19; // w8
  unsigned int v20; // w20
  struct BranchSkillLabelComponent_array *branchSkillLabelComponents; // x19
  int v22; // w8
  unsigned int v23; // w20
  BalanceConfig_c *v24; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v27; // x24
  __int64 v28; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v30; // x19
  struct UITexture_array *v31; // x8
  UIButtonColor_o *v32; // x27
  struct UITexture_array *v33; // x8
  signed __int64 v34; // x19
  unsigned int *v35; // x21
  BattleServantData_o *v36; // x28
  unsigned int *v37; // x25
  BattleSkillInfoData_o *v38; // x23
  UITexture_o *v39; // x29
  int32_t DispImageSvtId; // w20
  int32_t DispLimitCount; // w19
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x29
  struct UITexture_array *v45; // x8
  UnityEngine_Transform_o *v46; // x29
  struct BranchSkillLabelComponent_array *v47; // x8
  struct UILabel_array *v48; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v49; // x8
  struct UITexture_array *v50; // x8
  UnityEngine_Transform_o *transform; // x20
  struct UITexture_array *v52; // x8
  UnityEngine_Transform_o *v53; // x20
  __int64 v54; // x0
  BattleServantData_array *v57; // [xsp+10h] [xbp-80h]
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-78h]
  bool IsQuestClear_40371188; // [xsp+20h] [xbp-70h]
  int32_t skillId; // [xsp+24h] [xbp-6Ch]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = skillInfo;
  if ( (byte_4C5A3E5 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2751/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_1C3E564(&StringLiteral_2744/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_4C5A3E5 = 1;
  }
  battleBranchSkillInfo = 0;
  this->fields.svtList = svtList;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.svtList,
    (int32_t)svtList,
    (int32_t)skillInfo,
    *(const MethodInfo **)&commandSpellId);
  this->fields.battleData = battleData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)battleData, v9, v10);
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
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = notTargetLabelList->m_Items[v16];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2744/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0);
      if ( !v17 )
        goto LABEL_108;
      UILabel__set_text(v17, (System_String_o *)gameObject, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_15;
    }
LABEL_111:
    sub_1C3E7C8(gameObject, v13);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_108;
  v19 = commandSpellAddFunctionLabels->max_length;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( v20 < v19 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v20];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v19 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v20 >= v19 )
        goto LABEL_22;
    }
    goto LABEL_111;
  }
LABEL_22:
  branchSkillLabelComponents = this->fields.branchSkillLabelComponents;
  if ( !branchSkillLabelComponents )
    goto LABEL_108;
  v22 = branchSkillLabelComponents->max_length;
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( v23 < v22 )
    {
      gameObject = (__int64)branchSkillLabelComponents->m_Items[v23];
      if ( !gameObject )
        goto LABEL_108;
      BranchSkillLabelComponent__SetActive((BranchSkillLabelComponent_o *)gameObject, 0, 0);
      v22 = branchSkillLabelComponents->max_length;
      if ( (int)++v23 >= v22 )
        goto LABEL_28;
    }
    goto LABEL_111;
  }
LABEL_28:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_40371188 = 0;
  }
  else
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v24->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40371188 = CondType__IsQuestClear_40371188(ClassBoardReleaseQuestId, -1, 0, 0);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_40371188, 0);
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
  v27 = 0;
  v57 = svtList;
  m_Items = svtList->m_Items;
  v28 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(servantTop->max_length);
    if ( (__int64)v27 >= (int)max_length_low )
      break;
    if ( v27 >= max_length_low )
      goto LABEL_111;
    v30 = (UnityEngine_Object_o *)servantTop->m_Items[v27];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Equality(v30, 0, 0);
    if ( (gameObject & 1) == 0 )
    {
      v31 = this->fields.servantTop;
      if ( !v31 )
        goto LABEL_108;
      if ( v27 >= LODWORD(v31->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v31->m_Items[v27];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_108;
      v62.fields.r = 1.0;
      v62.fields.g = 1.0;
      v62.fields.b = 1.0;
      v62.fields.a = 1.0;
      v32 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v62, 0);
      if ( !svtList )
        goto LABEL_108;
      v33 = this->fields.servantTop;
      if ( !v33 )
        goto LABEL_108;
      if ( v27 >= LODWORD(v33->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v33->m_Items[v27];
      if ( !gameObject )
        goto LABEL_108;
      v34 = SLODWORD(svtList->max_length);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      if ( (__int64)v27 >= v34 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v50 = this->fields.servantTop;
        if ( !v50 )
          goto LABEL_108;
        if ( v27 >= LODWORD(v50->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v50->m_Items[v27];
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
        if ( v27 >= LODWORD(svtList->max_length) )
          goto LABEL_111;
        v35 = (unsigned int *)this->fields.servantTop;
        if ( !v35 )
          goto LABEL_108;
        if ( v27 >= v35[6] )
          goto LABEL_111;
        v36 = m_Items[v27];
        if ( !v36 )
          goto LABEL_108;
        v37 = &v35[2 * v27];
        v38 = v6;
        v39 = (UITexture_o *)*((_QWORD *)v37 + 4);
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v27], 0);
        DispLimitCount = BattleServantData__getDispLimitCount(v36, 1, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v39, DispImageSvtId, DispLimitCount, 0);
        v44 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1C3E6A0(gameObject, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
          if ( !gameObject )
          {
            v54 = sub_1C3E7E4(0);
            sub_1C3E68C(v54, 0);
          }
        }
        if ( v27 >= v35[6] )
          goto LABEL_111;
        *((_QWORD *)v37 + 4) = v44;
        sub_1C3E508((CGThumbnailListItem_o *)&v35[v28], v44, v42, v43);
        v45 = this->fields.servantTop;
        if ( !v45 )
          goto LABEL_108;
        if ( v27 >= LODWORD(v45->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v45->m_Items[v27];
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !this->fields.svtRoot )
          goto LABEL_108;
        v46 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !v46 )
          goto LABEL_108;
        UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)gameObject, 0);
        v6 = v38;
        if ( v38 && BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(v38, &battleBranchSkillInfo, v36, 0) )
        {
          gameObject = (__int64)battleBranchSkillInfo;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = ((__int64 (__fastcall *)(BattleBranchSkillInfoData_o *, const MethodInfo *))battleBranchSkillInfo->klass->vtable._5_get_skillId.methodPtr)(
                         battleBranchSkillInfo,
                         battleBranchSkillInfo->klass->vtable._5_get_skillId.method);
          v47 = this->fields.branchSkillLabelComponents;
          skillId = gameObject;
          if ( !v47 )
            goto LABEL_108;
          if ( v27 >= LODWORD(v47->max_length) )
            goto LABEL_111;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = (__int64)v47->m_Items[v27];
          if ( !gameObject )
            goto LABEL_108;
          BranchSkillLabelComponent__SetData(
            (BranchSkillLabelComponent_o *)gameObject,
            (int32_t)battleBranchSkillInfo->fields._DetailText_k__BackingField,
            *(System_String_o **)&battleBranchSkillInfo->fields.isAnd,
            0);
        }
        gameObject = BattleServantData__CheckNotTargetSkill(v36, skillId, 0);
        if ( (gameObject & 1) != 0 )
        {
          v63.fields.r = 0.5;
          v63.fields.g = 0.5;
          v63.fields.b = 0.5;
          v63.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v32, v63, 0);
          v48 = this->fields.notTargetLabelList;
          if ( !v48 )
            goto LABEL_108;
          if ( v27 >= LODWORD(v48->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v48->m_Items[v27];
          if ( !gameObject )
            goto LABEL_108;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        }
        if ( IsQuestClear_40371188 )
        {
          v49 = this->fields.commandSpellAddFunctionLabels;
          if ( !v49 )
            goto LABEL_108;
          if ( v27 >= LODWORD(v49->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v49->m_Items[v27];
          if ( !gameObject )
            goto LABEL_108;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v36,
            commandSpellId,
            battleData,
            0);
        }
        svtList = v57;
      }
      v52 = this->fields.servantTop;
      if ( !v52 )
        goto LABEL_108;
      if ( v27 >= LODWORD(v52->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v52->m_Items[v27];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v53 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C506A6 )
      {
        gameObject = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( !v53 )
        goto LABEL_108;
      UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    servantTop = this->fields.servantTop;
    ++v27;
    v28 += 2;
    if ( !servantTop )
      goto LABEL_108;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_108:
    sub_1C3E7C0(gameObject, v13);
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
    sub_1C3E7C0(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0);
}


System_String_o *BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C5A3E8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13015/*"Sprite"*/);
    byte_4C5A3E8 = 1;
  }
  return (System_String_o *)StringLiteral_13015/*"Sprite"*/;
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
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C506A1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C3E7C0(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectServantWindow__setUseClose(BattleSelectServantWindow_o *this, bool flg, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  v5 = flg;
  if ( (byte_4C5A3E6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A3E6 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0, 0) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1C3E7C0(0, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8665C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A86614;
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
  if ( (byte_4C5A3EB & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C5A3EB = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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