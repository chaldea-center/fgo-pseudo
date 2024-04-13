void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  __int64 v26[2]; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E7D4E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3352/*"CONDUCTION_COMBINE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11747/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3353/*"CONDUCTION_COMBINE_MSG"*/, v14, v15, v16);
    byte_42E7D4E = 1;
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
                                                       (System_String_o *)StringLiteral_3353/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_24;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3352/*"CONDUCTION_COMBINE"*/,
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
  v23 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v26[0] = v23;
  v26[1] = v22;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  v25 = System_String__Format((System_String_o *)StringLiteral_11747/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v24, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v25, 0LL);
  if ( !sealCombineLimitText )
LABEL_24:
    sub_B5D69C(conductionWireInfo, method);
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

  if ( (byte_42E7D4C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectBase, (_DWORD)method, v3);
    byte_42E7D4C = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v18, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B5D69C(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  LimitCntUpControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v9; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v11; // x8

  v4 = this;
  if ( (byte_42E7D50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, (_DWORD)method, v2, v3);
    this = (LimitCntUpControl_o *)sub_B5D5C4(
                                    &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                    v5,
                                    v6,
                                    v7);
    byte_42E7D50 = 1;
  }
  itemInfoList_k__BackingField = v4->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B5D69C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v9 >= size )
      return 1;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v11 = itemInfoList_k__BackingField->fields._items->m_Items[v9];
    if ( !v11 )
      goto LABEL_11;
    if ( !v11->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v4->fields._itemInfoList_k__BackingField;
    ++v9;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *qpLb; // x20
  System_String_o *transform; // x0
  const MethodInfo *v13; // x1
  UIWidget_o *v14; // x20
  int v15; // s0
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x22
  int size; // w20
  unsigned int v30; // w21

  if ( (byte_42E7D4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E7D4A = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 256, 0LL);
  if ( !qpLb )
    goto LABEL_30;
  UILabel__set_text(qpLb, transform, 0LL);
  v14 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  if ( !v14 )
    goto LABEL_30;
  UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v15, 0LL);
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
  LimitCntUpControl__SetExeBtnState(this, v19);
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v22, v23, v24, v25, v26, v27);
  }
  limitCntUpItemList = this->fields.limitCntUpItemList;
  if ( !limitCntUpItemList )
LABEL_30:
    sub_B5D69C(transform, v13);
  size = limitCntUpItemList->fields._size;
  if ( size >= 1 )
  {
    v30 = 0;
    do
    {
      if ( limitCntUpItemList->fields._size <= v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      transform = (System_String_o *)limitCntUpItemList->fields._items->m_Items[v30];
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v13);
      if ( (int)++v30 >= size )
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
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v26; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  MenuListControl_o *v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7D49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8930/*"MSG_PRESELECT_BASE_LIMIT"*/, v20, v21, v22);
    byte_42E7D49 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v23);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v26);
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
                                                          (System_String_o *)StringLiteral_8930/*"MSG_PRESELECT_BASE_LIMIT"*/,
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
    sub_B5D69C(sealCombineLimitTextObj, v24);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v36 && v36->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      v36,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v37 )
        break;
      if ( !v40.fields.current )
        sub_B5D69C(v37, v38);
      if ( HIDWORD(v40.fields.current[1].klass) == 6 )
      {
        v39 = this->fields.menuListCtr;
        if ( !v39 )
          sub_B5D69C(0LL, v38);
        MenuListControl__setBannerIcon(
          v39,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v40.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E7D52 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3399/*"CONFIRM_TITLE_LIMITUP"*/, v5, v6, v7);
    byte_42E7D52 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetLimitUpInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v8,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E7D54 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7D54 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, v5);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x23
  __int64 v24; // x24
  ServantLimitImageMaster_o *v25; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v28; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E7D4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E7D4D = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B5D560(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v25 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v24;
  *(_QWORD *)&v37.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v25 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v25,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v28 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v28,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26715804,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B5D69C(Instance, v20);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)Instance, usrSvtData, v28, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v13; // x19
  int v14; // s0
  int v18; // s0
  int v22; // s0
  int v26; // s0

  if ( (byte_42E7D51 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E7D51 = 1;
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
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v13 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v8; // x20

  if ( (byte_42E7D4B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E7D4B = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v8 = *(UILabel_o **)(p_haveQpVal - 25),
        SelfUserGame = System_Int32__ToString_39741776((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !v8) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UILabel__set_text(v8, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  LimitCntUpControl_o *v4; // x19
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  struct UserServantEntity_o *baseData; // x8
  __int64 v69; // x20
  __int64 v70; // x21
  struct UserServantEntity_o *v71; // x8
  int32_t lv; // w21
  int32_t v73; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x8
  int32_t v75; // w28
  int32_t v76; // w23
  int32_t v77; // w25
  int32_t lvMax; // w20
  __int64 v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  struct UserServantEntity_o *v87; // x8
  int32_t v88; // w8
  struct UserServantEntity_o *v89; // x8
  struct UserServantEntity_o *v90; // x8
  struct UserServantEntity_o *v91; // x8
  struct UserServantEntity_o *v92; // x8
  int32_t mPanel_high; // w22
  int32_t combineRootComponent; // w9
  LimitCntUpControl_o *v95; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v98; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x27
  float v100; // s0
  double v101; // d0
  _BOOL8 v102; // x0
  __int64 v103; // x1
  UILabel_o *qpLb; // x24
  const MethodInfo *v105; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  signed __int64 size; // x28
  int64_t hiddenValue; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  unsigned __int64 v117; // x25
  __int64 v118; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v119; // x24
  struct UserServantEntity_o *v120; // x8
  __int128 v121; // q1
  LimitCntUpItemComponent_o *v122; // x24
  const MethodInfo *v123; // x4
  UIWidget_o *v124; // x23
  int v125; // s0
  UIWidget_o *v129; // x21
  int v130; // s0
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v137; // x1
  __int64 v138; // x0
  int32_t v139; // [xsp+4h] [xbp-DCh]
  int32_t v140; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+50h] [xbp-90h] BYREF
  CombineLimitReleaseEntity_o *v144; // [xsp+68h] [xbp-78h] BYREF
  float barExp; // [xsp+74h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+78h] [xbp-68h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  v4 = this;
  if ( (byte_42E7D4F & 1) == 0 )
  {
    sub_B5D5C4(&CombineSvtData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineLimitMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    this = (LimitCntUpControl_o *)sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v65, v66, v67);
    byte_42E7D4F = 1;
  }
  entity = 0LL;
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  v144 = 0LL;
  memset(&v143, 0, sizeof(v143));
  baseData = v4->fields.baseData;
  if ( !baseData )
    goto LABEL_88;
  v70 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v148.fields.currentCryptoKey = v70;
  *(_QWORD *)&v148.fields.fakeValue = v69;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v148, 0LL);
  v71 = v4->fields.baseData;
  if ( !v71 )
    goto LABEL_88;
  lv = v71->fields.lv;
  v73 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v4->fields.baseData, 0LL);
  v74 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseData;
  if ( !v74 )
    goto LABEL_88;
  v75 = (int)this;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_88;
  v77 = v76 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity(
                                  (ServantLimitMaster_o *)this,
                                  &entity,
                                  v73,
                                  v76 + 1,
                                  0LL);
  lvMax = v75;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v4->fields.combineInfoComp;
  if ( !this )
    goto LABEL_88;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v4->fields.baseData, 0LL);
  v79 = sub_B5D694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v79, 0LL);
  if ( !v79 )
    goto LABEL_88;
  v86 = (System_Int32_array **)v4->fields.baseData;
  *(_QWORD *)(v79 + 16) = v86;
  sub_B5D560((BattleServantConfConponent_o *)(v79 + 16), v86, v80, v81, v82, v83, v84, v85);
  v87 = v4->fields.baseData;
  if ( !v87 )
    goto LABEL_88;
  v88 = v87->fields.lv;
  *(_DWORD *)(v79 + 32) = lvMax;
  *(_DWORD *)(v79 + 24) = v88;
  *(_DWORD *)(v79 + 28) = v77;
  this = (LimitCntUpControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v79 + 36) = barExp;
  *(_DWORD *)(v79 + 40) = lateExp[0];
  v89 = v4->fields.baseData;
  if ( !v89 )
    goto LABEL_88;
  *(_DWORD *)(v79 + 44) = v89->fields.hp;
  v90 = v4->fields.baseData;
  if ( !v90 )
    goto LABEL_88;
  *(_DWORD *)(v79 + 48) = v90->fields.adjustHp;
  v91 = v4->fields.baseData;
  if ( !v91 )
    goto LABEL_88;
  *(_DWORD *)(v79 + 52) = v91->fields.atk;
  v92 = v4->fields.baseData;
  if ( !v92 )
    goto LABEL_88;
  *(_DWORD *)(v79 + 56) = v92->fields.adjustAtk;
  this = (LimitCntUpControl_o *)v4->fields.combineInfoComp;
  if ( !this )
    goto LABEL_88;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v79, 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v73,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_88;
  mPanel_high = HIDWORD(this->fields.mPanel);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, mPanel_high, v76, 0LL);
  if ( !this )
    goto LABEL_88;
  combineRootComponent = (int32_t)this->fields.combineRootComponent;
  v95 = this;
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.combineEventList;
  p_spendQpVal = &v4->fields.spendQpVal;
  v4->fields.spendQpVal = combineRootComponent;
  v98 = *(_QWORD *)&v95->fields.type;
  baseUserServantEntity = v95->fields.baseUserServantEntity;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v142,
      combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v143.fields.current = (Il2CppObject *)v142.fields.fakeValue;
    *(_OWORD *)&v143.fields.list = *(_OWORD *)&v142.fields.currentCryptoKey;
    while ( 1 )
    {
      v102 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v143,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v102 )
        break;
      if ( !v143.fields.current )
        sub_B5D69C(v102, v103);
      if ( HIDWORD(v143.fields.current[1].klass) == 6 )
      {
        v100 = *(float *)&v143.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v100 == INFINITY )
          v101 = -INFINITY;
        else
          v101 = v100;
        *p_spendQpVal = (int)v101;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v143,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL);
  qpLb = v4->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_88;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4->fields.qpLb, 0LL);
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
    this = (LimitCntUpControl_o *)System_Int32__ToString_39741776(
                                    (int)v4 + 256,
                                    (System_String_o *)StringLiteral_9361/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_88;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v4->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_88;
    v139 = v75;
    v140 = v77;
    if ( !baseUserServantEntity )
      goto LABEL_88;
    size = limitCntUpItemList->fields._size;
    hiddenValue = baseUserServantEntity->fields.id.fields.hiddenValue;
    v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v109,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v4->fields._itemInfoList_k__BackingField;
    v4->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v109;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields._itemInfoList_k__BackingField,
      (System_Int32_array **)v109,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    if ( (int)size >= 1 )
    {
      v117 = 0LL;
      v118 = ((hiddenValue << 32) - 0x100000000LL) >> 32;
      do
      {
        v119 = v4->fields.limitCntUpItemList;
        if ( !v119 )
          goto LABEL_88;
        if ( v117 >= (unsigned int)v119->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( (__int64)v117 <= v118 )
        {
          v120 = v4->fields.baseData;
          if ( !v120 )
            goto LABEL_88;
          v121 = *(_OWORD *)&v120->fields.userId.fields.fakeValue;
          v122 = v119->fields._items->m_Items[v117];
          *(_OWORD *)&v142.fields.currentCryptoKey = *(_OWORD *)&v120->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v142.fields.fakeValue = v121;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v141 = v142;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v141, 0LL);
          if ( v117 >= LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) )
            goto LABEL_90;
          if ( !v98 )
            goto LABEL_88;
          if ( v117 >= *(unsigned int *)(v98 + 24) )
          {
LABEL_90:
            v138 = sub_B5D6C8(this);
            sub_B5D668(v138, 0LL);
          }
          if ( !v122 )
            goto LABEL_88;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            v122,
            (int64_t)this,
            *((_DWORD *)&baseUserServantEntity->fields.id.fields.fakeValue + v117),
            *(_DWORD *)(v98 + 32 + 4 * v117),
            v123);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_88;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v122,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        }
      }
      while ( (__int64)++v117 < size );
    }
    v124 = (UIWidget_o *)v4->fields.qpLb;
    *(UnityEngine_Color_o *)&v125 = UnityEngine_Color__get_white(0LL);
    if ( !v124 )
      goto LABEL_88;
    UIWidget__set_color(v124, *(UnityEngine_Color_o *)&v125, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    v77 = v140;
    v75 = v139;
  }
  if ( lv < v75 )
  {
    v4->fields.isMaxLv = 0;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v4->fields.haveQpVal < v4->fields.spendQpVal )
  {
    v129 = (UIWidget_o *)v4->fields.qpLb;
    v4->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v130 = UnityEngine_Color__get_red(0LL);
    if ( !v129 )
      goto LABEL_88;
    UIWidget__set_color(v129, *(UnityEngine_Color_o *)&v130, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v4, v105) )
  {
    v4->fields.isItemNum = 0;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_88;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v144,
                                  mPanel_high,
                                  v77,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_87;
  if ( !v144 )
LABEL_88:
    sub_B5D69C(this, method);
  condType = v144->fields.condType;
  condTargetId = v144->fields.condTargetId;
  condNum = v144->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
  {
    v4->fields.isSealCombineLimit = 1;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_87:
  LimitCntUpControl__SetExeBtnState(v4, method);
  LimitCntUpControl__CheckConductionWire(v4, v137);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v32; // x21
  float v33; // s4
  float v34; // s5
  float v35; // s6
  __int64 *v36; // x8
  System_String_o *v37; // x20
  System_String_o **v38; // x8
  UnityEngine_Color_o v39; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = state;
  if ( (byte_42E7D53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_7361/*"INFO_MSG_LIMITUP"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8927/*"MSG_MAXLV_LIMITUP_BASE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_8926/*"MSG_LIMITUP_MAX"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42E7D53 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_39;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v40.fields.g = 0.87891;
  v40.fields.b = 0.98828;
  v32 = (UIWidget_o *)Component_WebViewObject;
  v40.fields.r = 0.0;
  *(_QWORD *)&v39.fields.r = 0LL;
  *(_QWORD *)&v39.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v40, v33, v34, v35, (const MethodInfo *)&v39);
  if ( !v32 )
    goto LABEL_39;
  UIWidget__set_color(v32, v39, 0LL);
  if ( v4 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_16;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v32, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = &StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_16;
      }
      if ( !this->fields.isQpNum )
      {
        v41 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v32, v41, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_16;
      }
      goto LABEL_12;
    }
    v42 = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v32, v42, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v38 = (System_String_o **)&StringLiteral_8926/*"MSG_LIMITUP_MAX"*/;
      else
        v38 = (System_String_o **)&StringLiteral_8927/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v37 = *v38;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      goto LABEL_17;
    }
LABEL_39:
    sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_7361/*"INFO_MSG_LIMITUP"*/;
LABEL_16:
    v37 = (System_String_o *)*v36;
LABEL_17:
    *(_QWORD *)&state = LocalizationManager__Get(v37, 0LL);
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
    sub_B5D69C(preSelectBaseLb, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}