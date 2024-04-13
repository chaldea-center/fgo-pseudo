void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SvtEquipCombineControl__CheckIncrementLv(
        SvtEquipCombineControl_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int afterMaxLv; // w8
  void *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_42E5AEF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E5AEF = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_B5D69C(Instance, v11);
    }
    v12 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v12 <= totalExp )
    {
      if ( v12 != totalExp )
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
  __int64 v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  __int128 v8; // q1
  int64_t v9; // x0
  __int128 v10; // q0
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_42E5AEC & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectBase, (_DWORD)method, v3);
    byte_42E5AEC = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v8 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v8;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v13 = v14;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v13, 0LL);
      v10 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v10;
      if ( v9 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v12, 0LL) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v11);
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
  sub_B5D560(p_baseUserServantEntity);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *selectGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E5AF4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AF4 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !selectGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)selectGrid, 0LL);
  v7 = childCount - 1;
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
                                                v7,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_14:
    sub_B5D69C(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_B5D560(&this->fields.selectMtSvtEqList);
}


bool __fastcall SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *__fastcall SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 *v17; // x8

  if ( (byte_42E5AF6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8486/*"LIMIT_UP_MATERIAL_INFO_MSG"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8469/*"LIMIT_BOTH_MSG"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8484/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/, v14, v15, v16);
    byte_42E5AF6 = 1;
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
      v17 = &StringLiteral_8469/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_8484/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v17, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_8486/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v23; // x21
  Il2CppObject *v24; // x22
  BalanceConfig_c *v25; // x8
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  UILabel_o *needQpLb; // x20
  UIWidget_o *v29; // x20
  int v30; // s0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E5AEA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v17, v18, v19);
    byte_42E5AEA = 1;
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  v37 = 0;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v25->static_fields->ServantCombineMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_44573324(v23, v24, v26, 0LL);
  if ( !selectSumLb )
    goto LABEL_22;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v27);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_39741776(
                                               (int)this + 392,
                                               (System_String_o *)StringLiteral_9361/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_22;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  v29 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
  if ( !v29 )
    goto LABEL_22;
  UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v34);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_B5D560(&this->fields.selectMtSvtEqTbl);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v35);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_22:
    sub_B5D69C(currentLvObj, v20);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_42E5AE9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AE9 = 1;
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
      sub_B5D69C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B5D560(p_charaGraph);
  }
}


void __fastcall SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_Collections_Generic_Dictionary_long__bool__o *v42; // x21
  const MethodInfo *v43; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v47; // x0
  __int64 v48; // x1
  MenuListControl_o *v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E5AE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8933/*"MSG_PRESELECT_BASE_SVTEQ"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11012/*"QP_TAKE"*/, v35, v36, v37);
    byte_42E5AE8 = 1;
  }
  memset(&v51, 0, sizeof(v51));
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11012/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_38;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_B5D560(&this->fields.selectMtSvtEqList);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v42 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v42,
      (const MethodInfo_2F5068C *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v42;
    sub_B5D560(&this->fields.selectMtSvtEqTbl);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_38;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_2F51434 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v43);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8933/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(helpBtn, v38);
  }
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v50,
      combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v47 )
        break;
      if ( !v51.fields.current )
        sub_B5D69C(v47, v48);
      switch ( HIDWORD(v51.fields.current[1].klass) )
      {
        case 0x10:
          v49 = this->fields.menuListCtr;
          if ( !v49 )
            sub_B5D69C(0LL, v48);
          goto LABEL_34;
        case 0x11:
          v49 = this->fields.menuListCtr;
          if ( !v49 )
            sub_B5D69C(0LL, v48);
          goto LABEL_34;
        case 0x12:
          v49 = this->fields.menuListCtr;
          if ( !v49 )
            sub_B5D69C(0LL, v48);
          goto LABEL_34;
        case 0x13:
          v49 = this->fields.menuListCtr;
          if ( !v49 )
            sub_B5D69C(0LL, v48);
LABEL_34:
          MenuListControl__setBannerIcon(
            v49,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v51.fields.current[5].klass,
            0LL);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_42E5AF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SvtEquipCombineControl_OnClickBase__, v11, v12, v13);
    byte_42E5AF2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  combineRootComponent = (CombineRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_B5D69C(combineRootComponent, v15);
  }
  v16 = Method_SvtEquipCombineControl_OnClickBase__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 75) & 2) != 0 )
    v16 = (_QWORD *)sub_B5D5CC(Method_SvtEquipCombineControl_OnClickBase__);
  v17 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v16, v16[3]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E5AF3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3403/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v5, v6, v7);
    byte_42E5AF3 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v8,
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E5AF7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AF7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, v5);
  CombineRootComponent__ShowSvtEqMaterialList(combineRootComponent, 0LL);
}


void __fastcall SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraph; // x22
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  __int64 v8; // x1
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_42E5AED & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)usrSvtData, (_DWORD)method, v3);
    byte_42E5AED = 1;
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
    this->fields.charaGraph = CharaGraphManager__CreateTexturePrefab_26715676(
                                this->fields.charaGraphBase,
                                usrSvtData,
                                10,
                                0LL,
                                0LL);
    sub_B5D560(&this->fields.charaGraph);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_12;
    UICharaGraphTexture__SetCharacter_35987852(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_B5D560(&this->fields.baseData);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_12:
    sub_B5D69C(combineInfoComp, v8);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isExeCombine; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v13; // x19
  int v14; // s0
  int v18; // s0
  int v22; // s0
  int v26; // s0

  if ( (byte_42E5AF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E5AF1 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v9 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v13 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( isExeCombine )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v14, 0LL);
      *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
      if ( v9 )
      {
        UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v18, 0LL);
        if ( v13 )
        {
          UnityEngine_Behaviour__set_enabled(v13, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v13, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v22, 0LL);
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_14;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v26, 0LL);
  if ( !v13 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42E5AEB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E5AEB = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39741776((int)this + 388, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B5D69C(SelfUserGame, v6);
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
    sub_B5D69C(selectAddGridObj, method);
  }
  UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEquipCombineControl__SetStateInfoMsg(
        SvtEquipCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v26; // x21
  float v27; // s4
  float v28; // s5
  float v29; // s6
  __int64 *v30; // x8
  UnityEngine_Color_o v31; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = state;
  if ( (byte_42E5AF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7369/*"INFO_MSG_SVTEQ_MATERIAL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_7368/*"INFO_MSG_SVTEQ_BASE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E5AF5 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v32.fields.g = 0.87891;
  v32.fields.b = 0.98828;
  v26 = (UIWidget_o *)Component_WebViewObject;
  v32.fields.r = 0.0;
  *(_QWORD *)&v31.fields.r = 0LL;
  *(_QWORD *)&v31.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v32, v27, v28, v29, (const MethodInfo *)&v31);
  if ( !v26 )
LABEL_29:
    sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v26, v31, 0LL);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = &StringLiteral_7369/*"INFO_MSG_SVTEQ_MATERIAL"*/;
    }
    else
    {
      if ( v4 != 2 )
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
        v30 = &StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v26, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
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
    v30 = &StringLiteral_7368/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v30, 0LL);
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
  __int64 v3; // x3
  SetCombineData_o *v4; // x27
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  void *Instance; // x0
  __int64 lv; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v63; // x25
  UILabel_o *selectSumLb; // x20
  System_String_o *v65; // x21
  Il2CppObject *v66; // x23
  BalanceConfig_c *v67; // x8
  Il2CppObject *v68; // x0
  struct UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v71; // x20
  __int64 v72; // x22
  int32_t v73; // w26
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitMaster_o *v75; // x24
  struct UserServantEntity_o *v76; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x20
  __int64 v78; // x22
  __int64 v79; // x23
  unsigned __int64 v80; // x26
  struct System_Int64_array *v81; // x8
  int32_t *v82; // x21
  int64_t v83; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v85; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v87; // x23
  UnityEngine_Transform_o *v88; // x20
  int v89; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x20
  __int64 v93; // x22
  __int64 v94; // x25
  int32_t v95; // w22
  __int64 v96; // x22
  __int64 v97; // x25
  UserServantEntity_o *v98; // x8
  __int64 v99; // x22
  __int64 v100; // x25
  int32_t v101; // w22
  bool v102; // w20
  __int64 v103; // x22
  __int64 v104; // x25
  __int64 v105; // x20
  __int64 v106; // x22
  int v107; // w8
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v109; // x23
  MaterialSvtInfo_o *v110; // x25
  MaterialSvtInfo_ClickDelegate_o *v111; // x22
  UserServantEntity_o *v112; // x8
  int32_t v113; // w22
  __int64 v114; // x20
  __int64 v115; // x23
  int32_t v116; // w0
  UILabel_o *basicExpLb; // x20
  Il2CppObject *v118; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v120; // x0
  const MethodInfo *v121; // x2
  struct UserServantEntity_o *v122; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v124; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v129; // x25
  Il2CppObject *v130; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v133; // x20
  struct UserServantEntity_o *v134; // x8
  UIWidget_o *v135; // x20
  int v136; // s0
  const MethodInfo *v140; // x1
  int v141; // s0
  __int64 v145; // x0
  _DWORD *v146; // [xsp+8h] [xbp-98h]
  int32_t v147; // [xsp+10h] [xbp-90h]
  int32_t v148; // [xsp+14h] [xbp-8Ch]
  signed __int64 v149; // [xsp+18h] [xbp-88h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+20h] [xbp-80h]
  UserServantEntity_o **v151; // [xsp+28h] [xbp-78h]
  int32_t ServantCombineMax; // [xsp+30h] [xbp-70h] BYREF
  int32_t increAmount; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+38h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  v4 = data;
  if ( (byte_42E5AEE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&MaterialSvtInfo_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CombineMenuControl_OnClickMaterial__, v9, v10, v11);
    sub_B5D5C4(&CombineSvtData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v33, v34, v35);
    sub_B5D5C4(&int_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v57, v58, v59);
    byte_42E5AEE = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v4 )
    goto LABEL_111;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = v4->fields.materialUsrSvtIdList;
  sub_B5D560(&this->fields.selectMtSvtEqList);
  this->fields.selectMtSvtEqTbl = v4->fields.svtEqMaterialList;
  sub_B5D560(&this->fields.selectMtSvtEqTbl);
  materialUsrSvtIdList = v4->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_111;
  v63 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  increAmount = v63;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v67 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v67 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v67->static_fields->ServantCombineMax;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format_44573324(v65, v66, v68, 0LL);
  if ( !selectSumLb )
    goto LABEL_111;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  p_baseData = &this->fields.baseData;
  this->fields.baseData = v4->fields.baseSvtData;
  sub_B5D560(&this->fields.baseData);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_111;
  v72 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v71 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v156.fields.currentCryptoKey = v72;
  *(_QWORD *)&v156.fields.fakeValue = v71;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v156, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v63 < 1 )
    return;
  v75 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v76 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_111;
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v157.fields.currentCryptoKey = v79;
  *(_QWORD *)&v157.fields.fakeValue = v78;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v157, 0LL);
  if ( !v77 )
    goto LABEL_111;
  v148 = v73;
  v151 = &this->fields.baseData;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v77,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_111;
  v80 = 0LL;
  v146 = Instance;
  v147 = *((_DWORD *)Instance + 22);
  v149 = (int)v63;
  do
  {
    v81 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_111;
    if ( v80 >= v81->max_length )
    {
      v145 = sub_B5D6C8(Instance);
      sub_B5D668(v145, 0LL);
    }
    Instance = v4->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_111;
    v82 = (int32_t *)v4;
    v83 = v81->m_Items[v80];
    Instance = (void *)System_Collections_Generic_Dictionary_long__bool___get_Item(
                         (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                         v83,
                         (const MethodInfo_2F5117C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_111;
    svtFaceInfo = this->fields.svtFaceInfo;
    v85 = (char)Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v87 = (UnityEngine_GameObject_o *)Instance;
    v88 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    *(UnityEngine_Vector3_o *)&v89 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v88 )
      goto LABEL_111;
    UnityEngine_Transform__set_localPosition(v88, *(UnityEngine_Vector3_o *)&v89, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v87, 0LL);
    if ( !Instance )
      goto LABEL_111;
    v164.fields.x = 0.5;
    v164.fields.y = 0.5;
    v164.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v164, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_111;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 v83,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_111;
    v92 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v94 = *((_QWORD *)Instance + 10);
    v93 = *((_QWORD *)Instance + 11);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v158.fields.currentCryptoKey = v94;
    *(_QWORD *)&v158.fields.fakeValue = v93;
    v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v158, 0LL);
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v92[6], 0LL);
    if ( !v75 )
      goto LABEL_111;
    Instance = ServantLimitMaster__GetEntity(v75, v95, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_111;
    if ( *((int *)Instance + 6) >= 4 )
      this->fields.isContainedRare = 1;
    v97 = *(_QWORD *)&v92[6].fields.currentCryptoKey;
    v96 = *(_QWORD *)&v92[6].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v159.fields.currentCryptoKey = v97;
    *(_QWORD *)&v159.fields.fakeValue = v96;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v159, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v98 = *v151;
    if ( !*v151 )
      goto LABEL_111;
    v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
    v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v160.fields.currentCryptoKey = v100;
    *(_QWORD *)&v160.fields.fakeValue = v99;
    v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v160, 0LL);
    if ( v101 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v92[5], 0LL) )
      goto LABEL_55;
    Instance = *v151;
    if ( !*v151 )
      goto LABEL_111;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL) )
    {
      v104 = *(_QWORD *)&v92[6].fields.currentCryptoKey;
      v103 = *(_QWORD *)&v92[6].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v161.fields.currentCryptoKey = v104;
      *(_QWORD *)&v161.fields.fakeValue = v103;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v161, 0LL) < 1 )
      {
        v107 = 1;
      }
      else
      {
        v106 = *(_QWORD *)&v92[6].fields.currentCryptoKey;
        v105 = *(_QWORD *)&v92[6].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v162.fields.currentCryptoKey = v106;
        *(_QWORD *)&v162.fields.fakeValue = v105;
        v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL) + 1;
        this->fields.isLimitUpMaterial = 1;
      }
      v148 += v107;
      v102 = v148 > v147;
    }
    else
    {
LABEL_55:
      v102 = 0;
    }
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v87,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v109 = this->fields.baseData;
    v110 = (MaterialSvtInfo_o *)Component_srcLineSprite;
    v111 = (MaterialSvtInfo_ClickDelegate_o *)sub_B5D694(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(v111, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !v110 )
      goto LABEL_111;
    MaterialSvtInfo__setMaterialSvtInfo_24973644(v110, v80++, v109, v83, 1, v102, v85 & 1, v111, 0LL);
    v4 = (SetCombineData_o *)v82;
  }
  while ( (__int64)v80 < v149 );
  Instance = this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_111;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v112 = *v151;
  v113 = v148 >= v147 ? v147 : v148;
  if ( !v112 )
    goto LABEL_111;
  v115 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
  v114 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v163.fields.currentCryptoKey = v115;
  *(_QWORD *)&v163.fields.fakeValue = v114;
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v163, 0LL);
  Instance = ServantLimitMaster__GetEntity(v75, v116, v113, 0LL);
  if ( !Instance )
    goto LABEL_111;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *((_DWORD *)Instance + 7);
  this->fields.getExpVal = v82[9] + v82[8];
  increAmount = v82[8];
  v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v118, 0LL);
  if ( !basicExpLb )
    goto LABEL_111;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v82[9];
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v120, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_111;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v122 = this->fields.baseData;
  this->fields.expType = v146[33];
  if ( !v122 )
    goto LABEL_111;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v122->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v122->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v121) )
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
  v124 = this->fields.baseData;
  if ( !v124 )
    goto LABEL_111;
  currentLvLb = this->fields.currentLvLb;
  Instance = System_Int32__ToString((int)v124 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_111;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = System_Int32__ToString((int)this + 376, 0LL);
  if ( !increLvLb )
    goto LABEL_111;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v151 )
    goto LABEL_111;
  this->fields.increAmount = this->fields.increLv - (*v151)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = System_String__Format(v129, v130, 0LL);
  if ( !increValLb )
    goto LABEL_111;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  getSkillLb = this->fields.getSkillLb;
  Instance = CheckCombineResStatus__getSvtEqSkillByCombine(
               (CheckCombineResStatus_o *)Instance,
               *v151,
               *p_increLv,
               v113,
               0LL);
  if ( !getSkillLb )
    goto LABEL_111;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v82[7];
  Instance = System_Int32__ToString_39741776((int)this + 392, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
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
    *v151,
    *p_increLv,
    0LL);
  afterAtk[1] += v82[12];
  afterAtk[0] += v82[13];
  v133 = sub_B5D694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v133, 0LL);
  if ( !v133 )
    goto LABEL_111;
  *(_QWORD *)(v133 + 16) = *v151;
  sub_B5D560(v133 + 16);
  *(_DWORD *)(v133 + 24) = this->fields.increLv;
  *(_DWORD *)(v133 + 28) = v113;
  *(_DWORD *)(v133 + 32) = this->fields.afterMaxLv;
  v134 = this->fields.baseData;
  if ( !v134 )
    goto LABEL_111;
  Instance = this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_111;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v134->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v133 + 36) = lateExp[1];
  *(_DWORD *)(v133 + 40) = lateExp[0];
  *(_DWORD *)(v133 + 44) = afterAtk[1];
  *(_DWORD *)(v133 + 48) = v82[12];
  *(_DWORD *)(v133 + 52) = afterAtk[0];
  *(_DWORD *)(v133 + 56) = v82[13];
  Instance = this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_111;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v133, 0LL);
  Instance = this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v135 = (UIWidget_o *)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v141 = UnityEngine_Color__get_white(0LL);
    if ( v135 )
    {
      UIWidget__set_color(v135, *(UnityEngine_Color_o *)&v141, 0LL);
      this->fields.isExeCombine = 1;
      goto LABEL_109;
    }
LABEL_111:
    sub_B5D69C(Instance, lv);
  }
  *(UnityEngine_Color_o *)&v136 = UnityEngine_Color__get_red(0LL);
  if ( !v135 )
    goto LABEL_111;
  UIWidget__set_color(v135, *(UnityEngine_Color_o *)&v136, 0LL);
  this->fields.isExeCombine = 0;
LABEL_109:
  SvtEquipCombineControl__SetExeBtnState(this, v140);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v10; // x1
  int32_t klass; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_42E5AF0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3403/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v5, v6, v7);
    byte_42E5AF0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (klass = (int32_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v10),
        !exeCombineDlg) )
  {
    sub_B5D69C(SelfUserGame, v10);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v8,
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
    sub_B5D69C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}