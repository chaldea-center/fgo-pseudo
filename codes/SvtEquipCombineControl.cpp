void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B48BAD & 1) == 0 )
  {
    sub_1BDB878(&CombineMenuControl_TypeInfo, method);
    byte_4B48BAD = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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

  if ( (byte_4B48BA4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B48BA4 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1BDBAD4(Instance, v8);
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
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4B48BA1 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B48BA1 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v13, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v12, 0LL) )
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
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
  const MethodInfo *v6; // x3
  int v7; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B48BA9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48BA9 = 1;
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
      UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BDBAD4(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, 0, v5, v6);
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
  uint32_t cctor_finished; // w9
  __int64 *v8; // x8

  if ( (byte_4B48BAB & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_8277/*"LIMIT_UP_MATERIAL_INFO_MSG"*/, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    sub_1BDB878(&StringLiteral_8260/*"LIMIT_BOTH_MSG"*/, v5);
    sub_1BDB878(&StringLiteral_8275/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/, v6);
    byte_4B48BAB = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_8260/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_8275/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_8277/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BalanceConfig_c *v19; // x8
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v29; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B48B9F & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v7);
    byte_4B48B9F = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
  v29 = 0;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v29, v12, v13, v14);
  v19 = BalanceConfig_TypeInfo;
  v20 = (Il2CppObject *)v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v19->static_fields->ServantCombineMax;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v16, v17, v18);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_62613552(v11, v20, v21, 0LL);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v22);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_64087256(
                                               (int)this + 464,
                                               (System_String_o *)StringLiteral_9229/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v30.fields.r = 1.0;
  v30.fields.g = 1.0;
  v30.fields.b = 1.0;
  v30.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v30, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v24);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, 0, v25, v26);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v27);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1BDBAD4(currentLvObj, v8);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B48B9E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48B9E = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BDBAD4(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_charaGraph, 0, v7, v8);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_long__bool__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B48B9D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_9235/*"NEED_QP_INFO"*/, v11);
    sub_1BDB878(&StringLiteral_8798/*"MSG_PRESELECT_BASE_SVTEQ"*/, v12);
    sub_1BDB878(&StringLiteral_10812/*"QP_TAKE"*/, v13);
    byte_4B48B9D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  EventTutorialMaster__CheckTutorial(0, 38, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10812/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, 0, v18, v19);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v20 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v20,
      (const MethodInfo_3372550 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v20;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)v20, v21, v22);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_29;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_33730CC *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v23);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_29:
    sub_1BDBAD4(helpBtn, v14);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      combineEventList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v27 )
        break;
      if ( !v31.fields._current )
        sub_1BDBAD4(v27, v28);
      v29 = (unsigned int)(HIDWORD(v31.fields._current[1].klass) - 16);
      if ( (unsigned int)v29 <= 3 )
        __asm { BR              X10 }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  bool exists; // w0
  _QWORD *v7; // x8
  bool v8; // w20
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4B48BA7 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1BDB878(&Method_SvtEquipCombineControl_OnClickBase__, v3);
    byte_4B48BA7 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v7 = Method_SvtEquipCombineControl_OnClickBase__;
  v8 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BDB890(Method_SvtEquipCombineControl_OnClickBase__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1BDBAD4(Instance, v5);
  CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B48BA8 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3804/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v3);
    byte_4B48BA8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BDBAD4(v4, v5);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    exeCombineDlg,
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B48BAC & 1) == 0 )
  {
    sub_1BDB878(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__, method);
    byte_4B48BAC = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BDBAD4(0LL, v5);
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
  struct UICharaGraphTexture_o *TexturePrefab_39678400; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4B48BA2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, usrSvtData);
    byte_4B48BA2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_39678400 = CharaGraphManager__CreateTexturePrefab_39678400(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_39678400;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_39678400, v9, v10);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_42851356(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)usrSvtData, v11, v12);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1BDBAD4(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 isExeCombine; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v8; // x19
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B48BA6 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B48BA6 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( isExeCombine )
  {
    if ( combineBtnTxt )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v9, 0LL);
      if ( v5 )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v5, v10, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BDBAD4(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v11, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(v5, v12, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B48BA0 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, method);
    byte_4B48BA0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_64092432(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                         0LL),
        !haveQpLb) )
  {
    sub_1BDBAD4(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0LL);
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
    sub_1BDBAD4(selectAddGridObj, method);
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
  UIWidget_o *v12; // x21
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B48BAA & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_7451/*"INFO_MSG_SVTEQ_MATERIAL"*/, v6);
    sub_1BDB878(&StringLiteral_7450/*"INFO_MSG_SVTEQ_BASE"*/, v7);
    sub_1BDB878(&StringLiteral_5804/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_1BDB878(&StringLiteral_12160/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    byte_4B48BAA = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BDBAD4(detailInfoLb, *(_QWORD *)&state);
  }
  v14.fields.r = 0.0;
  v14.fields.a = 1.0;
  v14.fields.g = 0.87891;
  v14.fields.b = 0.98828;
  v12 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v14, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields.isExeCombine )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_5804/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color(v12, v15, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12160/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7451/*"INFO_MSG_SVTEQ_MATERIAL"*/;
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
    v13 = &StringLiteral_7450/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v13, 0LL);
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
  __int64 Instance; // x0
  __int64 lv; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Int64_array *v31; // x8
  __int64 v32; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  BalanceConfig_c *v42; // x8
  Il2CppObject *v43; // x23
  Il2CppObject *v44; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UserServantEntity_o *baseData; // x8
  __int64 v50; // x20
  __int64 v51; // x23
  int32_t v52; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v54; // x24
  struct UserServantEntity_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x20
  __int64 v57; // x23
  __int64 v58; // x25
  __int64 v59; // x2
  unsigned __int64 v60; // x26
  UnityEngine_GameObject_o *v61; // x21
  struct System_Int64_array *v62; // x8
  int32_t *v63; // x22
  int64_t v64; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v66; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v68; // x23
  UnityEngine_Transform_o *v69; // x20
  __int64 v70; // x20
  __int64 v71; // x25
  __int64 v72; // x27
  int32_t v73; // w25
  __int64 v74; // x25
  __int64 v75; // x27
  UserServantEntity_o *v76; // x8
  __int64 v77; // x25
  __int64 v78; // x27
  int32_t v79; // w25
  int32_t v80; // w0
  bool v81; // w20
  __int64 v82; // x23
  __int64 v83; // x25
  __int64 v84; // x20
  __int64 v85; // x23
  int v86; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v88; // x23
  MaterialSvtInfo_o *v89; // x25
  MaterialSvtInfo_ClickDelegate_o *v90; // x27
  UserServantEntity_o *v91; // x8
  int32_t v92; // w26
  __int64 v93; // x20
  __int64 v94; // x23
  int32_t v95; // w0
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  UILabel_o *basicExpLb; // x20
  int32_t v100; // w8
  Il2CppObject *v101; // x0
  UILabel_o *addTotalExpLb; // x20
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  Il2CppObject *v106; // x0
  const MethodInfo *v107; // x2
  struct UserServantEntity_o *v108; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v110; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v115; // x25
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  Il2CppObject *v119; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v122; // x20
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  UserServantEntity_o *v125; // x1
  struct UserServantEntity_o *v126; // x8
  int v127; // w8
  int v128; // w8
  bool v129; // w20
  float v130; // s0
  float v131; // s1
  float v132; // s2
  float v133; // s3
  const MethodInfo *v134; // x1
  __int64 v135; // [xsp+10h] [xbp-A0h]
  int32_t v136; // [xsp+18h] [xbp-98h]
  int32_t v137; // [xsp+1Ch] [xbp-94h]
  __int64 v138; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v140; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4B48BA3 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, data);
    sub_1BDB878(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_1BDB878(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_1BDB878(&CombineSvtData_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v13);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_1BDB878(&int_TypeInfo, v15);
    sub_1BDB878(&LocalizationManager_TypeInfo, v16);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BDB878(&StringLiteral_25166/*"{0:N0}"*/, v19);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v20);
    sub_1BDB878(&StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, v21);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v22);
    byte_4B48BA3 = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, (int32_t)materialUsrSvtIdList, v25, v26);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)svtEqMaterialList, v29, v30);
  v31 = v3->fields.materialUsrSvtIdList;
  if ( !v31 )
    goto LABEL_106;
  v32 = *(_QWORD *)&v31->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
  increAmount = v32;
  v38 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v35, v36, v37);
  v42 = BalanceConfig_TypeInfo;
  v43 = (Il2CppObject *)v38;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v42->static_fields->ServantCombineMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v39, v40, v41);
  Instance = (__int64)System_String__Format_62613552(v34, v43, v44, 0LL);
  if ( !selectSumLb )
    goto LABEL_106;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)baseSvtData, v47, v48);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_106;
  v51 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v50 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v145.fields.currentCryptoKey = v51;
  *(_QWORD *)&v145.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v145, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v32 < 1 )
    return;
  v54 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_106;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v146.fields.currentCryptoKey = v58;
  *(_QWORD *)&v146.fields.fakeValue = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v146, 0LL);
  if ( !v56 )
    goto LABEL_106;
  v137 = v52;
  v140 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v56,
                        Instance,
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_106;
  v138 = (unsigned int)v32;
  v60 = 0LL;
  v61 = 0LL;
  v135 = Instance;
  v136 = *(_DWORD *)(Instance + 88);
  do
  {
    v62 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_106;
    if ( v60 >= v62->max_length )
      sub_1BDBADC(Instance, lv, v59);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_106;
    v63 = (int32_t *)v3;
    v64 = v62->m_Items[v60];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v64,
                 (const MethodInfo_3372E84 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_106;
    svtFaceInfo = this->fields.svtFaceInfo;
    v66 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v68 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v69 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4B3E911 )
    {
      Instance = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, lv);
      byte_4B3E911 = 1;
    }
    if ( !v69 )
      goto LABEL_106;
    UnityEngine_Transform__set_localPosition(v69, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v153.fields.x = 0.5;
    v153.fields.y = 0.5;
    v153.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v153, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v64,
                          (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_106;
    v70 = Instance;
    v72 = *(_QWORD *)(Instance + 80);
    v71 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v147.fields.currentCryptoKey = v72;
    *(_QWORD *)&v147.fields.fakeValue = v71;
    v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v147, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v70 + 96),
                 0LL);
    if ( !v54 )
      goto LABEL_106;
    Instance = (__int64)ServantLimitMaster__GetEntity(v54, v73, Instance, 0LL);
    if ( !Instance )
      goto LABEL_106;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v75 = *(_QWORD *)(v70 + 96);
    v74 = *(_QWORD *)(v70 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v148.fields.currentCryptoKey = v75;
    *(_QWORD *)&v148.fields.fakeValue = v74;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v148, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v76 = *v140;
    if ( !*v140 )
      goto LABEL_106;
    v78 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v77 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v149.fields.currentCryptoKey = v78;
    *(_QWORD *)&v149.fields.fakeValue = v77;
    v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v149, 0LL);
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v70 + 80),
            0LL);
    if ( v79 == v80 )
      v61 = v68;
    if ( v79 == v80 )
    {
      Instance = (__int64)*v140;
      if ( !*v140 )
        goto LABEL_106;
      Instance = UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v81 = 0;
      }
      else
      {
        v83 = *(_QWORD *)(v70 + 96);
        v82 = *(_QWORD *)(v70 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v150.fields.currentCryptoKey = v83;
        *(_QWORD *)&v150.fields.fakeValue = v82;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v150, 0LL);
        if ( (int)Instance < 1 )
        {
          v86 = 1;
        }
        else
        {
          v85 = *(_QWORD *)(v70 + 96);
          v84 = *(_QWORD *)(v70 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v151.fields.currentCryptoKey = v85;
          *(_QWORD *)&v151.fields.fakeValue = v84;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v151, 0LL);
          v86 = Instance + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v68 = v61;
        v137 += v86;
        v81 = v137 > v136;
      }
      if ( !v68 )
        goto LABEL_106;
    }
    else
    {
      v81 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v68,
                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v88 = this->fields.baseData;
    v89 = (MaterialSvtInfo_o *)Component_object;
    v90 = (MaterialSvtInfo_ClickDelegate_o *)sub_1BDBAC4(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v90,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v89 )
      goto LABEL_106;
    MaterialSvtInfo__setMaterialSvtInfo_47637068(v89, v60++, v88, v64, 1, v81, v66 & 1, v90, 0LL);
    v3 = (SetCombineData_o *)v63;
  }
  while ( v138 != v60 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_106;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v91 = *v140;
  v92 = v137 >= v136 ? v136 : v137;
  if ( !v91 )
    goto LABEL_106;
  v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v152.fields.currentCryptoKey = v94;
  *(_QWORD *)&v152.fields.fakeValue = v93;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v152, 0LL);
  Instance = (__int64)ServantLimitMaster__GetEntity(v54, v95, v92, 0LL);
  if ( !Instance )
    goto LABEL_106;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v100 = v63[8];
  this->fields.getExpVal = v63[9] + v100;
  increAmount = v100;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v96, v97, v98);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v101, 0LL);
  if ( !basicExpLb )
    goto LABEL_106;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v63[9];
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v103, v104, v105);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v106, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_106;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v108 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v135 + 132);
  if ( !v108 )
    goto LABEL_106;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v108->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v108->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v107) )
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
  v110 = this->fields.baseData;
  if ( !v110 )
    goto LABEL_106;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v110 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_106;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 440, 0LL);
  if ( !increLvLb )
    goto LABEL_106;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v140 )
    goto LABEL_106;
  this->fields.increAmount = this->fields.increLv - (*v140)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v116, v117, v118);
  Instance = (__int64)System_String__Format(v115, v119, 0LL);
  if ( !increValLb )
    goto LABEL_106;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v140,
                        *p_increLv,
                        v92,
                        0LL);
  if ( !getSkillLb )
    goto LABEL_106;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v63[7];
  Instance = (__int64)System_Int32__ToString_64087256((int)this + 464, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
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
    *v140,
    *p_increLv,
    0LL);
  HIDWORD(afterAtk) += v63[12];
  LODWORD(afterAtk) = v63[13] + afterAtk;
  v122 = sub_1BDBAC4(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v122, 0LL);
  if ( !v122 )
    goto LABEL_106;
  v125 = *v140;
  *(_QWORD *)(v122 + 16) = *v140;
  sub_1BDB81C((CGThumbnailListItem_o *)(v122 + 16), (int32_t)v125, v123, v124);
  *(_DWORD *)(v122 + 24) = this->fields.increLv;
  *(_DWORD *)(v122 + 28) = v92;
  *(_DWORD *)(v122 + 32) = this->fields.afterMaxLv;
  v126 = this->fields.baseData;
  if ( !v126 )
    goto LABEL_106;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v126->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v122 + 36) = lateExp[1];
  v127 = HIDWORD(afterAtk);
  *(_DWORD *)(v122 + 40) = lateExp[0];
  *(_DWORD *)(v122 + 44) = v127;
  v128 = afterAtk;
  *(_DWORD *)(v122 + 48) = v63[12];
  *(_DWORD *)(v122 + 52) = v128;
  *(_DWORD *)(v122 + 56) = v63[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_106;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v122, 0LL);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v130 = 1.0;
      v129 = 1;
      v131 = 1.0;
      goto LABEL_104;
    }
LABEL_106:
    sub_1BDBAD4(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_106;
  v129 = 0;
  v130 = 1.0;
  v131 = 0.0;
LABEL_104:
  v132 = v131;
  v133 = v130;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v130, 0LL);
  this->fields.isExeCombine = v129;
  SvtEquipCombineControl__SetExeBtnState(this, v134);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v6; // x1
  int64_t klass; // x21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_4B48BA5 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3804/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v3);
    byte_4B48BA5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (klass = (int64_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v6),
        !exeCombineDlg) )
  {
    sub_1BDBAD4(SelfUserGame, v6);
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
    sub_1BDBAD4(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}