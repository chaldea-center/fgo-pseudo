void BattleSelectServantWindow___ctor(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


void BattleSelectServantWindow__Awake(BattleSelectServantWindow_o *this, const MethodInfo *method)
{
  if ( !this->fields.commandSpellAddFunctionLabels || !this->fields.branchSkillLabelComponents )
    sub_2213CDC(this, method);
}


void BattleSelectServantWindow__Close(
        BattleSelectServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_5974184 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974184 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0, 0) )
  {
    parentPanel = this->fields.classBoardWindowButton;
    if ( parentPanel )
    {
      UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(parentPanel, call);
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

  if ( (byte_597418A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597418A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  __int64 v6; // x1
  UnityEngine_Object_o *battleData; // x20
  bool v8; // w0
  __int64 v9; // x1
  System_Collections_ICollection_o *ServantListIfSwitchPartyBattle; // x20
  BattleData_o *classStatisticsInfos; // x0
  BattleServantData_array *battleServantList; // x22
  Il2CppObject *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x1

  if ( (byte_5974189 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_2213A60(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974189 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    battleData = (UnityEngine_Object_o *)this->fields.battleData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality(battleData, 0, 0);
    ServantListIfSwitchPartyBattle = 0;
    if ( !v8 )
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
        v14,
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
    sub_2213CDC(classStatisticsInfos, v9);
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

  if ( (byte_5974183 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_2213A60(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_5974183 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_2213CDC(0, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_2213CCC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( LODWORD(svtList->max_length) <= index )
LABEL_11:
    sub_2213CE4(this);
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
  int32_t v5; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // x8

  if ( (byte_5974187 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSelectServantWindow_SelectServant__);
    byte_5974187 = 1;
  }
  if ( !this->fields.isSelected )
  {
    if ( uniqeId >= 1 )
      v5 = 10;
    else
      v5 = 12;
    v6 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_BattleSelectServantWindow_SelectServant__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, v5, 0, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.selectCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  bool v6; // w6
  bool v7; // w7
  BattleSkillInfoData_o *v8; // x29
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UILabel_o *title_label; // x20
  __int64 gameObject; // x0
  __int64 v20; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v23; // w25
  UILabel_o *v24; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v26; // w8
  __int64 v27; // x20
  struct BranchSkillLabelComponent_array *branchSkillLabelComponents; // x19
  int v29; // w8
  __int64 v30; // x20
  BalanceConfig_c *v31; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v34; // x24
  __int64 v35; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v37; // x19
  struct UITexture_array *v38; // x8
  UIButtonColor_o *v39; // x27
  struct UITexture_array *v40; // x8
  unsigned int *v41; // x21
  BattleServantData_o *v42; // x28
  unsigned int *v43; // x25
  BattleSkillInfoData_o *v44; // x22
  UITexture_o *v45; // x29
  int32_t DispImageSvtId; // w20
  __int64 v47; // x1
  int32_t DispLimitCount; // w19
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x20
  __int64 v56; // x1
  struct UITexture_array *v57; // x8
  UnityEngine_Transform_o *v58; // x29
  struct BranchSkillLabelComponent_array *v59; // x8
  struct UILabel_array *v60; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v61; // x8
  struct UITexture_array *v62; // x8
  UnityEngine_Transform_o *transform; // x20
  struct UITexture_array *v64; // x8
  UnityEngine_Transform_o *v65; // x20
  __int64 v66; // x0
  BattleServantData_array *v69; // [xsp+10h] [xbp-80h]
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-78h]
  bool IsQuestClear_47284152; // [xsp+20h] [xbp-70h]
  int32_t skillId; // [xsp+24h] [xbp-6Ch]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = skillInfo;
  if ( (byte_5974185 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_2864/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_2213A60(&StringLiteral_2857/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_5974185 = 1;
  }
  battleBranchSkillInfo = 0;
  this->fields.svtList = svtList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtList,
    (int32_t)svtList,
    (System_String_o *)skillInfo,
    *(System_String_o **)&commandSpellId,
    (int32_t)battleData,
    (int32_t)method,
    v6,
    v7);
  this->fields.battleData = battleData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleData,
    (int32_t)battleData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  title_label = this->fields.title_label;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0);
  if ( !title_label )
    goto LABEL_112;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_112;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( v23 < max_length )
    {
      v24 = notTargetLabelList->m_Items[v23];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0);
      if ( !v24 )
        goto LABEL_112;
      UILabel__set_text(v24, (System_String_o *)gameObject, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0);
      if ( !gameObject )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_15;
    }
LABEL_115:
    sub_2213CE4(gameObject);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_112;
  v26 = commandSpellAddFunctionLabels->max_length;
  if ( v26 >= 1 )
  {
    v27 = 0;
    while ( (unsigned int)v27 < v26 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v27];
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v26 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v27 >= v26 )
        goto LABEL_22;
    }
    goto LABEL_115;
  }
LABEL_22:
  branchSkillLabelComponents = this->fields.branchSkillLabelComponents;
  if ( !branchSkillLabelComponents )
    goto LABEL_112;
  v29 = branchSkillLabelComponents->max_length;
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( (unsigned int)v30 < v29 )
    {
      gameObject = (__int64)branchSkillLabelComponents->m_Items[v30];
      if ( !gameObject )
        goto LABEL_112;
      BranchSkillLabelComponent__SetActive((BranchSkillLabelComponent_o *)gameObject, 0, 0);
      v29 = branchSkillLabelComponents->max_length;
      if ( (int)++v30 >= v29 )
        goto LABEL_28;
    }
    goto LABEL_115;
  }
LABEL_28:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_47284152 = 0;
  }
  else
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
      v31 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v31->static_fields->ClassBoardReleaseQuestId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v20);
    IsQuestClear_47284152 = CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_47284152, 0);
  if ( v8 )
  {
    gameObject = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))v8->klass->vtable._5_get_skillId.methodPtr)(
                   v8,
                   v8->klass->vtable._5_get_skillId.method);
    skillId = gameObject;
  }
  else
  {
    skillId = 0;
  }
  servantTop = this->fields.servantTop;
  if ( !servantTop )
    goto LABEL_112;
  m_Items = svtList->m_Items;
  v34 = 0;
  v35 = 8;
  v69 = svtList;
  while ( 1 )
  {
    max_length_low = LODWORD(servantTop->max_length);
    if ( (__int64)v34 >= (int)max_length_low )
      break;
    if ( v34 >= max_length_low )
      goto LABEL_115;
    v37 = (UnityEngine_Object_o *)servantTop->m_Items[v34];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    gameObject = UnityEngine_Object__op_Equality(v37, 0, 0);
    if ( (gameObject & 1) == 0 )
    {
      v38 = this->fields.servantTop;
      if ( !v38 )
        goto LABEL_112;
      if ( v34 >= LODWORD(v38->max_length) )
        goto LABEL_115;
      gameObject = (__int64)v38->m_Items[v34];
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_112;
      v74.fields.r = 1.0;
      v74.fields.g = 1.0;
      v74.fields.b = 1.0;
      v74.fields.a = 1.0;
      v39 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v74, 0);
      if ( !svtList )
        goto LABEL_112;
      v40 = this->fields.servantTop;
      if ( (__int64)v34 >= SLODWORD(svtList->max_length) )
      {
        if ( !v40 )
          goto LABEL_112;
        if ( v34 >= LODWORD(v40->max_length) )
          goto LABEL_115;
        gameObject = (__int64)v40->m_Items[v34];
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_112;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v62 = this->fields.servantTop;
        if ( !v62 )
          goto LABEL_112;
        if ( v34 >= LODWORD(v62->max_length) )
          goto LABEL_115;
        gameObject = (__int64)v62->m_Items[v34];
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_112;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !transform )
          goto LABEL_112;
        UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
      }
      else
      {
        if ( !v40 )
          goto LABEL_112;
        if ( v34 >= LODWORD(v40->max_length) )
          goto LABEL_115;
        gameObject = (__int64)v40->m_Items[v34];
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_112;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        if ( v34 >= LODWORD(svtList->max_length) )
          goto LABEL_115;
        v41 = (unsigned int *)this->fields.servantTop;
        if ( !v41 )
          goto LABEL_112;
        if ( v34 >= v41[6] )
          goto LABEL_115;
        v42 = m_Items[v34];
        if ( !v42 )
          goto LABEL_112;
        v43 = &v41[2 * v34];
        v44 = v8;
        v45 = (UITexture_o *)*((_QWORD *)v43 + 4);
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v34], 0);
        DispLimitCount = BattleServantData__getDispLimitCount(v42, 1, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v47);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v45, DispImageSvtId, DispLimitCount, 0);
        v55 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_2213BB4(gameObject, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
          if ( !gameObject )
          {
            v66 = sub_2213D00(0, v56);
            sub_2213BA0(v66, 0);
          }
        }
        if ( v34 >= v41[6] )
          goto LABEL_115;
        *((_QWORD *)v43 + 4) = v55;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41[v35], v55, v49, v50, v51, v52, v53, v54);
        v57 = this->fields.servantTop;
        if ( !v57 )
          goto LABEL_112;
        if ( v34 >= LODWORD(v57->max_length) )
          goto LABEL_115;
        gameObject = (__int64)v57->m_Items[v34];
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !this->fields.svtRoot )
          goto LABEL_112;
        v58 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
        if ( !gameObject )
          goto LABEL_112;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !v58 )
          goto LABEL_112;
        UnityEngine_Transform__set_parent(v58, (UnityEngine_Transform_o *)gameObject, 0);
        v8 = v44;
        if ( v44 && BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(v44, &battleBranchSkillInfo, v42, 0) )
        {
          gameObject = (__int64)battleBranchSkillInfo;
          if ( !battleBranchSkillInfo )
            goto LABEL_112;
          gameObject = ((__int64 (__fastcall *)(BattleBranchSkillInfoData_o *, const MethodInfo *))battleBranchSkillInfo->klass->vtable._5_get_skillId.methodPtr)(
                         battleBranchSkillInfo,
                         battleBranchSkillInfo->klass->vtable._5_get_skillId.method);
          v59 = this->fields.branchSkillLabelComponents;
          skillId = gameObject;
          if ( !v59 )
            goto LABEL_112;
          if ( v34 >= LODWORD(v59->max_length) )
            goto LABEL_115;
          if ( !battleBranchSkillInfo )
            goto LABEL_112;
          gameObject = (__int64)v59->m_Items[v34];
          if ( !gameObject )
            goto LABEL_112;
          BranchSkillLabelComponent__SetData(
            (BranchSkillLabelComponent_o *)gameObject,
            (int32_t)battleBranchSkillInfo->fields._DetailText_k__BackingField,
            *(System_String_o **)&battleBranchSkillInfo->fields.isAnd,
            0);
        }
        gameObject = BattleServantData__CheckNotTargetSkill(v42, skillId, 0);
        if ( (gameObject & 1) != 0 )
        {
          v75.fields.r = 0.5;
          v75.fields.g = 0.5;
          v75.fields.b = 0.5;
          v75.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v39, v75, 0);
          v60 = this->fields.notTargetLabelList;
          if ( !v60 )
            goto LABEL_112;
          if ( v34 >= LODWORD(v60->max_length) )
            goto LABEL_115;
          gameObject = (__int64)v60->m_Items[v34];
          if ( !gameObject )
            goto LABEL_112;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_112;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        }
        if ( IsQuestClear_47284152 )
        {
          v61 = this->fields.commandSpellAddFunctionLabels;
          if ( !v61 )
            goto LABEL_112;
          if ( v34 >= LODWORD(v61->max_length) )
            goto LABEL_115;
          gameObject = (__int64)v61->m_Items[v34];
          if ( !gameObject )
            goto LABEL_112;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v42,
            commandSpellId,
            battleData,
            0);
        }
        svtList = v69;
      }
      v64 = this->fields.servantTop;
      if ( !v64 )
        goto LABEL_112;
      if ( v34 >= LODWORD(v64->max_length) )
        goto LABEL_115;
      gameObject = (__int64)v64->m_Items[v34];
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_112;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v65 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v65 )
        goto LABEL_112;
      UnityEngine_Transform__set_localScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    servantTop = this->fields.servantTop;
    ++v34;
    v35 += 2;
    if ( !servantTop )
      goto LABEL_112;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_112:
    sub_2213CDC(gameObject, v20);
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
    sub_2213CDC(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0);
}


System_String_o *BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974188 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13556/*"Sprite"*/);
    byte_5974188 = 1;
  }
  return (System_String_o *)StringLiteral_13556/*"Sprite"*/;
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
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_2213CDC(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectServantWindow__setUseClose(BattleSelectServantWindow_o *this, bool flg, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *cnancelButton; // x21
  __int64 v8; // x1
  UnityEngine_Collider_o *v9; // x0

  v5 = flg;
  if ( (byte_5974186 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974186 = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  this->fields.useClose = v5;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, flg);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0, 0) )
  {
    v9 = this->fields.cnancelButton;
    if ( !v9 )
      sub_2213CDC(0, v8);
    UnityEngine_Collider__set_enabled(v9, flg, 0);
  }
}


void BattleSelectServantWindow_SelectServantCallBack___ctor(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20134CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2013484;
}


System_IAsyncResult_o *BattleSelectServantWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = uniqueId;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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