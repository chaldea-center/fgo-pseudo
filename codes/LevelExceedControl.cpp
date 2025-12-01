void LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB454 & 1) == 0 )
  {
    sub_1C713B0(&CombineMenuControl_TypeInfo);
    byte_4CCB454 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  LevelExceedControl_o *v4; // x19
  System_Collections_Generic_List_object__o *materialItemObjList; // x20
  int v6; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  LevelExceedControl_o *v18; // x1
  Il2CppClass **v19; // x0

  v4 = this;
  if ( (byte_4CCB44B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (LevelExceedControl_o *)sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4CCB44B = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_14;
    v6 = LODWORD(consumeList->max_length) - materialItemObjList->fields._size;
    if ( v6 >= 1 )
    {
      for ( this = (LevelExceedControl_o *)v4->fields.itemListGrid;
            this;
            materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList )
      {
        itemInfoPrefab = v4->fields.itemInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        this = (LevelExceedControl_o *)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)v4,
                                         itemInfoPrefab,
                                         transform,
                                         0,
                                         0);
        if ( !materialItemObjList )
          break;
        items = materialItemObjList->fields._items;
        v16 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++materialItemObjList->fields._version;
        if ( !items )
          break;
        size = materialItemObjList->fields._size;
        v18 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            materialItemObjList,
            (Il2CppObject *)this,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          materialItemObjList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
        if ( !--v6 )
          return;
        this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      }
LABEL_14:
      sub_1C71608(this, consumeList);
    }
  }
}


void LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_4CCB448 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3709/*"CONDUCTION_COMBINE"*/);
    sub_1C713B0(&StringLiteral_3710/*"CONDUCTION_COMBINE_MSG"*/);
    byte_4CCB448 = 1;
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
      CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, method);
      conductionWireLabel = this->fields.conductionWireLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3710/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3709/*"CONDUCTION_COMBINE"*/,
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
    sub_1C71608(conductionWireInfo, method);
  }
}


void LevelExceedControl__CheckIsSelectBaseSvt(
        LevelExceedControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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

  if ( (byte_4CCB447 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB447 = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v19 = v20;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v19, 0);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v18, 0) )
        LevelExceedControl__InitDispInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1C71608(0, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v15;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
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

  if ( (byte_4CCB44D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4CCB44D = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1C71608(itemInfoList_k__BackingField, method);
  v4 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v4 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v4,
                                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CCB44F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB44F = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
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
                                                  v5,
                                                  0);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C71608(itemListGrid, method);
  }
}


CommonConsumeEntity_array *LevelExceedControl__GetConsumeItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v5; // x20
  int32_t v6; // w21
  const MethodInfo *v7; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCB449 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CCB449 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_11;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0);
  v5 = SvtExceedEnt;
  v6 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_11:
    sub_1C71608(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v6, 0);
  LevelExceedControl__SetAddConsumeItem(this, v5, &consumeList, v7);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *materialItemObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  System_String_o *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x2
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB445 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB445 = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = 0;
  itemListGrid = System_Int32__ToString((int)this + 280, 0);
  if ( !needQpLb )
    goto LABEL_21;
  UILabel__set_text(needQpLb, itemListGrid, 0);
  itemListGrid = (System_String_o *)this->fields.needQpLb;
  if ( !itemListGrid )
    goto LABEL_21;
  v44.fields.r = 1.0;
  v44.fields.g = 1.0;
  v44.fields.b = 1.0;
  v44.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemListGrid, v44, 0);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v6);
  this->fields.itemIdList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemIdList, 0, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialItemObjList,
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    materialItemObjList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v32, v22, v23, v24, v25, v26, v27);
  }
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v34);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    itemListGrid = (System_String_o *)this->fields.charaGraph;
    if ( !itemListGrid )
      goto LABEL_21;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)itemListGrid,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.charaGraph, 0, v37, v38, v39, v40, v41, v42);
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_21:
    sub_1C71608(itemListGrid, v5);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, v43);
}


void LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_4CCB444 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8807/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_4CCB444 = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8807/*"MSG_PRESELECT_BASE_SVT"*/, 0);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0), (helpBtn = this->fields.preSelectBaseObj) == 0)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0), (helpBtn = this->fields.baseSelectInfoLb) == 0) )
  {
LABEL_11:
    sub_1C71608(helpBtn, v3);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
}


void LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4CCB451 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3763/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_4CCB451 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C71608(v3, v4);
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

  if ( (byte_4CCB450 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3763/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_4CCB450 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C71608(v3, v4);
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
  if ( (byte_4CCB452 & 1) == 0 )
  {
    this = (LevelExceedControl_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB452 = 1;
  }
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_8;
  v4 = *(_OWORD *)&baseData->fields.userId.fields.fakeValue;
  exeCombineDlg = v2->fields.exeCombineDlg;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v6, 0);
  if ( !exeCombineDlg )
LABEL_8:
    sub_1C71608(this, method);
  SetRarityDialogControl__SetConfirmLvExceed_31685920(
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
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  CommonConsumeEntity_array *v14; // x19
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  il2cpp_array_size_t max_length; // x8
  char *v23; // x0
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4CCB44A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Resize_CommonConsumeEntity___);
    sub_1C713B0(&CommonConsumeEntity_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CCB44A = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v7 = (CommonConsumeEntity_o *)sub_1C715FC(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v7, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_20;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v13;
    *(_QWORD *)&v25.fields.fakeValue = v12;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v25, 0);
    if ( !v11
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            v11,
                            (int32_t)Master_object,
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0
      || !v7
      || (v7->fields.objectId = (int32_t)Master_object[1].monitor,
          v7->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_object_(
            (System_Object_array **)consumeList,
            LODWORD((*consumeList)->max_length) + 1,
            (const MethodInfo_3109218 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v14 = *consumeList) == 0) )
    {
LABEL_20:
      sub_1C71608(Master_object, v9);
    }
    v15 = sub_1C714EC(v7, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
      v24 = sub_1C7162C(0);
      sub_1C714D8(v24, 0);
    }
    max_length = v14->max_length;
    if ( !(_DWORD)max_length )
      sub_1C71610(v15);
    v23 = (char *)v14 + ((__int64)((max_length << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v23 + 4) = v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 32), (int32_t)v7, v16, v17, v18, v19, v20, v21);
  }
}


void LevelExceedControl__SetBaseSvtCardImg(
        LevelExceedControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UICharaGraphTexture_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  this->fields.baseData = usrSvtData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseData,
    (int32_t)usrSvtData,
    (int32_t)method,
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.charaGraph, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UserServantEntity_o *v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  const MethodInfo *v16; // x2
  struct UserServantEntity_o *v17; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v19; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  __int64 size; // x26
  System_Collections_Generic_List_object__o *v31; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  unsigned __int64 v39; // x22
  LevelExceedControl_o *v40; // x23
  CommonConsumeEntity_o *v41; // x8
  struct System_Int32_array *itemIdList; // x9
  int32_t objectId; // w24
  int32_t num; // w25
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  const MethodInfo *v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v58; // x8
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h]
  float barExp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CCB44C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CombineSvtData_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (LevelExceedControl_o *)sub_1C713B0(&StringLiteral_9233/*"N0"*/);
    byte_4CCB44C = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_60;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v5;
  *(_QWORD *)&v65.fields.fakeValue = v4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v65, 0);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_60;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v6);
  v7 = sub_1C715FC(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_60;
  v14 = v2->fields.baseData;
  *(_QWORD *)(v7 + 16) = v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v14, v8, v9, v10, v11, v12, v13);
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v15 )
    goto LABEL_60;
  *(_DWORD *)(v7 + 24) = v15[16].fields.currentCryptoKey;
  *(_DWORD *)(v7 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15[6], 0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  *(_DWORD *)(v7 + 32) = UserServantEntity__getExceedLvMax(
                           (UserServantEntity_o *)this,
                           LODWORD(this->fields.charaGraph) + 1,
                           0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &lateExp[1], lateExp, &barExp, 0);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  this = (LevelExceedControl_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0, 0);
  *(float *)(v7 + 36) = barExp;
  *(_DWORD *)(v7 + 40) = lateExp[0];
  if ( !this )
    goto LABEL_60;
  *(_DWORD *)(v7 + 44) = this->fields.m_CachedPtr;
  v17 = v2->fields.baseData;
  if ( !v17 )
    goto LABEL_60;
  *(_DWORD *)(v7 + 48) = v17->fields.adjustHp;
  *(_DWORD *)(v7 + 52) = HIDWORD(this->fields.m_CachedPtr);
  *(_DWORD *)(v7 + 56) = v17->fields.adjustAtk;
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_60;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v7, v16);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_60;
  v2->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0);
  needQpLb = v2->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_65540220(
                                   (int)v2 + 280,
                                   (System_String_o *)StringLiteral_9233/*"N0"*/,
                                   0);
  if ( !needQpLb )
    goto LABEL_60;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v19);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v21);
  if ( ConsumeItemList )
  {
    v22 = sub_1C71458(int___TypeInfo, LODWORD(ConsumeItemList->max_length));
    v2->fields.itemIdList = (struct System_Int32_array *)v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.itemIdList, v22, v23, v24, v25, v26, v27, v28);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_60;
  size = (unsigned int)materialItemObjList->fields._size;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v2->fields._itemInfoList_k__BackingField;
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v31;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v2->fields._itemInfoList_k__BackingField,
    (int32_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( (int)size >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      this = (LevelExceedControl_o *)v2->fields.materialItemObjList;
      if ( !this )
        break;
      this = (LevelExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v39,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        break;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v40 = this;
      if ( ConsumeItemList && (unsigned int)ConsumeItemList->max_length )
      {
        if ( v39 >= (unsigned int)ConsumeItemList->max_length )
          goto LABEL_61;
        v41 = ConsumeItemList->m_Items[v39];
        if ( !v41 )
          break;
        itemIdList = v2->fields.itemIdList;
        if ( !itemIdList )
          break;
        if ( v39 >= LODWORD(itemIdList->max_length) )
LABEL_61:
          sub_1C71610(this);
        objectId = v41->fields.objectId;
        num = v41->fields.num;
        itemIdList->m_Items[v39] = objectId;
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
      v46 = v2->fields.baseData;
      if ( !v46 )
        break;
      v47 = *(_OWORD *)&v46->fields.userId.fields.fakeValue;
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v46->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v62.fields.fakeValue = v47;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v61 = v62;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v61, 0);
      if ( !v40 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v40, (int64_t)this, objectId, num, v48);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v56 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v40,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v58 + 32) = v40;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v58 + 32), (int32_t)v40, v49, v50, v51, v52, v53, v54);
      }
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v2, objectId, num, 0);
      if ( size == ++v39 )
        goto LABEL_46;
    }
LABEL_60:
    sub_1C71608(this, method);
  }
LABEL_46:
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_60;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
  this = (LevelExceedControl_o *)v2->fields.needQpLb;
  if ( !this )
    goto LABEL_60;
  v66.fields.r = 1.0;
  v66.fields.g = 1.0;
  v66.fields.b = 1.0;
  v66.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v66, 0);
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
    v67.fields.r = 1.0;
    v67.fields.g = 0.0;
    v67.fields.b = 0.0;
    v67.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v67, 0);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LevelExceedControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v59);
  LevelExceedControl__CheckConductionWire(v2, v60);
}


void LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB44E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CCB44E = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C71608(combineBtnBg, method);
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

  if ( (byte_4CCB446 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9233/*"N0"*/);
    byte_4CCB446 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65545396(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9233/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C71608(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void LevelExceedControl__SetStateInfoMsg(LevelExceedControl_o *this, int32_t state, const MethodInfo *method)
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
  if ( (byte_4CCB453 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8803/*"MSG_MAX_LVEXCEED"*/);
    sub_1C713B0(&StringLiteral_5783/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C713B0(&StringLiteral_12194/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C713B0(&StringLiteral_12195/*"SHORT_QP_INFO_MSG"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_7447/*"INFO_MSG_LVEXCEED"*/);
    byte_4CCB453 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_31:
    sub_1C71608(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
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
      UIWidget__set_color(v6, v10, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_8803/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_25;
    }
    if ( !this->fields.isItemNum )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(v6, v11, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12194/*"SHORT_ITEM_INFO_MSG"*/;
      goto LABEL_25;
    }
    if ( this->fields.isQpNum )
    {
LABEL_34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5783/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12195/*"SHORT_QP_INFO_MSG"*/;
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
    v7 = &StringLiteral_7447/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_25:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_26:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_31;
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
    sub_1C71608(preSelectBaseObj, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._itemInfoList_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._itemInfoList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}