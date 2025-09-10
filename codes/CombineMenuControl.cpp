void CombineMenuControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2B0E0 & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    sub_1C2D490(&StringLiteral_20348/*"img_combinebg_03"*/);
    byte_4C2B0E0 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20348/*"img_combinebg_03"*/;
  sub_1C2D434((CGThumbnailListItem_o *)CombineMenuControl_TypeInfo->static_fields, StringLiteral_20348/*"img_combinebg_03"*/, v1, v2);
}


void CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2B0DF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
    byte_4C2B0DF = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineItemInfoList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineMenuControl__AddCombineItemInfo(
        CombineMenuControl_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v11; // x23
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w22
  CombineMenuControl_CombineItemInfo_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C2B0D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C2D490(&CombineMenuControl_CombineItemInfo_TypeInfo);
    sub_1C2D490(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__);
    sub_1C2D490(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__);
    sub_1C2D490(&CombineMenuControl___c__DisplayClass40_0_TypeInfo);
    byte_4C2B0D6 = 1;
  }
  v7 = sub_1C2D6DC(CombineMenuControl___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v12 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v13 = *(_DWORD *)(v7 + 16);
  v14 = (CombineMenuControl_CombineItemInfo_o *)sub_1C2D6DC(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v14, v13, needNum, v15);
  if ( !v12
    || (items = v12->fields._items,
        v19 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C2D6EC(v8, v9);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v14,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
  }
}


void CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C2B0D5 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1C2D490(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__);
    byte_4C2B0D5 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1C2D6EC(this, method);
  size = combineItemInfoList->fields._size;
  v5 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)combineItemInfoList->fields._items, 0, size, 0);
}


void CombineMenuControl__CloaseCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2B0DB & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B0DB = 1;
  }
  v3 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  long double inited; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned __int64 v20; // x23
  System_Int32_array *v21; // x25
  __int64 v22; // x2
  struct System_Object_array *items; // x8
  System_Int32_array *v24; // x25
  char *v25; // x9
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  System_Int32_array **v30; // x8
  System_Int32_array *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  long double v34; // q0
  _QWORD *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  System_Int32_array **v39; // x8
  System_Int32_array *v40; // x1

  if ( (byte_4C2B0D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    byte_4C2B0D7 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v14 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)size);
    *itemIds = v14;
    sub_1C2D434((CGThumbnailListItem_o *)itemIds, (int32_t)v14, v15, v16);
    v17 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)size);
    *needNums = v17;
    sub_1C2D434((CGThumbnailListItem_o *)needNums, (int32_t)v17, v18, v19);
    if ( (int)size >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v21 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v20,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v21 )
          break;
        if ( v20 >= LODWORD(v21->max_length) )
          goto LABEL_36;
        v21->m_Items[v20] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v24 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v20,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v24 )
          break;
        if ( v20 >= LODWORD(v24->max_length) )
LABEL_36:
          sub_1C2D6F4(Item, v8, v22);
        v25 = (char *)v24 + 4 * v20++;
        *((_DWORD *)v25 + 8) = Item->fields._size;
        if ( size == v20 )
          return;
      }
LABEL_35:
      sub_1C2D6EC(Item, v8);
    }
  }
  else
  {
    v26 = Method_System_Array_Empty_int___;
    v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v27 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v28 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v28);
    v29 = *(_QWORD *)(v26[7] + 16LL);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C7DBA4(inited);
    v30 = *(System_Int32_array ***)(v29 + 184);
    v31 = *v30;
    *itemIds = *v30;
    sub_1C2D434((CGThumbnailListItem_o *)itemIds, (int32_t)v31, v9, v10);
    v35 = Method_System_Array_Empty_int___;
    v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v36 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v36 = v35[7];
    }
    v37 = *(_QWORD *)(v36 + 16);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C7DBA4(v34);
    if ( !*(_DWORD *)(v37 + 224) )
      v34 = j_il2cpp_runtime_class_init_0(v37);
    v38 = *(_QWORD *)(v35[7] + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C7DBA4(v34);
    v39 = *(System_Int32_array ***)(v38 + 184);
    v40 = *v39;
    *needNums = *v39;
    sub_1C2D434((CGThumbnailListItem_o *)needNums, (int32_t)v40, v32, v33);
  }
}


UserServantEntity_o *CombineMenuControl__GetMaterialUsrSvtData(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  CGThumbnailListItem_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C2B0D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineMenuControl_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B0D2 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (CGThumbnailListItem_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v3 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C2D434(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v9, v10);
  return (UserServantEntity_o *)Entity;
}


void CombineMenuControl__InitCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__ClearCombineItemInfo(this, method);
  CombineMenuControl__UpdateItemLinkListWindowButton(this, v3);
}


void CombineMenuControl__InitMenuControl(CombineMenuControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v11; // x21

  if ( (byte_4C2B0CE & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4C2B0CE = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0),
        CombineMenuControl__ClearCombineItemInfo(this, v8),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v9),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
    sub_1C2D6EC(bgTxtSprite, v5);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v11 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnClickHelp.method, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49155444(monitor, v11, 0);
}


bool CombineMenuControl__IsPurePrismExchangeItem(CombineMenuControl_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  CGThumbnailListItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_object__bool__o *v14; // x19

  if ( (byte_4C2B0D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_ShopEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C2D490(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__);
    sub_1C2D490(&CombineMenuControl___c__DisplayClass43_0_TypeInfo);
    byte_4C2B0D9 = 1;
  }
  v5 = sub_1C2D6DC(CombineMenuControl___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_DWORD *)(v5 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (CGThumbnailListItem_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0);
      p_itemExchangeShopEntList->klass = (CGThumbnailListItem_c *)EnableEntitiyList;
      sub_1C2D434(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v12, v13);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C2D6EC(Master_object, v7);
  }
LABEL_9:
  v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_30B88BC *)Method_BasicHelper_Find_ShopEntity___) != 0;
}


void CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C2B0CF & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_OnClickBase__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C2B0CF = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v6 = Method_CombineMenuControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0);
}


void CombineMenuControl__OnClickCombineItemLinkInfoListWindow(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  System_Int32_array *v7; // x20
  System_Int32_array *v8; // x21
  CommonUI_o *v9; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  System_Int32_array *v13; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B0DA & 1) == 0 )
  {
    sub_1C2D490(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1C2D490(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B0DA = 1;
  }
  v13 = 0;
  itemIds = 0;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v13, v2);
  v4 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = v13;
  v7 = itemIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C2D6DC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !v9 )
    sub_1C2D6EC(v11, v12);
  CommonUI__OpenItemLinkInfoListWindow(v9, v7, v8, v10, 0, 0);
}


void CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4C2B0D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_OnClickHelp__);
    byte_4C2B0D4 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const MethodInfo *))this->klass->vtable._6_unknown.methodPtr)(
         this,
         this->klass->vtable._6_unknown.method);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0, 0, 0);
}


void CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C2B0D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_OnClickLvExceedConductionWire__);
    byte_4C2B0D3 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C2D6EC(0, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0);
}


void CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  int m_CachedPtr_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C2B0D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B0D1 = 1;
  }
  v7 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnClickMaterial__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1C2D434((CGThumbnailListItem_o *)p_selectMaterialUsrSvtEntity, (int32_t)Entity, v14, v15);
        Instance = (DataManager_o *)*(p_selectMaterialUsrSvtEntity - 13);
        if ( Instance )
        {
          CombineRootComponent__SelectShowServant((CombineRootComponent_o *)Instance, 0);
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
    sub_1C2D6EC(Instance, v9);
  m_CachedPtr_high = HIDWORD(Instance[3].fields.m_CachedPtr);
  switch ( m_CachedPtr_high )
  {
    case 11:
      CombineRootComponent__ShowNpMaterialSvtList((CombineRootComponent_o *)Instance, 0);
      break;
    case 4:
      CombineRootComponent__ShowSvtEqMaterialList((CombineRootComponent_o *)Instance, 0);
      break;
    case 3:
      CombineRootComponent__ShowMaterialSvtList((CombineRootComponent_o *)Instance, 0);
      break;
  }
}


void CombineMenuControl__OnLongPushListView(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C2B0D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineMenuControl_OnLongPushListView__);
    byte_4C2B0D0 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1C2D6EC(0, v5);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0);
  }
}


void CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C2B0DC & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C2B0DC = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40322260(assetList, 0);
    this->fields.assetList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assetList, 0, v4, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v7);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


UICharaGraphTexture_o *CombineMenuControl__SetCharaGraph(
        CombineMenuControl_o *this,
        UICharaGraphTexture_o *charaGraph,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  CombineMenuControl_o *v6; // x21
  int32_t CardImageLimitCount; // w22
  Il2CppObject *Master_object; // x0
  __int64 v9; // x24
  __int64 v10; // x25
  ServantLimitImageMaster_o *v11; // x23
  int32_t ServantImageLimitSealAfter; // w22
  ServantOverwriteStatus_o *OverwriteStatus; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v6 = this;
  if ( (byte_4C2B0DE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (CombineMenuControl_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B0DE = 1;
  }
  if ( !usrSvtData )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  this = (CombineMenuControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17, 0);
  if ( !v11 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v11,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(usrSvtData, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CombineMenuControl_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)charaGraph, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return CharaGraphManager__CreateTexturePrefab_40438256(
             v6->fields.charaGraphBase,
             usrSvtData,
             ServantImageLimitSealAfter,
             10,
             0,
             0,
             OverwriteStatus,
             0,
             0,
             0);
  if ( !charaGraph )
LABEL_15:
    sub_1C2D6EC(this, charaGraph);
  charaGraph->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&charaGraph->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v14,
    v15);
  UICharaGraphTexture__SetCharacter_43684276(charaGraph, usrSvtData, ServantImageLimitSealAfter, 0, 0, 0, 0, 0);
  return charaGraph;
}


void CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *infoBack; // x20
  __int64 v4; // x1
  int32_t transformTotal; // w20
  UISprite_o *v6; // x19
  void *v7; // x0
  System_String_o *v8; // x8

  if ( (byte_4C2B0DD & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16113/*"_2"*/);
    byte_4C2B0DD = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0, 0) )
  {
    transformTotal = this->fields.transformTotal;
    v6 = this->fields.infoBack;
    v7 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
      v7 = CombineMenuControl_TypeInfo;
    }
    v8 = (System_String_o *)**((_QWORD **)v7 + 23);
    if ( transformTotal >= 2 )
    {
      v7 = System_String__Concat_63457864(**((System_String_o ***)v7 + 23), (System_String_o *)StringLiteral_16113/*"_2"*/, 0);
      if ( !v6 )
        goto LABEL_14;
      v8 = (System_String_o *)v7;
    }
    else if ( !v6 )
    {
LABEL_14:
      sub_1C2D6EC(v7, v4);
    }
    UISprite__set_spriteName(v6, v8, 0);
  }
}


void CombineMenuControl__UpdateItemLinkListWindowButton(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_4C2B0D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B0D8 = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0, 0);
  gameObject = 0;
  if ( v4 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0, 0) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !gameObject )
        goto LABEL_24;
      if ( this->fields.baseUserServantEntity )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
        if ( this->fields.itemLinkInfoListBtn )
        {
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 1, 0);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
LABEL_23:
              ((void (*)(void))klass[1]._1.nestedTypes)();
              return;
            }
          }
          else
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 0, 0);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
              goto LABEL_23;
            }
          }
        }
LABEL_24:
        sub_1C2D6EC(Instance, v5);
      }
    }
    else if ( !gameObject )
    {
      goto LABEL_24;
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


bool CombineMenuControl__get_IsExeCombine(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsExeCombine_k__BackingField;
}


int32_t CombineMenuControl__get_TransformTotal(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields.transformTotal;
}


int32_t CombineMenuControl__get_targetType(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._targetType_k__BackingField;
}


void CombineMenuControl__set_IsExeCombine(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExeCombine_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void CombineMenuControl__set_TransformTotal(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.transformTotal = value;
  CombineMenuControl__SetInfoBgSprite(this, *(const MethodInfo **)&value);
}


void CombineMenuControl__set_targetType(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetType_k__BackingField = value;
}


void CombineMenuControl_CombineItemInfo___ctor(
        CombineMenuControl_CombineItemInfo_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2B0E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C2B0E1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)p_fields, (int32_t)Entity, v11, v12);
  p_fields->_NeedNum_k__BackingField = num;
}


ItemEntity_o *CombineMenuControl_CombineItemInfo__get_ItemEntity(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int32_t CombineMenuControl_CombineItemInfo__get_NeedNum(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._NeedNum_k__BackingField;
}


void CombineMenuControl___c__DisplayClass40_0___ctor(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineMenuControl___c__DisplayClass40_0___AddCombineItemInfo_b__0(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        CombineMenuControl_CombineItemInfo_o *n,
        const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  if ( !n || (ItemEntity_k__BackingField = n->fields._ItemEntity_k__BackingField) == 0 )
    sub_1C2D6EC(this, n);
  return ItemEntity_k__BackingField->fields.id == this->fields.itemId;
}


void CombineMenuControl___c__DisplayClass43_0___ctor(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineMenuControl___c__DisplayClass43_0___IsPurePrismExchangeItem_b__0(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        ShopEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C2D6EC(this, 0);
  return ShopEntity__get_TargetId(n, 0) == this->fields.itemId;
}