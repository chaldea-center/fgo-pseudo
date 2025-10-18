void CombineMenuControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C46E12 & 1) == 0 )
  {
    sub_1C37058(&CombineMenuControl_TypeInfo);
    sub_1C37058(&StringLiteral_20363/*"img_combinebg_03"*/);
    byte_4C46E12 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20363/*"img_combinebg_03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)CombineMenuControl_TypeInfo->static_fields, StringLiteral_20363/*"img_combinebg_03"*/, v1, v2);
}


void CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46E11 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
    byte_4C46E11 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineItemInfoList, (int32_t)v3, v4, v5);
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
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v10; // x23
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w22
  CombineMenuControl_CombineItemInfo_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C46E08 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C37058(&CombineMenuControl_CombineItemInfo_TypeInfo);
    sub_1C37058(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__);
    sub_1C37058(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__);
    sub_1C37058(&CombineMenuControl___c__DisplayClass40_0_TypeInfo);
    byte_4C46E08 = 1;
  }
  v7 = sub_1C372A4(CombineMenuControl___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v10,
         (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v11 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v12 = *(_DWORD *)(v7 + 16);
  v13 = (CombineMenuControl_CombineItemInfo_o *)sub_1C372A4(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v13, v12, needNum, v14);
  if ( !v11
    || (items = v11->fields._items,
        v18 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v11->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C372B4(v8);
  }
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v13,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
  }
}


void CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C46E07 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__);
    byte_4C46E07 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1C372B4(this);
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

  if ( (byte_4C46E0D & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46E0D = 1;
  }
  v3 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  long double inited; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned __int64 v19; // x23
  System_Int32_array *v20; // x25
  struct System_Object_array *items; // x8
  System_Int32_array *v22; // x25
  char *v23; // x9
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_Int32_array **v28; // x8
  System_Int32_array *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  long double v32; // q0
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  System_Int32_array **v37; // x8
  System_Int32_array *v38; // x1

  if ( (byte_4C46E09 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    byte_4C46E09 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v13 = (System_Int32_array *)sub_1C37100(int___TypeInfo, (unsigned int)size);
    *itemIds = v13;
    sub_1C36FFC((CGThumbnailListItem_o *)itemIds, (int32_t)v13, v14, v15);
    v16 = (System_Int32_array *)sub_1C37100(int___TypeInfo, (unsigned int)size);
    *needNums = v16;
    sub_1C36FFC((CGThumbnailListItem_o *)needNums, (int32_t)v16, v17, v18);
    if ( (int)size >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v20 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v19,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v20 )
          break;
        if ( v19 >= LODWORD(v20->max_length) )
          goto LABEL_36;
        v20->m_Items[v19] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v22 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v19,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v19 >= LODWORD(v22->max_length) )
LABEL_36:
          sub_1C372BC(Item);
        v23 = (char *)v22 + 4 * v19++;
        *((_DWORD *)v23 + 8) = Item->fields._size;
        if ( size == v19 )
          return;
      }
LABEL_35:
      sub_1C372B4(Item);
    }
  }
  else
  {
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C8776C(inited);
    v28 = *(System_Int32_array ***)(v27 + 184);
    v29 = *v28;
    *itemIds = *v28;
    sub_1C36FFC((CGThumbnailListItem_o *)itemIds, (int32_t)v29, v8, v9);
    v33 = Method_System_Array_Empty_int___;
    v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v34 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C8776C(v32);
    if ( !*(_DWORD *)(v35 + 224) )
      v32 = j_il2cpp_runtime_class_init_0(v35);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C8776C(v32);
    v37 = *(System_Int32_array ***)(v36 + 184);
    v38 = *v37;
    *needNums = *v37;
    sub_1C36FFC((CGThumbnailListItem_o *)needNums, (int32_t)v38, v30, v31);
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
  if ( (byte_4C46E04 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineMenuControl_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46E04 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v12, 0);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C36FFC(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v9, v10);
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v10; // x21

  if ( (byte_4C46E00 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4C46E00 = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0),
        CombineMenuControl__ClearCombineItemInfo(this, v7),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v8),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
    sub_1C372B4(bgTxtSprite);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v10 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnClickHelp.method, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49258620(monitor, v10, 0);
}


bool CombineMenuControl__IsPurePrismExchangeItem(CombineMenuControl_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Master_object; // x0
  CGThumbnailListItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Func_object__bool__o *v13; // x19

  if ( (byte_4C46E0B & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_ShopEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C37058(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__);
    sub_1C37058(&CombineMenuControl___c__DisplayClass43_0_TypeInfo);
    byte_4C46E0B = 1;
  }
  v5 = sub_1C372A4(CombineMenuControl___c__DisplayClass43_0_TypeInfo);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0);
      p_itemExchangeShopEntList->klass = (CGThumbnailListItem_c *)EnableEntitiyList;
      sub_1C36FFC(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v11, v12);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C372B4(Master_object);
  }
LABEL_9:
  v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_ShopEntity___) != 0;
}


void CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  bool exists; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C46E01 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_OnClickBase__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C46E01 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v5 = Method_CombineMenuControl_OnClickBase__;
  v6 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnClickBase__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C372B4(Instance);
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
  System_Int32_array *v12; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C46E0C & 1) == 0 )
  {
    sub_1C37058(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1C37058(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46E0C = 1;
  }
  v12 = 0;
  itemIds = 0;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v12, v2);
  v4 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = v12;
  v7 = itemIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C372A4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !v9 )
    sub_1C372B4(v11);
  CommonUI__OpenItemLinkInfoListWindow(v9, v7, v8, v10, 0, 0);
}


void CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4C46E06 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_OnClickHelp__);
    byte_4C46E06 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C46E05 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_OnClickLvExceedConductionWire__);
    byte_4C46E05 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C372B4(0);
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
  DataManager_o *Instance; // x0
  int m_CachedPtr_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C46E03 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46E03 = 1;
  }
  v7 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnClickMaterial__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1C36FFC((CGThumbnailListItem_o *)p_selectMaterialUsrSvtEntity, (int32_t)Entity, v13, v14);
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
    sub_1C372B4(Instance);
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C46E02 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineMenuControl_OnLongPushListView__);
    byte_4C46E02 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1C372B4(0);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0);
  }
}


void CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C46E0E & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C46E0E = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40543872(assetList, 0);
    this->fields.assetList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetList, 0, v4, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  if ( (byte_4C46E10 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (CombineMenuControl_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46E10 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  this = (CombineMenuControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v17, 0);
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
    return CharaGraphManager__CreateTexturePrefab_40659868(
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
    sub_1C372B4(this);
  charaGraph->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&charaGraph->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v14,
    v15);
  UICharaGraphTexture__SetCharacter_43922100(charaGraph, usrSvtData, ServantImageLimitSealAfter, 0, 0, 0, 0, 0);
  return charaGraph;
}


void CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *infoBack; // x20
  int32_t transformTotal; // w20
  UISprite_o *v5; // x19
  void *v6; // x0
  System_String_o *v7; // x8

  if ( (byte_4C46E0F & 1) == 0 )
  {
    sub_1C37058(&CombineMenuControl_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16117/*"_2"*/);
    byte_4C46E0F = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0, 0) )
  {
    transformTotal = this->fields.transformTotal;
    v5 = this->fields.infoBack;
    v6 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
      v6 = CombineMenuControl_TypeInfo;
    }
    v7 = (System_String_o *)**((_QWORD **)v6 + 23);
    if ( transformTotal >= 2 )
    {
      v6 = System_String__Concat_63561656(**((System_String_o ***)v6 + 23), (System_String_o *)StringLiteral_16117/*"_2"*/, 0);
      if ( !v5 )
        goto LABEL_14;
      v7 = (System_String_o *)v6;
    }
    else if ( !v5 )
    {
LABEL_14:
      sub_1C372B4(v6);
    }
    UISprite__set_spriteName(v5, v7, 0);
  }
}


void CombineMenuControl__UpdateItemLinkListWindowButton(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_4C46E0A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46E0A = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
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
        sub_1C372B4(Instance);
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
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C46E13 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C46E13 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)p_fields, (int32_t)Entity, v10, v11);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return ShopEntity__get_TargetId(n, 0) == this->fields.itemId;
}