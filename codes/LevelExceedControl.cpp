void LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_5974B17 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_5974B17 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  LevelExceedControl_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  int v6; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  LevelExceedControl_o *v19; // x1
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_5974B0E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (LevelExceedControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_5974B0E = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_14;
    v6 = LODWORD(consumeList->max_length) - materialItemObjList->fields._size;
    if ( v6 >= 1 )
    {
      while ( 1 )
      {
        this = (LevelExceedControl_o *)v4->fields.itemListGrid;
        if ( !this )
          break;
        v7 = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList;
        itemInfoPrefab = v4->fields.itemInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        this = (LevelExceedControl_o *)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)v4,
                                         itemInfoPrefab,
                                         transform,
                                         0,
                                         0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        v19 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)this,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
        }
        if ( !--v6 )
          return;
      }
LABEL_14:
      sub_2213CDC(this, consumeList);
    }
  }
}


void LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  __int64 v5; // x1
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_5974B0B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3857/*"CONDUCTION_COMBINE"*/);
    sub_2213A60(&StringLiteral_3858/*"CONDUCTION_COMBINE_MSG"*/);
    byte_5974B0B = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
  baseData = this->fields.baseData;
  if ( !baseData )
    return;
  if ( !UserServantEntity__isLimitCountMax(baseData, 0) )
    goto LABEL_9;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_16;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0) )
  {
LABEL_9:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( conductionWireInfo )
    {
      CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, 0);
      conductionWireLabel = this->fields.conductionWireLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3858/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3857/*"CONDUCTION_COMBINE"*/,
                                                           0);
        if ( conductionButtonLabel )
        {
          UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0);
          conductionWireInfo = this->fields.conductionWireInfo;
          if ( conductionWireInfo )
          {
            UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_2213CDC(conductionWireInfo, method);
  }
}


void LevelExceedControl__CheckIsSelectBaseSvt(
        LevelExceedControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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

  if ( (byte_5974B0A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974B0A = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v11;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v19 = v20;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v19, 0);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0) )
        LevelExceedControl__InitDispInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_2213CDC(0, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool LevelExceedControl__CheckItemHaveNum(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t size; // w22

  if ( (byte_5974B10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_5974B10 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_2213CDC(itemInfoList_k__BackingField, method);
  v4 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v4 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v4,
                                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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


void LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_5974B12 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B12 = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0);
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)itemListGrid,
                                                  v5 - 2,
                                                  0);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_14:
    sub_2213CDC(itemListGrid, method);
  }
}


CommonConsumeEntity_array *LevelExceedControl__GetConsumeItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v5; // x1
  ServantExceedEntity_o *v6; // x20
  int32_t v7; // w21
  const MethodInfo *v8; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974B0C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974B0C = 1;
  }
  baseData = this->fields.baseData;
  consumeList = 0;
  if ( !baseData )
    goto LABEL_11;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0);
  v6 = SvtExceedEnt;
  v7 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_11:
    sub_2213CDC(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v7, 0);
  LevelExceedControl__SetAddConsumeItem(this, v6, &consumeList, v8);
  return consumeList;
}


int32_t LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


void LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *materialItemObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  System_String_o *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v37; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B08 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B08 = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = 0;
  itemListGrid = System_Int32__ToString((int)this + 352, 0);
  if ( !needQpLb )
    goto LABEL_21;
  UILabel__set_text(needQpLb, itemListGrid, 0);
  itemListGrid = (System_String_o *)this->fields.needQpLb;
  if ( !itemListGrid )
    goto LABEL_21;
  v45.fields.r = 1.0;
  v45.fields.g = 1.0;
  v45.fields.b = 1.0;
  v45.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemListGrid, v45, 0);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v6);
  this->fields.itemIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemIdList, 0, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.materialItemObjList,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  itemInfoPrefab = this->fields.itemInfoPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0);
  itemListGrid = (System_String_o *)BaseMonoBehaviour__createObject(
                                      (BaseMonoBehaviour_o *)this,
                                      itemInfoPrefab,
                                      transform,
                                      0,
                                      0);
  materialItemObjList = (System_Collections_Generic_List_object__o *)this->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_21;
  items = materialItemObjList->fields._items;
  v30 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++materialItemObjList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = materialItemObjList->fields._size;
  v32 = itemListGrid;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      materialItemObjList,
      (Il2CppObject *)itemListGrid,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    materialItemObjList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v32, v22, v23, v24, v25, v26, v27);
  }
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v34);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    itemListGrid = (System_String_o *)this->fields.charaGraph;
    if ( !itemListGrid )
      goto LABEL_21;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)itemListGrid,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v39, v40, v41, v42, v43, v44);
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_21:
    sub_2213CDC(itemListGrid, v5);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, 0);
}


void LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_5974B07 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_5974B07 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/, 0);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0), (helpBtn = this->fields.preSelectBaseObj) == 0)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0), (helpBtn = this->fields.baseSelectInfoLb) == 0) )
  {
LABEL_11:
    sub_2213CDC(helpBtn, v3);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
}


void LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_5974B14 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3912/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_5974B14 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3912/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_2213CDC(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0);
}


void LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_5974B13 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3912/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_5974B13 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3912/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_2213CDC(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0,
    0);
}


void LevelExceedControl__OnClickExecute(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int128 v4; // q1
  SetRarityDialogControl_o *exeCombineDlg; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_5974B15 & 1) == 0 )
  {
    this = (LevelExceedControl_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974B15 = 1;
  }
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_8;
  v4 = *(_OWORD *)&baseData->fields.userId.fields.fakeValue;
  exeCombineDlg = v2->fields.exeCombineDlg;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
  if ( !exeCombineDlg )
LABEL_8:
    sub_2213CDC(this, method);
  SetRarityDialogControl__SetConfirmLvExceed_37881508(
    exeCombineDlg,
    (int64_t)this,
    v2->fields.combineItemInfoList,
    v2->fields.spendQpVal,
    v2->fields.haveQpVal,
    0);
}


void LevelExceedControl__SetAddConsumeItem(
        LevelExceedControl_o *this,
        ServantExceedEntity_o *svtExceedEnt,
        CommonConsumeEntity_array **consumeList,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *v7; // x21
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t objectNum; // w10
  CommonConsumeEntity_array *v16; // x8
  CommonConsumeEntity_array *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  char *v26; // x0
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5974B0D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Resize_CommonConsumeEntity___);
    sub_2213A60(&CommonConsumeEntity_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974B0D = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v7 = (CommonConsumeEntity_o *)sub_2213CCC(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v7, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_20;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v28.fields.currentCryptoKey = v13;
    *(_QWORD *)&v28.fields.fakeValue = v14;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
    if ( !v12
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            v12,
                            (int32_t)Master_object,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0
      || !v7
      || (objectNum = svtExceedEnt->fields.objectNum,
          v16 = *consumeList,
          v7->fields.objectId = (int32_t)Master_object[1].monitor,
          v7->fields.num = objectNum,
          !v16)
      || (System_Array__Resize_object_(
            (System_Object_array **)consumeList,
            LODWORD(v16->max_length) + 1,
            (const MethodInfo_37A83F4 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v17 = *consumeList) == 0) )
    {
LABEL_20:
      sub_2213CDC(Master_object, v10);
    }
    v18 = sub_2213BB4(v7, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
      v27 = sub_2213D00(0, v19);
      sub_2213BA0(v27, 0);
    }
    if ( !LODWORD(v17->max_length) )
      sub_2213CE4(v18);
    v26 = (char *)v17 + ((__int64)(((unsigned __int64)LODWORD(v17->max_length) << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v26 + 4) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v7, v20, v21, v22, v23, v24, v25);
  }
}


void LevelExceedControl__SetBaseSvtCardImg(
        LevelExceedControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UICharaGraphTexture_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  this->fields.baseData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseData,
    (int32_t)usrSvtData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(LevelExceedControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                          this,
                                          this->fields.charaGraph,
                                          usrSvtData,
                                          this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UserServantEntity_o *v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  UserServantEntity_o *v15; // x8
  UserServantEntity_o *v16; // x8
  int32_t v17; // w8
  struct UserServantEntity_o *v18; // x8
  int32_t adjustHp; // w9
  int m_CachedPtr_high; // w10
  int32_t adjustAtk; // w8
  int32_t CombineQpSvtExceed; // w0
  System_String_o *v23; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v25; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  __int64 size; // x25
  System_Collections_Generic_List_object__o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  unsigned __int64 v44; // x21
  LevelExceedControl_o *v45; // x22
  CommonConsumeEntity_o *v46; // x8
  struct System_Int32_array *itemIdList; // x9
  int32_t objectId; // w23
  int32_t num; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  __int128 v53; // q1
  int v54; // w8
  const MethodInfo *v55; // x4
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v63; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v65; // x8
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-90h]
  float barExp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_5974B0F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineSvtData_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (LevelExceedControl_o *)sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974B0F = 1;
  }
  baseData = v2->fields.baseData;
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( !baseData )
    goto LABEL_60;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v72.fields.currentCryptoKey = v4;
  *(_QWORD *)&v72.fields.fakeValue = v5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_60;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, 0);
  v6 = sub_2213CCC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_60;
  v13 = v2->fields.baseData;
  *(_QWORD *)(v6 + 16) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v14 )
    goto LABEL_60;
  *(_DWORD *)(v6 + 24) = v14[25].fields.currentCryptoKey;
  this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14[6], 0);
  v15 = v2->fields.baseData;
  *(_DWORD *)(v6 + 28) = (_DWORD)this;
  if ( !v15 )
    goto LABEL_60;
  this = (LevelExceedControl_o *)UserServantEntity__getExceedLvMax(v15, v15->fields.exceedCount + 1, 0);
  v16 = v2->fields.baseData;
  *(_DWORD *)(v6 + 32) = (_DWORD)this;
  if ( !v16 )
    goto LABEL_60;
  UserServantEntity__getExpInfo(v16, &lateExp[1], lateExp, &barExp, 0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  this = (LevelExceedControl_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0, 0);
  v17 = lateExp[0];
  *(float *)(v6 + 36) = barExp;
  *(_DWORD *)(v6 + 40) = v17;
  if ( !this )
    goto LABEL_60;
  v18 = v2->fields.baseData;
  *(_DWORD *)(v6 + 44) = this->fields.m_CachedPtr;
  if ( !v18 )
    goto LABEL_60;
  adjustHp = v18->fields.adjustHp;
  m_CachedPtr_high = HIDWORD(this->fields.m_CachedPtr);
  adjustAtk = v18->fields.adjustAtk;
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  *(_DWORD *)(v6 + 48) = adjustHp;
  *(_DWORD *)(v6 + 52) = m_CachedPtr_high;
  *(_DWORD *)(v6 + 56) = adjustAtk;
  if ( !this )
    goto LABEL_60;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v6, 0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  CombineQpSvtExceed = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0);
  v23 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  needQpLb = v2->fields.needQpLb;
  v2->fields.spendQpVal = CombineQpSvtExceed;
  this = (LevelExceedControl_o *)System_Int32__ToString_77138656((int)v2 + 352, v23, 0);
  if ( !needQpLb )
    goto LABEL_60;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v25);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v27);
  if ( ConsumeItemList )
  {
    v28 = sub_2213B20(int___TypeInfo, LODWORD(ConsumeItemList->max_length));
    v2->fields.itemIdList = (struct System_Int32_array *)v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.itemIdList, v28, v29, v30, v31, v32, v33, v34);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_60;
  size = (unsigned int)materialItemObjList->fields._size;
  v37 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v37;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields._itemInfoList_k__BackingField,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)size >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      this = (LevelExceedControl_o *)v2->fields.materialItemObjList;
      if ( !this )
        break;
      this = (LevelExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v44,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        break;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v45 = this;
      if ( ConsumeItemList && LODWORD(ConsumeItemList->max_length) )
      {
        if ( v44 >= LODWORD(ConsumeItemList->max_length) )
          goto LABEL_61;
        v46 = ConsumeItemList->m_Items[v44];
        if ( !v46 )
          break;
        itemIdList = v2->fields.itemIdList;
        if ( !itemIdList )
          break;
        if ( v44 >= LODWORD(itemIdList->max_length) )
LABEL_61:
          sub_2213CE4(this);
        objectId = v46->fields.objectId;
        num = v46->fields.num;
        itemIdList->m_Items[v44] = objectId;
      }
      else
      {
        this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
        if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
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
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
        }
        num = static_fields->LvExceedNeedItemNum;
      }
      v51 = v2->fields.baseData;
      if ( !v51 )
        break;
      v52 = *(_OWORD *)&v51->fields.userId.fields.currentCryptoKey;
      v53 = *(_OWORD *)&v51->fields.userId.fields.fakeValue;
      v54 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v69.fields.currentCryptoKey = v52;
      *(_OWORD *)&v69.fields.fakeValue = v53;
      if ( !v54 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v68 = v69;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v68, 0);
      if ( !v45 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v45, (int64_t)this, objectId, num, v55);
      this = (LevelExceedControl_o *)v2->fields._itemInfoList_k__BackingField;
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v63 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v45,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v65 + 32) = v45;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 32), (int32_t)v45, v56, v57, v58, v59, v60, v61);
      }
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v2, objectId, num, 0);
      if ( size == ++v44 )
        goto LABEL_46;
    }
LABEL_60:
    sub_2213CDC(this, method);
  }
LABEL_46:
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_60;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
  this = (LevelExceedControl_o *)v2->fields.needQpLb;
  if ( !this )
    goto LABEL_60;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v73, 0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  v2->fields._IsExeCombine_k__BackingField = 1;
  if ( !this )
    goto LABEL_60;
  if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0) )
  {
    v2->fields.isMaxLimitCnt = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0) )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    this = (LevelExceedControl_o *)v2->fields.needQpLb;
    v2->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_60;
    v74.fields.g = 0.0;
    v74.fields.b = 0.0;
    v74.fields.r = 1.0;
    v74.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v74, 0);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LevelExceedControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v66);
  LevelExceedControl__CheckConductionWire(v2, v67);
}


void LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B11 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_5974B11 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
      UIWidget__set_color(v4, v7, 0);
      if ( v6 )
      {
        UnityEngine_Behaviour__set_enabled(v6, 1, 0);
        UITweener__PlayForward((UITweener_o *)v6, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(combineBtnBg, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0);
  if ( !v6 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v6, 0, 0);
}


void LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20
  System_String_o *v6; // x1

  if ( (byte_5974B09 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974B09 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLb) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void LevelExceedControl__SetStateInfoMsg(LevelExceedControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 v7; // x1
  LocalizationManager_c *v8; // x0
  __int64 *v9; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_5974B16 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9167/*"MSG_MAX_LVEXCEED"*/);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_7770/*"INFO_MSG_LVEXCEED"*/);
    byte_5974B16 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_26:
    sub_2213CDC(detailInfoLb, *(_QWORD *)&state);
  }
  v10.fields.r = 0.0;
  v10.fields.a = 1.0;
  v10.fields.g = 0.87891;
  v10.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v10, 0);
  if ( v3 == 2 )
  {
    if ( !this->fields._IsExeCombine_k__BackingField )
    {
      if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v6, v12, 0);
        v8 = LocalizationManager_TypeInfo;
        v9 = &StringLiteral_9167/*"MSG_MAX_LVEXCEED"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( !this->fields.isItemNum )
      {
        v13.fields.r = 1.0;
        v13.fields.g = 1.0;
        v13.fields.b = 1.0;
        v13.fields.a = 1.0;
        UIWidget__set_color(v6, v13, 0);
        v8 = LocalizationManager_TypeInfo;
        v9 = &StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( !this->fields.isQpNum )
      {
        v11.fields.r = 1.0;
        v11.fields.g = 1.0;
        v11.fields.b = 1.0;
        v11.fields.a = 1.0;
        UIWidget__set_color(v6, v11, 0);
        v8 = LocalizationManager_TypeInfo;
        v9 = &StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
    v8 = LocalizationManager_TypeInfo;
    v9 = &StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !v3 )
  {
    v8 = LocalizationManager_TypeInfo;
    v9 = &StringLiteral_7770/*"INFO_MSG_LVEXCEED"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_9:
      *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v9, 0);
      goto LABEL_14;
    }
LABEL_8:
    j_il2cpp_runtime_class_init_0(v8, v7);
    goto LABEL_9;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_14:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void LevelExceedControl__ShowItemListInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *preSelectBaseObj; // x0
  const MethodInfo *v4; // x1

  preSelectBaseObj = this->fields.preSelectBaseObj;
  if ( !preSelectBaseObj
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0),
        (preSelectBaseObj = this->fields.baseSelectInfoLb) == 0)
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0),
        (preSelectBaseObj = this->fields.itemListInfo) == 0) )
  {
    sub_2213CDC(preSelectBaseObj, method);
  }
  UnityEngine_GameObject__SetActive(preSelectBaseObj, 1, 0);
  if ( this->fields.isSelectBase )
    LevelExceedControl__SetExceedInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *LevelExceedControl__get_itemInfoList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void LevelExceedControl__set_itemInfoList(
        LevelExceedControl_o *this,
        System_Collections_Generic_List_LimitCntUpItemComponent__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._itemInfoList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._itemInfoList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}