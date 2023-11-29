void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEquipCombineControl__CheckIncrementLv(
        SvtEquipCombineControl_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int afterMaxLv; // w8
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_40FD67B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD67B = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    exp = Entity->fields.exp;
    totalExp = this->fields.totalExp;
    if ( exp <= totalExp )
    {
      if ( exp != totalExp )
      {
        result = 0;
        ++this->fields.checkLv;
        return result;
      }
      afterMaxLv = Entity->fields.lv + 1;
    }
    else
    {
      afterMaxLv = Entity->fields.lv;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_40FD678 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FD678 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v17 = v18;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v16, 0LL) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B16F98(
    p_baseUserServantEntity,
    (System_Int32_array **)selectBase,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t v12; // w20
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40FD680 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD680 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  transform = UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !transform )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v12 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v13 = (UnityEngine_Component_o *)this->fields.selectGrid;
      if ( !v13 )
        break;
      v14 = UnityEngine_Component__get_transform(v13, 0LL);
      if ( !v14 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v14, v12, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      if ( --v12 < 0 )
        goto LABEL_13;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList, 0LL, v6, v7, v8, v9, v10, v11);
}


bool __fastcall SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *__fastcall SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_40FD682 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8373, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    sub_B16FFC(&StringLiteral_8356, v5);
    sub_B16FFC(&StringLiteral_8371, v6);
    byte_40FD682 = 1;
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
      v7 = &StringLiteral_8356;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_8371;
    }
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_8373;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  return (System_String_o *)StringLiteral_1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UnityEngine_GameObject_o *increLvObj; // x0
  UnityEngine_GameObject_o *increValObj; // x0
  UnityEngine_GameObject_o *getExpInfo; // x0
  UILabel_o *currentLvLb; // x0
  UILabel_o *increLvLb; // x0
  UILabel_o *increValLb; // x0
  UILabel_o *getSkillLb; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x22
  BalanceConfig_c *v19; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  UILabel_o *needQpLb; // x20
  System_String_o *v24; // x0
  UIWidget_o *v25; // x20
  int v26; // s0
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD676 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9236, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    sub_B16FFC(&StringLiteral_12413, v7);
    byte_40FD676 = 1;
  }
  this->fields.isExeCombine = 0;
  this->fields.isLimitUpMaterial = 0;
  *(_WORD *)&this->fields.isContainedRare = 0;
  SvtEquipCombineControl__SetExeBtnState(this, method);
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  increLvObj = this->fields.increLvObj;
  if ( !increLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(increLvObj, 0, 0LL);
  increValObj = this->fields.increValObj;
  if ( !increValObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(increValObj, 0, 0LL);
  getExpInfo = this->fields.getExpInfo;
  if ( !getExpInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(getExpInfo, 0, 0LL);
  currentLvLb = this->fields.currentLvLb;
  if ( !currentLvLb )
    goto LABEL_22;
  UILabel__set_text(currentLvLb, (System_String_o *)StringLiteral_1, 0LL);
  increLvLb = this->fields.increLvLb;
  if ( !increLvLb )
    goto LABEL_22;
  UILabel__set_text(increLvLb, (System_String_o *)StringLiteral_1, 0LL);
  increValLb = this->fields.increValLb;
  if ( !increValLb )
    goto LABEL_22;
  UILabel__set_text(increValLb, (System_String_o *)StringLiteral_1, 0LL);
  getSkillLb = this->fields.getSkillLb;
  if ( !getSkillLb )
    goto LABEL_22;
  UILabel__set_text(getSkillLb, (System_String_o *)StringLiteral_1, 0LL);
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  v40 = 0;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v19->static_fields->ServantCombineMax;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  v21 = System_String__Format_43739268(v17, v18, v20, 0LL);
  if ( !selectSumLb )
    goto LABEL_22;
  UILabel__set_text(selectSumLb, v21, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v22);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  v24 = System_Int32__ToString_38275808((int)this + 392, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !needQpLb )
    goto LABEL_22;
  UILabel__set_text(needQpLb, v24, 0LL);
  v25 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
  if ( !v25 )
    goto LABEL_22;
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v30);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v37);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_22:
    sub_B170D4();
  CombineInfoComponent__initStatusInfo(combineInfoComp, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FD675 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD675 = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  System_String_o *v16; // x0
  UILabel_o *needQpTitleLb; // x20
  System_String_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x0
  System_Collections_Generic_Dictionary_long__bool__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  UnityEngine_Behaviour_o *selectMaterialSvtBtn; // x0
  UnityEngine_GameObject_o *materialBgObj; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v44; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  MenuListControl_o *v47; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FD674 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_9242, v11);
    sub_B16FFC(&StringLiteral_8813, v12);
    sub_B16FFC(&StringLiteral_10846, v13);
    byte_40FD674 = 1;
  }
  memset(&v49, 0, sizeof(v49));
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
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10846, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveQpTitleLb, v16, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9242, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(needQpTitleLb, v18, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList, 0LL, v19, v20, v21, v22, v23, v24);
  selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl;
  if ( !selectMtSvtEqTbl )
  {
    v30 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                   v25,
                                                                   v26,
                                                                   v27,
                                                                   v28);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v30,
      (const MethodInfo_2E06984 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v30;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl;
    if ( !selectMtSvtEqTbl )
      goto LABEL_38;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    selectMtSvtEqTbl,
    (const MethodInfo_2E0772C *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v37);
  selectMaterialSvtBtn = (UnityEngine_Behaviour_o *)this->fields.selectMaterialSvtBtn;
  if ( !selectMaterialSvtBtn )
    goto LABEL_38;
  UnityEngine_Behaviour__set_enabled(selectMaterialSvtBtn, 0, 0LL);
  materialBgObj = this->fields.materialBgObj;
  if ( !materialBgObj )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(materialBgObj, 1, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields._targetType_k__BackingField = 0;
  if ( !eventNoticeImg )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8813, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, v44, 0LL), (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v49 = v48;
LABEL_24:
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v49.fields.current )
        sub_B170D4();
      switch ( HIDWORD(v49.fields.current[1].klass) )
      {
        case 0x10:
          v47 = this->fields.menuListCtr;
          if ( !v47 )
            sub_B170D4();
          goto LABEL_34;
        case 0x11:
          v47 = this->fields.menuListCtr;
          if ( !v47 )
            sub_B170D4();
          goto LABEL_34;
        case 0x12:
          v47 = this->fields.menuListCtr;
          if ( !v47 )
            sub_B170D4();
          goto LABEL_34;
        case 0x13:
          v47 = this->fields.menuListCtr;
          if ( !v47 )
            sub_B170D4();
LABEL_34:
          MenuListControl__setBannerIcon(
            v47,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v49.fields.current[5].klass,
            0LL);
          break;
        default:
          goto LABEL_24;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FD67E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD67E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowBaseSvtEqList(combineRootComponent, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_40FD67F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3328, v3);
    byte_40FD67F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3328, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v4,
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FD683 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD683 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowSvtEqMaterialList(combineRootComponent, 0LL);
}


void __fastcall SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o **p_charaGraph; // x21
  struct UICharaGraphTexture_o *TexturePrefab_26882704; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CombineInfoComponent_o *combineInfoComp; // x0

  if ( (byte_40FD679 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, usrSvtData);
    byte_40FD679 = 1;
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
    TexturePrefab_26882704 = CharaGraphManager__CreateTexturePrefab_26882704(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882704;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882704,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  else
  {
    if ( !*p_charaGraph )
      goto LABEL_12;
    UICharaGraphTexture__SetCharacter_35079812(*p_charaGraph, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_12:
    sub_B170D4();
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 isExeCombine; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v10; // x19
  int v11; // s0
  int v15; // s0
  int v19; // s0
  int v23; // s0

  if ( (byte_40FD67D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40FD67D = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.combineTxtImg,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)v7;
  if ( isExeCombine )
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v11, 0LL);
      *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
      if ( v6 )
      {
        UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v15, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v19, 0LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_14;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v23, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20
  System_String_o *v5; // x0

  if ( (byte_40FD677 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40FD677 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = SelfUserGame->fields.qp,
        v5 = System_Int32__ToString_38275808((int)this + 388, (System_String_o *)StringLiteral_9236, 0LL),
        !haveQpLb) )
  {
    sub_B170D4();
  }
  UILabel__set_text(haveQpLb, v5, 0LL);
}


void __fastcall SvtEquipCombineControl__SetSelectMaterialEnable(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectAddGridObj; // x0
  UnityEngine_Behaviour_o *selectMaterialSvtBtn; // x0
  UnityEngine_GameObject_o *materialBgObj; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0

  selectAddGridObj = this->fields.selectAddGridObj;
  if ( !selectAddGridObj
    || (UnityEngine_GameObject__SetActive(selectAddGridObj, 1, 0LL),
        (selectMaterialSvtBtn = (UnityEngine_Behaviour_o *)this->fields.selectMaterialSvtBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(selectMaterialSvtBtn, this->fields.isSelectBase, 0LL),
        (materialBgObj = this->fields.materialBgObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(materialBgObj, !this->fields.isSelectBase, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetStateInfoMsg(
        SvtEquipCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v13; // x21
  float v14; // s4
  float v15; // s5
  float v16; // s6
  __int64 *v17; // x8
  System_String_o *v18; // x1
  UILabel_o *v19; // x0
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FD681 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_7259, v6);
    sub_B16FFC(&StringLiteral_7258, v7);
    sub_B16FFC(&StringLiteral_5746, v8);
    sub_B16FFC(&StringLiteral_12162, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FD681 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v21.fields.g = 0.87891;
  v21.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v21.fields.r = 0.0;
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v21, v14, v15, v16, (const MethodInfo *)&v20);
  if ( !v13 )
LABEL_29:
    sub_B170D4();
  UIWidget__set_color(v13, v20, 0LL);
  if ( state )
  {
    if ( state == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7259;
    }
    else
    {
      if ( state != 2 )
      {
        v18 = (System_String_o *)StringLiteral_1;
        goto LABEL_27;
      }
      if ( this->fields.isExeCombine )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_5746;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v13, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_12162;
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
    v17 = &StringLiteral_7258;
  }
  v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  v19 = this->fields.detailInfoLb;
  if ( !v19 )
    goto LABEL_29;
  UILabel__set_text(v19, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x27
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Int64_array *v37; // x8
  __int64 v38; // x25
  UILabel_o *selectSumLb; // x20
  System_String_o *v40; // x21
  Il2CppObject *v41; // x23
  BalanceConfig_c *v42; // x8
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UserServantEntity_o *baseData; // x8
  __int64 v54; // x20
  __int64 v55; // x22
  int32_t v56; // w26
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitMaster_o *v59; // x24
  WebViewManager_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  struct UserServantEntity_o *v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x20
  __int64 v64; // x22
  __int64 v65; // x23
  int32_t v66; // w0
  WarEntity_o *Entity; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  unsigned __int64 v70; // x26
  struct System_Int64_array *v71; // x8
  System_Collections_Generic_Dictionary_long__bool__o *v72; // x0
  int32_t *v73; // x21
  int64_t v74; // x27
  bool Item; // w0
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  bool v77; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v80; // x23
  UnityEngine_Transform_o *v81; // x20
  int v82; // s0
  UnityEngine_Transform_o *v85; // x0
  WebViewManager_o *v86; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v87; // x0
  UserServantEntity_o *v88; // x0
  UserServantEntity_o *v89; // x20
  __int64 v90; // x22
  __int64 v91; // x25
  int32_t v92; // w22
  int32_t v93; // w0
  ServantLimitEntity_o *v94; // x0
  __int64 v95; // x22
  __int64 v96; // x25
  UserServantEntity_o *v97; // x8
  __int64 v98; // x22
  __int64 v99; // x25
  int32_t v100; // w22
  bool v101; // w20
  __int64 v102; // x22
  __int64 v103; // x25
  __int64 v104; // x20
  __int64 v105; // x22
  int v106; // w8
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v108; // x23
  MaterialSvtInfo_o *v109; // x25
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  MaterialSvtInfo_ClickDelegate_o *v114; // x22
  UIGrid_o *selectGrid; // x0
  UserServantEntity_o *v116; // x8
  int32_t v117; // w22
  __int64 v118; // x20
  __int64 v119; // x23
  int32_t v120; // w0
  ServantLimitEntity_o *v121; // x0
  UILabel_o *basicExpLb; // x20
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  const MethodInfo *v128; // x2
  struct UserServantEntity_o *v129; // x8
  int32_t afterMaxLv; // w23
  int32_t lv; // w1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UnityEngine_GameObject_o *increLvObj; // x0
  UnityEngine_GameObject_o *increValObj; // x0
  struct UserServantEntity_o *v135; // x8
  UILabel_o *currentLvLb; // x20
  System_String_o *v137; // x0
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  System_String_o *v140; // x0
  UILabel_o *increValLb; // x24
  System_String_o *v142; // x25
  Il2CppObject *v143; // x0
  System_String_o *v144; // x0
  CheckCombineResStatus_o *combineResStatus; // x0
  UILabel_o *getSkillLb; // x24
  System_String_o *v147; // x0
  UILabel_o *needQpLb; // x24
  System_String_o *v149; // x0
  CheckCombineResStatus_o *v150; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  __int64 v155; // x20
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  UserServantEntity_o *v162; // x1
  struct UserServantEntity_o *v163; // x8
  CheckCombineResStatus_o *v164; // x0
  CombineInfoComponent_o *combineInfoComp; // x0
  UnityEngine_GameObject_o *getExpInfo; // x0
  UIWidget_o *v167; // x20
  int v168; // s0
  const MethodInfo *v172; // x1
  int v173; // s0
  WarEntity_o *v177; // [xsp+8h] [xbp-98h]
  int32_t targetId; // [xsp+10h] [xbp-90h]
  int32_t v179; // [xsp+14h] [xbp-8Ch]
  signed __int64 v180; // [xsp+18h] [xbp-88h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+20h] [xbp-80h]
  UserServantEntity_o **v182; // [xsp+28h] [xbp-78h]
  int32_t ServantCombineMax; // [xsp+30h] [xbp-70h] BYREF
  int32_t increAmount; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+38h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  UnityEngine_Vector3_o v195; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_40FD67A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, data);
    sub_B16FFC(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_B16FFC(&CombineSvtData_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_23433, v19);
    sub_B16FFC(&StringLiteral_9236, v20);
    sub_B16FFC(&StringLiteral_7242, v21);
    sub_B16FFC(&StringLiteral_12413, v22);
    byte_40FD67A = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v3 )
    goto LABEL_111;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = materialUsrSvtIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList,
    (System_Int32_array **)materialUsrSvtIdList,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl,
    (System_Int32_array **)svtEqMaterialList,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = v3->fields.materialUsrSvtIdList;
  if ( !v37 )
    goto LABEL_111;
  v38 = *(_QWORD *)&v37->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  increAmount = v38;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v42->static_fields->ServantCombineMax;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  v44 = System_String__Format_43739268(v40, v41, v43, 0LL);
  if ( !selectSumLb )
    goto LABEL_111;
  UILabel__set_text(selectSumLb, v44, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_111;
  v55 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v54 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v187.fields.currentCryptoKey = v55;
  *(_QWORD *)&v187.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v187, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v38 < 1 )
    return;
  v59 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_111;
  v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v60,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v62 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_111;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)v61;
  v65 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v188.fields.currentCryptoKey = v65;
  *(_QWORD *)&v188.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v188, 0LL);
  if ( !v63 )
    goto LABEL_111;
  v179 = v56;
  v182 = &this->fields.baseData;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v63,
             v66,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_111;
  v70 = 0LL;
  v177 = Entity;
  targetId = Entity->fields.targetId;
  v180 = (int)v38;
  do
  {
    v71 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_111;
    if ( v70 >= v71->max_length )
    {
      sub_B17100(Entity, v68, v69);
      sub_B170A0();
    }
    v72 = v3->fields.svtEqMaterialList;
    if ( !v72 )
      goto LABEL_111;
    v73 = (int32_t *)v3;
    v74 = v71->m_Items[v70];
    Item = System_Collections_Generic_Dictionary_long__bool___get_Item(
             v72,
             v74,
             (const MethodInfo_2E07474 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_111;
    svtFaceInfo = this->fields.svtFaceInfo;
    v77 = Item;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      goto LABEL_111;
    v80 = Object;
    v81 = UnityEngine_GameObject__get_transform(Object, 0LL);
    *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v81 )
      goto LABEL_111;
    UnityEngine_Transform__set_localPosition(v81, *(UnityEngine_Vector3_o *)&v82, 0LL);
    v85 = UnityEngine_GameObject__get_transform(v80, 0LL);
    if ( !v85 )
      goto LABEL_111;
    v195.fields.x = 0.5;
    v195.fields.y = 0.5;
    v195.fields.z = 0.5;
    UnityEngine_Transform__set_localScale(v85, v195, 0LL);
    v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v86 )
      goto LABEL_111;
    v87 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)v86,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v87 )
      goto LABEL_111;
    v88 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            v87,
            v74,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v88 )
      goto LABEL_111;
    v89 = v88;
    v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
    v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v189.fields.currentCryptoKey = v91;
    *(_QWORD *)&v189.fields.fakeValue = v90;
    v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v189, 0LL);
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89->fields.limitCount, 0LL);
    if ( !v59 )
      goto LABEL_111;
    v94 = ServantLimitMaster__GetEntity(v59, v92, v93, 0LL);
    if ( !v94 )
      goto LABEL_111;
    if ( v94->fields.rarity >= 4 )
      this->fields.isContainedRare = 1;
    v96 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
    v95 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v190.fields.currentCryptoKey = v96;
    *(_QWORD *)&v190.fields.fakeValue = v95;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v190, 0LL) >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v97 = *v182;
    if ( !*v182 )
      goto LABEL_111;
    v99 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
    v98 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v191.fields.currentCryptoKey = v99;
    *(_QWORD *)&v191.fields.fakeValue = v98;
    v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v191, 0LL);
    if ( v100 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89->fields.svtId, 0LL) )
      goto LABEL_55;
    if ( !*v182 )
      goto LABEL_111;
    if ( !UserServantEntity__isLimitCountMax(*v182, 0LL) )
    {
      v103 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
      v102 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v192.fields.currentCryptoKey = v103;
      *(_QWORD *)&v192.fields.fakeValue = v102;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v192, 0LL) < 1 )
      {
        v106 = 1;
      }
      else
      {
        v105 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
        v104 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v193.fields.currentCryptoKey = v105;
        *(_QWORD *)&v193.fields.fakeValue = v104;
        v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v193, 0LL) + 1;
        this->fields.isLimitUpMaterial = 1;
      }
      v179 += v106;
      v101 = v179 > targetId;
    }
    else
    {
LABEL_55:
      v101 = 0;
    }
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v80,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v108 = this->fields.baseData;
    v109 = (MaterialSvtInfo_o *)Component_srcLineSprite;
    v114 = (MaterialSvtInfo_ClickDelegate_o *)sub_B170CC(MaterialSvtInfo_ClickDelegate_TypeInfo, v110, v111, v112, v113);
    MaterialSvtInfo_ClickDelegate___ctor(v114, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !v109 )
      goto LABEL_111;
    MaterialSvtInfo__setMaterialSvtInfo_20825284(v109, v70++, v108, v74, 1, v101, v77, v114, 0LL);
    v3 = (SetCombineData_o *)v73;
  }
  while ( (__int64)v70 < v180 );
  selectGrid = this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_111;
  UIGrid__set_repositionNow(selectGrid, 1, 0LL);
  v116 = *v182;
  v117 = v179 >= targetId ? targetId : v179;
  if ( !v116 )
    goto LABEL_111;
  v119 = *(_QWORD *)&v116->fields.svtId.fields.currentCryptoKey;
  v118 = *(_QWORD *)&v116->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v194.fields.currentCryptoKey = v119;
  *(_QWORD *)&v194.fields.fakeValue = v118;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v194, 0LL);
  v121 = ServantLimitMaster__GetEntity(v59, v120, v117, 0LL);
  if ( !v121 )
    goto LABEL_111;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = v121->fields.lvMax;
  this->fields.getExpVal = v73[9] + v73[8];
  increAmount = v73[8];
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v124 = System_String__Format((System_String_o *)StringLiteral_23433, v123, 0LL);
  if ( !basicExpLb )
    goto LABEL_111;
  UILabel__set_text(basicExpLb, v124, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v73[9];
  v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  v127 = System_String__Format((System_String_o *)StringLiteral_23433, v126, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_111;
  UILabel__set_text(addTotalExpLb, v127, 0LL);
  v129 = this->fields.baseData;
  this->fields.expType = HIDWORD(v177[1].klass);
  if ( !v129 )
    goto LABEL_111;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v129->fields.exp + this->fields.getExpVal;
  lv = v129->fields.lv;
  this->fields.checkLv = lv;
  if ( lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v128) )
      lv = this->fields.checkLv;
  }
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive(currentLvObj, 1, 0LL);
  increLvObj = this->fields.increLvObj;
  if ( !increLvObj )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive(increLvObj, 1, 0LL);
  increValObj = this->fields.increValObj;
  if ( !increValObj )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive(increValObj, 1, 0LL);
  v135 = this->fields.baseData;
  if ( !v135 )
    goto LABEL_111;
  currentLvLb = this->fields.currentLvLb;
  v137 = System_Int32__ToString((int)v135 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_111;
  UILabel__set_text(currentLvLb, v137, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  v140 = System_Int32__ToString((int)this + 376, 0LL);
  if ( !increLvLb )
    goto LABEL_111;
  UILabel__set_text(increLvLb, v140, 0LL);
  if ( !*v182 )
    goto LABEL_111;
  this->fields.increAmount = this->fields.increLv - (*v182)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_7242, 0LL);
  increAmount = this->fields.increAmount;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v144 = System_String__Format(v142, v143, 0LL);
  if ( !increValLb )
    goto LABEL_111;
  UILabel__set_text(increValLb, v144, 0LL);
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_111;
  getSkillLb = this->fields.getSkillLb;
  v147 = CheckCombineResStatus__getSvtEqSkillByCombine(combineResStatus, *v182, *p_increLv, v117, 0LL);
  if ( !getSkillLb )
    goto LABEL_111;
  UILabel__set_text(getSkillLb, v147, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v73[7];
  v149 = System_Int32__ToString_38275808((int)this + 392, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !needQpLb )
    goto LABEL_111;
  UILabel__set_text(needQpLb, v149, 0LL);
  v150 = this->fields.combineResStatus;
  if ( !v150 )
    goto LABEL_111;
  CheckCombineResStatus__getCombineResStatus(v150, &afterAtk[1], afterAtk, *v182, *p_increLv, 0LL);
  afterAtk[1] += v73[12];
  afterAtk[0] += v73[13];
  v155 = sub_B170CC(CombineSvtData_TypeInfo, v151, v152, v153, v154);
  CombineSvtData___ctor((CombineSvtData_o *)v155, 0LL);
  if ( !v155 )
    goto LABEL_111;
  v162 = *v182;
  *(_QWORD *)(v155 + 16) = *v182;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v155 + 16),
    (System_Int32_array **)v162,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  *(_DWORD *)(v155 + 24) = this->fields.increLv;
  *(_DWORD *)(v155 + 28) = v117;
  *(_DWORD *)(v155 + 32) = this->fields.afterMaxLv;
  v163 = this->fields.baseData;
  if ( !v163 )
    goto LABEL_111;
  v164 = this->fields.combineResStatus;
  if ( !v164 )
    goto LABEL_111;
  CheckCombineResStatus__setSvtExp(
    v164,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v163->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v155 + 36) = lateExp[1];
  *(_DWORD *)(v155 + 40) = lateExp[0];
  *(_DWORD *)(v155 + 44) = afterAtk[1];
  *(_DWORD *)(v155 + 48) = v73[12];
  *(_DWORD *)(v155 + 52) = afterAtk[0];
  *(_DWORD *)(v155 + 56) = v73[13];
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_111;
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v155, 0LL);
  getExpInfo = this->fields.getExpInfo;
  if ( !getExpInfo )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive(getExpInfo, 1, 0LL);
  v167 = (UIWidget_o *)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v173 = UnityEngine_Color__get_white(0LL);
    if ( v167 )
    {
      UIWidget__set_color(v167, *(UnityEngine_Color_o *)&v173, 0LL);
      this->fields.isExeCombine = 1;
      goto LABEL_109;
    }
LABEL_111:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v168 = UnityEngine_Color__get_red(0LL);
  if ( !v167 )
    goto LABEL_111;
  UIWidget__set_color(v167, *(UnityEngine_Color_o *)&v168, 0LL);
  this->fields.isExeCombine = 0;
LABEL_109:
  SvtEquipCombineControl__SetExeBtnState(this, v172);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v6; // x1
  int32_t qp; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26
  System_String_o *MaterialStatusInfoMsg; // x0

  if ( (byte_40FD67C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3328, v3);
    byte_40FD67C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3328, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (qp = SelfUserGame->fields.qp,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        MaterialStatusInfoMsg = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v6),
        !exeCombineDlg) )
  {
    sub_B170D4();
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v4,
    spendQpVal,
    qp,
    isContainedRare,
    MaterialStatusInfoMsg,
    0LL);
}


void __fastcall SvtEquipCombineControl__SvtEqCombineNullData(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CombineInfoComponent_o *combineInfoComp; // x0

  SvtEquipCombineControl__DestroyGrid(this, method);
  SvtEquipCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_B170D4();
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}