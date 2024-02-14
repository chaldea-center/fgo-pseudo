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
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  __int64 v12; // x8
  __int64 v13; // x9
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16[2]; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4213EC9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_3299/*"CONDUCTION_COMBINE"*/, v4);
    sub_B0D8A4(&StringLiteral_11641/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v5);
    sub_B0D8A4(&StringLiteral_3300/*"CONDUCTION_COMBINE_MSG"*/, v6);
    byte_4213EC9 = 1;
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
                                                       (System_String_o *)StringLiteral_3300/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_24;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3299/*"CONDUCTION_COMBINE"*/,
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
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v16[0] = v13;
  v16[1] = v12;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  v15 = System_String__Format((System_String_o *)StringLiteral_11641/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0LL);
  if ( !sealCombineLimitText )
LABEL_24:
    sub_B0D97C(conductionWireInfo);
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_4213EC7 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4213EC7 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B0D840(
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
  __int64 v3; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v5; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4213ECB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    this = (LimitCntUpControl_o *)sub_B0D8A4(
                                    &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                    v3);
    byte_4213ECB = 1;
  }
  itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v5 >= size )
      return 1;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v7 = itemInfoList_k__BackingField->fields._items->m_Items[v5];
    if ( !v7 )
      goto LABEL_11;
    if ( !v7->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
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
  System_String_o *transform; // x0
  UIWidget_o *v7; // x20
  int v8; // s0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x22
  int size; // w20
  unsigned int v24; // w21

  if ( (byte_4213EC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4213EC5 = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 256, 0LL);
  if ( !qpLb )
    goto LABEL_30;
  UILabel__set_text(qpLb, transform, 0LL);
  v7 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_30;
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL);
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
  LimitCntUpControl__SetExeBtnState(this, v12);
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v16, v17, v18, v19, v20, v21);
  }
  limitCntUpItemList = this->fields.limitCntUpItemList;
  if ( !limitCntUpItemList )
LABEL_30:
    sub_B0D97C(transform);
  size = limitCntUpItemList->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    do
    {
      if ( limitCntUpItemList->fields._size <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      transform = (System_String_o *)limitCntUpItemList->fields._items->m_Items[v24];
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v14);
      if ( (int)++v24 >= size )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v11; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v21; // x0
  _BOOL8 v22; // x0
  MenuListControl_o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213EC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8862/*"MSG_PRESELECT_BASE_LIMIT"*/, v8);
    byte_4213EC4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
                                                          (System_String_o *)StringLiteral_8862/*"MSG_PRESELECT_BASE_LIMIT"*/,
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
    sub_B0D97C(sealCombineLimitTextObj);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v21 && v21->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      v21,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v22 )
        break;
      if ( !v24.fields.current )
        sub_B0D97C(v22);
      if ( HIDWORD(v24.fields.current[1].klass) == 6 )
      {
        v23 = this->fields.menuListCtr;
        if ( !v23 )
          sub_B0D97C(0LL);
        MenuListControl__setBannerIcon(
          v23,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v24.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_4213ECD & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3346/*"CONFIRM_TITLE_LIMITUP"*/, v3);
    byte_4213ECD = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B0D97C(v4);
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

  if ( (byte_4213ECF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213ECF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v21; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24036516; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4213EC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4213EC8 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v21 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = CharaGraphManager__CreateTexturePrefab_24036516(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v21,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_24036516,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B0D97C(Instance);
  UICharaGraphTexture__SetCharacter_35242912((UICharaGraphTexture_o *)Instance, usrSvtData, v21, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0
  int v18; // s0
  int v22; // s0

  if ( (byte_4213ECC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4213ECC = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v9 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
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
    sub_B0D97C(combineBtnBg);
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20

  if ( (byte_4213EC6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_4213EC6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 25),
        SelfUserGame = System_Int32__ToString_38473032((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(v5, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
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
  struct UserServantEntity_o *v27; // x8
  int32_t lv; // w21
  int32_t v29; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w28
  int32_t v32; // w23
  int32_t v33; // w25
  int32_t lvMax; // w20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct UserServantEntity_o *v45; // x8
  int32_t v46; // w8
  struct UserServantEntity_o *v47; // x8
  struct UserServantEntity_o *v48; // x8
  struct UserServantEntity_o *v49; // x8
  struct UserServantEntity_o *v50; // x8
  int32_t mPanel_high; // w22
  int32_t combineRootComponent; // w9
  LimitCntUpControl_o *v53; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v56; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x27
  float v58; // s0
  double v59; // d0
  _BOOL8 v60; // x0
  UILabel_o *qpLb; // x24
  const MethodInfo *v62; // x1
  __int64 v63; // x1
  __int64 v64; // x2
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  signed __int64 size; // x28
  int64_t hiddenValue; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  unsigned __int64 v76; // x25
  __int64 v77; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v78; // x24
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q1
  LimitCntUpItemComponent_o *v81; // x24
  const MethodInfo *v82; // x4
  UIWidget_o *v83; // x23
  int v84; // s0
  UIWidget_o *v88; // x21
  int v89; // s0
  const MethodInfo *v93; // x1
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v97; // x1
  __int64 v98; // x0
  int32_t v99; // [xsp+4h] [xbp-DCh]
  int32_t v100; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+50h] [xbp-90h] BYREF
  CombineLimitReleaseEntity_o *v104; // [xsp+68h] [xbp-78h] BYREF
  float barExp; // [xsp+74h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-68h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v2 = this;
  if ( (byte_4213ECA & 1) == 0 )
  {
    sub_B0D8A4(&CombineSvtData_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineLimitMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    this = (LimitCntUpControl_o *)sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v23);
    byte_4213ECA = 1;
  }
  entity = 0LL;
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  v104 = 0LL;
  memset(&v103, 0, sizeof(v103));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_88;
  v26 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v108.fields.currentCryptoKey = v26;
  *(_QWORD *)&v108.fields.fakeValue = v25;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v108, 0LL);
  v27 = v2->fields.baseData;
  if ( !v27 )
    goto LABEL_88;
  lv = v27->fields.lv;
  v29 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0LL);
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v30 )
    goto LABEL_88;
  v31 = (int)this;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_88;
  v33 = v32 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity(
                                  (ServantLimitMaster_o *)this,
                                  &entity,
                                  v29,
                                  v32 + 1,
                                  0LL);
  lvMax = v31;
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
  v37 = sub_B0D974(CombineSvtData_TypeInfo, v35, v36);
  CombineSvtData___ctor((CombineSvtData_o *)v37, 0LL);
  if ( !v37 )
    goto LABEL_88;
  v44 = (System_Int32_array **)v2->fields.baseData;
  *(_QWORD *)(v37 + 16) = v44;
  sub_B0D840((BattleServantConfConponent_o *)(v37 + 16), v44, v38, v39, v40, v41, v42, v43);
  v45 = v2->fields.baseData;
  if ( !v45 )
    goto LABEL_88;
  v46 = v45->fields.lv;
  *(_DWORD *)(v37 + 32) = lvMax;
  *(_DWORD *)(v37 + 24) = v46;
  *(_DWORD *)(v37 + 28) = v33;
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v37 + 36) = barExp;
  *(_DWORD *)(v37 + 40) = lateExp[0];
  v47 = v2->fields.baseData;
  if ( !v47 )
    goto LABEL_88;
  *(_DWORD *)(v37 + 44) = v47->fields.hp;
  v48 = v2->fields.baseData;
  if ( !v48 )
    goto LABEL_88;
  *(_DWORD *)(v37 + 48) = v48->fields.adjustHp;
  v49 = v2->fields.baseData;
  if ( !v49 )
    goto LABEL_88;
  *(_DWORD *)(v37 + 52) = v49->fields.atk;
  v50 = v2->fields.baseData;
  if ( !v50 )
    goto LABEL_88;
  *(_DWORD *)(v37 + 56) = v50->fields.adjustAtk;
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_88;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v37, 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v29,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_88;
  mPanel_high = HIDWORD(this->fields.mPanel);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, mPanel_high, v32, 0LL);
  if ( !this )
    goto LABEL_88;
  combineRootComponent = (int32_t)this->fields.combineRootComponent;
  v53 = this;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = combineRootComponent;
  v56 = *(_QWORD *)&v53->fields.type;
  baseUserServantEntity = v53->fields.baseUserServantEntity;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v102,
      combineEventList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v103.fields.current = (Il2CppObject *)v102.fields.fakeValue;
    *(_OWORD *)&v103.fields.list = *(_OWORD *)&v102.fields.currentCryptoKey;
    while ( 1 )
    {
      v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v103,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v60 )
        break;
      if ( !v103.fields.current )
        sub_B0D97C(v60);
      if ( HIDWORD(v103.fields.current[1].klass) == 6 )
      {
        v58 = *(float *)&v103.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v58 == INFINITY )
          v59 = -INFINITY;
        else
          v59 = v58;
        *p_spendQpVal = (int)v59;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v103,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    this = (LimitCntUpControl_o *)System_Int32__ToString_38473032(
                                    (int)v2 + 256,
                                    (System_String_o *)StringLiteral_9289/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_88;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_88;
    v99 = v31;
    v100 = v33;
    if ( !baseUserServantEntity )
      goto LABEL_88;
    size = limitCntUpItemList->fields._size;
    hiddenValue = baseUserServantEntity->fields.id.fields.hiddenValue;
    v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                    v63,
                                                                                                    v64);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v68,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v68;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v2->fields._itemInfoList_k__BackingField,
      (System_Int32_array **)v68,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    if ( (int)size >= 1 )
    {
      v76 = 0LL;
      v77 = ((hiddenValue << 32) - 0x100000000LL) >> 32;
      do
      {
        v78 = v2->fields.limitCntUpItemList;
        if ( !v78 )
          goto LABEL_88;
        if ( v76 >= (unsigned int)v78->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( (__int64)v76 <= v77 )
        {
          v79 = v2->fields.baseData;
          if ( !v79 )
            goto LABEL_88;
          v80 = *(_OWORD *)&v79->fields.userId.fields.fakeValue;
          v81 = v78->fields._items->m_Items[v76];
          *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v79->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v102.fields.fakeValue = v80;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v101 = v102;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v101, 0LL);
          if ( v76 >= LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) )
            goto LABEL_90;
          if ( !v56 )
            goto LABEL_88;
          if ( v76 >= *(unsigned int *)(v56 + 24) )
          {
LABEL_90:
            v98 = sub_B0D9A8(this);
            sub_B0D948(v98, 0LL);
          }
          if ( !v81 )
            goto LABEL_88;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            v81,
            (int64_t)this,
            *((_DWORD *)&baseUserServantEntity->fields.id.fields.fakeValue + v76),
            *(_DWORD *)(v56 + 32 + 4 * v76),
            v82);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_88;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        }
      }
      while ( (__int64)++v76 < size );
    }
    v83 = (UIWidget_o *)v2->fields.qpLb;
    *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
    if ( !v83 )
      goto LABEL_88;
    UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 1;
    v33 = v100;
    v31 = v99;
  }
  if ( lv < v31 )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    v88 = (UIWidget_o *)v2->fields.qpLb;
    v2->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v89 = UnityEngine_Color__get_red(0LL);
    if ( !v88 )
      goto LABEL_88;
    UIWidget__set_color(v88, *(UnityEngine_Color_o *)&v89, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v2, v62) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v104,
                                  mPanel_high,
                                  v33,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_87;
  if ( !v104 )
LABEL_88:
    sub_B0D97C(this);
  condType = v104->fields.condType;
  condTargetId = v104->fields.condTargetId;
  condNum = v104->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_87:
  LimitCntUpControl__SetExeBtnState(v2, v93);
  LimitCntUpControl__CheckConductionWire(v2, v97);
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
  System_String_o **v22; // x8
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213ECE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v6);
    sub_B0D8A4(&StringLiteral_7299/*"INFO_MSG_LIMITUP"*/, v7);
    sub_B0D8A4(&StringLiteral_8859/*"MSG_MAXLV_LIMITUP_BASE"*/, v8);
    sub_B0D8A4(&StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_8858/*"MSG_LIMITUP_MAX"*/, v10);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4213ECE = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v24.fields.g = 0.87891;
  v24.fields.b = 0.98828;
  v15 = (UIWidget_o *)Component_WebViewObject;
  v24.fields.r = 0.0;
  *(_QWORD *)&v23.fields.r = 0LL;
  *(_QWORD *)&v23.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(v24, v16, v17, v18, (const MethodInfo *)&v23);
  if ( !v15 )
    goto LABEL_39;
  UIWidget__set_color(v15, v23, 0LL);
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
      v19 = &StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/;
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
        v19 = &StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_16;
      }
      if ( !this->fields.isQpNum )
      {
        v25 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v15, v25, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
    v26 = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v15, v26, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v22 = (System_String_o **)&StringLiteral_8858/*"MSG_LIMITUP_MAX"*/;
      else
        v22 = (System_String_o **)&StringLiteral_8859/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v20 = *v22;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      goto LABEL_17;
    }
LABEL_39:
    sub_B0D97C(detailInfoLb);
  }
  if ( !state )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = &StringLiteral_7299/*"INFO_MSG_LIMITUP"*/;
LABEL_16:
    v20 = (System_String_o *)*v19;
LABEL_17:
    v21 = LocalizationManager__Get(v20, 0LL);
    goto LABEL_19;
  }
  v21 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_19:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)detailInfoLb, v21, 0LL);
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
    sub_B0D97C(preSelectBaseLb);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}