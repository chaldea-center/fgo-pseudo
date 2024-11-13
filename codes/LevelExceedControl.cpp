void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19AD0 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19AD0 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  LevelExceedControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *materialItemObjList; // x20
  signed int v8; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  LevelExceedControl_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4B19AC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, consumeList, method);
    this = (LevelExceedControl_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6);
    byte_4B19AC8 = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_14;
    v8 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v8 >= 1 )
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
        v18 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++materialItemObjList->fields._version;
        if ( !items )
          break;
        size = materialItemObjList->fields._size;
        v20 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            materialItemObjList,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          materialItemObjList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v20, v11, v12, v13, v14, v15, v16);
        }
        if ( !--v8 )
          return;
        this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      }
LABEL_14:
      sub_1BCAA3C(this, consumeList);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  __int64 v10; // x1
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_4B19AC5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3815/*"CONDUCTION_COMBINE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3816/*"CONDUCTION_COMBINE_MSG"*/, v6, v7);
    byte_4B19AC5 = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3816/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3815/*"CONDUCTION_COMBINE"*/,
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
    sub_1BCAA3C(conductionWireInfo, method);
  }
}


void __fastcall LevelExceedControl__CheckIsSelectBaseSvt(
        LevelExceedControl_o *this,
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

  if ( (byte_4B19AC3 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19AC3 = 1;
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
        LevelExceedControl__InitDispInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
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


bool __fastcall LevelExceedControl__CheckItemHaveNum(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v7; // w20
  int32_t size; // w22

  if ( (byte_4B19ACA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4, v5);
    byte_4B19ACA = 1;
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


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B19ACC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19ACC = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 && (v6 & 0x80000000) == 0 )
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
                                                  v6,
                                                  0LL);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(itemListGrid, method);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v8; // x1
  ServantExceedEntity_o *v9; // x20
  int32_t v10; // w21
  const MethodInfo *v11; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19AC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B19AC6 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_11;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v9 = SvtExceedEnt;
  v10 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_11:
    sub_1BCAA3C(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v10, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v9, &consumeList, v11);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *materialItemObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 size; // x11
  int64_t v42; // x1
  Il2CppClass **v43; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v47; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x2
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B19AC1 = 1;
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
  v56.fields.r = 1.0;
  v56.fields.g = 1.0;
  v56.fields.b = 1.0;
  v56.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemListGrid, v56, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v13);
  this->fields.itemIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemIdList, 0LL, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialItemObjList,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  v40 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++materialItemObjList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = materialItemObjList->fields._size;
  v42 = (int64_t)itemListGrid;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      materialItemObjList,
      (Il2CppObject *)itemListGrid,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    materialItemObjList->fields._size = size + 1;
    v43[4] = (Il2CppClass *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v42, v32, v33, v34, v35, v36, v37);
  }
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v44);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    itemListGrid = (System_String_o *)this->fields.charaGraph;
    if ( !itemListGrid )
      goto LABEL_21;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)itemListGrid,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraph, 0LL, v49, v50, v51, v52, v53, v54);
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_21:
    sub_1BCAA3C(itemListGrid, v12);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, v55);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_4B19AC0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, v4, v5);
    byte_4B19AC0 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v8);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v9);
  helpBtn = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(helpBtn, v6);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19ACE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v4, v5);
    byte_4B19ACE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v6,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19ACD & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v4, v5);
    byte_4B19ACD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCAA3C(v6, v7);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v6,
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
    sub_1BCAA3C(0LL, method);
  SetRarityDialogControl__SetConfirmLvExceed_46168420(
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
  CommonConsumeEntity_o *v17; // x21
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  CommonConsumeEntity_array *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  char *v35; // x0
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B19AC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Resize_CommonConsumeEntity___, svtExceedEnt, consumeList);
    sub_1BCA7E0(&CommonConsumeEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    byte_4B19AC7 = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v17 = (CommonConsumeEntity_o *)sub_1BCAA2C(CommonConsumeEntity_TypeInfo, svtExceedEnt, consumeList, method);
    CommonConsumeEntity___ctor(v17, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_20;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v24 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    *(_QWORD *)&v37.fields.currentCryptoKey = v24;
    *(_QWORD *)&v37.fields.fakeValue = v23;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
    if ( !v22
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            v22,
                            (int32_t)Master_object,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v17
      || (v17->fields.objectId = (int32_t)Master_object[1].monitor,
          v17->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_object_(
            (System_Object_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_2ED21D8 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v25 = *consumeList) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(Master_object, v20);
    }
    v26 = sub_1BCA91C(v17, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
      v36 = sub_1BCAA60(0LL);
      sub_1BCA908(v36, 0LL);
    }
    v34 = *(_QWORD *)&v25->max_length;
    if ( !(_DWORD)v34 )
      sub_1BCAA44(v26, v27);
    v35 = (char *)v25 + (((v34 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v35 + 4) = v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v17, v28, v29, v30, v31, v32, v33);
  }
}


void __fastcall LevelExceedControl__SetBaseSvtCardImg(
        LevelExceedControl_o *this,
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

  if ( (byte_4B19AC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19AC4 = 1;
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


void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  LevelExceedControl_o *v3; // x19
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
  struct UserServantEntity_o *baseData; // x8
  __int64 v27; // x20
  __int64 v28; // x21
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  const MethodInfo *v42; // x2
  struct UserServantEntity_o *v43; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v45; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v47; // x2
  __int64 v48; // x2
  __int64 v49; // x3
  int64_t v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  __int64 size; // x26
  System_Collections_Generic_List_object__o *v59; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  unsigned __int64 v67; // x22
  LevelExceedControl_o *v68; // x23
  CommonConsumeEntity_o *v69; // x8
  struct System_Int32_array *itemIdList; // x9
  int32_t objectId; // w24
  int32_t num; // w25
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v74; // x8
  __int128 v75; // q0
  const MethodInfo *v76; // x4
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v86; // x8
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-90h]
  float barExp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B19AC9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineSvtData_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    this = (LevelExceedControl_o *)sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v24, v25);
    byte_4B19AC9 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  baseData = v3->fields.baseData;
  if ( !baseData )
    goto LABEL_58;
  v28 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v93.fields.currentCryptoKey = v28;
  *(_QWORD *)&v93.fields.fakeValue = v27;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
  this = (LevelExceedControl_o *)v3->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v3->fields.baseData, v29);
  v33 = sub_1BCAA2C(CombineSvtData_TypeInfo, v30, v31, v32);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_58;
  v40 = (int64_t)v3->fields.baseData;
  *(_QWORD *)(v33 + 16) = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), v40, v34, v35, v36, v37, v38, v39);
  v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.baseData;
  if ( !v41 )
    goto LABEL_58;
  *(_DWORD *)(v33 + 24) = v41[16].fields.currentCryptoKey;
  *(_DWORD *)(v33 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41[6], 0LL);
  this = (LevelExceedControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_58;
  *(_DWORD *)(v33 + 32) = UserServantEntity__getExceedLvMax(
                            (UserServantEntity_o *)this,
                            LODWORD(this->fields._itemInfoList_k__BackingField) + 1,
                            0LL);
  this = (LevelExceedControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_58;
  this = (LevelExceedControl_o *)UserServantEntity__getExpInfo(
                                   (UserServantEntity_o *)this,
                                   &lateExp[1],
                                   lateExp,
                                   &barExp,
                                   0LL);
  *(float *)(v33 + 36) = barExp;
  *(_DWORD *)(v33 + 40) = lateExp[0];
  v43 = v3->fields.baseData;
  if ( !v43 )
    goto LABEL_58;
  *(int32x4_t *)(v33 + 44) = vuzp2q_s32(*(int32x4_t *)&v43->fields.atk, vrev64q_s32(*(int32x4_t *)&v43->fields.atk));
  this = (LevelExceedControl_o *)v3->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v33, v42);
  this = (LevelExceedControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_58;
  v3->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v3->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_63206828(
                                   (int)v3 + 272,
                                   (System_String_o *)StringLiteral_9337/*"N0"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_58;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v3, v45);
  LevelExceedControl__AdjustMaterialItemObjList(v3, ConsumeItemList, v47);
  if ( ConsumeItemList )
  {
    v50 = sub_1BCA888(int___TypeInfo, ConsumeItemList->max_length);
    v3->fields.itemIdList = (struct System_Int32_array *)v50;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.itemIdList, v50, v51, v52, v53, v54, v55, v56);
  }
  materialItemObjList = v3->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_58;
  size = (unsigned int)materialItemObjList->fields._size;
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                       method,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v3->fields._itemInfoList_k__BackingField;
  v3->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v59;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._itemInfoList_k__BackingField,
    (int64_t)v59,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( (int)size >= 1 )
  {
    v67 = 0LL;
    while ( 1 )
    {
      this = (LevelExceedControl_o *)v3->fields.materialItemObjList;
      if ( !this )
        break;
      this = (LevelExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v67,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        break;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v68 = this;
      if ( ConsumeItemList && (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
      {
        if ( v67 >= (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
          goto LABEL_59;
        v69 = ConsumeItemList->m_Items[v67];
        if ( !v69 )
          break;
        itemIdList = v3->fields.itemIdList;
        if ( !itemIdList )
          break;
        if ( v67 >= itemIdList->max_length )
LABEL_59:
          sub_1BCAA44(this, method);
        objectId = v69->fields.objectId;
        num = v69->fields.num;
        itemIdList->m_Items[v67 + 1] = objectId;
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
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
          static_fields = BalanceConfig_TypeInfo->static_fields;
          objectId = static_fields->LvExceedItemId;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
        }
        num = static_fields->LvExceedNeedItemNum;
      }
      v74 = v3->fields.baseData;
      if ( !v74 )
        break;
      v75 = *(_OWORD *)&v74->fields.userId.fields.fakeValue;
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v74->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v90.fields.fakeValue = v75;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v89 = v90;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
      if ( !v68 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v68, (int64_t)this, objectId, num, v76);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        break;
      v83 = *(_QWORD *)&this->fields.m_CachedPtr;
      v84 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v83 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v83 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v68,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = v83 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v86 + 32) = v68;
        sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 32), (int64_t)v68, v77, v78, v79, v80, v81, v82);
      }
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v3, objectId, num, 0LL);
      if ( size == ++v67 )
        goto LABEL_44;
    }
LABEL_58:
    sub_1BCAA3C(this, method);
  }
LABEL_44:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v3, 0LL);
  this = (LevelExceedControl_o *)v3->fields.itemListGrid;
  if ( !this )
    goto LABEL_58;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  this = (LevelExceedControl_o *)v3->fields.needQpLb;
  if ( !this )
    goto LABEL_58;
  v94.fields.r = 1.0;
  v94.fields.g = 1.0;
  v94.fields.b = 1.0;
  v94.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v94, 0LL);
  this = (LevelExceedControl_o *)v3->fields.baseData;
  v3->fields._IsExeCombine_k__BackingField = 1;
  if ( !this )
    goto LABEL_58;
  if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL) )
  {
    v3->fields.isMaxLimitCnt = 0;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  this = (LevelExceedControl_o *)v3->fields.baseData;
  if ( !this )
    goto LABEL_58;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0LL) )
  {
    v3->fields.isMaxLv = 0;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v3->fields.haveQpVal < v3->fields.spendQpVal )
  {
    this = (LevelExceedControl_o *)v3->fields.needQpLb;
    v3->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_58;
    v95.fields.r = 1.0;
    v95.fields.g = 0.0;
    v95.fields.b = 0.0;
    v95.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v95, 0LL);
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LevelExceedControl__CheckItemHaveNum(v3, method) )
  {
    v3->fields.isItemNum = 0;
    v3->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v3, v87);
  LevelExceedControl__CheckConductionWire(v3, v88);
}


void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v9; // x19
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19ACB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19ACB = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v9 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v7 )
    {
      v10.fields.r = 1.0;
      v10.fields.g = 1.0;
      v10.fields.b = 1.0;
      v10.fields.a = 1.0;
      UIWidget__set_color(v7, v10, 0LL);
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v9, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !v7 )
    goto LABEL_12;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v7, v11, 0LL);
  if ( !v9 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19AC2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19AC2 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 268, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v20; // x21
  __int64 v21; // x1
  __int64 *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19ACF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8889/*"MSG_MAX_LVEXCEED"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7485/*"INFO_MSG_LVEXCEED"*/, v17, v18);
    byte_4B19ACF = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  }
  v26.fields.r = 0.0;
  v26.fields.a = 1.0;
  v26.fields.g = 0.87891;
  v26.fields.b = 0.98828;
  v20 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v26, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_34;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      v28.fields.r = 1.0;
      v28.fields.g = 1.0;
      v28.fields.b = 1.0;
      v28.fields.a = 1.0;
      UIWidget__set_color(v20, v28, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      v22 = &StringLiteral_8889/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_25;
    }
    if ( !this->fields.isItemNum )
    {
      v29.fields.r = 1.0;
      v29.fields.g = 1.0;
      v29.fields.b = 1.0;
      v29.fields.a = 1.0;
      UIWidget__set_color(v20, v29, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      v22 = &StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/;
      goto LABEL_25;
    }
    if ( this->fields.isQpNum )
    {
LABEL_34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v22 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v27.fields.r = 1.0;
      v27.fields.g = 1.0;
      v27.fields.b = 1.0;
      v27.fields.a = 1.0;
      UIWidget__set_color(v20, v27, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      v22 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v22 = &StringLiteral_7485/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_25:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v22, 0LL);
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
    sub_1BCAA3C(preSelectBaseObj, method);
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