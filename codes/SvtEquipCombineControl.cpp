void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EDC3 & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5EDC3 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SvtEquipCombineControl__CheckIncrementLv(
        SvtEquipCombineControl_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  int afterMaxLv; // w8
  void *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_4A5EDBA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EDBA = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1B8880C(Instance, v7);
    }
    v8 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v8 <= totalExp )
    {
      if ( v8 != totalExp )
      {
        result = 0;
        ++this->fields.checkLv;
        return result;
      }
      afterMaxLv = *((_DWORD *)Instance + 5) + 1;
    }
    else
    {
      afterMaxLv = *((_DWORD *)Instance + 5);
    }
  }
  result = 1;
  this->fields.increLv = afterMaxLv;
  return result;
}


void __fastcall SvtEquipCombineControl__CheckIsSelectBaseSvtEq(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5EDB7 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EDB7 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
    v3);
}


void __fastcall SvtEquipCombineControl__CheckRareSvt(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( this->fields.isContainedRare || this->fields.isLimitOverMaterial || this->fields.isLimitUpMaterial )
    SvtEquipCombineControl__ShowRareSvtDlg(this, method);
  else
    SvtEquipCombineControl__OnClickExeCombine(this, method);
}


void __fastcall SvtEquipCombineControl__DestroyGrid(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  int v7; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4A5EDBF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDBF = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !selectGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount + 1;
    while ( 1 )
    {
      selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
      if ( !selectGrid )
        break;
      selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL);
      if ( !selectGrid )
        break;
      selectGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)selectGrid,
                                                v7 - 2,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqList, 0, v5, v6);
}


bool __fastcall SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *__fastcall SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  uint32_t cctor_finished; // w9
  __int64 *v4; // x8

  if ( (byte_4A5EDC1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8261/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8244/*"LIMIT_BOTH_MSG"*/);
    sub_1B885B0(&StringLiteral_8259/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_4A5EDC1 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8244/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8259/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_8261/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall SvtEquipCombineControl__GetTutorialOpenType(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  return 38;
}


void __fastcall SvtEquipCombineControl__InitInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BalanceConfig_c *v14; // x8
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EDB5 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5EDB5 = 1;
  }
  this->fields.isExeCombine = 0;
  this->fields.isLimitUpMaterial = 0;
  *(_WORD *)&this->fields.isContainedRare = 0;
  SvtEquipCombineControl__SetExeBtnState(this, method);
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.increValObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.getExpInfo;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  v24 = 0;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v24, v7, v8, v9);
  v14 = BalanceConfig_TypeInfo;
  v15 = (Il2CppObject *)v10;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v14->static_fields->ServantCombineMax;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v11, v12, v13);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_61721404(v6, v15, v16, 0LL);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v17);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_62512312(
                                               (int)this + 456,
                                               (System_String_o *)StringLiteral_9206/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v25, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v19);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqTbl, 0, v20, v21);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v22);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1B8880C(currentLvObj, v3);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EDB4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDB4 = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_charaGraph, 0, v7, v8);
  }
}


void __fastcall SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_long__bool__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EDB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    sub_1B885B0(&StringLiteral_8766/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_1B885B0(&StringLiteral_10818/*"QP_TAKE"*/);
    byte_4A5EDB3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  EventTutorialMaster__CheckTutorial(0, 38, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10818/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqList, 0, v7, v8);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v9 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v9,
      (const MethodInfo_319F750 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)v9, v10, v11);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_29;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_31A02CC *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v12);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)helpBtn, 0, 0LL);
  helpBtn = this->fields.materialBgObj;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  this->fields._targetType_k__BackingField = 0;
  if ( !helpBtn )
    goto LABEL_29;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8766/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_29:
    sub_1B8880C(helpBtn, v3);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v16 )
        break;
      if ( !v20.fields._current )
        sub_1B8880C(v16, v17);
      v18 = (unsigned int)(HIDWORD(v20.fields._current[1].klass) - 16);
      if ( (unsigned int)v18 <= 3 )
        __asm { BR              X10 }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4A5EDBD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_4A5EDBD = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v6 = Method_SvtEquipCombineControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_SvtEquipCombineControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1B8880C(Instance, v4);
  CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5EDBE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3834/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4A5EDBE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0,
    this->fields.selectMtSvtEqTbl,
    0LL);
}


void __fastcall SvtEquipCombineControl__OnClickMaterialSelectList(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5EDC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
    byte_4A5EDC2 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
  CombineRootComponent__ShowSvtEqMaterialList(combineRootComponent, 0LL);
}


void __fastcall SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x22
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  __int64 v7; // x1
  struct UICharaGraphTexture_o *TexturePrefab_37906304; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4A5EDB8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDB8 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906304 = CharaGraphManager__CreateTexturePrefab_37906304(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37906304;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_37906304, v9, v10);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_40835776(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)usrSvtData, v11, v12);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1B8880C(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 isExeCombine; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EDBC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5EDBC = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( isExeCombine )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0LL);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0LL);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0LL);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5EDB6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5EDB6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 452, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall SvtEquipCombineControl__SetSelectMaterialEnable(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectAddGridObj; // x0

  selectAddGridObj = this->fields.selectAddGridObj;
  if ( !selectAddGridObj
    || (UnityEngine_GameObject__SetActive(selectAddGridObj, 1, 0LL),
        (selectAddGridObj = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectAddGridObj, this->fields.isSelectBase, 0LL),
        (selectAddGridObj = this->fields.materialBgObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0LL),
        (selectAddGridObj = this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_1B8880C(selectAddGridObj, method);
  }
  UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetStateInfoMsg(
        SvtEquipCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A5EDC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7367/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_7366/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EDC0 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields.isExeCombine )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7367/*"INFO_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7366/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
  __int64 Instance; // x0
  __int64 lv; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int64_array *v13; // x8
  __int64 v14; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  struct UserServantEntity_o *baseData; // x8
  __int64 v32; // x20
  __int64 v33; // x23
  int32_t v34; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v36; // x24
  struct UserServantEntity_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x20
  __int64 v39; // x23
  __int64 v40; // x25
  unsigned __int64 v41; // x26
  UnityEngine_GameObject_o *v42; // x21
  struct System_Int64_array *v43; // x8
  int32_t *v44; // x22
  int64_t v45; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v47; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v49; // x23
  UnityEngine_Transform_o *v50; // x20
  __int64 v51; // x20
  __int64 v52; // x25
  __int64 v53; // x27
  int32_t v54; // w25
  __int64 v55; // x25
  __int64 v56; // x27
  UserServantEntity_o *v57; // x8
  __int64 v58; // x25
  __int64 v59; // x27
  int32_t v60; // w25
  int32_t v61; // w0
  bool v62; // w20
  __int64 v63; // x23
  __int64 v64; // x25
  __int64 v65; // x20
  __int64 v66; // x23
  int v67; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v69; // x23
  MaterialSvtInfo_o *v70; // x25
  MaterialSvtInfo_ClickDelegate_o *v71; // x27
  UserServantEntity_o *v72; // x8
  int32_t v73; // w26
  __int64 v74; // x20
  __int64 v75; // x23
  int32_t v76; // w0
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  UILabel_o *basicExpLb; // x20
  int32_t v81; // w8
  Il2CppObject *v82; // x0
  UILabel_o *addTotalExpLb; // x20
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  const MethodInfo *v88; // x2
  struct UserServantEntity_o *v89; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v91; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v96; // x25
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v103; // x20
  int32_t v104; // w2
  int32_t v105; // w3
  UserServantEntity_o *v106; // x1
  struct UserServantEntity_o *v107; // x8
  int v108; // w8
  int v109; // w8
  bool v110; // w20
  float v111; // s0
  float v112; // s1
  float v113; // s2
  float v114; // s3
  const MethodInfo *v115; // x1
  __int64 v116; // [xsp+10h] [xbp-A0h]
  int32_t v117; // [xsp+18h] [xbp-98h]
  int32_t v118; // [xsp+1Ch] [xbp-94h]
  __int64 v119; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v121; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4A5EDB9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1B885B0(&CombineSvtData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_7349/*"INCREMENT_SVTLEVEL"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5EDB9 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  afterAtk = 0LL;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v3 )
    goto LABEL_106;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = materialUsrSvtIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqList,
    (int32_t)materialUsrSvtIdList,
    v7,
    v8);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)svtEqMaterialList, v11, v12);
  v13 = v3->fields.materialUsrSvtIdList;
  if ( !v13 )
    goto LABEL_106;
  v14 = *(_QWORD *)&v13->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
  increAmount = v14;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v17, v18, v19);
  v24 = BalanceConfig_TypeInfo;
  v25 = (Il2CppObject *)v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v24->static_fields->ServantCombineMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v21, v22, v23);
  Instance = (__int64)System_String__Format_61721404(v16, v25, v26, 0LL);
  if ( !selectSumLb )
    goto LABEL_106;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)baseSvtData, v29, v30);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_106;
  v33 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v33;
  *(_QWORD *)&v126.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v126, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v14 < 1 )
    return;
  v36 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_106;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v127.fields.currentCryptoKey = v40;
  *(_QWORD *)&v127.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v127, 0LL);
  if ( !v38 )
    goto LABEL_106;
  v118 = v34;
  v121 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v38,
                        Instance,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_106;
  v119 = (unsigned int)v14;
  v41 = 0LL;
  v42 = 0LL;
  v116 = Instance;
  v117 = *(_DWORD *)(Instance + 88);
  do
  {
    v43 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_106;
    if ( v41 >= v43->max_length )
      sub_1B88814(Instance, lv);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_106;
    v44 = (int32_t *)v3;
    v45 = v43->m_Items[v41];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v45,
                 (const MethodInfo_31A0084 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_106;
    svtFaceInfo = this->fields.svtFaceInfo;
    v47 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v49 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v50 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4A55CE1 )
    {
      Instance = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v50 )
      goto LABEL_106;
    UnityEngine_Transform__set_localPosition(v50, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v134.fields.x = 0.5;
    v134.fields.y = 0.5;
    v134.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v134, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v45,
                          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_106;
    v51 = Instance;
    v53 = *(_QWORD *)(Instance + 80);
    v52 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v128.fields.currentCryptoKey = v53;
    *(_QWORD *)&v128.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v128, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v51 + 96),
                 0LL);
    if ( !v36 )
      goto LABEL_106;
    Instance = (__int64)ServantLimitMaster__GetEntity(v36, v54, Instance, 0LL);
    if ( !Instance )
      goto LABEL_106;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v56 = *(_QWORD *)(v51 + 96);
    v55 = *(_QWORD *)(v51 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v129.fields.currentCryptoKey = v56;
    *(_QWORD *)&v129.fields.fakeValue = v55;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v129, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v57 = *v121;
    if ( !*v121 )
      goto LABEL_106;
    v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v130.fields.currentCryptoKey = v59;
    *(_QWORD *)&v130.fields.fakeValue = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v130, 0LL);
    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v51 + 80),
            0LL);
    if ( v60 == v61 )
      v42 = v49;
    if ( v60 == v61 )
    {
      Instance = (__int64)*v121;
      if ( !*v121 )
        goto LABEL_106;
      Instance = UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v62 = 0;
      }
      else
      {
        v64 = *(_QWORD *)(v51 + 96);
        v63 = *(_QWORD *)(v51 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v131.fields.currentCryptoKey = v64;
        *(_QWORD *)&v131.fields.fakeValue = v63;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v131, 0LL);
        if ( (int)Instance < 1 )
        {
          v67 = 1;
        }
        else
        {
          v66 = *(_QWORD *)(v51 + 96);
          v65 = *(_QWORD *)(v51 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v132.fields.currentCryptoKey = v66;
          *(_QWORD *)&v132.fields.fakeValue = v65;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v132, 0LL);
          v67 = Instance + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v49 = v42;
        v118 += v67;
        v62 = v118 > v117;
      }
      if ( !v49 )
        goto LABEL_106;
    }
    else
    {
      v62 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v49,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v69 = this->fields.baseData;
    v70 = (MaterialSvtInfo_o *)Component_object;
    v71 = (MaterialSvtInfo_ClickDelegate_o *)sub_1B887FC(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v71,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v70 )
      goto LABEL_106;
    MaterialSvtInfo__setMaterialSvtInfo_45332512(v70, v41++, v69, v45, 1, v62, v47 & 1, v71, 0LL);
    v3 = (SetCombineData_o *)v44;
  }
  while ( v119 != v41 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_106;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v72 = *v121;
  v73 = v118 >= v117 ? v117 : v118;
  if ( !v72 )
    goto LABEL_106;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v75;
  *(_QWORD *)&v133.fields.fakeValue = v74;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v133, 0LL);
  Instance = (__int64)ServantLimitMaster__GetEntity(v36, v76, v73, 0LL);
  if ( !Instance )
    goto LABEL_106;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v81 = v44[8];
  this->fields.getExpVal = v44[9] + v81;
  increAmount = v81;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v77, v78, v79);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v82, 0LL);
  if ( !basicExpLb )
    goto LABEL_106;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v44[9];
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v84, v85, v86);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v87, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_106;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v89 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v116 + 132);
  if ( !v89 )
    goto LABEL_106;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v89->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v89->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v88) )
      LODWORD(lv) = this->fields.checkLv;
  }
  Instance = (__int64)this->fields.currentLvObj;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.increLvObj;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.increValObj;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v91 = this->fields.baseData;
  if ( !v91 )
    goto LABEL_106;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v91 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_106;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 440, 0LL);
  if ( !increLvLb )
    goto LABEL_106;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v121 )
    goto LABEL_106;
  this->fields.increAmount = this->fields.increLv - (*v121)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_7349/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v97, v98, v99);
  Instance = (__int64)System_String__Format(v96, v100, 0LL);
  if ( !increValLb )
    goto LABEL_106;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v121,
                        *p_increLv,
                        v73,
                        0LL);
  if ( !getSkillLb )
    goto LABEL_106;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v44[7];
  Instance = (__int64)System_Int32__ToString_62512312((int)this + 456, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_106;
  UILabel__set_text(needQpLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    (int32_t *)&afterAtk + 1,
    (int32_t *)&afterAtk,
    *v121,
    *p_increLv,
    0LL);
  HIDWORD(afterAtk) += v44[12];
  LODWORD(afterAtk) = v44[13] + afterAtk;
  v103 = sub_1B887FC(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v103, 0LL);
  if ( !v103 )
    goto LABEL_106;
  v106 = *v121;
  *(_QWORD *)(v103 + 16) = *v121;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 16), (int32_t)v106, v104, v105);
  *(_DWORD *)(v103 + 24) = this->fields.increLv;
  *(_DWORD *)(v103 + 28) = v73;
  *(_DWORD *)(v103 + 32) = this->fields.afterMaxLv;
  v107 = this->fields.baseData;
  if ( !v107 )
    goto LABEL_106;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v107->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v103 + 36) = lateExp[1];
  v108 = HIDWORD(afterAtk);
  *(_DWORD *)(v103 + 40) = lateExp[0];
  *(_DWORD *)(v103 + 44) = v108;
  v109 = afterAtk;
  *(_DWORD *)(v103 + 48) = v44[12];
  *(_DWORD *)(v103 + 52) = v109;
  *(_DWORD *)(v103 + 56) = v44[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_106;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v103, 0LL);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v111 = 1.0;
      v110 = 1;
      v112 = 1.0;
      goto LABEL_104;
    }
LABEL_106:
    sub_1B8880C(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_106;
  v110 = 0;
  v111 = 1.0;
  v112 = 0.0;
LABEL_104:
  v113 = v112;
  v114 = v111;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v111, 0LL);
  this->fields.isExeCombine = v110;
  SvtEquipCombineControl__SetExeBtnState(this, v115);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v5; // x1
  int32_t klass; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_4A5EDBB & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3834/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4A5EDBB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (klass = (int32_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v5),
        !exeCombineDlg) )
  {
    sub_1B8880C(SelfUserGame, v5);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v3,
    spendQpVal,
    klass,
    isContainedRare,
    SelfUserGame,
    0LL);
}


void __fastcall SvtEquipCombineControl__SvtEqCombineNullData(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  CombineInfoComponent_o *combineInfoComp; // x0

  SvtEquipCombineControl__DestroyGrid(this, method);
  SvtEquipCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_1B8880C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}