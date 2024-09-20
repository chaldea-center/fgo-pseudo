void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E97F & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E97F = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  LevelExceedControl_o *v4; // x19
  System_Collections_Generic_List_object__o *materialItemObjList; // x20
  signed int v6; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  LevelExceedControl_o *v14; // x1
  Il2CppClass **v15; // x0

  v4 = this;
  if ( (byte_4A5E977 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (LevelExceedControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5E977 = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_14;
    v6 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v6 >= 1 )
    {
      for ( this = (LevelExceedControl_o *)v4->fields.itemListGrid;
            this;
            materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList )
      {
        itemInfoPrefab = v4->fields.itemInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        this = (LevelExceedControl_o *)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)v4,
                                         itemInfoPrefab,
                                         transform,
                                         0LL,
                                         0LL);
        if ( !materialItemObjList )
          break;
        items = materialItemObjList->fields._items;
        v12 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++materialItemObjList->fields._version;
        if ( !items )
          break;
        size = materialItemObjList->fields._size;
        v14 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            materialItemObjList,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          materialItemObjList->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
        if ( !--v6 )
          return;
        this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      }
LABEL_14:
      sub_1B8880C(this, consumeList);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_4A5E974 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3782/*"CONDUCTION_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3783/*"CONDUCTION_COMBINE_MSG"*/);
    byte_4A5E974 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    return;
  if ( !UserServantEntity__isLimitCountMax(baseData, 0LL) )
    goto LABEL_9;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_16;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
  {
LABEL_9:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( conductionWireInfo )
    {
      CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, method);
      conductionWireLabel = this->fields.conductionWireLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3783/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3782/*"CONDUCTION_COMBINE"*/,
                                                           0LL);
        if ( conductionButtonLabel )
        {
          UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
          conductionWireInfo = this->fields.conductionWireInfo;
          if ( conductionWireInfo )
          {
            UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1B8880C(conductionWireInfo, method);
  }
}


void __fastcall LevelExceedControl__CheckIsSelectBaseSvt(
        LevelExceedControl_o *this,
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

  if ( (byte_4A5E972 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E972 = 1;
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
        LevelExceedControl__InitDispInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
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


bool __fastcall LevelExceedControl__CheckItemHaveNum(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t size; // w22

  if ( (byte_4A5E979 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4A5E979 = 1;
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


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4A5E97B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E97B = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)itemListGrid,
                                                  v5,
                                                  0LL);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1B8880C(itemListGrid, method);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v5; // x20
  int32_t v6; // w21
  const MethodInfo *v7; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E975 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5E975 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_11;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v5 = SvtExceedEnt;
  v6 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_11:
    sub_1B8880C(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v6, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v5, &consumeList, v7);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *materialItemObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  System_String_o *v20; // x1
  Il2CppClass **v21; // x0
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E970 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E970 = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = 0;
  itemListGrid = System_Int32__ToString((int)this + 272, 0LL);
  if ( !needQpLb )
    goto LABEL_21;
  UILabel__set_text(needQpLb, itemListGrid, 0LL);
  itemListGrid = (System_String_o *)this->fields.needQpLb;
  if ( !itemListGrid )
    goto LABEL_21;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemListGrid, v28, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v6);
  this->fields.itemIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemIdList, 0, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.materialItemObjList, (int32_t)v9, v10, v11);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  itemInfoPrefab = this->fields.itemInfoPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0LL);
  itemListGrid = (System_String_o *)BaseMonoBehaviour__createObject(
                                      (BaseMonoBehaviour_o *)this,
                                      itemInfoPrefab,
                                      transform,
                                      0LL,
                                      0LL);
  materialItemObjList = (System_Collections_Generic_List_object__o *)this->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_21;
  items = materialItemObjList->fields._items;
  v18 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++materialItemObjList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = materialItemObjList->fields._size;
  v20 = itemListGrid;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      materialItemObjList,
      (Il2CppObject *)itemListGrid,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    materialItemObjList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v14, v15);
  }
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v22);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    itemListGrid = (System_String_o *)this->fields.charaGraph;
    if ( !itemListGrid )
      goto LABEL_21;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)itemListGrid,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraph, 0, v25, v26);
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_21:
    sub_1B8880C(itemListGrid, v5);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, v27);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_4A5E96F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_4A5E96F = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(helpBtn, v3);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5E97D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_4A5E97D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A5E97C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_4A5E97C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExecute(LevelExceedControl_o *this, const MethodInfo *method)
{
  SetRarityDialogControl_o *exeCombineDlg; // x0

  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B8880C(0LL, method);
  SetRarityDialogControl__SetConfirmLvExceed_45355764(
    exeCombineDlg,
    this->fields.materialItemObjList,
    this->fields.itemIdList,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LevelExceedControl__SetAddConsumeItem(
        LevelExceedControl_o *this,
        ServantExceedEntity_o *svtExceedEnt,
        CommonConsumeEntity_array **consumeList,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *v7; // x21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  CommonConsumeEntity_array *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  char *v20; // x0
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5E976 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Resize_CommonConsumeEntity___);
    sub_1B885B0(&CommonConsumeEntity_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E976 = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v7 = (CommonConsumeEntity_o *)sub_1B887FC(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v7, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_20;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v13;
    *(_QWORD *)&v22.fields.fakeValue = v12;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
    if ( !v11
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            v11,
                            (int32_t)Master_object,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v7
      || (v7->fields.objectId = (int32_t)Master_object[1].monitor,
          v7->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_object_(
            (System_Object_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_2E3F214 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v14 = *consumeList) == 0LL) )
    {
LABEL_20:
      sub_1B8880C(Master_object, v9);
    }
    v15 = sub_1B886EC(v7, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
      v21 = sub_1B88830(0LL);
      sub_1B886D8(v21, 0LL);
    }
    v19 = *(_QWORD *)&v14->max_length;
    if ( !(_DWORD)v19 )
      sub_1B88814(v15, v16);
    v20 = (char *)v14 + (((v19 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v20 + 4) = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v7, v17, v18);
  }
}


void __fastcall LevelExceedControl__SetBaseSvtCardImg(
        LevelExceedControl_o *this,
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

  if ( (byte_4A5E973 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E973 = 1;
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


void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct UserServantEntity_o *v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v11; // x8
  const MethodInfo *v12; // x2
  struct UserServantEntity_o *v13; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v15; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  __int64 size; // x26
  System_Collections_Generic_List_object__o *v23; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 v27; // x22
  LevelExceedControl_o *v28; // x23
  CommonConsumeEntity_o *v29; // x8
  struct System_Int32_array *itemIdList; // x9
  int32_t objectId; // w24
  int32_t num; // w25
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  const MethodInfo *v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-90h]
  float barExp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A5E978 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CombineSvtData_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (LevelExceedControl_o *)sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E978 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_58;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v5;
  *(_QWORD *)&v49.fields.fakeValue = v4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v49, 0LL);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v6);
  v7 = sub_1B887FC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_58;
  v10 = v2->fields.baseData;
  *(_QWORD *)(v7 + 16) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v10, v8, v9);
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v11 )
    goto LABEL_58;
  *(_DWORD *)(v7 + 24) = v11[16].fields.currentCryptoKey;
  *(_DWORD *)(v7 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11[6], 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  *(_DWORD *)(v7 + 32) = UserServantEntity__getExceedLvMax(
                           (UserServantEntity_o *)this,
                           LODWORD(this->fields._itemInfoList_k__BackingField) + 1,
                           0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  this = (LevelExceedControl_o *)UserServantEntity__getExpInfo(
                                   (UserServantEntity_o *)this,
                                   &lateExp[1],
                                   lateExp,
                                   &barExp,
                                   0LL);
  *(float *)(v7 + 36) = barExp;
  *(_DWORD *)(v7 + 40) = lateExp[0];
  v13 = v2->fields.baseData;
  if ( !v13 )
    goto LABEL_58;
  *(int32x4_t *)(v7 + 44) = vuzp2q_s32(*(int32x4_t *)&v13->fields.atk, vrev64q_s32(*(int32x4_t *)&v13->fields.atk));
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v7, v12);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  v2->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v2->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_62512312(
                                   (int)v2 + 272,
                                   (System_String_o *)StringLiteral_9206/*"N0"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_58;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v15);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v17);
  if ( ConsumeItemList )
  {
    v18 = sub_1B88658(int___TypeInfo, ConsumeItemList->max_length);
    v2->fields.itemIdList = (struct System_Int32_array *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.itemIdList, v18, v19, v20);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_58;
  size = (unsigned int)materialItemObjList->fields._size;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v2->fields._itemInfoList_k__BackingField;
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._itemInfoList_k__BackingField, (int32_t)v23, v25, v26);
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      this = (LevelExceedControl_o *)v2->fields.materialItemObjList;
      if ( !this )
        break;
      this = (LevelExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v27,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        break;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v28 = this;
      if ( ConsumeItemList && (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
      {
        if ( v27 >= (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
          goto LABEL_59;
        v29 = ConsumeItemList->m_Items[v27];
        if ( !v29 )
          break;
        itemIdList = v2->fields.itemIdList;
        if ( !itemIdList )
          break;
        if ( v27 >= itemIdList->max_length )
LABEL_59:
          sub_1B88814(this, method);
        objectId = v29->fields.objectId;
        num = v29->fields.num;
        itemIdList->m_Items[v27 + 1] = objectId;
      }
      else
      {
        this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
        if ( BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          static_fields = BalanceConfig_TypeInfo->static_fields;
          objectId = static_fields->LvExceedItemId;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
          static_fields = BalanceConfig_TypeInfo->static_fields;
          objectId = static_fields->LvExceedItemId;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
        }
        num = static_fields->LvExceedNeedItemNum;
      }
      v34 = v2->fields.baseData;
      if ( !v34 )
        break;
      v35 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v45 = v46;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
      if ( !v28 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v28, (int64_t)this, objectId, num, v36);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        break;
      v39 = *(_QWORD *)&this->fields.m_CachedPtr;
      v40 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v39 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v28,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v42 + 32) = v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)v28, v37, v38);
      }
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v2, objectId, num, 0LL);
      if ( size == ++v27 )
        goto LABEL_44;
    }
LABEL_58:
    sub_1B8880C(this, method);
  }
LABEL_44:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v2, 0LL);
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_58;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  this = (LevelExceedControl_o *)v2->fields.needQpLb;
  if ( !this )
    goto LABEL_58;
  v50.fields.r = 1.0;
  v50.fields.g = 1.0;
  v50.fields.b = 1.0;
  v50.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v50, 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  v2->fields._IsExeCombine_k__BackingField = 1;
  if ( !this )
    goto LABEL_58;
  if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL) )
  {
    v2->fields.isMaxLimitCnt = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0LL) )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    this = (LevelExceedControl_o *)v2->fields.needQpLb;
    v2->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_58;
    v51.fields.r = 1.0;
    v51.fields.g = 0.0;
    v51.fields.b = 0.0;
    v51.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v51, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LevelExceedControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v43);
  LevelExceedControl__CheckConductionWire(v2, v44);
}


void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E97A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5E97A = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v6 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v4 )
    {
      v7.fields.r = 1.0;
      v7.fields.g = 1.0;
      v7.fields.b = 1.0;
      v7.fields.a = 1.0;
      UIWidget__set_color(v4, v7, 0LL);
      if ( v6 )
      {
        UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v6, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0LL);
  if ( !v6 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5E971 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E971 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 268, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetStateInfoMsg(
        LevelExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A5E97E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8761/*"MSG_MAX_LVEXCEED"*/);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_7360/*"INFO_MSG_LVEXCEED"*/);
    byte_4A5E97E = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_31:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_34;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      v10.fields.r = 1.0;
      v10.fields.g = 1.0;
      v10.fields.b = 1.0;
      v10.fields.a = 1.0;
      UIWidget__set_color(v6, v10, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_8761/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_25;
    }
    if ( !this->fields.isItemNum )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(v6, v11, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/;
      goto LABEL_25;
    }
    if ( this->fields.isQpNum )
    {
LABEL_34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_26;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7360/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_25:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0LL);
LABEL_26:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall LevelExceedControl__ShowItemListInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *preSelectBaseObj; // x0
  const MethodInfo *v4; // x1

  preSelectBaseObj = this->fields.preSelectBaseObj;
  if ( !preSelectBaseObj
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0LL),
        (preSelectBaseObj = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0LL),
        (preSelectBaseObj = this->fields.itemListInfo) == 0LL) )
  {
    sub_1B8880C(preSelectBaseObj, method);
  }
  UnityEngine_GameObject__SetActive(preSelectBaseObj, 1, 0LL);
  if ( this->fields.isSelectBase )
    LevelExceedControl__SetExceedInfo(this, v4);
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *__fastcall LevelExceedControl__get_itemInfoList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void __fastcall LevelExceedControl__set_itemInfoList(
        LevelExceedControl_o *this,
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