void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E98C & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E98C = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A5E985 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_3782/*"CONDUCTION_COMBINE"*/);
    sub_1B885B0(&StringLiteral_11489/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/);
    sub_1B885B0(&StringLiteral_3783/*"CONDUCTION_COMBINE_MSG"*/);
    byte_4A5E985 = 1;
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
                                                       (System_String_o *)StringLiteral_3783/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_22;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3782/*"CONDUCTION_COMBINE"*/,
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
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &svtId, v6, v7, v8);
  v12 = System_String__Format((System_String_o *)StringLiteral_11489/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v11, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v12, 0LL);
  if ( !sealCombineLimitText )
LABEL_22:
    sub_1B8880C(conductionWireInfo, method);
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

  if ( (byte_4A5E983 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E983 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1B8880C(0LL, v12);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
    v3);
}


bool __fastcall LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t size; // w22

  if ( (byte_4A5E987 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4A5E987 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1B8880C(itemInfoList_k__BackingField, method);
  v4 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v4 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v4,
                                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
    if ( !LOBYTE(itemInfoList_k__BackingField[2].fields._syncRoot) )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
    ++v4;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
  }
  return v4 >= size;
}


int32_t __fastcall LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


void __fastcall LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  void *transform; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *charaGraph; // x20
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *gameObject; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  int v12; // w21
  int32_t v13; // w20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E981 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E981 = 1;
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
  v14.fields.r = 1.0;
  v14.fields.g = 1.0;
  v14.fields.b = 1.0;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)transform, v14, 0LL);
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
  LimitCntUpControl__SetExeBtnState(this, v6);
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraph, 0, v10, v11);
  }
  transform = this->fields.limitCntUpItemList;
  if ( !transform )
LABEL_26:
    sub_1B8880C(transform, v5);
  v12 = *((_DWORD *)transform + 6);
  if ( v12 >= 1 )
  {
    v13 = 0;
    do
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)transform,
                    v13,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v5);
      if ( v12 == ++v13 )
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
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, v8);
}


void __fastcall LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v12; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E980 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8763/*"MSG_PRESELECT_BASE_LIMIT"*/);
    byte_4A5E980 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v3);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v6);
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
                                                          (System_String_o *)StringLiteral_8763/*"MSG_PRESELECT_BASE_LIMIT"*/,
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
    sub_1B8880C(sealCombineLimitTextObj, v4);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v12 && v12->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      v12,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v13 )
        break;
      if ( !v16.fields._current )
        sub_1B8880C(v13, v14);
      if ( HIDWORD(v16.fields._current[1].klass) == 6 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B8880C(v13, v14);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v13,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v16.fields._current[5].klass,
          v15);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5E989 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3830/*"CONFIRM_TITLE_LIMITUP"*/);
    byte_4A5E989 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3830/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetLimitUpInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v3,
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

  if ( (byte_4A5E98B & 1) == 0 )
  {
    sub_1B885B0(&Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
    byte_4A5E98B = 1;
  }
  v3 = Method_LimitCntUpControl_OnClickLimitUpConductionWire__;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickLimitUpConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5E984 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E984 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
  if ( !v12 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37906428,
      v18,
      v19);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B8880C(Instance, v7);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)Instance, usrSvtData, v15, 0LL, 0, 0LL);
}


void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E988 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5E988 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0LL);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0LL);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0LL);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5E982 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E982 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 316, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  struct UserServantEntity_o *v6; // x8
  int32_t lv; // w29
  int32_t v8; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v9; // x8
  int32_t v10; // w27
  int32_t v11; // w23
  int32_t v12; // w26
  const MethodInfo *v13; // x2
  int32_t lvMax; // w20
  __int64 v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserServantEntity_o *v18; // x1
  const MethodInfo *v19; // x2
  struct UserServantEntity_o *v20; // x8
  int32_t infoBack_high; // w21
  int32_t m_CancellationTokenSource; // w9
  LimitCntUpControl_o *v23; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v26; // x27
  struct CombineRootComponent_o *combineRootComponent; // x28
  _BOOL8 v28; // x0
  __int64 v29; // x1
  float v30; // s0
  int v31; // w8
  UILabel_o *qpLb; // x24
  int32_t v33; // w20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  __int64 size; // x29
  __int64 v36; // x20
  System_Collections_Generic_List_object__o *v37; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  unsigned __int64 v41; // x24
  __int64 v42; // x26
  struct PlayMakerFSM_o **p_myFSM; // x21
  signed __int64 v44; // x20
  LimitCntUpControl_o *v45; // x25
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  const MethodInfo *v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v54; // x8
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v58; // x1
  int32_t v59; // [xsp+0h] [xbp-F0h]
  int32_t v60; // [xsp+4h] [xbp-ECh]
  int32_t v61; // [xsp+8h] [xbp-E8h]
  int32_t v62; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+50h] [xbp-A0h] BYREF
  CombineLimitReleaseEntity_o *v66; // [xsp+70h] [xbp-80h] BYREF
  float barExp; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+80h] [xbp-70h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A5E986 & 1) == 0 )
  {
    sub_1B885B0(&CombineSvtData_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (LimitCntUpControl_o *)sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E986 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  entity = 0LL;
  barExp = 0.0;
  v66 = 0LL;
  memset(&v65, 0, sizeof(v65));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_82;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v5;
  *(_QWORD *)&v70.fields.fakeValue = v4;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v70, 0LL);
  v6 = v2->fields.baseData;
  if ( !v6 )
    goto LABEL_82;
  lv = v6->fields.lv;
  v8 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0LL);
  v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v9 )
    goto LABEL_82;
  v10 = (int)this;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_82;
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
      goto LABEL_82;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v13);
  v15 = sub_1B887FC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_82;
  v18 = v2->fields.baseData;
  *(_QWORD *)(v15 + 16) = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v18, v16, v17);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_82;
  *(_DWORD *)(v15 + 24) = this->fields.sealCombineLimitTextObj;
  *(_DWORD *)(v15 + 28) = v12;
  *(_DWORD *)(v15 + 32) = lvMax;
  this = (LimitCntUpControl_o *)UserServantEntity__getExpInfo(
                                  (UserServantEntity_o *)this,
                                  &lateExp[1],
                                  lateExp,
                                  &barExp,
                                  0LL);
  *(float *)(v15 + 36) = barExp;
  *(_DWORD *)(v15 + 40) = lateExp[0];
  v20 = v2->fields.baseData;
  if ( !v20 )
    goto LABEL_82;
  *(int32x4_t *)(v15 + 44) = vuzp2q_s32(*(int32x4_t *)&v20->fields.atk, vrev64q_s32(*(int32x4_t *)&v20->fields.atk));
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_82;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v15, v19);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v8,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_82;
  infoBack_high = HIDWORD(this->fields.infoBack);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_82;
  v62 = v10;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, infoBack_high, v11, 0LL);
  if ( !this )
    goto LABEL_82;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v23 = this;
  combineEventList = (System_Collections_Generic_List_object__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = m_CancellationTokenSource;
  combineRootComponent = v23->fields.combineRootComponent;
  v26 = *(_QWORD *)&v23->fields.type;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v64,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    *(_OWORD *)&v65.fields._list = *(_OWORD *)&v64.fields.currentCryptoKey;
    v65.fields._current = (Il2CppObject *)v64.fields.fakeValue;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v28 )
        break;
      if ( !v65.fields._current )
        sub_1B8880C(v28, v29);
      if ( HIDWORD(v65.fields._current[1].klass) == 6 )
      {
        v30 = *(float *)&v65.fields._current[3].monitor * (float)*p_spendQpVal;
        v31 = (int)v30;
        if ( v30 == INFINITY )
          v31 = 0x80000000;
        *p_spendQpVal = v31;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    v33 = v62;
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
    this = (LimitCntUpControl_o *)System_Int32__ToString_62512312(
                                    (int)v2 + 320,
                                    (System_String_o *)StringLiteral_9206/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_82;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_82;
    v59 = infoBack_high;
    v60 = lv;
    v61 = v12;
    if ( !v26 )
      goto LABEL_82;
    size = (unsigned int)limitCntUpItemList->fields._size;
    v36 = *(_QWORD *)(v26 + 24);
    v37 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._itemInfoList_k__BackingField, (int32_t)v37, v39, v40);
    if ( (int)size >= 1 )
    {
      v41 = 0LL;
      v42 = v26 + 32;
      p_myFSM = &combineRootComponent->fields.myFSM;
      v44 = (int)v36 - 1;
      do
      {
        this = (LimitCntUpControl_o *)v2->fields.limitCntUpItemList;
        if ( !this )
          goto LABEL_82;
        this = (LimitCntUpControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v41,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( (__int64)v41 <= v44 )
        {
          if ( v41 >= *(unsigned int *)(v26 + 24) )
            goto LABEL_83;
          if ( !combineRootComponent )
            goto LABEL_82;
          if ( v41 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
            goto LABEL_83;
          v45 = this;
          CombineMenuControl__AddCombineItemInfo(
            (CombineMenuControl_o *)v2,
            *(_DWORD *)(v42 + 4 * v41),
            *((_DWORD *)p_myFSM + v41),
            0LL);
          v46 = v2->fields.baseData;
          if ( !v46 )
            goto LABEL_82;
          v47 = *(_OWORD *)&v46->fields.userId.fields.fakeValue;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v46->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v64.fields.fakeValue = v47;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v63 = v64;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v63, 0LL);
          if ( v41 >= *(unsigned int *)(v26 + 24)
            || v41 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
          {
LABEL_83:
            sub_1B88814(this, method);
          }
          if ( !v45 )
            goto LABEL_82;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            (LimitCntUpItemComponent_o *)v45,
            (int64_t)this,
            *(_DWORD *)(v42 + 4 * v41),
            *((_DWORD *)p_myFSM + v41),
            v48);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_82;
          v51 = *(_QWORD *)&this->fields.m_CachedPtr;
          v52 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v51 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v51 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v45,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = v51 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v54 + 32) = v45;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v45, v49, v50);
          }
        }
      }
      while ( size != ++v41 );
    }
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v2, 0LL);
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    if ( !this )
      goto LABEL_82;
    v71.fields.r = 1.0;
    v71.fields.g = 1.0;
    v71.fields.b = 1.0;
    v71.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v71, 0LL);
    lv = v60;
    v12 = v61;
    v33 = v62;
    infoBack_high = v59;
    v2->fields._IsExeCombine_k__BackingField = 1;
  }
  if ( lv < v33 )
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
    v72.fields.r = 1.0;
    v72.fields.g = 0.0;
    v72.fields.b = 0.0;
    v72.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v72, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LimitCntUpControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_82;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v66,
                                  infoBack_high,
                                  v12,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_81;
  if ( !v66 )
LABEL_82:
    sub_1B8880C(this, method);
  condType = v66->fields.condType;
  condTargetId = v66->fields.condTargetId;
  condNum = v66->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_81:
  LimitCntUpControl__SetExeBtnState(v2, method);
  LimitCntUpControl__CheckConductionWire(v2, v58);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  System_String_o *v8; // x20
  System_String_o **v9; // x8
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A5E98A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_7359/*"INFO_MSG_LIMITUP"*/);
    sub_1B885B0(&StringLiteral_8760/*"MSG_MAXLV_LIMITUP_BASE"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_8759/*"MSG_LIMITUP_MAX"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E98A = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_34;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_34;
  v10.fields.r = 0.0;
  v10.fields.a = 1.0;
  v10.fields.g = 0.87891;
  v10.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v10, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_14;
    }
    if ( this->fields.isMaxLv )
    {
      if ( !this->fields.isItemNum )
      {
        v13.fields.r = 1.0;
        v13.fields.g = 1.0;
        v13.fields.b = 1.0;
        v13.fields.a = 1.0;
        UIWidget__set_color(v6, v13, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/;
        goto LABEL_14;
      }
      if ( !this->fields.isQpNum )
      {
        v11.fields.r = 1.0;
        v11.fields.g = 1.0;
        v11.fields.b = 1.0;
        v11.fields.a = 1.0;
        UIWidget__set_color(v6, v11, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    v12.fields.r = 1.0;
    v12.fields.g = 1.0;
    v12.fields.b = 1.0;
    v12.fields.a = 1.0;
    UIWidget__set_color(v6, v12, 0LL);
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
        v9 = (System_String_o **)&StringLiteral_8759/*"MSG_LIMITUP_MAX"*/;
      else
        v9 = (System_String_o **)&StringLiteral_8760/*"MSG_MAXLV_LIMITUP_BASE"*/;
      v8 = *v9;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      goto LABEL_15;
    }
LABEL_34:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7359/*"INFO_MSG_LIMITUP"*/;
LABEL_14:
    v8 = (System_String_o *)*v7;
LABEL_15:
    *(_QWORD *)&state = LocalizationManager__Get(v8, 0LL);
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
    sub_1B8880C(preSelectBaseLb, method);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._itemInfoList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}