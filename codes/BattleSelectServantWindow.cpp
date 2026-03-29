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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D34131 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34131 = 1;
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
    sub_1C93D2C(parentPanel, call);
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

  if ( (byte_4D34137 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34137 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
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

  if ( (byte_4D34136 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__);
    sub_1C93AD4(&Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34136 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_BattleSelectServantWindow_OnClickClassBoardWindow__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_OnClickClassBoardWindow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_BattleSelectServantWindow_OnClickClassBoardWindow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleSelectServantWindow_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
    sub_1C93D2C(classStatisticsInfos, v8);
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

  if ( (byte_4D34130 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleSelectServantWindow_onCloseButton__);
    sub_1C93AD4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4D34130 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C93D2C(0, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C93D20(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1C93D2C(this, *(_QWORD *)&index);
  if ( LODWORD(svtList->max_length) <= index )
LABEL_11:
    sub_1C93D34(this);
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

  if ( (byte_4D34134 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleSelectServantWindow_SelectServant__);
    byte_4D34134 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v5 = Method_BattleSelectServantWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectServantWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_BattleSelectServantWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.selectCallBack = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSelectServantWindow__SetServantData(
        BattleSelectServantWindow_o *this,
        BattleServantData_array *svtList,
        BattleSkillInfoData_o *skillInfo,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleSkillInfoData_o *v8; // x29
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UILabel_o *title_label; // x20
  __int64 gameObject; // x0
  __int64 v19; // x1
  struct UILabel_array *notTargetLabelList; // x19
  int max_length; // w8
  unsigned int v22; // w20
  UILabel_o *v23; // x24
  struct CommandSpellAddFunctionLabelComponent_array *commandSpellAddFunctionLabels; // x19
  int v25; // w8
  unsigned int v26; // w20
  struct BranchSkillLabelComponent_array *branchSkillLabelComponents; // x19
  int v28; // w8
  unsigned int v29; // w20
  BalanceConfig_c *v30; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v33; // x24
  __int64 v34; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v36; // x19
  struct UITexture_array *v37; // x8
  UIButtonColor_o *v38; // x27
  struct UITexture_array *v39; // x8
  signed __int64 v40; // x19
  unsigned int *v41; // x21
  BattleServantData_o *v42; // x28
  unsigned int *v43; // x25
  BattleSkillInfoData_o *v44; // x23
  UITexture_o *v45; // x29
  int32_t DispImageSvtId; // w20
  int32_t DispLimitCount; // w19
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x29
  struct UITexture_array *v55; // x8
  UnityEngine_Transform_o *v56; // x29
  struct BranchSkillLabelComponent_array *v57; // x8
  struct UILabel_array *v58; // x8
  struct CommandSpellAddFunctionLabelComponent_array *v59; // x8
  struct UITexture_array *v60; // x8
  UnityEngine_Transform_o *transform; // x20
  struct UITexture_array *v62; // x8
  UnityEngine_Transform_o *v63; // x20
  __int64 v64; // x0
  BattleServantData_array *v67; // [xsp+10h] [xbp-80h]
  BattleServantData_o **m_Items; // [xsp+18h] [xbp-78h]
  bool IsQuestClear_41038904; // [xsp+20h] [xbp-70h]
  int32_t skillId; // [xsp+24h] [xbp-6Ch]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = skillInfo;
  if ( (byte_4D34132 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_2760/*"BATTLE_DIALOG_SELECT_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_2753/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/);
    byte_4D34132 = 1;
  }
  battleBranchSkillInfo = 0;
  this->fields.svtList = svtList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtList,
    (int32_t)svtList,
    (int32_t)skillInfo,
    commandSpellId,
    (System_String_o *)battleData,
    (int32_t)method,
    v6,
    v7);
  this->fields.battleData = battleData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleData,
    (int32_t)battleData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2760/*"BATTLE_DIALOG_SELECT_SERVANT"*/, 0);
  if ( !title_label )
    goto LABEL_108;
  UILabel__set_text(title_label, (System_String_o *)gameObject, 0);
  notTargetLabelList = this->fields.notTargetLabelList;
  if ( !notTargetLabelList )
    goto LABEL_108;
  max_length = notTargetLabelList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( v22 < max_length )
    {
      v23 = notTargetLabelList->m_Items[v22];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2753/*"BATTLE_DIALOG_NOT_SELECT_TARGET"*/, 0);
      if ( !v23 )
        goto LABEL_108;
      UILabel__set_text(v23, (System_String_o *)gameObject, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      max_length = notTargetLabelList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_15;
    }
LABEL_111:
    sub_1C93D34(gameObject);
  }
LABEL_15:
  commandSpellAddFunctionLabels = this->fields.commandSpellAddFunctionLabels;
  if ( !commandSpellAddFunctionLabels )
    goto LABEL_108;
  v25 = commandSpellAddFunctionLabels->max_length;
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( v26 < v25 )
    {
      gameObject = (__int64)commandSpellAddFunctionLabels->m_Items[v26];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v25 = commandSpellAddFunctionLabels->max_length;
      if ( (int)++v26 >= v25 )
        goto LABEL_22;
    }
    goto LABEL_111;
  }
LABEL_22:
  branchSkillLabelComponents = this->fields.branchSkillLabelComponents;
  if ( !branchSkillLabelComponents )
    goto LABEL_108;
  v28 = branchSkillLabelComponents->max_length;
  if ( v28 >= 1 )
  {
    v29 = 0;
    while ( v29 < v28 )
    {
      gameObject = (__int64)branchSkillLabelComponents->m_Items[v29];
      if ( !gameObject )
        goto LABEL_108;
      BranchSkillLabelComponent__SetActive((BranchSkillLabelComponent_o *)gameObject, 0, 0);
      v28 = branchSkillLabelComponents->max_length;
      if ( (int)++v29 >= v28 )
        goto LABEL_28;
    }
    goto LABEL_111;
  }
LABEL_28:
  if ( commandSpellId == -1 )
  {
    IsQuestClear_41038904 = 0;
  }
  else
  {
    v30 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v30->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_41038904 = CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0);
  }
  gameObject = (__int64)this->fields.classBoardWindowButton;
  if ( !gameObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsQuestClear_41038904, 0);
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
    goto LABEL_108;
  v33 = 0;
  v67 = svtList;
  m_Items = svtList->m_Items;
  v34 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(servantTop->max_length);
    if ( (__int64)v33 >= (int)max_length_low )
      break;
    if ( v33 >= max_length_low )
      goto LABEL_111;
    v36 = (UnityEngine_Object_o *)servantTop->m_Items[v33];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Equality(v36, 0, 0);
    if ( (gameObject & 1) == 0 )
    {
      v37 = this->fields.servantTop;
      if ( !v37 )
        goto LABEL_108;
      if ( v33 >= LODWORD(v37->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v37->m_Items[v33];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !gameObject )
        goto LABEL_108;
      v72.fields.r = 1.0;
      v72.fields.g = 1.0;
      v72.fields.b = 1.0;
      v72.fields.a = 1.0;
      v38 = (UIButtonColor_o *)gameObject;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v72, 0);
      if ( !svtList )
        goto LABEL_108;
      v39 = this->fields.servantTop;
      if ( !v39 )
        goto LABEL_108;
      if ( v33 >= LODWORD(v39->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v39->m_Items[v33];
      if ( !gameObject )
        goto LABEL_108;
      v40 = SLODWORD(svtList->max_length);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      if ( (__int64)v33 >= v40 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v60 = this->fields.servantTop;
        if ( !v60 )
          goto LABEL_108;
        if ( v33 >= LODWORD(v60->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v60->m_Items[v33];
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
        if ( v33 >= LODWORD(svtList->max_length) )
          goto LABEL_111;
        v41 = (unsigned int *)this->fields.servantTop;
        if ( !v41 )
          goto LABEL_108;
        if ( v33 >= v41[6] )
          goto LABEL_111;
        v42 = m_Items[v33];
        if ( !v42 )
          goto LABEL_108;
        v43 = &v41[2 * v33];
        v44 = v8;
        v45 = (UITexture_o *)*((_QWORD *)v43 + 4);
        DispImageSvtId = BattleServantData__GetDispImageSvtId(m_Items[v33], 0);
        DispLimitCount = BattleServantData__getDispLimitCount(v42, 1, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(v45, DispImageSvtId, DispLimitCount, 0);
        v54 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_1C93C10(gameObject, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
          if ( !gameObject )
          {
            v64 = sub_1C93D50(0);
            sub_1C93BFC(v64, 0);
          }
        }
        if ( v33 >= v41[6] )
          goto LABEL_111;
        *((_QWORD *)v43 + 4) = v54;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v41[v34], v54, v48, v49, v50, v51, v52, v53);
        v55 = this->fields.servantTop;
        if ( !v55 )
          goto LABEL_108;
        if ( v33 >= LODWORD(v55->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v55->m_Items[v33];
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !this->fields.svtRoot )
          goto LABEL_108;
        v56 = (UnityEngine_Transform_o *)gameObject;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
        if ( !gameObject )
          goto LABEL_108;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !v56 )
          goto LABEL_108;
        UnityEngine_Transform__set_parent(v56, (UnityEngine_Transform_o *)gameObject, 0);
        v8 = v44;
        if ( v44 && BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(v44, &battleBranchSkillInfo, v42, 0) )
        {
          gameObject = (__int64)battleBranchSkillInfo;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = ((__int64 (__fastcall *)(BattleBranchSkillInfoData_o *, const MethodInfo *))battleBranchSkillInfo->klass->vtable._5_get_skillId.methodPtr)(
                         battleBranchSkillInfo,
                         battleBranchSkillInfo->klass->vtable._5_get_skillId.method);
          v57 = this->fields.branchSkillLabelComponents;
          skillId = gameObject;
          if ( !v57 )
            goto LABEL_108;
          if ( v33 >= LODWORD(v57->max_length) )
            goto LABEL_111;
          if ( !battleBranchSkillInfo )
            goto LABEL_108;
          gameObject = (__int64)v57->m_Items[v33];
          if ( !gameObject )
            goto LABEL_108;
          BranchSkillLabelComponent__SetData(
            (BranchSkillLabelComponent_o *)gameObject,
            (int32_t)battleBranchSkillInfo->fields._DetailText_k__BackingField,
            *(System_String_o **)&battleBranchSkillInfo->fields.isAnd,
            0);
        }
        gameObject = BattleServantData__CheckNotTargetSkill(v42, skillId, 0);
        if ( (gameObject & 1) != 0 )
        {
          v73.fields.r = 0.5;
          v73.fields.g = 0.5;
          v73.fields.b = 0.5;
          v73.fields.a = 1.0;
          UIButtonColor__set_defaultColor(v38, v73, 0);
          v58 = this->fields.notTargetLabelList;
          if ( !v58 )
            goto LABEL_108;
          if ( v33 >= LODWORD(v58->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v58->m_Items[v33];
          if ( !gameObject )
            goto LABEL_108;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        }
        if ( IsQuestClear_41038904 )
        {
          v59 = this->fields.commandSpellAddFunctionLabels;
          if ( !v59 )
            goto LABEL_108;
          if ( v33 >= LODWORD(v59->max_length) )
            goto LABEL_111;
          gameObject = (__int64)v59->m_Items[v33];
          if ( !gameObject )
            goto LABEL_108;
          CommandSpellAddFunctionLabelComponent__SetData(
            (CommandSpellAddFunctionLabelComponent_o *)gameObject,
            v42,
            commandSpellId,
            battleData,
            0);
        }
        svtList = v67;
      }
      v62 = this->fields.servantTop;
      if ( !v62 )
        goto LABEL_108;
      if ( v33 >= LODWORD(v62->max_length) )
        goto LABEL_111;
      gameObject = (__int64)v62->m_Items[v33];
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_108;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v63 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4D2A13E )
      {
        gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v63 )
        goto LABEL_108;
      UnityEngine_Transform__set_localScale(v63, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    servantTop = this->fields.servantTop;
    ++v33;
    v34 += 2;
    if ( !servantTop )
      goto LABEL_108;
  }
  gameObject = (__int64)this->fields.svtRoot;
  if ( !gameObject )
LABEL_108:
    sub_1C93D2C(gameObject, v19);
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
    sub_1C93D2C(svtRoot, method);
  v3.fields.x = 0.0;
  v3.fields.z = 0.0;
  v3.fields.y = -59.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtRoot, v3, 0);
}


System_String_o *BattleSelectServantWindow__get_closeBtnPath(
        BattleSelectServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D34135 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13104/*"Sprite"*/);
    byte_4D34135 = 1;
  }
  return (System_String_o *)StringLiteral_13104/*"Sprite"*/;
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
  if ( !byte_4D2A139 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C93D2C(gameObject, v4);
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
  if ( (byte_4D34133 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34133 = 1;
  }
  this->fields.useClose = v5;
  cnancelButton = (UnityEngine_Object_o *)this->fields.cnancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cnancelButton, 0, 0) )
  {
    v8 = this->fields.cnancelButton;
    if ( !v8 )
      sub_1C93D2C(0, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0);
  }
}


void BattleSelectServantWindow_SelectServantCallBack___ctor(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACC9E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACC998;
}


System_IAsyncResult_o *BattleSelectServantWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = uniqueId;
  if ( (byte_4D34138 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D34138 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void BattleSelectServantWindow_SelectServantCallBack__EndInvoke(
        BattleSelectServantWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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