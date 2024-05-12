void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  __int64 v6; // x2
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  __int64 v9; // x8
  __int64 v10; // x9
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  __int64 v13[2]; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438A783 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&StringLiteral_3412/*"CONDUCTION_COMBINE"*/);
    sub_B775C4(&StringLiteral_11830/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/);
    sub_B775C4(&StringLiteral_3413/*"CONDUCTION_COMBINE_MSG"*/);
    byte_438A783 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  if ( !this->fields.baseData )
    return;
  if ( !this->fields._IsExeCombine_k__BackingField && !this->fields.isMaxLv )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_24;
    CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, 0LL);
    conductionInfoLabel = this->fields.conductionInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3413/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_24;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3412/*"CONDUCTION_COMBINE"*/,
                                                       0LL);
    if ( !conductionButtonLabel )
      goto LABEL_24;
    UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
  }
  if ( !this->fields.isSealCombineLimit )
    return;
  conductionWireInfo = this->fields.sealCombineLimitTextObj;
  if ( !conductionWireInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_24;
  sealCombineLimitText = this->fields.sealCombineLimitText;
  v10 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v13[0] = v10;
  v13[1] = v9;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v6);
  v12 = System_String__Format((System_String_o *)StringLiteral_11830/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v11, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v12, 0LL);
  if ( !sealCombineLimitText )
LABEL_24:
    sub_B7769C(conductionWireInfo, method);
  UILabel__set_text(sealCombineLimitText, (System_String_o *)conductionWireInfo, 0LL);
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_438A781 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438A781 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v19 = v20;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B7769C(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B77560(
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
  LimitCntUpControl_o *v2; // x19
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v4; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v6; // x8

  v2 = this;
  if ( (byte_438A785 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    this = (LimitCntUpControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_438A785 = 1;
  }
  itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v4 >= size )
      return 1;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v6 = itemInfoList_k__BackingField->fields._items->m_Items[v4];
    if ( !v6 )
      goto LABEL_11;
    if ( !v6->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
    ++v4;
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
  UILabel_o *qpLb; // x20
  System_String_o *transform; // x0
  const MethodInfo *v5; // x1
  UIWidget_o *v6; // x20
  int v7; // s0
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x22
  int size; // w20
  unsigned int v22; // w21

  if ( (byte_438A77F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A77F = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 280, 0LL);
  if ( !qpLb )
    goto LABEL_30;
  UILabel__set_text(qpLb, transform, 0LL);
  v6 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !v6 )
    goto LABEL_30;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL);
  transform = (System_String_o *)this->fields.qpLb;
  if ( !transform )
    goto LABEL_30;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  transform = (System_String_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  transform = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (System_String_o *)this->fields.sealCombineLimitTextObj;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !transform )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v11);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (System_String_o *)this->fields.charaGraph;
    if ( !transform )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v14, v15, v16, v17, v18, v19);
  }
  limitCntUpItemList = this->fields.limitCntUpItemList;
  if ( !limitCntUpItemList )
LABEL_30:
    sub_B7769C(transform, v5);
  size = limitCntUpItemList->fields._size;
  if ( size >= 1 )
  {
    v22 = 0;
    do
    {
      if ( limitCntUpItemList->fields._size <= v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      transform = (System_String_o *)limitCntUpItemList->fields._items->m_Items[v22];
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v5);
      if ( (int)++v22 >= size )
        goto LABEL_28;
      limitCntUpItemList = this->fields.limitCntUpItemList;
    }
    while ( limitCntUpItemList );
    goto LABEL_30;
  }
LABEL_28:
  transform = (System_String_o *)this->fields.combineInfoComp;
  if ( !transform )
    goto LABEL_30;
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, 0LL);
}


void __fastcall LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  MenuListControl_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438A77E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9001/*"MSG_PRESELECT_BASE_LIMIT"*/);
    byte_438A77E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v3);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v6);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)sealCombineLimitTextObj,
                              0LL);
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  sealCombineLimitTextObj = this->fields.conductionWireInfo;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_9001/*"MSG_PRESELECT_BASE_LIMIT"*/,
                                                          0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)sealCombineLimitTextObj, 0LL),
        (sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.preSelectBaseLb) == 0LL)
    || (sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)sealCombineLimitTextObj,
                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0LL),
        (sealCombineLimitTextObj = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_26:
    sub_B7769C(sealCombineLimitTextObj, v4);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v16 && v16->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      v16,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v17 )
        break;
      if ( !v20.fields.current )
        sub_B7769C(v17, v18);
      if ( HIDWORD(v20.fields.current[1].klass) == 6 )
      {
        v19 = this->fields.menuListCtr;
        if ( !v19 )
          sub_B7769C(0LL, v18);
        MenuListControl__setBannerIcon(
          v19,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v20.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438A787 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3459/*"CONFIRM_TITLE_LIMITUP"*/);
    byte_438A787 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3459/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B7769C(v3, v4);
  SetRarityDialogControl__SetLimitUpInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_438A789 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A789 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, v3);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v19; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_31047328; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_438A782 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A782 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B77560(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
  if ( !v16 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v19 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_31047328 = CharaGraphManager__CreateTexturePrefab_31047328(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v19,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_31047328;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_31047328,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B7769C(Instance, v11);
  UICharaGraphTexture__SetCharacter_36683416((UICharaGraphTexture_o *)Instance, usrSvtData, v19, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0
  int v17; // s0
  int v21; // s0

  if ( (byte_438A786 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_438A786 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
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
    sub_B7769C(combineBtnBg, method);
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_438A780 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438A780 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39547236((int)this + 276, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  struct UserServantEntity_o *v6; // x8
  int32_t lv; // w21
  int32_t v8; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v9; // x8
  int32_t v10; // w28
  int32_t v11; // w23
  int32_t v12; // w25
  int32_t lvMax; // w20
  __int64 v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  struct UserServantEntity_o *v22; // x8
  int32_t v23; // w8
  struct UserServantEntity_o *v24; // x8
  struct UserServantEntity_o *v25; // x8
  struct UserServantEntity_o *v26; // x8
  struct UserServantEntity_o *v27; // x8
  int32_t selectMaterialUsrSvtEntity_high; // w22
  int32_t combineRootComponent; // w9
  LimitCntUpControl_o *v30; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v33; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x27
  float v35; // s0
  double v36; // d0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  UILabel_o *qpLb; // x24
  const MethodInfo *v40; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  signed __int64 size; // x28
  int64_t hiddenValue; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  unsigned __int64 v52; // x25
  __int64 v53; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v54; // x24
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q1
  LimitCntUpItemComponent_o *v57; // x24
  const MethodInfo *v58; // x4
  UIWidget_o *v59; // x23
  int v60; // s0
  UIWidget_o *v64; // x21
  int v65; // s0
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v72; // x1
  __int64 v73; // x0
  int32_t v74; // [xsp+4h] [xbp-DCh]
  int32_t v75; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+50h] [xbp-90h] BYREF
  CombineLimitReleaseEntity_o *v79; // [xsp+68h] [xbp-78h] BYREF
  float barExp; // [xsp+74h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-68h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  v2 = this;
  if ( (byte_438A784 & 1) == 0 )
  {
    sub_B775C4(&CombineSvtData_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (LimitCntUpControl_o *)sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438A784 = 1;
  }
  entity = 0LL;
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  v79 = 0LL;
  memset(&v78, 0, sizeof(v78));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_88;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v83.fields.currentCryptoKey = v5;
  *(_QWORD *)&v83.fields.fakeValue = v4;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v83, 0LL);
  v6 = v2->fields.baseData;
  if ( !v6 )
    goto LABEL_88;
  lv = v6->fields.lv;
  v8 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0LL);
  v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v9 )
    goto LABEL_88;
  v10 = (int)this;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_88;
  v12 = v11 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity(
                                  (ServantLimitMaster_o *)this,
                                  &entity,
                                  v8,
                                  v11 + 1,
                                  0LL);
  lvMax = v10;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_88;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, 0LL);
  v14 = sub_B77694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_88;
  v21 = (System_Int32_array **)v2->fields.baseData;
  *(_QWORD *)(v14 + 16) = v21;
  sub_B77560((BattleServantConfConponent_o *)(v14 + 16), v21, v15, v16, v17, v18, v19, v20);
  v22 = v2->fields.baseData;
  if ( !v22 )
    goto LABEL_88;
  v23 = v22->fields.lv;
  *(_DWORD *)(v14 + 32) = lvMax;
  *(_DWORD *)(v14 + 24) = v23;
  *(_DWORD *)(v14 + 28) = v12;
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v14 + 36) = barExp;
  *(_DWORD *)(v14 + 40) = lateExp[0];
  v24 = v2->fields.baseData;
  if ( !v24 )
    goto LABEL_88;
  *(_DWORD *)(v14 + 44) = v24->fields.hp;
  v25 = v2->fields.baseData;
  if ( !v25 )
    goto LABEL_88;
  *(_DWORD *)(v14 + 48) = v25->fields.adjustHp;
  v26 = v2->fields.baseData;
  if ( !v26 )
    goto LABEL_88;
  *(_DWORD *)(v14 + 52) = v26->fields.atk;
  v27 = v2->fields.baseData;
  if ( !v27 )
    goto LABEL_88;
  *(_DWORD *)(v14 + 56) = v27->fields.adjustAtk;
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_88;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v14, 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v8,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_88;
  selectMaterialUsrSvtEntity_high = HIDWORD(this->fields.selectMaterialUsrSvtEntity);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity(
                                  (CombineLimitMaster_o *)this,
                                  selectMaterialUsrSvtEntity_high,
                                  v11,
                                  0LL);
  if ( !this )
    goto LABEL_88;
  combineRootComponent = (int32_t)this->fields.combineRootComponent;
  v30 = this;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = combineRootComponent;
  v33 = *(_QWORD *)&v30->fields.type;
  baseUserServantEntity = v30->fields.baseUserServantEntity;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      combineEventList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v78.fields.current = (Il2CppObject *)v77.fields.fakeValue;
    *(_OWORD *)&v78.fields.list = *(_OWORD *)&v77.fields.currentCryptoKey;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v78,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v37 )
        break;
      if ( !v78.fields.current )
        sub_B7769C(v37, v38);
      if ( HIDWORD(v78.fields.current[1].klass) == 6 )
      {
        v35 = *(float *)&v78.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v35 == INFINITY )
          v36 = -INFINITY;
        else
          v36 = v35;
        *p_spendQpVal = (int)v36;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v78,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL);
  qpLb = v2->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_88;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2->fields.qpLb, 0LL);
    if ( !this )
      goto LABEL_88;
    this = (LimitCntUpControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    this = (LimitCntUpControl_o *)System_Int32__ToString_39547236(
                                    (int)v2 + 280,
                                    (System_String_o *)StringLiteral_9434/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_88;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_88;
    v74 = v10;
    v75 = v12;
    if ( !baseUserServantEntity )
      goto LABEL_88;
    size = limitCntUpItemList->fields._size;
    hiddenValue = baseUserServantEntity->fields.id.fields.hiddenValue;
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v44,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v44;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields._itemInfoList_k__BackingField,
      (System_Int32_array **)v44,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( (int)size >= 1 )
    {
      v52 = 0LL;
      v53 = ((hiddenValue << 32) - 0x100000000LL) >> 32;
      do
      {
        v54 = v2->fields.limitCntUpItemList;
        if ( !v54 )
          goto LABEL_88;
        if ( v52 >= (unsigned int)v54->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( (__int64)v52 <= v53 )
        {
          v55 = v2->fields.baseData;
          if ( !v55 )
            goto LABEL_88;
          v56 = *(_OWORD *)&v55->fields.userId.fields.fakeValue;
          v57 = v54->fields._items->m_Items[v52];
          *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v55->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v77.fields.fakeValue = v56;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v76 = v77;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v76, 0LL);
          if ( v52 >= LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) )
            goto LABEL_90;
          if ( !v33 )
            goto LABEL_88;
          if ( v52 >= *(unsigned int *)(v33 + 24) )
          {
LABEL_90:
            v73 = sub_B776C8(this);
            sub_B77668(v73, 0LL);
          }
          if ( !v57 )
            goto LABEL_88;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            v57,
            (int64_t)this,
            *((_DWORD *)&baseUserServantEntity->fields.id.fields.fakeValue + v52),
            *(_DWORD *)(v33 + 32 + 4 * v52),
            v58);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_88;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        }
      }
      while ( (__int64)++v52 < size );
    }
    v59 = (UIWidget_o *)v2->fields.qpLb;
    *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
    if ( !v59 )
      goto LABEL_88;
    UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 1;
    v12 = v75;
    v10 = v74;
  }
  if ( lv < v10 )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    v64 = (UIWidget_o *)v2->fields.qpLb;
    v2->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_red(0LL);
    if ( !v64 )
      goto LABEL_88;
    UIWidget__set_color(v64, *(UnityEngine_Color_o *)&v65, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v2, v40) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v79,
                                  selectMaterialUsrSvtEntity_high,
                                  v12,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_87;
  if ( !v79 )
LABEL_88:
    sub_B7769C(this, method);
  condType = v79->fields.condType;
  condTargetId = v79->fields.condTargetId;
  condNum = v79->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_87:
  LimitCntUpControl__SetExeBtnState(v2, method);
  LimitCntUpControl__CheckConductionWire(v2, v72);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x21
  float v8; // s4
  float v9; // s5
  float v10; // s6
  __int64 *v11; // x8
  System_String_o *v12; // x20
  System_String_o **v13; // x8
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_438A788 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B775C4(&StringLiteral_7432/*"INFO_MSG_LIMITUP"*/);
    sub_B775C4(&StringLiteral_8998/*"MSG_MAXLV_LIMITUP_BASE"*/);
    sub_B775C4(&StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_8997/*"MSG_LIMITUP_MAX"*/);
    sub_B775C4(&StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A788 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v15.fields.g = 0.87891;
  v15.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v15.fields.r = 0.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  UnityEngine_Color___ctor_41410832(v15, v8, v9, v10, (const MethodInfo *)&v14);
  if ( !v7 )
    goto LABEL_39;
  UIWidget__set_color(v7, v14, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_16;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = &StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_16;
      }
      if ( !this->fields.isQpNum )
      {
        v16 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, v16, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = &StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
    v17 = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v7, v17, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v13 = (System_String_o **)&StringLiteral_8997/*"MSG_LIMITUP_MAX"*/;
      else
        v13 = (System_String_o **)&StringLiteral_8998/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v12 = *v13;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      goto LABEL_17;
    }
LABEL_39:
    sub_B7769C(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_7432/*"INFO_MSG_LIMITUP"*/;
LABEL_16:
    v12 = (System_String_o *)*v11;
LABEL_17:
    *(_QWORD *)&state = LocalizationManager__Get(v12, 0LL);
    goto LABEL_19;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_19:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall LimitCntUpControl__ShowItemListInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v4; // x1

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_B7769C(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
  if ( this->fields.isSelectBase )
    LimitCntUpControl__SetLimitUpInfo(this, v4);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}