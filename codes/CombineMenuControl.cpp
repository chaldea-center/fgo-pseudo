void __fastcall CombineMenuControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49BE822 & 1) == 0 )
  {
    sub_1B4CF90(&CombineMenuControl_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_19992/*"img_combinebg_03"*/, v4);
    byte_49BE822 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_19992/*"img_combinebg_03"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)CombineMenuControl_TypeInfo->static_fields, StringLiteral_19992/*"img_combinebg_03"*/, v2, v3);
}


void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BE821 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo, v3);
    byte_49BE821 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.combineItemInfoList, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__AddCombineItemInfo(
        CombineMenuControl_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w22
  CombineMenuControl_CombineItemInfo_o *v19; // x21
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49BE819 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___, *(_QWORD *)&itemId);
    sub_1B4CF90(&CombineMenuControl_CombineItemInfo_TypeInfo, v7);
    sub_1B4CF90(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__, v9);
    sub_1B4CF90(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__, v10);
    sub_1B4CF90(&CombineMenuControl___c__DisplayClass40_0_TypeInfo, v11);
    byte_49BE819 = 1;
  }
  v12 = sub_1B4D1DC(CombineMenuControl___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_DWORD *)(v12 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v16 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v18 = *(_DWORD *)(v12 + 16);
  v19 = (CombineMenuControl_CombineItemInfo_o *)sub_1B4D1DC(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v19, v18, needNum, v20);
  if ( !v17
    || (items = v17->fields._items,
        v24 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_10:
    sub_1B4D1EC(v13, v14);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v19,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v19;
    sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
  }
}


void __fastcall CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49BE818 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1B4CF90(
                                     &Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__,
                                     method);
    byte_49BE818 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1B4D1EC(this, method);
  size = combineItemInfoList->fields._size;
  v5 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)combineItemInfoList->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__CloaseCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_49BE81E & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, decide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49BE81E = 1;
  }
  v4 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  long double inited; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  unsigned __int64 v24; // x23
  System_Int32_array *v25; // x25
  struct System_Object_array *items; // x8
  System_Int32_array *v27; // x25
  char *v28; // x9
  _QWORD *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  System_Int32_array **v33; // x8
  System_Int32_array *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  long double v37; // q0
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  System_Int32_array **v42; // x8
  System_Int32_array *v43; // x1

  if ( (byte_49BE81A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, itemIds);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, v7);
    sub_1B4CF90(&int___TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__, v10);
    byte_49BE81A = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v18 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)size);
    *itemIds = v18;
    sub_1B4CF34((CGThumbnailListItem_o *)itemIds, (int32_t)v18, v19, v20);
    v21 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)size);
    *needNums = v21;
    sub_1B4CF34((CGThumbnailListItem_o *)needNums, (int32_t)v21, v22, v23);
    if ( (int)size >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v25 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v25 )
          break;
        if ( v24 >= v25->max_length )
          goto LABEL_36;
        v25->m_Items[v24 + 1] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v27 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v27 )
          break;
        if ( v24 >= v27->max_length )
LABEL_36:
          sub_1B4D1F4(Item, v12);
        v28 = (char *)v27 + 4 * v24++;
        *((_DWORD *)v28 + 8) = Item->fields._size;
        if ( size == v24 )
          return;
      }
LABEL_35:
      sub_1B4D1EC(Item, v12);
    }
  }
  else
  {
    v29 = Method_System_Array_Empty_int___;
    v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v30 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v30 = v29[7];
    }
    v31 = *(_QWORD *)(v30 + 16);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v31 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v31);
    v32 = *(_QWORD *)(v29[7] + 16LL);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1B9D620(inited);
    v33 = *(System_Int32_array ***)(v32 + 184);
    v34 = *v33;
    *itemIds = *v33;
    sub_1B4CF34((CGThumbnailListItem_o *)itemIds, (int32_t)v34, v13, v14);
    v38 = Method_System_Array_Empty_int___;
    v39 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v39 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v39 = v38[7];
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1B9D620(v37);
    if ( !*(_DWORD *)(v40 + 224) )
      v37 = j_il2cpp_runtime_class_init_0(v40);
    v41 = *(_QWORD *)(v38[7] + 16LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1B9D620(v37);
    v42 = *(System_Int32_array ***)(v41 + 184);
    v43 = *v42;
    *needNums = *v42;
    sub_1B4CF34((CGThumbnailListItem_o *)needNums, (int32_t)v43, v35, v36);
  }
}


UserServantEntity_o *__fastcall CombineMenuControl__GetMaterialUsrSvtData(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  CGThumbnailListItem_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_49BE815 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineMenuControl_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BE815 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (CGThumbnailListItem_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v6 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v15, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B4D1EC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1B4CF34(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v12, v13);
  return (UserServantEntity_o *)Entity;
}


void __fastcall CombineMenuControl__InitCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__ClearCombineItemInfo(this, method);
  CombineMenuControl__UpdateItemLinkListWindowButton(this, v3);
}


void __fastcall CombineMenuControl__InitMenuControl(CombineMenuControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v13; // x21

  if ( (byte_49BE811 & 1) == 0 )
  {
    sub_1B4CF90(&EventDelegate_Callback_TypeInfo, method);
    sub_1B4CF90(&EventDelegate_TypeInfo, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_49BE811 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        CombineMenuControl__ClearCombineItemInfo(this, v10),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v11),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B4D1EC(bgTxtSprite, v7);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v13 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v13, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_47333260(monitor, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineMenuControl__IsPurePrismExchangeItem(
        CombineMenuControl_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CGThumbnailListItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Func_object__bool__o *v19; // x19

  if ( (byte_49BE81C & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_ShopEntity___, *(_QWORD *)&itemId);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&System_Func_ShopEntity__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__, v8);
    sub_1B4CF90(&CombineMenuControl___c__DisplayClass43_0_TypeInfo, v9);
    byte_49BE81C = 1;
  }
  v10 = sub_1B4D1DC(CombineMenuControl___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_DWORD *)(v10 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (CGThumbnailListItem_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0LL);
      p_itemExchangeShopEntList->klass = (CGThumbnailListItem_c *)EnableEntitiyList;
      sub_1B4CF34(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v17, v18);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B4D1EC(Master_object, v12);
  }
LABEL_9:
  v19 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v10,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0LL);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_2EED060 *)Method_BasicHelper_Find_ShopEntity___) != 0LL;
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  bool exists; // w0
  _QWORD *v7; // x8
  bool v8; // w20
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_49BE812 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_OnClickBase__, method);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_49BE812 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v7 = Method_CombineMenuControl_OnClickBase__;
  v8 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnClickBase__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1B4D1EC(Instance, v5);
  CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall CombineMenuControl__OnClickCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  System_Int32_array *v10; // x20
  System_Int32_array *v11; // x21
  CommonUI_o *v12; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Int32_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BE81D & 1) == 0 )
  {
    sub_1B4CF90(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, v4);
    sub_1B4CF90(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49BE81D = 1;
  }
  v16 = 0LL;
  itemIds = 0LL;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v16, v2);
  v7 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v16;
  v10 = itemIds;
  v12 = (CommonUI_o *)Instance;
  v13 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B4D1DC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !v12 )
    sub_1B4D1EC(v14, v15);
  CommonUI__OpenItemLinkInfoListWindow(v12, v10, v11, v13, 0, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_49BE817 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_OnClickHelp__, method);
    byte_49BE817 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0LL, 0LL);
}


void __fastcall CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49BE816 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_OnClickLvExceedConductionWire__, method);
    byte_49BE816 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B4D1EC(0LL, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  int writeMasterDataThreadException_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49BE814 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_OnClickMaterial__, *(_QWORD *)&type);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BE814 = 1;
  }
  v10 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnClickMaterial__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1B4CF34((CGThumbnailListItem_o *)p_selectMaterialUsrSvtEntity, (int32_t)Entity, v17, v18);
        Instance = (DataManager_o *)*(p_selectMaterialUsrSvtEntity - 13);
        if ( Instance )
        {
          CombineRootComponent__SelectShowServant((CombineRootComponent_o *)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_19;
  }
  if ( type != 1 )
    return;
  Instance = (DataManager_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_19:
    sub_1B4D1EC(Instance, v12);
  writeMasterDataThreadException_high = HIDWORD(Instance[2].fields.writeMasterDataThreadException);
  switch ( writeMasterDataThreadException_high )
  {
    case 11:
      CombineRootComponent__ShowNpMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 4:
      CombineRootComponent__ShowSvtEqMaterialList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 3:
      CombineRootComponent__ShowMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
  }
}


void __fastcall CombineMenuControl__OnLongPushListView(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49BE813 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineMenuControl_OnLongPushListView__, method);
    byte_49BE813 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1B4D1EC(0LL, v5);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_49BE81F & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49BE81F = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38337384(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetList, 0, v4, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *infoBack; // x20
  __int64 v6; // x1
  int32_t transformTotal; // w20
  UISprite_o *v8; // x19
  void *v9; // x0
  System_String_o *v10; // x8

  if ( (byte_49BE820 & 1) == 0 )
  {
    sub_1B4CF90(&CombineMenuControl_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_15821/*"_2"*/, v4);
    byte_49BE820 = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0LL, 0LL) )
  {
    transformTotal = this->fields.transformTotal;
    v8 = this->fields.infoBack;
    v9 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
      v9 = CombineMenuControl_TypeInfo;
    }
    v10 = (System_String_o *)**((_QWORD **)v9 + 23);
    if ( transformTotal >= 2 )
    {
      v9 = System_String__Concat_61093468(**((System_String_o ***)v9 + 23), (System_String_o *)StringLiteral_15821/*"_2"*/, 0LL);
      if ( !v8 )
        goto LABEL_14;
      v10 = (System_String_o *)v9;
    }
    else if ( !v8 )
    {
LABEL_14:
      sub_1B4D1EC(v9, v6);
    }
    UISprite__set_spriteName(v8, v10, 0LL);
  }
}


void __fastcall CombineMenuControl__UpdateItemLinkListWindowButton(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_49BE81B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49BE81B = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v6 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !gameObject )
        goto LABEL_24;
      if ( this->fields.baseUserServantEntity )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
        if ( this->fields.itemLinkInfoListBtn )
        {
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 1, 0LL);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
LABEL_23:
              ((void (*)(void))klass[1]._1.implementedInterfaces)();
              return;
            }
          }
          else
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 0, 0LL);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
              goto LABEL_23;
            }
          }
        }
LABEL_24:
        sub_1B4D1EC(Instance, v7);
      }
    }
    else if ( !gameObject )
    {
      goto LABEL_24;
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


bool __fastcall CombineMenuControl__get_IsExeCombine(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsExeCombine_k__BackingField;
}


int32_t __fastcall CombineMenuControl__get_TransformTotal(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields.transformTotal;
}


int32_t __fastcall CombineMenuControl__get_targetType(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._targetType_k__BackingField;
}


void __fastcall CombineMenuControl__set_IsExeCombine(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExeCombine_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__set_TransformTotal(
        CombineMenuControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.transformTotal = value;
  CombineMenuControl__SetInfoBgSprite(this, *(const MethodInfo **)&value);
}


void __fastcall CombineMenuControl__set_targetType(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetType_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl_CombineItemInfo___ctor(
        CombineMenuControl_CombineItemInfo_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49BE823 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_49BE823 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1B4CF34((CGThumbnailListItem_o *)p_fields, (int32_t)Entity, v13, v14);
  p_fields->_NeedNum_k__BackingField = num;
}


ItemEntity_o *__fastcall CombineMenuControl_CombineItemInfo__get_ItemEntity(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int32_t __fastcall CombineMenuControl_CombineItemInfo__get_NeedNum(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._NeedNum_k__BackingField;
}


void __fastcall CombineMenuControl___c__DisplayClass40_0___ctor(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineMenuControl___c__DisplayClass40_0___AddCombineItemInfo_b__0(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        CombineMenuControl_CombineItemInfo_o *n,
        const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  if ( !n || (ItemEntity_k__BackingField = n->fields._ItemEntity_k__BackingField) == 0LL )
    sub_1B4D1EC(this, n);
  return ItemEntity_k__BackingField->fields.id == this->fields.itemId;
}


void __fastcall CombineMenuControl___c__DisplayClass43_0___ctor(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineMenuControl___c__DisplayClass43_0___IsPurePrismExchangeItem_b__0(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        ShopEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B4D1EC(this, 0LL);
  return ShopEntity__get_TargetId(n, 0LL) == this->fields.itemId;
}