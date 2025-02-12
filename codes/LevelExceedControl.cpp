void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BB8071 & 1) == 0 )
  {
    sub_1C13D24(&CombineMenuControl_TypeInfo, method);
    byte_4BB8071 = 1;
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
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *materialItemObjList; // x20
  signed int v7; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  LevelExceedControl_o *v19; // x1
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_4BB8069 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, consumeList);
    this = (LevelExceedControl_o *)sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    byte_4BB8069 = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_object__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_14;
    v7 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v7 >= 1 )
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
        v17 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++materialItemObjList->fields._version;
        if ( !items )
          break;
        size = materialItemObjList->fields._size;
        v19 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            materialItemObjList,
            (Il2CppObject *)this,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          materialItemObjList->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v19, v10, v11, v12, v13, v14, v15);
        }
        if ( !--v7 )
          return;
        this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      }
LABEL_14:
      sub_1C13F80(this, consumeList);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_4BB8066 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3827/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v3);
    sub_1C13D24(&StringLiteral_3828/*"CONCENT_NG"*/, v4);
    byte_4BB8066 = 1;
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
                                                         (System_String_o *)StringLiteral_3828/*"CONCENT_NG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3827/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/,
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
    sub_1C13F80(conductionWireInfo, method);
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

  if ( (byte_4BB8064 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4BB8064 = 1;
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v19, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v18, 0LL) )
        LevelExceedControl__InitDispInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1C13F80(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v15;
  sub_1C13CC8(
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v5; // w20
  int32_t size; // w22

  if ( (byte_4BB806B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    byte_4BB806B = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1C13F80(itemInfoList_k__BackingField, method);
  v5 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v5 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v5,
                                                                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4BB806D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB806D = 1;
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
      UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C13F80(itemListGrid, method);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v6; // x20
  int32_t v7; // w21
  const MethodInfo *v8; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB8067 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    byte_4BB8067 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_11;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v6 = SvtExceedEnt;
  v7 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_11:
    sub_1C13F80(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v7, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v6, &consumeList, v8);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *materialItemObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB8062 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB8062 = 1;
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
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemListGrid, v47, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v9);
  this->fields.itemIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemIdList, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.materialItemObjList,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v33 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++materialItemObjList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = materialItemObjList->fields._size;
  v35 = (int64_t)itemListGrid;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      materialItemObjList,
      (Il2CppObject *)itemListGrid,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    materialItemObjList->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 4), v35, v25, v26, v27, v28, v29, v30);
  }
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_21;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v37);
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
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.charaGraph, 0LL, v40, v41, v42, v43, v44, v45);
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_21:
    sub_1C13F80(itemListGrid, v8);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, v46);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_4BB8061 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_8937/*"MSG_LIMITUP_MAX"*/, v3);
    byte_4BB8061 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v6);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v7);
  helpBtn = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !helpBtn )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8937/*"MSG_LIMITUP_MAX"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_11:
    sub_1C13F80(helpBtn, v4);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BB806F & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3874/*"CONFIRM_TICKETSUMMON_MSG"*/, v3);
    byte_4BB806F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3874/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C13F80(v4, v5);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v4,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BB806E & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3874/*"CONFIRM_TICKETSUMMON_MSG"*/, v3);
    byte_4BB806E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3874/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C13F80(v4, v5);
  SetRarityDialogControl__SetConfirmLvExceed(
    exeCombineDlg,
    this->fields.baseData,
    v4,
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
    sub_1C13F80(0LL, method);
  SetRarityDialogControl__SetConfirmLvExceed_46639960(
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonConsumeEntity_o *v12; // x21
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  CommonConsumeEntity_array *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  char *v29; // x0
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4BB8068 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Resize_CommonConsumeEntity___, svtExceedEnt);
    sub_1C13D24(&CommonConsumeEntity_TypeInfo, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_SvtCoinMaster___, v8);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BB8068 = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v12 = (CommonConsumeEntity_o *)sub_1C13F70(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v12, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_20;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v18;
    *(_QWORD *)&v31.fields.fakeValue = v17;
    Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v31, 0LL);
    if ( !v16
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            v16,
                            (int32_t)Master_object,
                            (const MethodInfo_3238624 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v12
      || (v12->fields.objectId = (int32_t)Master_object[1].monitor,
          v12->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_object_(
            (System_Object_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_2F4E8C8 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v19 = *consumeList) == 0LL) )
    {
LABEL_20:
      sub_1C13F80(Master_object, v14);
    }
    v20 = sub_1C13E60(v12, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
      v30 = sub_1C13FA4(0LL);
      sub_1C13E4C(v30, 0LL);
    }
    v28 = *(_QWORD *)&v19->max_length;
    if ( !(_DWORD)v28 )
      sub_1C13F88(v20, v21);
    v29 = (char *)v19 + (((v28 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v29 + 4) = v12;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v12, v22, v23, v24, v25, v26, v27);
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
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_39052248; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4BB8065 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB8065 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_1C13CC8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v31, 0LL);
  if ( !v19 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_39052248 = CharaGraphManager__CreateTexturePrefab_39052248(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_39052248;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_39052248,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1C13F80(Instance, v14);
  UICharaGraphTexture__SetCharacter_41996284((UICharaGraphTexture_o *)Instance, usrSvtData, v22, 0LL, 0, 0LL);
}


void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
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
  struct UserServantEntity_o *baseData; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  const MethodInfo *v17; // x2
  __int64 v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  const MethodInfo *v27; // x2
  struct UserServantEntity_o *v28; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v30; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v32; // x2
  int64_t v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  __int64 size; // x26
  System_Collections_Generic_List_object__o *v42; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  unsigned __int64 v50; // x22
  LevelExceedControl_o *v51; // x23
  CommonConsumeEntity_o *v52; // x8
  struct System_Int32_array *itemIdList; // x9
  int32_t objectId; // w24
  int32_t num; // w25
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  const MethodInfo *v59; // x4
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v69; // x8
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+30h] [xbp-90h]
  float barExp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t lateExp[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BB806A & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&CombineSvtData_TypeInfo, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v4);
    sub_1C13D24(&int___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_1C13D24(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    this = (LevelExceedControl_o *)sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v13);
    byte_4BB806A = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_58;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v16;
  *(_QWORD *)&v76.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v76, 0LL);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v17);
  v18 = sub_1C13F70(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_58;
  v25 = (int64_t)v2->fields.baseData;
  *(_QWORD *)(v18 + 16) = v25;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), v25, v19, v20, v21, v22, v23, v24);
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v26 )
    goto LABEL_58;
  *(_DWORD *)(v18 + 24) = v26[16].fields.currentCryptoKey;
  *(_DWORD *)(v18 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v26[6], 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  *(_DWORD *)(v18 + 32) = UserServantEntity__getExceedLvMax(
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
  *(float *)(v18 + 36) = barExp;
  *(_DWORD *)(v18 + 40) = lateExp[0];
  v28 = v2->fields.baseData;
  if ( !v28 )
    goto LABEL_58;
  *(int32x4_t *)(v18 + 44) = vuzp2q_s32(*(int32x4_t *)&v28->fields.atk, vrev64q_s32(*(int32x4_t *)&v28->fields.atk));
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_58;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v18, v27);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_58;
  v2->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v2->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_63773552(
                                   (int)v2 + 272,
                                   (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_58;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v30);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v32);
  if ( ConsumeItemList )
  {
    v33 = sub_1C13DCC(int___TypeInfo, ConsumeItemList->max_length);
    v2->fields.itemIdList = (struct System_Int32_array *)v33;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.itemIdList, v33, v34, v35, v36, v37, v38, v39);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_58;
  size = (unsigned int)materialItemObjList->fields._size;
  v42 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v2->fields._itemInfoList_k__BackingField;
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v42;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v2->fields._itemInfoList_k__BackingField,
    (int64_t)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( (int)size >= 1 )
  {
    v50 = 0LL;
    while ( 1 )
    {
      this = (LevelExceedControl_o *)v2->fields.materialItemObjList;
      if ( !this )
        break;
      this = (LevelExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v50,
                                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        break;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v51 = this;
      if ( ConsumeItemList && (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
      {
        if ( v50 >= (unsigned int)*(_QWORD *)&ConsumeItemList->max_length )
          goto LABEL_59;
        v52 = ConsumeItemList->m_Items[v50];
        if ( !v52 )
          break;
        itemIdList = v2->fields.itemIdList;
        if ( !itemIdList )
          break;
        if ( v50 >= itemIdList->max_length )
LABEL_59:
          sub_1C13F88(this, method);
        objectId = v52->fields.objectId;
        num = v52->fields.num;
        itemIdList->m_Items[v50 + 1] = objectId;
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
      v57 = v2->fields.baseData;
      if ( !v57 )
        break;
      v58 = *(_OWORD *)&v57->fields.userId.fields.fakeValue;
      *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v57->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v73.fields.fakeValue = v58;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v72 = v73;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v72, 0LL);
      if ( !v51 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v51, (int64_t)this, objectId, num, v59);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        break;
      v66 = *(_QWORD *)&this->fields.m_CachedPtr;
      v67 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v66 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v66 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v51,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = v66 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v69 + 32) = v51;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 32), (int64_t)v51, v60, v61, v62, v63, v64, v65);
      }
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v2, objectId, num, 0LL);
      if ( size == ++v50 )
        goto LABEL_44;
    }
LABEL_58:
    sub_1C13F80(this, method);
  }
LABEL_44:
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_58;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  this = (LevelExceedControl_o *)v2->fields.needQpLb;
  if ( !this )
    goto LABEL_58;
  v77.fields.r = 1.0;
  v77.fields.g = 1.0;
  v77.fields.b = 1.0;
  v77.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v77, 0LL);
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
    v78.fields.r = 1.0;
    v78.fields.g = 0.0;
    v78.fields.b = 0.0;
    v78.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v78, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !LevelExceedControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v70);
  LevelExceedControl__CheckConductionWire(v2, v71);
}


void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB806C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4BB806C = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v5 )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(v5, v8, 0LL);
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C13F80(combineBtnBg, method);
  }
  if ( !v5 )
    goto LABEL_12;
  v9.fields.r = 0.5;
  v9.fields.g = 0.5;
  v9.fields.b = 0.5;
  v9.fields.a = 1.0;
  UIWidget__set_color(v5, v9, 0LL);
  if ( !v7 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4BB8063 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, method);
    byte_4BB8063 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63773552((int)this + 268, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL),
        !haveQpLb) )
  {
    sub_1C13F80(SelfUserGame, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v13; // x21
  __int64 *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4BB8070 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_8933/*"MSG_ABLED_TDUP"*/, v6);
    sub_1C13D24(&StringLiteral_5898/*"EXE_BOXGACHA"*/, v7);
    sub_1C13D24(&StringLiteral_12324/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, v8);
    sub_1C13D24(&StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    sub_1C13D24(&StringLiteral_7524/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v11);
    byte_4BB8070 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_31:
    sub_1C13F80(detailInfoLb, *(_QWORD *)&state);
  }
  v15.fields.r = 0.0;
  v15.fields.a = 1.0;
  v15.fields.g = 0.87891;
  v15.fields.b = 0.98828;
  v13 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v15, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_34;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      v17.fields.r = 1.0;
      v17.fields.g = 1.0;
      v17.fields.b = 1.0;
      v17.fields.a = 1.0;
      UIWidget__set_color(v13, v17, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_8933/*"MSG_ABLED_TDUP"*/;
      goto LABEL_25;
    }
    if ( !this->fields.isItemNum )
    {
      v18.fields.r = 1.0;
      v18.fields.g = 1.0;
      v18.fields.b = 1.0;
      v18.fields.a = 1.0;
      UIWidget__set_color(v13, v18, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_12324/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/;
      goto LABEL_25;
    }
    if ( this->fields.isQpNum )
    {
LABEL_34:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_5898/*"EXE_BOXGACHA"*/;
    }
    else
    {
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color(v13, v16, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/;
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
    v14 = &StringLiteral_7524/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
  }
LABEL_25:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
    sub_1C13F80(preSelectBaseObj, method);
  }
  UnityEngine_GameObject__SetActive(preSelectBaseObj, 1, 0LL);
  if ( this->fields.isSelectBase )
    LevelExceedControl__SetExceedInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._itemInfoList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}