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
  void *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_418B1F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B1F1 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_B2C434(Instance, v8);
    }
    v9 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v9 <= totalExp )
    {
      if ( v9 != totalExp )
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

  if ( (byte_418B1EE & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_418B1EE = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v16, 0LL) )
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
  sub_B2C2F8(
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
  int32_t childCount; // w0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int32_t v11; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_418B1F6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B1F6 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !selectGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)selectGrid, 0LL);
  v11 = childCount - 1;
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
                                                v11,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      if ( --v11 < 0 )
        goto LABEL_13;
    }
LABEL_14:
    sub_B2C434(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_418B1F8 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8402/*"LIMIT_UP_MATERIAL_INFO_MSG"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    sub_B2C35C(&StringLiteral_8385/*"LIMIT_BOTH_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_8400/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/, v6);
    byte_418B1F8 = 1;
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
      v7 = &StringLiteral_8385/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_8400/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
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
    v7 = &StringLiteral_8402/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x22
  BalanceConfig_c *v13; // x8
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x1
  UILabel_o *needQpLb; // x20
  UIWidget_o *v17; // x20
  int v18; // s0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418B1EC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v7);
    byte_418B1EC = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  v31 = 0;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v13->static_fields->ServantCombineMax;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_44301068(v11, v12, v14, 0LL);
  if ( !selectSumLb )
    goto LABEL_22;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v15);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_38381416(
                                               (int)this + 392,
                                               (System_String_o *)StringLiteral_9266/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_22;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  v17 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_22;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v22);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v29);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_22:
    sub_B2C434(currentLvObj, v8);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418B1EB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B1EB = 1;
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
      sub_B2C434(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_long__bool__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  MenuListControl_o *v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418B1EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v11);
    sub_B2C35C(&StringLiteral_8842/*"MSG_PRESELECT_BASE_SVTEQ"*/, v12);
    sub_B2C35C(&StringLiteral_10882/*"QP_TAKE"*/, v13);
    byte_418B1EA = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10882/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList, 0LL, v18, v19, v20, v21, v22, v23);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v24 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v24,
      (const MethodInfo_2E4D0B4 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_38;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_2E4DE5C *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v31);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_38:
    sub_B2C434(helpBtn, v14);
  }
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      combineEventList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v39,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v35 )
        break;
      if ( !v39.fields.current )
        sub_B2C434(v35, v36);
      switch ( HIDWORD(v39.fields.current[1].klass) )
      {
        case 0x10:
          v37 = this->fields.menuListCtr;
          if ( !v37 )
            sub_B2C434(0LL, v36);
          goto LABEL_34;
        case 0x11:
          v37 = this->fields.menuListCtr;
          if ( !v37 )
            sub_B2C434(0LL, v36);
          goto LABEL_34;
        case 0x12:
          v37 = this->fields.menuListCtr;
          if ( !v37 )
            sub_B2C434(0LL, v36);
          goto LABEL_34;
        case 0x13:
          v37 = this->fields.menuListCtr;
          if ( !v37 )
            sub_B2C434(0LL, v36);
LABEL_34:
          MenuListControl__setBannerIcon(
            v37,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v39.fields.current[5].klass,
            0LL);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v39,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_418B1F4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B1F4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ShowBaseSvtEqList(combineRootComponent, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_418B1F5 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3337/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v3);
    byte_418B1F5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B2C434(v4, v5);
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
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_418B1F9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B1F9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
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
  struct UICharaGraphTexture_o *TexturePrefab_25402380; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_418B1EF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, usrSvtData);
    byte_418B1EF = 1;
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
    TexturePrefab_25402380 = CharaGraphManager__CreateTexturePrefab_25402380(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_25402380;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_25402380,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_12;
    UICharaGraphTexture__SetCharacter_35719692(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_12:
    sub_B2C434(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isExeCombine; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0
  int v18; // s0
  int v22; // s0

  if ( (byte_418B1F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_418B1F3 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v9 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( isExeCombine )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v10, 0LL);
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( v5 )
      {
        UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v14, 0LL);
        if ( v9 )
        {
          UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v9, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v18, 0LL);
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_14;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v22, 0LL);
  if ( !v9 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_418B1ED & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_418B1ED = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38381416((int)this + 388, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B2C434(SelfUserGame, v4);
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
    sub_B2C434(selectAddGridObj, method);
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
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_418B1F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_7287/*"INFO_MSG_SVTEQ_MATERIAL"*/, v6);
    sub_B2C35C(&StringLiteral_7286/*"INFO_MSG_SVTEQ_BASE"*/, v7);
    sub_B2C35C(&StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418B1F7 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19.fields.g = 0.87891;
  v19.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v19.fields.r = 0.0;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(v19, v14, v15, v16, (const MethodInfo *)&v18);
  if ( !v13 )
LABEL_29:
    sub_B2C434(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v13, v18, 0LL);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7287/*"INFO_MSG_SVTEQ_MATERIAL"*/;
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
        v17 = &StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/;
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
        v17 = &StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/;
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
    v17 = &StringLiteral_7286/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v17, 0LL);
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
  void *Instance; // x0
  __int64 lv; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int64_array *v39; // x8
  __int64 v40; // x25
  UILabel_o *selectSumLb; // x20
  System_String_o *v42; // x21
  Il2CppObject *v43; // x23
  BalanceConfig_c *v44; // x8
  Il2CppObject *v45; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserServantEntity_o *baseData; // x8
  __int64 v55; // x20
  __int64 v56; // x22
  int32_t v57; // w26
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitMaster_o *v59; // x24
  struct UserServantEntity_o *v60; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x20
  __int64 v62; // x22
  __int64 v63; // x23
  unsigned __int64 v64; // x26
  struct System_Int64_array *v65; // x8
  int32_t *v66; // x21
  int64_t v67; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v69; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v71; // x23
  UnityEngine_Transform_o *v72; // x20
  int v73; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x20
  __int64 v77; // x22
  __int64 v78; // x25
  int32_t v79; // w22
  __int64 v80; // x22
  __int64 v81; // x25
  UserServantEntity_o *v82; // x8
  __int64 v83; // x22
  __int64 v84; // x25
  int32_t v85; // w22
  bool v86; // w20
  __int64 v87; // x22
  __int64 v88; // x25
  __int64 v89; // x20
  __int64 v90; // x22
  int v91; // w8
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v93; // x23
  MaterialSvtInfo_o *v94; // x25
  MaterialSvtInfo_ClickDelegate_o *v95; // x22
  UserServantEntity_o *v96; // x8
  int32_t v97; // w22
  __int64 v98; // x20
  __int64 v99; // x23
  int32_t v100; // w0
  UILabel_o *basicExpLb; // x20
  Il2CppObject *v102; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v104; // x0
  const MethodInfo *v105; // x2
  struct UserServantEntity_o *v106; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v108; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v113; // x25
  Il2CppObject *v114; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  UserServantEntity_o *v124; // x1
  struct UserServantEntity_o *v125; // x8
  UIWidget_o *v126; // x20
  int v127; // s0
  const MethodInfo *v131; // x1
  int v132; // s0
  __int64 v136; // x0
  _DWORD *v137; // [xsp+8h] [xbp-98h]
  int32_t v138; // [xsp+10h] [xbp-90h]
  int32_t v139; // [xsp+14h] [xbp-8Ch]
  signed __int64 v140; // [xsp+18h] [xbp-88h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+20h] [xbp-80h]
  UserServantEntity_o **v142; // [xsp+28h] [xbp-78h]
  int32_t ServantCombineMax; // [xsp+30h] [xbp-70h] BYREF
  int32_t increAmount; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+38h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_418B1F0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, data);
    sub_B2C35C(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_B2C35C(&CombineSvtData_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v19);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v20);
    sub_B2C35C(&StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, v21);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v22);
    byte_418B1F0 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqList,
    (System_Int32_array **)materialUsrSvtIdList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectMtSvtEqTbl,
    (System_Int32_array **)svtEqMaterialList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = v3->fields.materialUsrSvtIdList;
  if ( !v39 )
    goto LABEL_111;
  v40 = *(_QWORD *)&v39->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  increAmount = v40;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v44->static_fields->ServantCombineMax;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format_44301068(v42, v43, v45, 0LL);
  if ( !selectSumLb )
    goto LABEL_111;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_111;
  v56 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v55 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v147.fields.currentCryptoKey = v56;
  *(_QWORD *)&v147.fields.fakeValue = v55;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v147, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v40 < 1 )
    return;
  v59 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_111;
  v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v63 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v148.fields.currentCryptoKey = v63;
  *(_QWORD *)&v148.fields.fakeValue = v62;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v148, 0LL);
  if ( !v61 )
    goto LABEL_111;
  v139 = v57;
  v142 = &this->fields.baseData;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v61,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_111;
  v64 = 0LL;
  v137 = Instance;
  v138 = *((_DWORD *)Instance + 22);
  v140 = (int)v40;
  do
  {
    v65 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_111;
    if ( v64 >= v65->max_length )
    {
      v136 = sub_B2C460(Instance);
      sub_B2C400(v136, 0LL);
    }
    Instance = v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_111;
    v66 = (int32_t *)v3;
    v67 = v65->m_Items[v64];
    Instance = (void *)System_Collections_Generic_Dictionary_long__bool___get_Item(
                         (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                         v67,
                         (const MethodInfo_2E4DBA4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_111;
    svtFaceInfo = this->fields.svtFaceInfo;
    v69 = (char)Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v71 = (UnityEngine_GameObject_o *)Instance;
    v72 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v72 )
      goto LABEL_111;
    UnityEngine_Transform__set_localPosition(v72, *(UnityEngine_Vector3_o *)&v73, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v71, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v155.fields.x = 0.5;
    v155.fields.y = 0.5;
    v155.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v155, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 v67,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_111;
    v76 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v78 = *((_QWORD *)Instance + 10);
    v77 = *((_QWORD *)Instance + 11);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v149.fields.currentCryptoKey = v78;
    *(_QWORD *)&v149.fields.fakeValue = v77;
    v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v149, 0LL);
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76[6], 0LL);
    if ( !v59 )
      goto LABEL_111;
    Instance = ServantLimitMaster__GetEntity(v59, v79, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_111;
    if ( *((int *)Instance + 6) >= 4 )
      this->fields.isContainedRare = 1;
    v81 = *(_QWORD *)&v76[6].fields.currentCryptoKey;
    v80 = *(_QWORD *)&v76[6].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v150.fields.currentCryptoKey = v81;
    *(_QWORD *)&v150.fields.fakeValue = v80;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v150, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v82 = *v142;
    if ( !*v142 )
      goto LABEL_111;
    v84 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
    v83 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v151.fields.currentCryptoKey = v84;
    *(_QWORD *)&v151.fields.fakeValue = v83;
    v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v151, 0LL);
    if ( v85 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76[5], 0LL) )
      goto LABEL_55;
    Instance = *v142;
    if ( !*v142 )
      goto LABEL_111;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL) )
    {
      v88 = *(_QWORD *)&v76[6].fields.currentCryptoKey;
      v87 = *(_QWORD *)&v76[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v152.fields.currentCryptoKey = v88;
      *(_QWORD *)&v152.fields.fakeValue = v87;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v152, 0LL) < 1 )
      {
        v91 = 1;
      }
      else
      {
        v90 = *(_QWORD *)&v76[6].fields.currentCryptoKey;
        v89 = *(_QWORD *)&v76[6].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v153.fields.currentCryptoKey = v90;
        *(_QWORD *)&v153.fields.fakeValue = v89;
        v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v153, 0LL) + 1;
        this->fields.isLimitUpMaterial = 1;
      }
      v139 += v91;
      v86 = v139 > v138;
    }
    else
    {
LABEL_55:
      v86 = 0;
    }
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v71,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v93 = this->fields.baseData;
    v94 = (MaterialSvtInfo_o *)Component_srcLineSprite;
    v95 = (MaterialSvtInfo_ClickDelegate_o *)sub_B2C42C(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(v95, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !v94 )
      goto LABEL_111;
    MaterialSvtInfo__setMaterialSvtInfo_25962788(v94, v64++, v93, v67, 1, v86, v69 & 1, v95, 0LL);
    v3 = (SetCombineData_o *)v66;
  }
  while ( (__int64)v64 < v140 );
  Instance = this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_111;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v96 = *v142;
  v97 = v139 >= v138 ? v138 : v139;
  if ( !v96 )
    goto LABEL_111;
  v99 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
  v98 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v154.fields.currentCryptoKey = v99;
  *(_QWORD *)&v154.fields.fakeValue = v98;
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v154, 0LL);
  Instance = ServantLimitMaster__GetEntity(v59, v100, v97, 0LL);
  if ( !Instance )
    goto LABEL_111;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *((_DWORD *)Instance + 7);
  this->fields.getExpVal = v66[9] + v66[8];
  increAmount = v66[8];
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v102, 0LL);
  if ( !basicExpLb )
    goto LABEL_111;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v66[9];
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v104, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_111;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v106 = this->fields.baseData;
  this->fields.expType = v137[33];
  if ( !v106 )
    goto LABEL_111;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v106->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v106->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v105) )
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
  v108 = this->fields.baseData;
  if ( !v108 )
    goto LABEL_111;
  currentLvLb = this->fields.currentLvLb;
  Instance = System_Int32__ToString((int)v108 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_111;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = System_Int32__ToString((int)this + 376, 0LL);
  if ( !increLvLb )
    goto LABEL_111;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v142 )
    goto LABEL_111;
  this->fields.increAmount = this->fields.increLv - (*v142)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format(v113, v114, 0LL);
  if ( !increValLb )
    goto LABEL_111;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  getSkillLb = this->fields.getSkillLb;
  Instance = CheckCombineResStatus__getSvtEqSkillByCombine(
               (CheckCombineResStatus_o *)Instance,
               *v142,
               *p_increLv,
               v97,
               0LL);
  if ( !getSkillLb )
    goto LABEL_111;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v66[7];
  Instance = System_Int32__ToString_38381416((int)this + 392, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
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
    *v142,
    *p_increLv,
    0LL);
  afterAtk[1] += v66[12];
  afterAtk[0] += v66[13];
  v117 = sub_B2C42C(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v117, 0LL);
  if ( !v117 )
    goto LABEL_111;
  v124 = *v142;
  *(_QWORD *)(v117 + 16) = *v142;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v117 + 16),
    (System_Int32_array **)v124,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  *(_DWORD *)(v117 + 24) = this->fields.increLv;
  *(_DWORD *)(v117 + 28) = v97;
  *(_DWORD *)(v117 + 32) = this->fields.afterMaxLv;
  v125 = this->fields.baseData;
  if ( !v125 )
    goto LABEL_111;
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v125->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v117 + 36) = lateExp[1];
  *(_DWORD *)(v117 + 40) = lateExp[0];
  *(_DWORD *)(v117 + 44) = afterAtk[1];
  *(_DWORD *)(v117 + 48) = v66[12];
  *(_DWORD *)(v117 + 52) = afterAtk[0];
  *(_DWORD *)(v117 + 56) = v66[13];
  Instance = this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_111;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v117, 0LL);
  Instance = this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v126 = (UIWidget_o *)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_white(0LL);
    if ( v126 )
    {
      UIWidget__set_color(v126, *(UnityEngine_Color_o *)&v132, 0LL);
      this->fields.isExeCombine = 1;
      goto LABEL_109;
    }
LABEL_111:
    sub_B2C434(Instance, lv);
  }
  *(UnityEngine_Color_o *)&v127 = UnityEngine_Color__get_red(0LL);
  if ( !v126 )
    goto LABEL_111;
  UIWidget__set_color(v126, *(UnityEngine_Color_o *)&v127, 0LL);
  this->fields.isExeCombine = 0;
LABEL_109:
  SvtEquipCombineControl__SetExeBtnState(this, v131);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v6; // x1
  int32_t klass; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_418B1F2 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3337/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v3);
    byte_418B1F2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (klass = (int32_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v6),
        !exeCombineDlg) )
  {
    sub_B2C434(SelfUserGame, v6);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v4,
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
    sub_B2C434(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}