void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CombineInfoComponent_o *combineInfoComp; // x0
  UILabel_o *conductionInfoLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *conductionButtonLabel; // x20
  System_String_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  __int64 v22[2]; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40FC23C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_3277/*"CONDUCTION_COMBINE"*/, v4);
    sub_B16FFC(&StringLiteral_11578/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v5);
    sub_B16FFC(&StringLiteral_3278/*"CONDUCTION_COMBINE_MSG"*/, v6);
    byte_40FC23C = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  if ( !this->fields.baseData )
    return;
  if ( !this->fields._IsExeCombine_k__BackingField && !this->fields.isMaxLv )
  {
    combineInfoComp = this->fields.combineInfoComp;
    if ( !combineInfoComp )
      goto LABEL_24;
    CombineInfoComponent__HideResStatusInfo(combineInfoComp, 0LL);
    conductionInfoLabel = this->fields.conductionInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3278/*"CONDUCTION_COMBINE_MSG"*/, 0LL);
    if ( !conductionInfoLabel )
      goto LABEL_24;
    UILabel__set_text(conductionInfoLabel, v10, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"CONDUCTION_COMBINE"*/, 0LL);
    if ( !conductionButtonLabel )
      goto LABEL_24;
    UILabel__set_text(conductionButtonLabel, v12, 0LL);
    v13 = this->fields.conductionWireInfo;
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
  }
  if ( !this->fields.isSealCombineLimit )
    return;
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_24;
  sealCombineLimitText = this->fields.sealCombineLimitText;
  v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v22[0] = v18;
  v22[1] = v17;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  v20 = System_String__Format((System_String_o *)StringLiteral_11578/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v19, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get(v20, 0LL);
  if ( !sealCombineLimitText )
LABEL_24:
    sub_B170D4();
  UILabel__set_text(sealCombineLimitText, v21, 0LL);
}


void __fastcall LimitCntUpControl__CheckIsSelectBaseSvt(
        LimitCntUpControl_o *this,
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_40FC23A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FC23A = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v18 = v19;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
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


bool __fastcall LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v5; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v7; // x8

  if ( (byte_40FC23E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    byte_40FC23E = 1;
  }
  itemInfoList_k__BackingField = this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v5 >= size )
      return 1;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = itemInfoList_k__BackingField->fields._items->m_Items[v5];
    if ( !v7 )
      goto LABEL_11;
    if ( !v7->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = this->fields._itemInfoList_k__BackingField;
    ++v5;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_11;
  }
}


int32_t __fastcall LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *qpLb; // x20
  System_String_o *v6; // x0
  UIWidget_o *v7; // x20
  int v8; // s0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *charaGraph; // x20
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Object_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x22
  int size; // w20
  unsigned int v30; // w21
  LimitCntUpItemComponent_o *v31; // x0
  CombineInfoComponent_o *combineInfoComp; // x0

  if ( (byte_40FC238 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC238 = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v6 = System_Int32__ToString((int)this + 256, 0LL);
  if ( !qpLb )
    goto LABEL_30;
  UILabel__set_text(qpLb, v6, 0LL);
  v7 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_30;
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !v12 )
    goto LABEL_30;
  transform = UnityEngine_Component__get_transform(v12, 0LL);
  if ( !transform )
    goto LABEL_30;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !sealCombineLimitTextObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v17);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Component_o *)this->fields.charaGraph;
    if ( !v20 )
      goto LABEL_30;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v21, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v22, v23, v24, v25, v26, v27);
  }
  limitCntUpItemList = this->fields.limitCntUpItemList;
  if ( !limitCntUpItemList )
LABEL_30:
    sub_B170D4();
  size = limitCntUpItemList->fields._size;
  if ( size >= 1 )
  {
    v30 = 0;
    do
    {
      if ( limitCntUpItemList->fields._size <= v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v31 = limitCntUpItemList->fields._items->m_Items[v30];
      if ( !v31 )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(v31, v19);
      if ( (int)++v30 >= size )
        goto LABEL_28;
      limitCntUpItemList = this->fields.limitCntUpItemList;
    }
    while ( limitCntUpItemList );
    goto LABEL_30;
  }
LABEL_28:
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_30;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 1, 0LL);
}


void __fastcall LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v28; // x0
  MenuListControl_o *v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC237 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8810/*"MSG_PRESELECT_BASE_LIMIT"*/, v8);
    byte_40FC237 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v9);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v11);
  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !eventNoticeImg )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8810/*"MSG_PRESELECT_BASE_LIMIT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, v16, 0LL),
        (v17 = (UnityEngine_Component_o *)this->fields.preSelectBaseLb) == 0LL)
    || (v18 = UnityEngine_Component__get_gameObject(v17, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v18, 1, 0LL), (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL), (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v28 && v28->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v30,
      v28,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v30.fields.current )
        sub_B170D4();
      if ( HIDWORD(v30.fields.current[1].klass) == 6 )
      {
        v29 = this->fields.menuListCtr;
        if ( !v29 )
          sub_B170D4();
        MenuListControl__setBannerIcon(
          v29,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v30.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_40FC240 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3324/*"CONFIRM_TITLE_LIMITUP"*/, v3);
    byte_40FC240 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
  SetRarityDialogControl__SetLimitUpInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v4,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FC242 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC242 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t v19; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FC23B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FC23B = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v17;
  *(_QWORD *)&v31.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 v19,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, usrSvtData, v22, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v10; // x19
  int v11; // s0
  int v15; // s0
  int v19; // s0
  int v23; // s0

  if ( (byte_40FC23F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40FC23F = 1;
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
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)v7;
  if ( IsExeCombine_k__BackingField )
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20
  System_String_o *v6; // x0

  if ( (byte_40FC239 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, method);
    byte_40FC239 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = SelfUserGame->fields.qp,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 25),
        v6 = System_Int32__ToString_38275808((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B170D4();
  }
  UILabel__set_text(v5, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct UserServantEntity_o *baseData; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  int32_t v27; // w0
  struct UserServantEntity_o *v28; // x8
  int32_t lv; // w21
  int32_t v30; // w22
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w28
  int32_t v34; // w23
  WebViewManager_o *Instance; // x0
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v37; // w25
  int32_t lvMax; // w20
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w8
  UserServantEntity_o *v54; // x0
  struct UserServantEntity_o *v55; // x8
  struct UserServantEntity_o *v56; // x8
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  CombineInfoComponent_o *v59; // x0
  WebViewManager_o *v60; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x0
  WarEntity_o *v62; // x0
  int32_t coordinates_high; // w22
  WebViewManager_o *v64; // x0
  CombineLimitMaster_o *v65; // x0
  CombineLimitEntity_o *v66; // x0
  int32_t qp; // w9
  CombineLimitEntity_o *v68; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x23
  struct System_Int32_array *itemNums; // x26
  struct System_Int32_array *itemIds; // x27
  float v73; // s0
  double v74; // d0
  UserServantEntity_o *v75; // x0
  bool isLimitCountMax; // w0
  UILabel_o *qpLb; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v81; // x1
  System_String_o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  signed __int64 size; // x28
  __int64 v89; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemInfoList_k__BackingField; // x23
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  unsigned __int64 v98; // x25
  __int64 v99; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v100; // x24
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q1
  LimitCntUpItemComponent_o *v103; // x24
  int64_t v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  const MethodInfo *v107; // x4
  UIWidget_o *v108; // x23
  int v109; // s0
  UIWidget_o *v113; // x21
  int v114; // s0
  CombineLimitReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v119; // x1
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v123; // x1
  int32_t v124; // [xsp+4h] [xbp-DCh]
  int32_t v125; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+50h] [xbp-90h] BYREF
  CombineLimitReleaseEntity_o *v129; // [xsp+68h] [xbp-78h] BYREF
  float barExp; // [xsp+74h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-68h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_40FC23D & 1) == 0 )
  {
    sub_B16FFC(&CombineSvtData_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineLimitMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v23);
    byte_40FC23D = 1;
  }
  entity = 0LL;
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  v129 = 0LL;
  memset(&v128, 0, sizeof(v128));
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_88;
  v26 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v133.fields.currentCryptoKey = v26;
  *(_QWORD *)&v133.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133, 0LL);
  v28 = this->fields.baseData;
  if ( !v28 )
    goto LABEL_88;
  lv = v28->fields.lv;
  v30 = v27;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseData, 0LL);
  v32 = this->fields.baseData;
  if ( !v32 )
    goto LABEL_88;
  v33 = LevelMax;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32->fields.limitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  v37 = v34 + 1;
  lvMax = v33;
  if ( ServantLimitMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v30, v34 + 1, 0LL) )
  {
    if ( !entity )
      goto LABEL_88;
    lvMax = entity->fields.lvMax;
  }
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_88;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  v44 = sub_B170CC(CombineSvtData_TypeInfo, v40, v41, v42, v43);
  CombineSvtData___ctor((CombineSvtData_o *)v44, 0LL);
  if ( !v44 )
    goto LABEL_88;
  v51 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v44 + 16) = v51;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 16), v51, v45, v46, v47, v48, v49, v50);
  v52 = this->fields.baseData;
  if ( !v52 )
    goto LABEL_88;
  v53 = v52->fields.lv;
  *(_DWORD *)(v44 + 32) = lvMax;
  *(_DWORD *)(v44 + 24) = v53;
  *(_DWORD *)(v44 + 28) = v37;
  v54 = this->fields.baseData;
  if ( !v54 )
    goto LABEL_88;
  UserServantEntity__getExpInfo(v54, &lateExp[1], lateExp, &barExp, 0LL);
  *(float *)(v44 + 36) = barExp;
  *(_DWORD *)(v44 + 40) = lateExp[0];
  v55 = this->fields.baseData;
  if ( !v55 )
    goto LABEL_88;
  *(_DWORD *)(v44 + 44) = v55->fields.hp;
  v56 = this->fields.baseData;
  if ( !v56 )
    goto LABEL_88;
  *(_DWORD *)(v44 + 48) = v56->fields.adjustHp;
  v57 = this->fields.baseData;
  if ( !v57 )
    goto LABEL_88;
  *(_DWORD *)(v44 + 52) = v57->fields.atk;
  v58 = this->fields.baseData;
  if ( !v58 )
    goto LABEL_88;
  *(_DWORD *)(v44 + 56) = v58->fields.adjustAtk;
  v59 = this->fields.combineInfoComp;
  if ( !v59 )
    goto LABEL_88;
  CombineInfoComponent__setCombineResStatusInfo(v59, (CombineSvtData_o *)v44, 0LL);
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_88;
  v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v60,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v61 )
    goto LABEL_88;
  v62 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v61,
          v30,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v62 )
    goto LABEL_88;
  coordinates_high = HIDWORD(v62->fields.coordinates);
  v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v64 )
    goto LABEL_88;
  v65 = (CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v64,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !v65 )
    goto LABEL_88;
  v66 = CombineLimitMaster__GetEntity(v65, coordinates_high, v34, 0LL);
  if ( !v66 )
    goto LABEL_88;
  qp = v66->fields.qp;
  v68 = v66;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = qp;
  itemNums = v68->fields.itemNums;
  itemIds = v68->fields.itemIds;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v127,
      combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v128.fields.current = (Il2CppObject *)v127.fields.fakeValue;
    *(_OWORD *)&v128.fields.list = *(_OWORD *)&v127.fields.currentCryptoKey;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v128,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v128.fields.current )
        sub_B170D4();
      if ( HIDWORD(v128.fields.current[1].klass) == 6 )
      {
        v73 = *(float *)&v128.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v73 == INFINITY )
          v74 = -INFINITY;
        else
          v74 = v73;
        *p_spendQpVal = (int)v74;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v128,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  v75 = this->fields.baseData;
  if ( !v75 )
    goto LABEL_88;
  isLimitCountMax = UserServantEntity__isLimitCountMax(v75, 0LL);
  qpLb = this->fields.qpLb;
  if ( isLimitCountMax )
  {
    if ( !qpLb )
      goto LABEL_88;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.qpLb, 0LL);
    if ( !transform )
      goto LABEL_88;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_88;
    gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !gameObject )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    v82 = System_Int32__ToString_38275808((int)this + 256, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
    if ( !qpLb )
      goto LABEL_88;
    UILabel__set_text(qpLb, v82, 0LL);
    limitCntUpItemList = this->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_88;
    v124 = v33;
    v125 = v37;
    if ( !itemIds )
      goto LABEL_88;
    size = limitCntUpItemList->fields._size;
    v89 = *(_QWORD *)&itemIds->max_length;
    v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                    v83,
                                                                                                    v84,
                                                                                                    v85,
                                                                                                    v86);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v90,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._itemInfoList_k__BackingField;
    this->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v90;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
      (System_Int32_array **)v90,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    if ( (int)size >= 1 )
    {
      v98 = 0LL;
      v99 = ((v89 << 32) - 0x100000000LL) >> 32;
      do
      {
        v100 = this->fields.limitCntUpItemList;
        if ( !v100 )
          goto LABEL_88;
        if ( v98 >= (unsigned int)v100->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( (__int64)v98 <= v99 )
        {
          v101 = this->fields.baseData;
          if ( !v101 )
            goto LABEL_88;
          v102 = *(_OWORD *)&v101->fields.userId.fields.fakeValue;
          v103 = v100->fields._items->m_Items[v98];
          *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v101->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v127.fields.fakeValue = v102;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v126 = v127;
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v126, 0LL);
          if ( v98 >= itemIds->max_length )
            goto LABEL_90;
          if ( !itemNums )
            goto LABEL_88;
          if ( v98 >= itemNums->max_length )
          {
LABEL_90:
            sub_B17100(v104, v105, v106);
            sub_B170A0();
          }
          if ( !v103 )
            goto LABEL_88;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            v103,
            v104,
            itemIds->m_Items[v98 + 1],
            itemNums->m_Items[v98 + 1],
            v107);
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_88;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_itemInfoList_k__BackingField,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        }
      }
      while ( (__int64)++v98 < size );
    }
    v108 = (UIWidget_o *)this->fields.qpLb;
    *(UnityEngine_Color_o *)&v109 = UnityEngine_Color__get_white(0LL);
    if ( !v108 )
      goto LABEL_88;
    UIWidget__set_color(v108, *(UnityEngine_Color_o *)&v109, 0LL);
    this->fields._IsExeCombine_k__BackingField = 1;
    v37 = v125;
    v33 = v124;
  }
  if ( lv < v33 )
  {
    this->fields.isMaxLv = 0;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v113 = (UIWidget_o *)this->fields.qpLb;
    this->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v114 = UnityEngine_Color__get_red(0LL);
    if ( !v113 )
      goto LABEL_88;
    UIWidget__set_color(v113, *(UnityEngine_Color_o *)&v114, 0LL);
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(this, v81) )
  {
    this->fields.isItemNum = 0;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CombineLimitReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  if ( !CombineLimitReleaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v129, coordinates_high, v37, 0LL) )
    goto LABEL_87;
  if ( !v129 )
LABEL_88:
    sub_B170D4();
  condType = v129->fields.condType;
  condTargetId = v129->fields.condTargetId;
  condNum = v129->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
  {
    this->fields.isSealCombineLimit = 1;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_87:
  LimitCntUpControl__SetExeBtnState(this, v119);
  LimitCntUpControl__CheckConductionWire(this, v123);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v15; // x21
  float v16; // s4
  float v17; // s5
  float v18; // s6
  __int64 *v19; // x8
  System_String_o *v20; // x20
  System_String_o *v21; // x1
  UILabel_o *v22; // x0
  UserServantEntity_o *baseData; // x0
  System_String_o **v24; // x8
  UnityEngine_Color_o v25; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC241 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/, v6);
    sub_B16FFC(&StringLiteral_7251/*"INFO_MSG_LIMITUP"*/, v7);
    sub_B16FFC(&StringLiteral_8807/*"MSG_MAXLV_LIMITUP_BASE"*/, v8);
    sub_B16FFC(&StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_B16FFC(&StringLiteral_8806/*"MSG_LIMITUP_MAX"*/, v10);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FC241 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v26.fields.g = 0.87891;
  v26.fields.b = 0.98828;
  v15 = (UIWidget_o *)Component_WebViewObject;
  v26.fields.r = 0.0;
  *(_QWORD *)&v25.fields.r = 0LL;
  *(_QWORD *)&v25.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v26, v16, v17, v18, (const MethodInfo *)&v25);
  if ( !v15 )
    goto LABEL_39;
  UIWidget__set_color(v15, v25, 0LL);
  if ( state == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_16;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v15, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_16;
      }
      if ( !this->fields.isQpNum )
      {
        v27 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v15, v27, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
    v28 = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v15, v28, 0LL);
    baseData = this->fields.baseData;
    if ( baseData )
    {
      if ( UserServantEntity__isLimitCountMax(baseData, 0LL) )
        v24 = (System_String_o **)&StringLiteral_8806/*"MSG_LIMITUP_MAX"*/;
      else
        v24 = (System_String_o **)&StringLiteral_8807/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v20 = *v24;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      goto LABEL_17;
    }
LABEL_39:
    sub_B170D4();
  }
  if ( !state )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = &StringLiteral_7251/*"INFO_MSG_LIMITUP"*/;
LABEL_16:
    v20 = (System_String_o *)*v19;
LABEL_17:
    v21 = LocalizationManager__Get(v20, 0LL);
    goto LABEL_19;
  }
  v21 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_19:
  v22 = this->fields.detailInfoLb;
  if ( !v22 )
    goto LABEL_39;
  UILabel__set_text(v22, v21, 0LL);
}


void __fastcall LimitCntUpControl__ShowItemListInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v6; // x1

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (gameObject = UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, !this->fields.isSelectBase, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, !this->fields.isSelectBase, 0LL);
  if ( this->fields.isSelectBase )
    LimitCntUpControl__SetLimitUpInfo(this, v6);
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *__fastcall LimitCntUpControl__get_itemInfoList(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void __fastcall LimitCntUpControl__set_itemInfoList(
        LimitCntUpControl_o *this,
        System_Collections_Generic_List_LimitCntUpItemComponent__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._itemInfoList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}