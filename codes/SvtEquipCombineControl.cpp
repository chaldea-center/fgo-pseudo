void __fastcall SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BB84C9 & 1) == 0 )
  {
    sub_1C13D24(&CombineMenuControl_TypeInfo, method);
    byte_4BB84C9 = 1;
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

  if ( (byte_4BB84C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB84C0 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0LL)) == 0LL )
    {
      sub_1C13F80(Instance, v8);
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

  if ( (byte_4BB84BD & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4BB84BD = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v17, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v16, 0LL) )
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
  sub_1C13CC8(
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
  UnityEngine_Component_o *selectGrid; // x0
  int32_t childCount; // w0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int v11; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4BB84C5 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB84C5 = 1;
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
    v11 = childCount + 1;
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
                                                v11 - 2,
                                                0LL);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
      if ( --v11 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C13F80(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB84C7 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_8427/*"LIMIT_OVER"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    sub_1C13D24(&StringLiteral_8410/*"LIMITUP_CHECK_COMBINE_TITLE"*/, v5);
    sub_1C13D24(&StringLiteral_8425/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/, v6);
    byte_4BB84C7 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_8410/*"LIMITUP_CHECK_COMBINE_TITLE"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_8425/*"LIMIT_MATERIAL_SALE_AFTER_QP"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_8427/*"LIMIT_OVER"*/;
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v33; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB84BB & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&int_TypeInfo, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    sub_1C13D24(&StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v7);
    byte_4BB84BB = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  v33 = 0;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v33, v12, v13, v14);
  v19 = BalanceConfig_TypeInfo;
  v20 = (Il2CppObject *)v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v19->static_fields->ServantCombineMax;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v16, v17, v18);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_62982316(v11, v20, v21, 0LL);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0LL);
  SvtEquipCombineControl__SetHaveQpInfo(this, v22);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_63773552(
                                               (int)this + 456,
                                               (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                               0LL);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v34.fields.r = 1.0;
  v34.fields.g = 1.0;
  v34.fields.b = 1.0;
  v34.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v34, 0LL);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v24);
  this->fields.selectMtSvtEqTbl = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v31);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1C13F80(currentLvObj, v8);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0LL);
}


void __fastcall SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB84BA & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB84BA = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C13F80(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_long__bool__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1
  UILabel_o *preSelectBaseLb; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x9
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB84B9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__bool__TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v9);
    sub_1C13D24(&LocalizationManager_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_9389/*"N0"*/, v11);
    sub_1C13D24(&StringLiteral_8938/*"MSG_MAXLV_LIMITUP_BASE"*/, v12);
    sub_1C13D24(&StringLiteral_11009/*"Purple"*/, v13);
    byte_4BB84B9 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  EventTutorialMaster__CheckTutorial(0, 38, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11009/*"Purple"*/, 0LL);
  if ( !haveQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0LL);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"N0"*/, 0LL);
  if ( !needQpTitleLb )
    goto LABEL_29;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList, 0LL, v18, v19, v20, v21, v22, v23);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v24 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v24,
      (const MethodInfo_32C4C58 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v24;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_29;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_32C57D4 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v31);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MSG_MAXLV_LIMITUP_BASE"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_29:
    sub_1C13F80(helpBtn, v14);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      combineEventList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v35 )
        break;
      if ( !v39.fields._current )
        sub_1C13F80(v35, v36);
      v37 = (unsigned int)(HIDWORD(v39.fields._current[1].klass) - 16);
      if ( (unsigned int)v37 <= 3 )
        __asm { BR              X10 }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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

  if ( (byte_4BB84C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1C13D24(&Method_SvtEquipCombineControl_OnClickBase__, v3);
    byte_4BB84C3 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v7 = Method_SvtEquipCombineControl_OnClickBase__;
  v8 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_SvtEquipCombineControl_OnClickBase__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C13F80(Instance, v5);
  CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BB84C4 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3880/*"CONFIRM_TITLE_MESSAGE"*/, v3);
    byte_4BB84C4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3880/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C13F80(v4, v5);
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

  if ( (byte_4BB84C8 & 1) == 0 )
  {
    sub_1C13D24(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__, method);
    byte_4BB84C8 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C13F80(0LL, v5);
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
  struct UICharaGraphTexture_o *TexturePrefab_39052124; // x0
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

  if ( (byte_4BB84BE & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, usrSvtData);
    byte_4BB84BE = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_39052124 = CharaGraphManager__CreateTexturePrefab_39052124(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0LL,
                               0LL);
    this->fields.charaGraph = TexturePrefab_39052124;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_39052124,
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
    UICharaGraphTexture__SetCharacter_41996040(combineInfoComp, usrSvtData, 0LL, 0LL);
  }
  this->fields.baseData = usrSvtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)usrSvtData, v15, v16, v17, v18, v19, v20);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1C13F80(combineInfoComp, v7);
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

  if ( (byte_4BB84C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4BB84C2 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C13F80(combineBtnBg, method);
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
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4BB84BC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, method);
    byte_4BB84BC = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63773552((int)this + 452, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL),
        !haveQpLb) )
  {
    sub_1C13F80(SelfUserGame, v4);
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
    sub_1C13F80(selectAddGridObj, method);
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
  if ( (byte_4BB84C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_7531/*"INFO_MSG_SPECIAL_ASCENSION"*/, v6);
    sub_1C13D24(&StringLiteral_7530/*"INFO_MSG_SKILLUP"*/, v7);
    sub_1C13D24(&StringLiteral_5898/*"EXE_BOXGACHA"*/, v8);
    sub_1C13D24(&StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB84C6 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1C13F80(detailInfoLb, *(_QWORD *)&state);
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
      v13 = &StringLiteral_5898/*"EXE_BOXGACHA"*/;
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
      v13 = &StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7531/*"INFO_MSG_SPECIAL_ASCENSION"*/;
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
    v13 = &StringLiteral_7530/*"INFO_MSG_SKILLUP"*/;
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Int64_array *v39; // x8
  __int64 v40; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v42; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  BalanceConfig_c *v50; // x8
  Il2CppObject *v51; // x23
  Il2CppObject *v52; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UserServantEntity_o *baseData; // x8
  __int64 v62; // x20
  __int64 v63; // x23
  int32_t v64; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v66; // x24
  struct UserServantEntity_o *v67; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x20
  __int64 v69; // x23
  __int64 v70; // x25
  unsigned __int64 v71; // x26
  UnityEngine_GameObject_o *v72; // x21
  struct System_Int64_array *v73; // x8
  int32_t *v74; // x22
  int64_t v75; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v77; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v79; // x23
  UnityEngine_Transform_o *v80; // x20
  __int64 v81; // x20
  __int64 v82; // x25
  __int64 v83; // x27
  int32_t v84; // w25
  __int64 v85; // x25
  __int64 v86; // x27
  UserServantEntity_o *v87; // x8
  __int64 v88; // x25
  __int64 v89; // x27
  int32_t v90; // w25
  int32_t v91; // w0
  bool v92; // w20
  __int64 v93; // x23
  __int64 v94; // x25
  __int64 v95; // x20
  __int64 v96; // x23
  int v97; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v99; // x23
  MaterialSvtInfo_o *v100; // x25
  MaterialSvtInfo_ClickDelegate_o *v101; // x27
  UserServantEntity_o *v102; // x8
  int32_t v103; // w26
  __int64 v104; // x20
  __int64 v105; // x23
  int32_t v106; // w0
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  UILabel_o *basicExpLb; // x20
  int32_t v111; // w8
  Il2CppObject *v112; // x0
  UILabel_o *addTotalExpLb; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  Il2CppObject *v117; // x0
  const MethodInfo *v118; // x2
  struct UserServantEntity_o *v119; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v121; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v126; // x25
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  Il2CppObject *v130; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v133; // x20
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  UserServantEntity_o *v140; // x1
  struct UserServantEntity_o *v141; // x8
  int v142; // w8
  int v143; // w8
  bool v144; // w20
  float v145; // s0
  float v146; // s1
  float v147; // s2
  float v148; // s3
  const MethodInfo *v149; // x1
  __int64 v150; // [xsp+10h] [xbp-A0h]
  int32_t v151; // [xsp+18h] [xbp-98h]
  int32_t v152; // [xsp+1Ch] [xbp-94h]
  __int64 v153; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v155; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4BB84BF & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, data);
    sub_1C13D24(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_1C13D24(&CombineSvtData_TypeInfo, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_1C13D24(&int_TypeInfo, v15);
    sub_1C13D24(&LocalizationManager_TypeInfo, v16);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C13D24(&StringLiteral_25371/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v19);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v20);
    sub_1C13D24(&StringLiteral_7513/*"IM Used"*/, v21);
    sub_1C13D24(&StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v22);
    byte_4BB84BF = 1;
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqList,
    (int64_t)materialUsrSvtIdList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.selectMtSvtEqTbl,
    (int64_t)svtEqMaterialList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = v3->fields.materialUsrSvtIdList;
  if ( !v39 )
    goto LABEL_106;
  v40 = *(_QWORD *)&v39->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  increAmount = v40;
  v46 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v43, v44, v45);
  v50 = BalanceConfig_TypeInfo;
  v51 = (Il2CppObject *)v46;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v50->static_fields->ServantCombineMax;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v47, v48, v49);
  Instance = (__int64)System_String__Format_62982316(v42, v51, v52, 0LL);
  if ( !selectSumLb )
    goto LABEL_106;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0LL);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)baseSvtData, v55, v56, v57, v58, v59, v60);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_106;
  v63 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v62 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v160.fields.currentCryptoKey = v63;
  *(_QWORD *)&v160.fields.fakeValue = v62;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v160, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)v40 < 1 )
    return;
  v66 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_106;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v161.fields.currentCryptoKey = v70;
  *(_QWORD *)&v161.fields.fakeValue = v69;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v161, 0LL);
  if ( !v68 )
    goto LABEL_106;
  v152 = v64;
  v155 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v68,
                        Instance,
                        (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_106;
  v153 = (unsigned int)v40;
  v71 = 0LL;
  v72 = 0LL;
  v150 = Instance;
  v151 = *(_DWORD *)(Instance + 88);
  do
  {
    v73 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_106;
    if ( v71 >= v73->max_length )
      sub_1C13F88(Instance, lv);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_106;
    v74 = (int32_t *)v3;
    v75 = v73->m_Items[v71];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v75,
                 (const MethodInfo_32C558C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_106;
    svtFaceInfo = this->fields.svtFaceInfo;
    v77 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0LL);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v79 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v80 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4BAEDA1 )
    {
      Instance = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, lv);
      byte_4BAEDA1 = 1;
    }
    if ( !v80 )
      goto LABEL_106;
    UnityEngine_Transform__set_localPosition(v80, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v79, 0LL);
    if ( !Instance )
      goto LABEL_106;
    v168.fields.x = 0.5;
    v168.fields.y = 0.5;
    v168.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v168, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_106;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v75,
                          (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_106;
    v81 = Instance;
    v83 = *(_QWORD *)(Instance + 80);
    v82 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v162.fields.currentCryptoKey = v83;
    *(_QWORD *)&v162.fields.fakeValue = v82;
    v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v162, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v81 + 96),
                 0LL);
    if ( !v66 )
      goto LABEL_106;
    Instance = (__int64)ServantLimitMaster__GetEntity(v66, v84, Instance, 0LL);
    if ( !Instance )
      goto LABEL_106;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v86 = *(_QWORD *)(v81 + 96);
    v85 = *(_QWORD *)(v81 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v163.fields.currentCryptoKey = v86;
    *(_QWORD *)&v163.fields.fakeValue = v85;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v163, 0LL);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v87 = *v155;
    if ( !*v155 )
      goto LABEL_106;
    v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
    v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v164.fields.currentCryptoKey = v89;
    *(_QWORD *)&v164.fields.fakeValue = v88;
    v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v164, 0LL);
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v81 + 80),
            0LL);
    if ( v90 == v91 )
      v72 = v79;
    if ( v90 == v91 )
    {
      Instance = (__int64)*v155;
      if ( !*v155 )
        goto LABEL_106;
      Instance = UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v92 = 0;
      }
      else
      {
        v94 = *(_QWORD *)(v81 + 96);
        v93 = *(_QWORD *)(v81 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v165.fields.currentCryptoKey = v94;
        *(_QWORD *)&v165.fields.fakeValue = v93;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v165, 0LL);
        if ( (int)Instance < 1 )
        {
          v97 = 1;
        }
        else
        {
          v96 = *(_QWORD *)(v81 + 96);
          v95 = *(_QWORD *)(v81 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v166.fields.currentCryptoKey = v96;
          *(_QWORD *)&v166.fields.fakeValue = v95;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v166, 0LL);
          v97 = Instance + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v79 = v72;
        v152 += v97;
        v92 = v152 > v151;
      }
      if ( !v79 )
        goto LABEL_106;
    }
    else
    {
      v92 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v79,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v99 = this->fields.baseData;
    v100 = (MaterialSvtInfo_o *)Component_object;
    v101 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C13F70(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v101,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v100 )
      goto LABEL_106;
    MaterialSvtInfo__setMaterialSvtInfo_46616716(v100, v71++, v99, v75, 1, v92, v77 & 1, v101, 0LL);
    v3 = (SetCombineData_o *)v74;
  }
  while ( v153 != v71 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_106;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  v102 = *v155;
  v103 = v152 >= v151 ? v151 : v152;
  if ( !v102 )
    goto LABEL_106;
  v105 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v167.fields.currentCryptoKey = v105;
  *(_QWORD *)&v167.fields.fakeValue = v104;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v167, 0LL);
  Instance = (__int64)ServantLimitMaster__GetEntity(v66, v106, v103, 0LL);
  if ( !Instance )
    goto LABEL_106;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v111 = v74[8];
  this->fields.getExpVal = v74[9] + v111;
  increAmount = v111;
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v107, v108, v109);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25371/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v112, 0LL);
  if ( !basicExpLb )
    goto LABEL_106;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0LL);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v74[9];
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v114, v115, v116);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25371/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v117, 0LL);
  if ( !addTotalExpLb )
    goto LABEL_106;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0LL);
  v119 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v150 + 132);
  if ( !v119 )
    goto LABEL_106;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v119->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v119->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v118) )
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
  v121 = this->fields.baseData;
  if ( !v121 )
    goto LABEL_106;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v121 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_106;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0LL);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 440, 0LL);
  if ( !increLvLb )
    goto LABEL_106;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0LL);
  if ( !*v155 )
    goto LABEL_106;
  this->fields.increAmount = this->fields.increLv - (*v155)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_7513/*"IM Used"*/, 0LL);
  increAmount = this->fields.increAmount;
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v127, v128, v129);
  Instance = (__int64)System_String__Format(v126, v130, 0LL);
  if ( !increValLb )
    goto LABEL_106;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v155,
                        *p_increLv,
                        v103,
                        0LL);
  if ( !getSkillLb )
    goto LABEL_106;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0LL);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v74[7];
  Instance = (__int64)System_Int32__ToString_63773552((int)this + 456, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL);
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
    *v155,
    *p_increLv,
    0LL);
  HIDWORD(afterAtk) += v74[12];
  LODWORD(afterAtk) = v74[13] + afterAtk;
  v133 = sub_1C13F70(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v133, 0LL);
  if ( !v133 )
    goto LABEL_106;
  v140 = *v155;
  *(_QWORD *)(v133 + 16) = *v155;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v133 + 16), (int64_t)v140, v134, v135, v136, v137, v138, v139);
  *(_DWORD *)(v133 + 24) = this->fields.increLv;
  *(_DWORD *)(v133 + 28) = v103;
  *(_DWORD *)(v133 + 32) = this->fields.afterMaxLv;
  v141 = this->fields.baseData;
  if ( !v141 )
    goto LABEL_106;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_106;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v141->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0LL);
  *(_DWORD *)(v133 + 36) = lateExp[1];
  v142 = HIDWORD(afterAtk);
  *(_DWORD *)(v133 + 40) = lateExp[0];
  *(_DWORD *)(v133 + 44) = v142;
  v143 = afterAtk;
  *(_DWORD *)(v133 + 48) = v74[12];
  *(_DWORD *)(v133 + 52) = v143;
  *(_DWORD *)(v133 + 56) = v74[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_106;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v133, 0LL);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v145 = 1.0;
      v144 = 1;
      v146 = 1.0;
      goto LABEL_104;
    }
LABEL_106:
    sub_1C13F80(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_106;
  v144 = 0;
  v145 = 1.0;
  v146 = 0.0;
LABEL_104:
  v147 = v146;
  v148 = v145;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v145, 0LL);
  this->fields.isExeCombine = v144;
  SvtEquipCombineControl__SetExeBtnState(this, v149);
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

  if ( (byte_4BB84C1 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3880/*"CONFIRM_TITLE_MESSAGE"*/, v3);
    byte_4BB84C1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3880/*"CONFIRM_TITLE_MESSAGE"*/, 0LL);
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
    sub_1C13F80(SelfUserGame, v6);
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
    sub_1C13F80(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
}