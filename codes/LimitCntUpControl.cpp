void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A736A5 & 1) == 0 )
  {
    sub_1B90010(&CombineMenuControl_TypeInfo, method);
    byte_4A736A5 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A7369E & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B90010(&StringLiteral_3783/*"CONDUCTION_COMBINE"*/, v4);
    sub_1B90010(&StringLiteral_11496/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v5);
    sub_1B90010(&StringLiteral_3784/*"CONDUCTION_COMBINE_MSG"*/, v6);
    byte_4A7369E = 1;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3784/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_22;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3783/*"CONDUCTION_COMBINE"*/,
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
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          &svtId,
                          v10,
                          v11,
                          v12);
  v16 = System_String__Format((System_String_o *)StringLiteral_11496/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v15, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0LL);
  if ( !sealCombineLimitText )
LABEL_22:
    sub_1B9026C(conductionWireInfo, method);
  UILabel__set_text(sealCombineLimitText, (System_String_o *)conductionWireInfo, 0LL);
}


void __fastcall LimitCntUpControl__CheckIsSelectBaseSvt(
        LimitCntUpControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  __int64 v12; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-40h]

  if ( (byte_4A7369C & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4A7369C = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v15 = v16;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v15, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v14, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1B9026C(0LL, v12);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
    v3);
}


bool __fastcall LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v5; // w20
  int32_t size; // w22

  if ( (byte_4A736A0 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    byte_4A736A0 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1B9026C(itemInfoList_k__BackingField, method);
  v5 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v5 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v5,
                                                                                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
    if ( !LOBYTE(itemInfoList_k__BackingField[2].fields._syncRoot) )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
    ++v5;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
  }
  return v5 >= size;
}


int32_t __fastcall LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


void __fastcall LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *qpLb; // x20
  void *transform; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *charaGraph; // x20
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w21
  int32_t v15; // w20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A7369A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A7369A = 1;
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
  v16.fields.r = 1.0;
  v16.fields.g = 1.0;
  v16.fields.b = 1.0;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)transform, v16, 0LL);
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
  LimitCntUpControl__SetExeBtnState(this, v8);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    transform = this->fields.charaGraph;
    if ( !transform )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.charaGraph, 0, v12, v13);
  }
  transform = this->fields.limitCntUpItemList;
  if ( !transform )
LABEL_26:
    sub_1B9026C(transform, v7);
  v14 = *((_DWORD *)transform + 6);
  if ( v14 >= 1 )
  {
    v15 = 0;
    do
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)transform,
                    v15,
                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v7);
      if ( v14 == ++v15 )
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
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, v10);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v12; // x1
  UILabel_o *preSelectBaseLb; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A73699 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_8767/*"MSG_PRESELECT_BASE_LIMIT"*/, v8);
    byte_4A73699 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v9);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v12);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_8767/*"MSG_PRESELECT_BASE_LIMIT"*/,
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
    sub_1B9026C(sealCombineLimitTextObj, v10);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v14, v15);
  v18 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v18 && v18->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      v18,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v19 )
        break;
      if ( !v22.fields._current )
        sub_1B9026C(v19, v20);
      if ( HIDWORD(v22.fields._current[1].klass) == 6 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B9026C(v19, v20);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v19,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v22.fields._current[5].klass,
          v21);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A736A2 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_3831/*"CONFIRM_TITLE_LIMITUP"*/, v3);
    byte_4A736A2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B9026C(v4, v5);
  SetRarityDialogControl__SetLimitUpInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v4,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A736A4 & 1) == 0 )
  {
    sub_1B90010(&Method_LimitCntUpControl_OnClickLimitUpConductionWire__, method);
    byte_4A736A4 = 1;
  }
  v3 = Method_LimitCntUpControl_OnClickLimitUpConductionWire__;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickLimitUpConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B9026C(0LL, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantLimitImageMaster_o *v15; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v18; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37958548; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A7369D & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A7369D = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v15 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v23, 0LL);
  if ( !v15 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v15,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v18 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37958548 = CharaGraphManager__CreateTexturePrefab_37958548(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v18,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37958548;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37958548,
      v21,
      v22);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B9026C(Instance, v10);
  UICharaGraphTexture__SetCharacter_40890232((UICharaGraphTexture_o *)Instance, usrSvtData, v18, 0LL, 0, 0LL);
}


void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v8; // x19
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A736A1 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4A736A1 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
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
    sub_1B9026C(combineBtnBg, method);
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A7369B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_9210/*"N0"*/, method);
    byte_4A7369B = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62592372((int)this + 316, (System_String_o *)StringLiteral_9210/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B9026C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


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
  int32_t lv; // w29
  int32_t v29; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w27
  int32_t v32; // w23
  int32_t v33; // w26
  const MethodInfo *v34; // x2
  int32_t lvMax; // w20
  __int64 v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  struct UserServantEntity_o *v39; // x1
  const MethodInfo *v40; // x2
  struct UserServantEntity_o *v41; // x8
  int32_t infoBack_high; // w21
  int32_t m_CancellationTokenSource; // w9
  LimitCntUpControl_o *v44; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v47; // x27
  struct CombineRootComponent_o *combineRootComponent; // x28
  _BOOL8 v49; // x0
  __int64 v50; // x1
  float v51; // s0
  int v52; // w8
  UILabel_o *qpLb; // x24
  int32_t v54; // w20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  __int64 size; // x29
  __int64 v57; // x20
  System_Collections_Generic_List_object__o *v58; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  int32_t v60; // w2
  int32_t v61; // w3
  unsigned __int64 v62; // x24
  __int64 v63; // x26
  struct PlayMakerFSM_o **p_myFSM; // x21
  signed __int64 v65; // x20
  LimitCntUpControl_o *v66; // x25
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q0
  const MethodInfo *v69; // x4
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v75; // x8
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v79; // x1
  int32_t v80; // [xsp+0h] [xbp-F0h]
  int32_t v81; // [xsp+4h] [xbp-ECh]
  int32_t v82; // [xsp+8h] [xbp-E8h]
  int32_t v83; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+50h] [xbp-A0h] BYREF
  CombineLimitReleaseEntity_o *v87; // [xsp+70h] [xbp-80h] BYREF
  float barExp; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+80h] [xbp-70h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A7369F & 1) == 0 )
  {
    sub_1B90010(&CombineSvtData_TypeInfo, method);
    sub_1B90010(&CondType_TypeInfo, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_CombineLimitMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v18);
    sub_1B90010(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v19);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    this = (LimitCntUpControl_o *)sub_1B90010(&StringLiteral_9210/*"N0"*/, v23);
    byte_4A7369F = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  entity = 0LL;
  barExp = 0.0;
  v87 = 0LL;
  memset(&v86, 0, sizeof(v86));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_82;
  v26 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v26;
  *(_QWORD *)&v91.fields.fakeValue = v25;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v91, 0LL);
  v27 = v2->fields.baseData;
  if ( !v27 )
    goto LABEL_82;
  lv = v27->fields.lv;
  v29 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0LL);
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v30 )
    goto LABEL_82;
  v31 = (int)this;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v30[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_82;
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
      goto LABEL_82;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v34);
  v36 = sub_1B9025C(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_82;
  v39 = v2->fields.baseData;
  *(_QWORD *)(v36 + 16) = v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)v39, v37, v38);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_82;
  *(_DWORD *)(v36 + 24) = this->fields.sealCombineLimitTextObj;
  *(_DWORD *)(v36 + 28) = v33;
  *(_DWORD *)(v36 + 32) = lvMax;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v36 + 36) = barExp;
  *(_DWORD *)(v36 + 40) = lateExp[0];
  v41 = v2->fields.baseData;
  if ( !v41 )
    goto LABEL_82;
  *(int32x4_t *)(v36 + 44) = vuzp2q_s32(*(int32x4_t *)&v41->fields.atk, vrev64q_s32(*(int32x4_t *)&v41->fields.atk));
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v36, v40);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v29,
                                  (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_82;
  infoBack_high = HIDWORD(this->fields.infoBack);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_82;
  v83 = v31;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, infoBack_high, v32, 0LL);
  if ( !this )
    goto LABEL_82;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v44 = this;
  combineEventList = (System_Collections_Generic_List_object__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = m_CancellationTokenSource;
  combineRootComponent = v44->fields.combineRootComponent;
  v47 = *(_QWORD *)&v44->fields.type;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      combineEventList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    *(_OWORD *)&v86.fields._list = *(_OWORD *)&v85.fields.currentCryptoKey;
    v86.fields._current = (Il2CppObject *)v85.fields.fakeValue;
    while ( 1 )
    {
      v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v49 )
        break;
      if ( !v86.fields._current )
        sub_1B9026C(v49, v50);
      if ( HIDWORD(v86.fields._current[1].klass) == 6 )
      {
        v51 = *(float *)&v86.fields._current[3].monitor * (float)*p_spendQpVal;
        v52 = (int)v51;
        if ( v51 == INFINITY )
          v52 = 0x80000000;
        *p_spendQpVal = v52;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL);
  qpLb = v2->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_82;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2->fields.qpLb, 0LL);
    v54 = v83;
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
    this = (LimitCntUpControl_o *)System_Int32__ToString_62592372(
                                    (int)v2 + 320,
                                    (System_String_o *)StringLiteral_9210/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_82;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_82;
    v80 = infoBack_high;
    v81 = lv;
    v82 = v33;
    if ( !v47 )
      goto LABEL_82;
    size = (unsigned int)limitCntUpItemList->fields._size;
    v57 = *(_QWORD *)(v47 + 24);
    v58 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v58,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v58;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields._itemInfoList_k__BackingField, (int32_t)v58, v60, v61);
    if ( (int)size >= 1 )
    {
      v62 = 0LL;
      v63 = v47 + 32;
      p_myFSM = &combineRootComponent->fields.myFSM;
      v65 = (int)v57 - 1;
      do
      {
        this = (LimitCntUpControl_o *)v2->fields.limitCntUpItemList;
        if ( !this )
          goto LABEL_82;
        this = (LimitCntUpControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v62,
                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( (__int64)v62 <= v65 )
        {
          if ( v62 >= *(unsigned int *)(v47 + 24) )
            goto LABEL_83;
          if ( !combineRootComponent )
            goto LABEL_82;
          if ( v62 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
            goto LABEL_83;
          v66 = this;
          CombineMenuControl__AddCombineItemInfo(
            (CombineMenuControl_o *)v2,
            *(_DWORD *)(v63 + 4 * v62),
            *((_DWORD *)p_myFSM + v62),
            0LL);
          v67 = v2->fields.baseData;
          if ( !v67 )
            goto LABEL_82;
          v68 = *(_OWORD *)&v67->fields.userId.fields.fakeValue;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v67->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v85.fields.fakeValue = v68;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v85;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v84, 0LL);
          if ( v62 >= *(unsigned int *)(v47 + 24)
            || v62 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
          {
LABEL_83:
            sub_1B90274(this, method);
          }
          if ( !v66 )
            goto LABEL_82;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            (LimitCntUpItemComponent_o *)v66,
            (int64_t)this,
            *(_DWORD *)(v63 + 4 * v62),
            *((_DWORD *)p_myFSM + v62),
            v69);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_82;
          v72 = *(_QWORD *)&this->fields.m_CachedPtr;
          v73 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v72 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v72 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v66,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = v72 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v75 + 32) = v66;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v66, v70, v71);
          }
        }
      }
      while ( size != ++v62 );
    }
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v2, 0LL);
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    if ( !this )
      goto LABEL_82;
    v92.fields.r = 1.0;
    v92.fields.g = 1.0;
    v92.fields.b = 1.0;
    v92.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v92, 0LL);
    lv = v81;
    v33 = v82;
    v54 = v83;
    infoBack_high = v80;
    v2->fields._IsExeCombine_k__BackingField = 1;
  }
  if ( lv < v54 )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    v2->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_82;
    v93.fields.r = 1.0;
    v93.fields.g = 0.0;
    v93.fields.b = 0.0;
    v93.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v93, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v87,
                                  infoBack_high,
                                  v33,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_81;
  if ( !v87 )
LABEL_82:
    sub_1B9026C(this, method);
  condType = v87->fields.condType;
  condTargetId = v87->fields.condTargetId;
  condNum = v87->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_81:
  LimitCntUpControl__SetExeBtnState(v2, method);
  LimitCntUpControl__CheckConductionWire(v2, v79);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v14; // x21
  __int64 *v15; // x8
  System_String_o *v16; // x20
  System_String_o **v17; // x8
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A736A3 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&StringLiteral_5757/*"EXE_SUMMON_COMBINE_TXT"*/, v6);
    sub_1B90010(&StringLiteral_7363/*"INFO_MSG_LIMITUP"*/, v7);
    sub_1B90010(&StringLiteral_8764/*"MSG_MAXLV_LIMITUP_BASE"*/, v8);
    sub_1B90010(&StringLiteral_12134/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_1B90010(&StringLiteral_8763/*"MSG_LIMITUP_MAX"*/, v10);
    sub_1B90010(&StringLiteral_12135/*"SHORT_QP_INFO_MSG"*/, v11);
    sub_1B90010(&StringLiteral_1/*""*/, v12);
    byte_4A736A3 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_34;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_34;
  v18.fields.r = 0.0;
  v18.fields.a = 1.0;
  v18.fields.g = 0.87891;
  v18.fields.b = 0.98828;
  v14 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v18, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_5757/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_14;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color(v14, v21, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_12134/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_14;
      }
      if ( !this->fields.isQpNum )
      {
        v19.fields.r = 1.0;
        v19.fields.g = 1.0;
        v19.fields.b = 1.0;
        v19.fields.a = 1.0;
        UIWidget__set_color(v14, v19, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_12135/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    v20.fields.r = 1.0;
    v20.fields.g = 1.0;
    v20.fields.b = 1.0;
    v20.fields.a = 1.0;
    UIWidget__set_color(v14, v20, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v17 = (System_String_o **)&StringLiteral_8763/*"MSG_LIMITUP_MAX"*/;
      else
        v17 = (System_String_o **)&StringLiteral_8764/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v16 = *v17;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      goto LABEL_15;
    }
LABEL_34:
    sub_1B9026C(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_7363/*"INFO_MSG_LIMITUP"*/;
LABEL_14:
    v16 = (System_String_o *)*v15;
LABEL_15:
    *(_QWORD *)&state = LocalizationManager__Get(v16, 0LL);
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
    sub_1B9026C(preSelectBaseLb, method);
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

  this->fields._itemInfoList_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._itemInfoList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}