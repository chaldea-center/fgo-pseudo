void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
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

  if ( (byte_42ACFB6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ACFB6 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_B52A5C(Instance, v7);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q0
  const MethodInfo *v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_42ACFB3 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42ACFB3 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v7;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v12 = v13;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v12, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v10);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  *p_baseUserServantEntity = selectBase;
  sub_B52920(p_baseUserServantEntity);
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
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42ACFBB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACFBB = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !selectGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)selectGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
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
                                                v5,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_14:
    sub_B52A5C(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_B52920(&this->fields.selectMtSvtEqList);
}


bool __fastcall SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *__fastcall SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_42ACFBD & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8449/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_8432/*"LIMIT_BOTH_MSG"*/);
    sub_B52984(&StringLiteral_8447/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_42ACFBD = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    if ( this->fields.isLimitUpMaterial )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_8432/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_8447/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v3, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_8449/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v3, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall SvtEquipCombineControl__GetTutorialOpenType(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  return 38;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__InitInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x22
  BalanceConfig_c *v8; // x8
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1
  UILabel_o *needQpLb; // x20
  UIWidget_o *v12; // x20
  int v13; // s0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ACFB1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42ACFB1 = 1;
  }
  this->fields.isExeCombine = 0;
  this->fields.isLimitUpMaterial = 0;
  *(_WORD *)&this->fields.isContainedRare = 0;
  SvtEquipCombineControl__SetExeBtnState(this, method);
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.increValObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.getExpInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  v20 = 0;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v8->static_fields->ServantCombineMax;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_44563852(v6, v7, v9, 0LL);
  if ( !selectSumLb )
    goto LABEL_22;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v10);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_39387012(
                                               (int)this + 392,
                                               (System_String_o *)StringLiteral_9323/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_22;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  v12 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  if ( !v12 )
    goto LABEL_22;
  UIWidget__set_color(v12, *(UnityEngine_Color_o *)&v13, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v17);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_B52920(&this->fields.selectMtSvtEqTbl);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v18);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_22:
    sub_B52A5C(currentLvObj, v3);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_42ACFB0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACFB0 = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_B52A5C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B52920(p_charaGraph);
  }
}


void __fastcall SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_Collections_Generic_Dictionary_long__bool__o *v7; // x21
  const MethodInfo *v8; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  MenuListControl_o *v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ACFAF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_9329/*"NEED_QP_INFO"*/);
    sub_B52984(&StringLiteral_8896/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_B52984(&StringLiteral_10966/*"QP_TAKE"*/);
    byte_42ACFAF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  EventTutorialMaster__CheckTutorial(0, 38, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10966/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_B52920(&this->fields.selectMtSvtEqList);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v7 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v7,
      (const MethodInfo_2F462D0 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v7;
    sub_B52920(&this->fields.selectMtSvtEqTbl);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_38;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_2F47078 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v8);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)helpBtn, 0, 0LL);
  helpBtn = this->fields.materialBgObj;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  this->fields._targetType_k__BackingField = 0;
  if ( !helpBtn )
    goto LABEL_38;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_38:
    sub_B52A5C(helpBtn, v3);
  }
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      combineEventList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v12 )
        break;
      if ( !v16.fields.current )
        sub_B52A5C(v12, v13);
      switch ( HIDWORD(v16.fields.current[1].klass) )
      {
        case 0x10:
          v14 = this->fields.menuListCtr;
          if ( !v14 )
            sub_B52A5C(0LL, v13);
          goto LABEL_34;
        case 0x11:
          v14 = this->fields.menuListCtr;
          if ( !v14 )
            sub_B52A5C(0LL, v13);
          goto LABEL_34;
        case 0x12:
          v14 = this->fields.menuListCtr;
          if ( !v14 )
            sub_B52A5C(0LL, v13);
          goto LABEL_34;
        case 0x13:
          v14 = this->fields.menuListCtr;
          if ( !v14 )
            sub_B52A5C(0LL, v13);
LABEL_34:
          MenuListControl__setBannerIcon(
            v14,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v16.fields.current[5].klass,
            0LL);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42ACFB9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_42ACFB9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  combineRootComponent = (CombineRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !combineRootComponent )
    goto LABEL_16;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)combineRootComponent, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__ShowBaseSvtEqList(combineRootComponent, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(combineRootComponent, v4);
  }
  v5 = Method_SvtEquipCombineControl_OnClickBase__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C(Method_SvtEquipCombineControl_OnClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42ACFBA & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3370/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_42ACFBA = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3370/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B52A5C(v3, v4);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    this->fields.exeCombineDlg,
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
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42ACFBE & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACFBE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v3);
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
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_42ACFB4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACFB4 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    this->fields.charaGraph = CharaGraphManager__CreateTexturePrefab_24904344(
                                this->fields.charaGraphBase,
                                usrSvtData,
                                10,
                                0LL,
                                0LL);
    sub_B52920(&this->fields.charaGraph);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_12;
    UICharaGraphTexture__SetCharacter_35943888(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_B52920(&this->fields.baseData);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_12:
    sub_B52A5C(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isExeCombine; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0
  int v17; // s0
  int v21; // s0

  if ( (byte_42ACFB8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42ACFB8 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( isExeCombine )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v9, 0LL);
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( v4 )
      {
        UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v13, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B52A5C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v17, 0LL);
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_14;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v21, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42ACFB2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42ACFB2 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39387012((int)this + 388, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B52A5C(SelfUserGame, v4);
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
    sub_B52A5C(selectAddGridObj, method);
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
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x21
  float v8; // s4
  float v9; // s5
  float v10; // s6
  __int64 *v11; // x8
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_42ACFBC & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7333/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_B52984(&StringLiteral_7332/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_B52984(&StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ACFBC = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v13.fields.g = 0.87891;
  v13.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v13.fields.r = 0.0;
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  UnityEngine_Color___ctor_41463668(v13, v8, v9, v10, (const MethodInfo *)&v12);
  if ( !v7 )
LABEL_29:
    sub_B52A5C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v7, v12, 0LL);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_7333/*"INFO_MSG_SVTEQ_MATERIAL"*/;
    }
    else
    {
      if ( v3 != 2 )
      {
        *(_QWORD *)&state = StringLiteral_1/*""*/;
        goto LABEL_27;
      }
      if ( this->fields.isExeCombine )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = &StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = &StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/;
      }
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_7332/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v11, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x27
  void *Instance; // x0
  __int64 lv; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v8; // x25
  UILabel_o *selectSumLb; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x23
  BalanceConfig_c *v12; // x8
  Il2CppObject *v13; // x0
  struct UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v16; // x20
  __int64 v17; // x22
  int32_t v18; // w26
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitMaster_o *v20; // x24
  struct UserServantEntity_o *v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x20
  __int64 v23; // x22
  __int64 v24; // x23
  unsigned __int64 v25; // x26
  struct System_Int64_array *v26; // x8
  int32_t *v27; // x21
  int64_t v28; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v30; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x23
  UnityEngine_Transform_o *v33; // x20
  int v34; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x20
  __int64 v38; // x22
  __int64 v39; // x25
  int32_t v40; // w22
  __int64 v41; // x22
  __int64 v42; // x25
  UserServantEntity_o *v43; // x8
  __int64 v44; // x22
  __int64 v45; // x25
  int32_t v46; // w22
  bool v47; // w20
  __int64 v48; // x22
  __int64 v49; // x25
  __int64 v50; // x20
  __int64 v51; // x22
  int v52; // w8
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v54; // x23
  MaterialSvtInfo_o *v55; // x25
  MaterialSvtInfo_ClickDelegate_o *v56; // x22
  UserServantEntity_o *v57; // x8
  int32_t v58; // w22
  __int64 v59; // x20
  __int64 v60; // x23
  int32_t v61; // w0
  UILabel_o *basicExpLb; // x20
  Il2CppObject *v63; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x2
  struct UserServantEntity_o *v67; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v69; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v74; // x25
  Il2CppObject *v75; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v78; // x20
  struct UserServantEntity_o *v79; // x8
  UIWidget_o *v80; // x20
  int v81; // s0
  const MethodInfo *v85; // x1
  int v86; // s0
  __int64 v90; // x0
  _DWORD *v91; // [xsp+8h] [xbp-98h]
  int32_t v92; // [xsp+10h] [xbp-90h]
  int32_t v93; // [xsp+14h] [xbp-8Ch]
  signed __int64 v94; // [xsp+18h] [xbp-88h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+20h] [xbp-80h]
  UserServantEntity_o **v96; // [xsp+28h] [xbp-78h]
  int32_t ServantCombineMax; // [xsp+30h] [xbp-70h] BYREF
  int32_t increAmount; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+38h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_42ACFB5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnClickMaterial__);
    sub_B52984(&CombineSvtData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_7316/*"INCREMENT_SVTLEVEL"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42ACFB5 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v3 )
    goto LABEL_111;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = v3->fields.materialUsrSvtIdList;
  sub_B52920(&this->fields.selectMtSvtEqList);
  this->fields.selectMtSvtEqTbl = v3->fields.svtEqMaterialList;
  sub_B52920(&this->fields.selectMtSvtEqTbl);
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_111;
  v8 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  increAmount = v8;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v12->static_fields->ServantCombineMax;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format_44563852(v10, v11, v13, 0LL);
  if ( !selectSumLb )
    goto LABEL_111;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  p_baseData = &this->fields.baseData;
  this->fields.baseData = v3->fields.baseSvtData;
  sub_B52920(&this->fields.baseData);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_111;
  v17 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v101.fields.currentCryptoKey = v17;
  *(_QWORD *)&v101.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v101, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v8 < 1 )
    return;
  v20 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_111;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v102.fields.currentCryptoKey = v24;
  *(_QWORD *)&v102.fields.fakeValue = v23;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v102, 0LL);
  if ( !v22 )
    goto LABEL_111;
  v93 = v18;
  v96 = &this->fields.baseData;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v22,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_111;
  v25 = 0LL;
  v91 = Instance;
  v92 = *((_DWORD *)Instance + 22);
  v94 = (int)v8;
  do
  {
    v26 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_111;
    if ( v25 >= v26->max_length )
    {
      v90 = sub_B52A88(Instance);
      sub_B52A28(v90, 0LL);
    }
    Instance = v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_111;
    v27 = (int32_t *)v3;
    v28 = v26->m_Items[v25];
    Instance = (void *)System_Collections_Generic_Dictionary_long__bool___get_Item(
                         (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                         v28,
                         (const MethodInfo_2F46DC0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_111;
    svtFaceInfo = this->fields.svtFaceInfo;
    v30 = (char)Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v32 = (UnityEngine_GameObject_o *)Instance;
    v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v33 )
      goto LABEL_111;
    UnityEngine_Transform__set_localPosition(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v109.fields.x = 0.5;
    v109.fields.y = 0.5;
    v109.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v109, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 v28,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_111;
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v39 = *((_QWORD *)Instance + 10);
    v38 = *((_QWORD *)Instance + 11);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v103.fields.currentCryptoKey = v39;
    *(_QWORD *)&v103.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v103, 0LL);
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37[6], 0LL);
    if ( !v20 )
      goto LABEL_111;
    Instance = ServantLimitMaster__GetEntity(v20, v40, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_111;
    if ( *((int *)Instance + 6) >= 4 )
      this->fields.isContainedRare = 1;
    v42 = *(_QWORD *)&v37[6].fields.currentCryptoKey;
    v41 = *(_QWORD *)&v37[6].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v104.fields.currentCryptoKey = v42;
    *(_QWORD *)&v104.fields.fakeValue = v41;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v104, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v43 = *v96;
    if ( !*v96 )
      goto LABEL_111;
    v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v105.fields.currentCryptoKey = v45;
    *(_QWORD *)&v105.fields.fakeValue = v44;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v105, 0LL);
    if ( v46 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37[5], 0LL) )
      goto LABEL_55;
    Instance = *v96;
    if ( !*v96 )
      goto LABEL_111;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL) )
    {
      v49 = *(_QWORD *)&v37[6].fields.currentCryptoKey;
      v48 = *(_QWORD *)&v37[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v106.fields.currentCryptoKey = v49;
      *(_QWORD *)&v106.fields.fakeValue = v48;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v106, 0LL) < 1 )
      {
        v52 = 1;
      }
      else
      {
        v51 = *(_QWORD *)&v37[6].fields.currentCryptoKey;
        v50 = *(_QWORD *)&v37[6].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v107.fields.currentCryptoKey = v51;
        *(_QWORD *)&v107.fields.fakeValue = v50;
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v107, 0LL) + 1;
        this->fields.isLimitUpMaterial = 1;
      }
      v93 += v52;
      v47 = v93 > v92;
    }
    else
    {
LABEL_55:
      v47 = 0;
    }
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v32,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v54 = this->fields.baseData;
    v55 = (MaterialSvtInfo_o *)Component_srcLineSprite;
    v56 = (MaterialSvtInfo_ClickDelegate_o *)sub_B52A54(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(v56, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !v55 )
      goto LABEL_111;
    MaterialSvtInfo__setMaterialSvtInfo_24466844(v55, v25++, v54, v28, 1, v47, v30 & 1, v56, 0LL);
    v3 = (SetCombineData_o *)v27;
  }
  while ( (__int64)v25 < v94 );
  Instance = this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_111;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v57 = *v96;
  v58 = v93 >= v92 ? v92 : v93;
  if ( !v57 )
    goto LABEL_111;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v108.fields.currentCryptoKey = v60;
  *(_QWORD *)&v108.fields.fakeValue = v59;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v108, 0LL);
  Instance = ServantLimitMaster__GetEntity(v20, v61, v58, 0LL);
  if ( !Instance )
    goto LABEL_111;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *((_DWORD *)Instance + 7);
  this->fields.getExpVal = v27[9] + v27[8];
  increAmount = v27[8];
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v63, 0LL);
  if ( !basicExpLb )
    goto LABEL_111;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v27[9];
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v65, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_111;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v67 = this->fields.baseData;
  this->fields.expType = v91[33];
  if ( !v67 )
    goto LABEL_111;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v67->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v67->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v66) )
      LODWORD(lv) = this->fields.checkLv;
  }
  Instance = this->fields.currentLvObj;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.increLvObj;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.increValObj;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v69 = this->fields.baseData;
  if ( !v69 )
    goto LABEL_111;
  currentLvLb = this->fields.currentLvLb;
  Instance = System_Int32__ToString((int)v69 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_111;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = System_Int32__ToString((int)this + 376, 0LL);
  if ( !increLvLb )
    goto LABEL_111;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v96 )
    goto LABEL_111;
  this->fields.increAmount = this->fields.increLv - (*v96)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_7316/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format(v74, v75, 0LL);
  if ( !increValLb )
    goto LABEL_111;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  getSkillLb = this->fields.getSkillLb;
  Instance = CheckCombineResStatus__getSvtEqSkillByCombine(
               (CheckCombineResStatus_o *)Instance,
               *v96,
               *p_increLv,
               v58,
               0LL);
  if ( !getSkillLb )
    goto LABEL_111;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v27[7];
  Instance = System_Int32__ToString_39387012((int)this + 392, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_111;
  UILabel__set_text(needQpLb, (System_String_o *)Instance, 0LL);
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    &afterAtk[1],
    afterAtk,
    *v96,
    *p_increLv,
    0LL);
  afterAtk[1] += v27[12];
  afterAtk[0] += v27[13];
  v78 = sub_B52A54(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v78, 0LL);
  if ( !v78 )
    goto LABEL_111;
  *(_QWORD *)(v78 + 16) = *v96;
  sub_B52920(v78 + 16);
  *(_DWORD *)(v78 + 24) = this->fields.increLv;
  *(_DWORD *)(v78 + 28) = v58;
  *(_DWORD *)(v78 + 32) = this->fields.afterMaxLv;
  v79 = this->fields.baseData;
  if ( !v79 )
    goto LABEL_111;
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v79->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v78 + 36) = lateExp[1];
  *(_DWORD *)(v78 + 40) = lateExp[0];
  *(_DWORD *)(v78 + 44) = afterAtk[1];
  *(_DWORD *)(v78 + 48) = v27[12];
  *(_DWORD *)(v78 + 52) = afterAtk[0];
  *(_DWORD *)(v78 + 56) = v27[13];
  Instance = this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_111;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v78, 0LL);
  Instance = this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v80 = (UIWidget_o *)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v86 = UnityEngine_Color__get_white(0LL);
    if ( v80 )
    {
      UIWidget__set_color(v80, *(UnityEngine_Color_o *)&v86, 0LL);
      this->fields.isExeCombine = 1;
      goto LABEL_109;
    }
LABEL_111:
    sub_B52A5C(Instance, lv);
  }
  *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_red(0LL);
  if ( !v80 )
    goto LABEL_111;
  UIWidget__set_color(v80, *(UnityEngine_Color_o *)&v81, 0LL);
  this->fields.isExeCombine = 0;
LABEL_109:
  SvtEquipCombineControl__SetExeBtnState(this, v85);
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

  if ( (byte_42ACFB7 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3370/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_42ACFB7 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3370/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
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
    sub_B52A5C(SelfUserGame, v5);
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
    sub_B52A5C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}