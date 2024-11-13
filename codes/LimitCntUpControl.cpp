void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19ADD & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19ADD = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  __int64 v13; // x1
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B19AD6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3815/*"CONDUCTION_COMBINE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11627/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3816/*"CONDUCTION_COMBINE_MSG"*/, v10, v11);
    byte_4B19AD6 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  if ( !this->fields.baseData )
    return;
  if ( !this->fields._IsExeCombine_k__BackingField && !this->fields.isMaxLv )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_22;
    CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, method);
    conductionInfoLabel = this->fields.conductionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3816/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_22;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3815/*"CONDUCTION_COMBINE"*/,
                                                       0LL);
    if ( !conductionButtonLabel )
      goto LABEL_22;
    UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
  }
  if ( !this->fields.isSealCombineLimit )
    return;
  conductionWireInfo = this->fields.sealCombineLimitTextObj;
  if ( !conductionWireInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  sealCombineLimitText = this->fields.sealCombineLimitText;
  svtId = baseData->fields.svtId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &svtId);
  v20 = System_String__Format((System_String_o *)StringLiteral_11627/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v18, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v20, 0LL);
  if ( !sealCombineLimitText )
LABEL_22:
    sub_1BCAA3C(conductionWireInfo, method);
  UILabel__set_text(sealCombineLimitText, (System_String_o *)conductionWireInfo, 0LL);
}


void __fastcall LimitCntUpControl__CheckIsSelectBaseSvt(
        LimitCntUpControl_o *this,
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_4B19AD4 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19AD4 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v19 = v20;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v19, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1BCAA3C(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
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


bool __fastcall LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v7; // w20
  int32_t size; // w22

  if ( (byte_4B19AD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4, v5);
    byte_4B19AD8 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1BCAA3C(itemInfoList_k__BackingField, method);
  v7 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v7 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v7,
                                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
    if ( !LOBYTE(itemInfoList_k__BackingField[2].fields._syncRoot) )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
    ++v7;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
  }
  return v7 >= size;
}


int32_t __fastcall LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


void __fastcall LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *qpLb; // x20
  void *transform; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int v23; // w21
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19AD2 = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 320, 0LL);
  if ( !qpLb )
    goto LABEL_26;
  UILabel__set_text(qpLb, (System_String_o *)transform, 0LL);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_26;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)transform, v25, 0LL);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = this->fields.sealCombineLimitTextObj;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !transform )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v11);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    transform = this->fields.charaGraph;
    if ( !transform )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraph, 0LL, v17, v18, v19, v20, v21, v22);
  }
  transform = this->fields.limitCntUpItemList;
  if ( !transform )
LABEL_26:
    sub_1BCAA3C(transform, v10);
  v23 = *((_DWORD *)transform + 6);
  if ( v23 >= 1 )
  {
    v24 = 0;
    do
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)transform,
                    v24,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v10);
      if ( v23 == ++v24 )
        goto LABEL_24;
      transform = this->fields.limitCntUpItemList;
    }
    while ( transform );
    goto LABEL_26;
  }
LABEL_24:
  transform = this->fields.combineInfoComp;
  if ( !transform )
    goto LABEL_26;
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, v14);
}


void __fastcall LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
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
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  UILabel_o *preSelectBaseLb; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  MenuListControl_o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19AD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_8891/*"MSG_PRESELECT_BASE_LIMIT"*/, v14, v15);
    byte_4B19AD1 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v16);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v19);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)sealCombineLimitTextObj,
                              0LL);
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  sealCombineLimitTextObj = this->fields.conductionWireInfo;
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_8891/*"MSG_PRESELECT_BASE_LIMIT"*/,
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
LABEL_25:
    sub_1BCAA3C(sealCombineLimitTextObj, v17);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v30 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v30 && v30->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v30,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v31 )
        break;
      if ( !v34.fields._current )
        sub_1BCAA3C(v31, v32);
      if ( HIDWORD(v34.fields._current[1].klass) == 6 )
      {
        v33 = this->fields.menuListCtr;
        if ( !v33 )
          sub_1BCAA3C(0LL, v32);
        MenuListControl__setBannerIcon(
          v33,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v34.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19ADA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3863/*"CONFIRM_TITLE_LIMITUP"*/, v4, v5);
    byte_4B19ADA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3863/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetLimitUpInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v6,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19ADC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LimitCntUpControl_OnClickLimitUpConductionWire__, method, v2);
    byte_4B19ADC = 1;
  }
  v4 = Method_LimitCntUpControl_OnClickLimitUpConductionWire__;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickLimitUpConductionWire__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x24
  ServantLimitImageMaster_o *v23; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v25; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v27; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B19AD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19AD5 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseData,
    (int64_t)usrSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v22 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v23 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v36.fields.currentCryptoKey = v22;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  if ( !v23 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v23,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v27 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v27,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(Instance, v17);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)Instance, usrSvtData, v27, 0LL, 0, 0LL);
}


void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19AD9 = 1;
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
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19AD3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19AD3 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 316, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  LimitCntUpControl_o *v3; // x19
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
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  struct UserServantEntity_o *baseData; // x8
  __int64 v47; // x20
  __int64 v48; // x21
  struct UserServantEntity_o *v49; // x8
  int32_t lv; // w29
  int32_t v51; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  int32_t v53; // w27
  int32_t v54; // w23
  int32_t v55; // w26
  const MethodInfo *v56; // x2
  int32_t lvMax; // w20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x24
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  const MethodInfo *v69; // x2
  struct UserServantEntity_o *v70; // x8
  int32_t infoBack_high; // w21
  int32_t m_CancellationTokenSource; // w9
  LimitCntUpControl_o *v73; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v76; // x27
  struct CombineRootComponent_o *combineRootComponent; // x28
  _BOOL8 v78; // x0
  __int64 v79; // x1
  float v80; // s0
  int v81; // w8
  UILabel_o *qpLb; // x24
  int32_t v83; // w20
  __int64 v84; // x2
  __int64 v85; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  __int64 size; // x29
  __int64 v88; // x20
  System_Collections_Generic_List_object__o *v89; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  unsigned __int64 v97; // x24
  __int64 v98; // x26
  struct PlayMakerFSM_o **p_myFSM; // x21
  signed __int64 v100; // x20
  LimitCntUpControl_o *v101; // x25
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  const MethodInfo *v104; // x4
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v114; // x8
  __int64 v115; // x1
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v119; // x1
  int32_t v120; // [xsp+0h] [xbp-F0h]
  int32_t v121; // [xsp+4h] [xbp-ECh]
  int32_t v122; // [xsp+8h] [xbp-E8h]
  int32_t v123; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+50h] [xbp-A0h] BYREF
  CombineLimitReleaseEntity_o *v127; // [xsp+70h] [xbp-80h] BYREF
  float barExp; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+80h] [xbp-70h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B19AD7 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineSvtData_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineLimitMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v36, v37);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43);
    this = (LimitCntUpControl_o *)sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v44, v45);
    byte_4B19AD7 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  entity = 0LL;
  barExp = 0.0;
  v127 = 0LL;
  memset(&v126, 0, sizeof(v126));
  baseData = v3->fields.baseData;
  if ( !baseData )
    goto LABEL_82;
  v48 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v131.fields.currentCryptoKey = v48;
  *(_QWORD *)&v131.fields.fakeValue = v47;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131, 0LL);
  v49 = v3->fields.baseData;
  if ( !v49 )
    goto LABEL_82;
  lv = v49->fields.lv;
  v51 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v3->fields.baseData, 0LL);
  v52 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.baseData;
  if ( !v52 )
    goto LABEL_82;
  v53 = (int)this;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_82;
  v55 = v54 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity(
                                  (ServantLimitMaster_o *)this,
                                  &entity,
                                  v51,
                                  v54 + 1,
                                  0LL);
  lvMax = v53;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_82;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v3->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v3->fields.baseData, v56);
  v61 = sub_1BCAA2C(CombineSvtData_TypeInfo, v58, v59, v60);
  System_Object___ctor((Il2CppObject *)v61, 0LL);
  if ( !v61 )
    goto LABEL_82;
  v68 = (int64_t)v3->fields.baseData;
  *(_QWORD *)(v61 + 16) = v68;
  sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 16), v68, v62, v63, v64, v65, v66, v67);
  this = (LimitCntUpControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_82;
  *(_DWORD *)(v61 + 24) = this->fields.sealCombineLimitTextObj;
  *(_DWORD *)(v61 + 28) = v55;
  *(_DWORD *)(v61 + 32) = lvMax;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v61 + 36) = barExp;
  *(_DWORD *)(v61 + 40) = lateExp[0];
  v70 = v3->fields.baseData;
  if ( !v70 )
    goto LABEL_82;
  *(int32x4_t *)(v61 + 44) = vuzp2q_s32(*(int32x4_t *)&v70->fields.atk, vrev64q_s32(*(int32x4_t *)&v70->fields.atk));
  this = (LimitCntUpControl_o *)v3->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v61, v69);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v51,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_82;
  infoBack_high = HIDWORD(this->fields.infoBack);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_82;
  v123 = v53;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, infoBack_high, v54, 0LL);
  if ( !this )
    goto LABEL_82;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v73 = this;
  combineEventList = (System_Collections_Generic_List_object__o *)v3->fields.combineEventList;
  p_spendQpVal = &v3->fields.spendQpVal;
  v3->fields.spendQpVal = m_CancellationTokenSource;
  combineRootComponent = v73->fields.combineRootComponent;
  v76 = *(_QWORD *)&v73->fields.type;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v125,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    *(_OWORD *)&v126.fields._list = *(_OWORD *)&v125.fields.currentCryptoKey;
    v126.fields._current = (Il2CppObject *)v125.fields.fakeValue;
    while ( 1 )
    {
      v78 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v126,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v78 )
        break;
      if ( !v126.fields._current )
        sub_1BCAA3C(v78, v79);
      if ( HIDWORD(v126.fields._current[1].klass) == 6 )
      {
        v80 = *(float *)&v126.fields._current[3].monitor * (float)*p_spendQpVal;
        v81 = (int)v80;
        if ( v80 == INFINITY )
          v81 = 0x80000000;
        *p_spendQpVal = v81;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v126,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL);
  qpLb = v3->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_82;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3->fields.qpLb, 0LL);
    v83 = v123;
    if ( !this )
      goto LABEL_82;
    this = (LimitCntUpControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !this )
      goto LABEL_82;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    this = (LimitCntUpControl_o *)System_Int32__ToString_63206828(
                                    (int)v3 + 320,
                                    (System_String_o *)StringLiteral_9337/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_82;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v3->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_82;
    v120 = infoBack_high;
    v121 = lv;
    v122 = v55;
    if ( !v76 )
      goto LABEL_82;
    size = (unsigned int)limitCntUpItemList->fields._size;
    v88 = *(_QWORD *)(v76 + 24);
    v89 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                         method,
                                                         v84,
                                                         v85);
    System_Collections_Generic_List_object____ctor(
      v89,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v3->fields._itemInfoList_k__BackingField;
    v3->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v89;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields._itemInfoList_k__BackingField,
      (int64_t)v89,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    if ( (int)size >= 1 )
    {
      v97 = 0LL;
      v98 = v76 + 32;
      p_myFSM = &combineRootComponent->fields.myFSM;
      v100 = (int)v88 - 1;
      do
      {
        this = (LimitCntUpControl_o *)v3->fields.limitCntUpItemList;
        if ( !this )
          goto LABEL_82;
        this = (LimitCntUpControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v97,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( (__int64)v97 <= v100 )
        {
          if ( v97 >= *(unsigned int *)(v76 + 24) )
            goto LABEL_83;
          if ( !combineRootComponent )
            goto LABEL_82;
          if ( v97 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
            goto LABEL_83;
          v101 = this;
          CombineMenuControl__AddCombineItemInfo(
            (CombineMenuControl_o *)v3,
            *(_DWORD *)(v98 + 4 * v97),
            *((_DWORD *)p_myFSM + v97),
            0LL);
          v102 = v3->fields.baseData;
          if ( !v102 )
            goto LABEL_82;
          v103 = *(_OWORD *)&v102->fields.userId.fields.fakeValue;
          *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v102->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v125.fields.fakeValue = v103;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v124 = v125;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v124, 0LL);
          if ( v97 >= *(unsigned int *)(v76 + 24)
            || v97 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
          {
LABEL_83:
            sub_1BCAA44(this, method);
          }
          if ( !v101 )
            goto LABEL_82;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            (LimitCntUpItemComponent_o *)v101,
            (int64_t)this,
            *(_DWORD *)(v98 + 4 * v97),
            *((_DWORD *)p_myFSM + v97),
            v104);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_82;
          v111 = *(_QWORD *)&this->fields.m_CachedPtr;
          v112 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v111 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v111 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v101,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
          }
          else
          {
            v114 = v111 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v114 + 32) = v101;
            sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 32), (int64_t)v101, v105, v106, v107, v108, v109, v110);
          }
        }
      }
      while ( size != ++v97 );
    }
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v3, 0LL);
    this = (LimitCntUpControl_o *)v3->fields.qpLb;
    if ( !this )
      goto LABEL_82;
    v132.fields.r = 1.0;
    v132.fields.g = 1.0;
    v132.fields.b = 1.0;
    v132.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v132, 0LL);
    lv = v121;
    v55 = v122;
    v83 = v123;
    infoBack_high = v120;
    v3->fields._IsExeCombine_k__BackingField = 1;
  }
  if ( lv < v83 )
  {
    v3->fields.isMaxLv = 0;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v3->fields.haveQpVal < v3->fields.spendQpVal )
  {
    this = (LimitCntUpControl_o *)v3->fields.qpLb;
    v3->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_82;
    v133.fields.r = 1.0;
    v133.fields.g = 0.0;
    v133.fields.b = 0.0;
    v133.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v133, 0LL);
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v3, method) )
  {
    v3->fields.isItemNum = 0;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v115);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v127,
                                  infoBack_high,
                                  v55,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_81;
  if ( !v127 )
LABEL_82:
    sub_1BCAA3C(this, method);
  condType = v127->fields.condType;
  condTargetId = v127->fields.condTargetId;
  condNum = v127->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL) )
  {
    v3->fields.isSealCombineLimit = 1;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_81:
  LimitCntUpControl__SetExeBtnState(v3, method);
  LimitCntUpControl__CheckConductionWire(v3, v119);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v22; // x21
  __int64 v23; // x1
  __int64 *v24; // x8
  System_String_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o **v28; // x8
  __int64 v29; // x1
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19ADB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_7484/*"INFO_MSG_LIMITUP"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_8888/*"MSG_MAXLV_LIMITUP_BASE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8887/*"MSG_LIMITUP_MAX"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B19ADB = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_34;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_34;
  v30.fields.r = 0.0;
  v30.fields.a = 1.0;
  v30.fields.g = 0.87891;
  v30.fields.b = 0.98828;
  v22 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v30, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      v24 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_14;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        v33.fields.r = 1.0;
        v33.fields.g = 1.0;
        v33.fields.b = 1.0;
        v33.fields.a = 1.0;
        UIWidget__set_color(v22, v33, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
        v24 = &StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_14;
      }
      if ( !this->fields.isQpNum )
      {
        v31.fields.r = 1.0;
        v31.fields.g = 1.0;
        v31.fields.b = 1.0;
        v31.fields.a = 1.0;
        UIWidget__set_color(v22, v31, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
        v24 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    v32.fields.r = 1.0;
    v32.fields.g = 1.0;
    v32.fields.b = 1.0;
    v32.fields.a = 1.0;
    UIWidget__set_color(v22, v32, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v28 = (System_String_o **)&StringLiteral_8887/*"MSG_LIMITUP_MAX"*/;
      else
        v28 = (System_String_o **)&StringLiteral_8888/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v25 = *v28;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
      goto LABEL_15;
    }
LABEL_34:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    v24 = &StringLiteral_7484/*"INFO_MSG_LIMITUP"*/;
LABEL_14:
    v25 = (System_String_o *)*v24;
LABEL_15:
    *(_QWORD *)&state = LocalizationManager__Get(v25, 0LL);
    goto LABEL_17;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_17:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_34;
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
    sub_1BCAA3C(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._itemInfoList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._itemInfoList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}