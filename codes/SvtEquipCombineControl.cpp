void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19F33 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19F33 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtEquipCombineControl__CheckIncrementLv(
        SvtEquipCombineControl_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int afterMaxLv; // w8
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_4B19F2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B19F2A = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    v10 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v10 <= totalExp )
    {
      if ( v10 != totalExp )
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  bool v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_4B19F27 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19F27 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v17, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v16, 0LL) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectBase,
    (int64_t)method,
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
  __int64 v2; // x2
  UnityEngine_Component_o *selectGrid; // x0
  int32_t childCount; // w0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int v12; // w22
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B19F2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F2F = 1;
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
    v12 = childCount + 1;
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
                                                v12 - 2,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v12 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList, 0LL, v6, v7, v8, v9, v10, v11);
}


bool __fastcall SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *__fastcall SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  uint32_t cctor_finished; // w9
  __int64 *v13; // x8

  if ( (byte_4B19F31 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8387/*"LIMIT_UP_MATERIAL_INFO_MSG"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_8370/*"LIMIT_BOTH_MSG"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8385/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/, v10, v11);
    byte_4B19F31 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_8370/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v13 = &StringLiteral_8385/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v13 = &StringLiteral_8387/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  __int64 v16; // x1
  UILabel_o *selectSumLb; // x20
  System_String_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v35; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19F25 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v12, v13);
    byte_4B19F25 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  v35 = 0;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v21 = BalanceConfig_TypeInfo;
  v22 = (Il2CppObject *)v19;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
    v21 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v21->static_fields->ServantCombineMax;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_62415592(v18, v22, v23, 0LL);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v24);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_63206828(
                                               (int)this + 456,
                                               (System_String_o *)StringLiteral_9337/*"N0"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v36.fields.r = 1.0;
  v36.fields.g = 1.0;
  v36.fields.b = 1.0;
  v36.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v36, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v26);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v33);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1BCAA3C(currentLvObj, v14);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19F24 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F24 = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v28; // x1
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_Dictionary_long__bool__o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1
  __int64 v48; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x9
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19F23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8894/*"MSG_PRESELECT_BASE_SVTEQ"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_10954/*"QP_TAKE"*/, v24, v25);
    byte_4B19F23 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  EventTutorialMaster__CheckTutorial(0, 38, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10954/*"QP_TAKE"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList, 0LL, v31, v32, v33, v34, v35, v36);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v40 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_long__bool__TypeInfo,
                                                                   v37,
                                                                   v38,
                                                                   v39);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v40,
      (const MethodInfo_3237508 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v40;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl,
      (int64_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_29;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_3238084 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v47);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8894/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(helpBtn, v26);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v56 = v55;
    while ( 1 )
    {
      v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v52 )
        break;
      if ( !v56.fields._current )
        sub_1BCAA3C(v52, v53);
      v54 = (unsigned int)(HIDWORD(v56.fields._current[1].klass) - 16);
      if ( (unsigned int)v54 <= 3 )
        __asm { BR              X10 }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool __fastcall SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


void __fastcall SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v7; // x1
  bool exists; // w0
  _QWORD *v9; // x8
  bool v10; // w20
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4B19F2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SvtEquipCombineControl_OnClickBase__, v4, v5);
    byte_4B19F2D = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v9 = Method_SvtEquipCombineControl_OnClickBase__;
  v10 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_SvtEquipCombineControl_OnClickBase__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  if ( v10 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v7);
  CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19F2E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3867/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v4, v5);
    byte_4B19F2E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3867/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    exeCombineDlg,
    this->fields.baseData,
    v6,
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19F32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__, method, v2);
    byte_4B19F32 = 1;
  }
  v4 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
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
  struct UICharaGraphTexture_o *TexturePrefab_38621504; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4B19F28 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, usrSvtData, method);
    byte_4B19F28 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, usrSvtData);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621504 = CharaGraphManager__CreateTexturePrefab_38621504(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38621504;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38621504,
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
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_41557604(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)usrSvtData, v15, v16, v17, v18, v19, v20);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1BCAA3C(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0LL);
}


void __fastcall SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 isExeCombine; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19F2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19F2C = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( isExeCombine )
  {
    if ( combineBtnTxt )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v11, 0LL);
      if ( v7 )
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v7, v12, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v13, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(v7, v14, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19F26 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19F26 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 452, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
    sub_1BCAA3C(selectAddGridObj, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v18; // x21
  __int64 v19; // x1
  __int64 *v20; // x8
  __int64 v21; // x1
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19F30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_7492/*"INFO_MSG_SVTEQ_MATERIAL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_7491/*"INFO_MSG_SVTEQ_BASE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19F30 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  }
  v22.fields.r = 0.0;
  v22.fields.a = 1.0;
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v18 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v22, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields.isExeCombine )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v20 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color(v18, v23, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v20 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7492/*"INFO_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7491/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v20, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 Instance; // x0
  __int64 lv; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Int64_array *v57; // x8
  __int64 v58; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v60; // x21
  __int64 v61; // x0
  __int64 v62; // x1
  BalanceConfig_c *v63; // x8
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct UserServantEntity_o *baseData; // x8
  __int64 v75; // x20
  __int64 v76; // x23
  int32_t v77; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v79; // x24
  struct UserServantEntity_o *v80; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x20
  __int64 v82; // x23
  __int64 v83; // x25
  unsigned __int64 v84; // x26
  UnityEngine_GameObject_o *v85; // x21
  struct System_Int64_array *v86; // x8
  int32_t *v87; // x22
  int64_t v88; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v90; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v92; // x23
  __int64 v93; // x2
  UnityEngine_Transform_o *v94; // x20
  __int64 v95; // x20
  __int64 v96; // x25
  __int64 v97; // x27
  int32_t v98; // w25
  __int64 v99; // x25
  __int64 v100; // x27
  UserServantEntity_o *v101; // x8
  __int64 v102; // x25
  __int64 v103; // x27
  int32_t v104; // w25
  int32_t v105; // w0
  bool v106; // w20
  __int64 v107; // x23
  __int64 v108; // x25
  __int64 v109; // x20
  __int64 v110; // x23
  int v111; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v113; // x23
  MaterialSvtInfo_o *v114; // x25
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  MaterialSvtInfo_ClickDelegate_o *v118; // x27
  UserServantEntity_o *v119; // x8
  int32_t v120; // w26
  __int64 v121; // x20
  __int64 v122; // x23
  int32_t v123; // w0
  UILabel_o *basicExpLb; // x20
  int32_t v125; // w8
  Il2CppObject *v126; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v128; // x0
  const MethodInfo *v129; // x2
  struct UserServantEntity_o *v130; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v132; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v137; // x25
  Il2CppObject *v138; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x20
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  UserServantEntity_o *v151; // x1
  struct UserServantEntity_o *v152; // x8
  int v153; // w8
  int v154; // w8
  bool v155; // w20
  float v156; // s0
  float v157; // s1
  float v158; // s2
  float v159; // s3
  const MethodInfo *v160; // x1
  __int64 v161; // [xsp+10h] [xbp-A0h]
  int32_t v162; // [xsp+18h] [xbp-98h]
  int32_t v163; // [xsp+1Ch] [xbp-94h]
  __int64 v164; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v166; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4B19F29 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, data, method);
    sub_1BCA7E0(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickMaterial__, v7, v8);
    sub_1BCA7E0(&CombineSvtData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v39, v40);
    byte_4B19F29 = 1;
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList,
    (int64_t)materialUsrSvtIdList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl,
    (int64_t)svtEqMaterialList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = v3->fields.materialUsrSvtIdList;
  if ( !v57 )
    goto LABEL_106;
  v58 = *(_QWORD *)&v57->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, lv);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  increAmount = v58;
  v61 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v63 = BalanceConfig_TypeInfo;
  v64 = (Il2CppObject *)v61;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v62);
    v63 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v63->static_fields->ServantCombineMax;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = (__int64)System_String__Format_62415592(v60, v64, v65, 0LL);
  if ( !selectSumLb )
    goto LABEL_106;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)baseSvtData, v68, v69, v70, v71, v72, v73);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_106;
  v76 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v75 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
  *(_QWORD *)&v171.fields.currentCryptoKey = v76;
  *(_QWORD *)&v171.fields.fakeValue = v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v171, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v58 < 1 )
    return;
  v79 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v80 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_106;
  v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v83 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
  v82 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
  *(_QWORD *)&v172.fields.currentCryptoKey = v83;
  *(_QWORD *)&v172.fields.fakeValue = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v172, 0LL);
  if ( !v81 )
    goto LABEL_106;
  v163 = v77;
  v166 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v81,
                        Instance,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_106;
  v164 = (unsigned int)v58;
  v84 = 0LL;
  v85 = 0LL;
  v161 = Instance;
  v162 = *(_DWORD *)(Instance + 88);
  do
  {
    v86 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_106;
    if ( v84 >= v86->max_length )
      sub_1BCAA44(Instance, lv);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_106;
    v87 = (int32_t *)v3;
    v88 = v86->m_Items[v84];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v88,
                 (const MethodInfo_3237E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_106;
    svtFaceInfo = this->fields.svtFaceInfo;
    v90 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v92 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v94 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4B109C1 )
    {
      Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, lv, v93);
      byte_4B109C1 = 1;
    }
    if ( !v94 )
      goto LABEL_106;
    UnityEngine_Transform__set_localPosition(v94, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v92, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v179.fields.x = 0.5;
    v179.fields.y = 0.5;
    v179.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v179, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v88,
                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_106;
    v95 = Instance;
    v97 = *(_QWORD *)(Instance + 80);
    v96 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
    *(_QWORD *)&v173.fields.currentCryptoKey = v97;
    *(_QWORD *)&v173.fields.fakeValue = v96;
    v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v173, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v95 + 96),
                 0LL);
    if ( !v79 )
      goto LABEL_106;
    Instance = (__int64)ServantLimitMaster__GetEntity(v79, v98, Instance, 0LL);
    if ( !Instance )
      goto LABEL_106;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v100 = *(_QWORD *)(v95 + 96);
    v99 = *(_QWORD *)(v95 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
    *(_QWORD *)&v174.fields.currentCryptoKey = v100;
    *(_QWORD *)&v174.fields.fakeValue = v99;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v174, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v101 = *v166;
    if ( !*v166 )
      goto LABEL_106;
    v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
    v102 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
    *(_QWORD *)&v175.fields.currentCryptoKey = v103;
    *(_QWORD *)&v175.fields.fakeValue = v102;
    v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v175, 0LL);
    v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v95 + 80),
             0LL);
    if ( v104 == v105 )
      v85 = v92;
    if ( v104 == v105 )
    {
      Instance = (__int64)*v166;
      if ( !*v166 )
        goto LABEL_106;
      Instance = UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v106 = 0;
      }
      else
      {
        v108 = *(_QWORD *)(v95 + 96);
        v107 = *(_QWORD *)(v95 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
        *(_QWORD *)&v176.fields.currentCryptoKey = v108;
        *(_QWORD *)&v176.fields.fakeValue = v107;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v176, 0LL);
        if ( (int)Instance < 1 )
        {
          v111 = 1;
        }
        else
        {
          v110 = *(_QWORD *)(v95 + 96);
          v109 = *(_QWORD *)(v95 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
          *(_QWORD *)&v177.fields.currentCryptoKey = v110;
          *(_QWORD *)&v177.fields.fakeValue = v109;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v177, 0LL);
          v111 = Instance + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v92 = v85;
        v163 += v111;
        v106 = v163 > v162;
      }
      if ( !v92 )
        goto LABEL_106;
    }
    else
    {
      v106 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v92,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v113 = this->fields.baseData;
    v114 = (MaterialSvtInfo_o *)Component_object;
    v118 = (MaterialSvtInfo_ClickDelegate_o *)sub_1BCAA2C(MaterialSvtInfo_ClickDelegate_TypeInfo, v115, v116, v117);
    MaterialSvtInfo_ClickDelegate___ctor(
      v118,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v114 )
      goto LABEL_106;
    MaterialSvtInfo__setMaterialSvtInfo_46145168(v114, v84++, v113, v88, 1, v106, v90 & 1, v118, 0LL);
    v3 = (SetCombineData_o *)v87;
  }
  while ( v164 != v84 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_106;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v119 = *v166;
  v120 = v163 >= v162 ? v162 : v163;
  if ( !v119 )
    goto LABEL_106;
  v122 = *(_QWORD *)&v119->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&v119->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
  *(_QWORD *)&v178.fields.currentCryptoKey = v122;
  *(_QWORD *)&v178.fields.fakeValue = v121;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v178, 0LL);
  Instance = (__int64)ServantLimitMaster__GetEntity(v79, v123, v120, 0LL);
  if ( !Instance )
    goto LABEL_106;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v125 = v87[8];
  this->fields.getExpVal = v87[9] + v125;
  increAmount = v125;
  v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v126, 0LL);
  if ( !basicExpLb )
    goto LABEL_106;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v87[9];
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v128, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_106;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v130 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v161 + 132);
  if ( !v130 )
    goto LABEL_106;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v130->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v130->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v129) )
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
  v132 = this->fields.baseData;
  if ( !v132 )
    goto LABEL_106;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v132 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_106;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 440, 0LL);
  if ( !increLvLb )
    goto LABEL_106;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v166 )
    goto LABEL_106;
  this->fields.increAmount = this->fields.increLv - (*v166)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, lv);
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, 0LL);
  increAmount = this->fields.increAmount;
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = (__int64)System_String__Format(v137, v138, 0LL);
  if ( !increValLb )
    goto LABEL_106;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v166,
                        *p_increLv,
                        v120,
                        0LL);
  if ( !getSkillLb )
    goto LABEL_106;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v87[7];
  Instance = (__int64)System_Int32__ToString_63206828((int)this + 456, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
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
    *v166,
    *p_increLv,
    0LL);
  HIDWORD(afterAtk) += v87[12];
  LODWORD(afterAtk) = v87[13] + afterAtk;
  v144 = sub_1BCAA2C(CombineSvtData_TypeInfo, v141, v142, v143);
  CombineSvtData___ctor((CombineSvtData_o *)v144, 0LL);
  if ( !v144 )
    goto LABEL_106;
  v151 = *v166;
  *(_QWORD *)(v144 + 16) = *v166;
  sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 16), (int64_t)v151, v145, v146, v147, v148, v149, v150);
  *(_DWORD *)(v144 + 24) = this->fields.increLv;
  *(_DWORD *)(v144 + 28) = v120;
  *(_DWORD *)(v144 + 32) = this->fields.afterMaxLv;
  v152 = this->fields.baseData;
  if ( !v152 )
    goto LABEL_106;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v152->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v144 + 36) = lateExp[1];
  v153 = HIDWORD(afterAtk);
  *(_DWORD *)(v144 + 40) = lateExp[0];
  *(_DWORD *)(v144 + 44) = v153;
  v154 = afterAtk;
  *(_DWORD *)(v144 + 48) = v87[12];
  *(_DWORD *)(v144 + 52) = v154;
  *(_DWORD *)(v144 + 56) = v87[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_106;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v144, 0LL);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v156 = 1.0;
      v155 = 1;
      v157 = 1.0;
      goto LABEL_104;
    }
LABEL_106:
    sub_1BCAA3C(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_106;
  v155 = 0;
  v156 = 1.0;
  v157 = 0.0;
LABEL_104:
  v158 = v157;
  v159 = v156;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v156, 0LL);
  this->fields.isExeCombine = v155;
  SvtEquipCombineControl__SetExeBtnState(this, v160);
}


void __fastcall SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v8; // x1
  int32_t klass; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_4B19F2B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3867/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, v4, v5);
    byte_4B19F2B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3867/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (klass = (int32_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v8),
        !exeCombineDlg) )
  {
    sub_1BCAA3C(SelfUserGame, v8);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v6,
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
    sub_1BCAA3C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}