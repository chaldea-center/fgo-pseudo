void __fastcall CombineMenuControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FFA8A & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20210/*"img_combinebg_03"*/, v4);
    byte_49FFA8A = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20210/*"img_combinebg_03"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineMenuControl_TypeInfo->static_fields,
    StringLiteral_20210/*"img_combinebg_03"*/,
    v2,
    v3);
}


void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FFA89 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo, v4);
    byte_49FFA89 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineItemInfoList, (int32_t)v5, v6, v7);
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
  __int64 v15; // x2
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w22
  CombineMenuControl_CombineItemInfo_o *v22; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FFA80 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___, *(_QWORD *)&itemId);
    sub_1B640C8(&CombineMenuControl_CombineItemInfo_TypeInfo, v7);
    sub_1B640C8(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__, v9);
    sub_1B640C8(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__, v10);
    sub_1B640C8(&CombineMenuControl___c__DisplayClass40_0_TypeInfo, v11);
    byte_49FFA80 = 1;
  }
  v12 = sub_1B64314(CombineMenuControl___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&needNum);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_DWORD *)(v12 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo,
                                         v14,
                                         v15);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_2E24870 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v20 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v21 = *(_DWORD *)(v12 + 16);
  v22 = (CombineMenuControl_CombineItemInfo_o *)sub_1B64314(CombineMenuControl_CombineItemInfo_TypeInfo, v18, v19);
  CombineMenuControl_CombineItemInfo___ctor(v22, v21, needNum, v23);
  if ( !v20
    || (items = v20->fields._items,
        v27 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v20->fields._version,
        !items) )
  {
LABEL_10:
    sub_1B64324(v13);
  }
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v22,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
  }
}


void __fastcall CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FFA7F & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1B640C8(
                                     &Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__,
                                     method);
    byte_49FFA7F = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1B64324(this);
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

  if ( (byte_49FFA86 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, decide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FFA86 = 1;
  }
  v4 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  unsigned __int64 v22; // x23
  System_Int32_array *v23; // x25
  __int64 v24; // x1
  struct System_Object_array *items; // x8
  System_Int32_array *v26; // x25
  char *v27; // x9
  _QWORD *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  System_Int32_array **v32; // x8
  System_Int32_array *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  System_Int32_array **v40; // x8
  System_Int32_array *v41; // x1

  if ( (byte_49FFA82 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, itemIds);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__, v10);
    byte_49FFA82 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v16 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)size);
    *itemIds = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)itemIds, (int32_t)v16, v17, v18);
    v19 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)size);
    *needNums = v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)needNums, (int32_t)v19, v20, v21);
    if ( (int)size >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v23 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v22,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v23 )
          break;
        if ( v22 >= v23->max_length )
          goto LABEL_36;
        v23->m_Items[v22 + 1] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v26 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v22,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v26 )
          break;
        if ( v22 >= v26->max_length )
LABEL_36:
          sub_1B6432C(Item, v24);
        v27 = (char *)v26 + 4 * v22++;
        *((_DWORD *)v27 + 8) = Item->fields._size;
        if ( size == v22 )
          return;
      }
LABEL_35:
      sub_1B64324(Item);
    }
  }
  else
  {
    v28 = Method_System_Array_Empty_int___;
    v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v29 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1BB5FA4(v30);
    if ( !*(_DWORD *)(v30 + 224) )
      j_il2cpp_runtime_class_init_0(v30);
    v31 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1BB5FA4(v31);
    v32 = *(System_Int32_array ***)(v31 + 184);
    v33 = *v32;
    *itemIds = *v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)itemIds, (int32_t)v33, v12, v13);
    v36 = Method_System_Array_Empty_int___;
    v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v37 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v37 = v36[7];
    }
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1BB5FA4(v38);
    if ( !*(_DWORD *)(v38 + 224) )
      j_il2cpp_runtime_class_init_0(v38);
    v39 = *(_QWORD *)(v36[7] + 16LL);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1BB5FA4(v39);
    v40 = *(System_Int32_array ***)(v39 + 184);
    v41 = *v40;
    *needNums = *v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)needNums, (int32_t)v41, v34, v35);
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
  ServantStatusBattleListViewItem_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_49FFA7C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineMenuControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFA7C = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v6 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B64324(this);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B6406C(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v12, v13);
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
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v14; // x21

  if ( (byte_49FFA78 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&EventDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_49FFA78 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        CombineMenuControl__ClearCombineItemInfo(this, v9),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v10),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B64324(bgTxtSprite);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v14 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v11, v12);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(monitor, v14, 0LL);
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
  __int64 v13; // x2
  ServantStatusBattleListViewItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Func_object__bool__o *v20; // x19

  if ( (byte_49FFA84 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_ShopEntity___, *(_QWORD *)&itemId);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&System_Func_ShopEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_CombineMenuControl___c__DisplayClass44_0__IsPurePrismExchangeItem_b__0__, v8);
    sub_1B640C8(&CombineMenuControl___c__DisplayClass44_0_TypeInfo, v9);
    byte_49FFA84 = 1;
  }
  v10 = sub_1B64314(CombineMenuControl___c__DisplayClass44_0_TypeInfo, *(_QWORD *)&itemId, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_DWORD *)(v10 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (ServantStatusBattleListViewItem_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0LL);
      p_itemExchangeShopEntList->klass = (ServantStatusBattleListViewItem_c *)EnableEntitiyList;
      sub_1B6406C(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v18, v19);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64324(Master_object);
  }
LABEL_9:
  v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ShopEntity__bool__TypeInfo, v12, v13);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_CombineMenuControl___c__DisplayClass44_0__IsPurePrismExchangeItem_b__0__,
    0LL);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v20,
           (const MethodInfo_2E2543C *)Method_BasicHelper_Find_ShopEntity___) != 0LL;
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *Instance; // x0
  bool exists; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_49FFA79 & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_OnClickBase__, method);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_49FFA79 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v6 = Method_CombineMenuControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1B64324(Instance);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ItemLinkInfoWindowComponent_CallbackFunc_o *v15; // x23
  __int64 v16; // x0
  System_Int32_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFA85 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, v4);
    sub_1B640C8(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFA85 = 1;
  }
  v17 = 0LL;
  itemIds = 0LL;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v17, v2);
  v7 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v17;
  v10 = itemIds;
  v12 = (CommonUI_o *)Instance;
  v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64314(
                                                        ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                        v13,
                                                        v14);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !v12 )
    sub_1B64324(v16);
  CommonUI__OpenItemLinkInfoListWindow(v12, v10, v11, v15, 0, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_49FFA7E & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_OnClickHelp__, method);
    byte_49FFA7E = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0LL, 0LL);
}


void __fastcall CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFA7D & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_OnClickLvExceedConductionWire__, method);
    byte_49FFA7D = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
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
  DataManager_o *Instance; // x0
  int writeMasterDataThread_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FFA7B & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_OnClickMaterial__, *(_QWORD *)&type);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFA7B = 1;
  }
  v10 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnClickMaterial__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_selectMaterialUsrSvtEntity, (int32_t)Entity, v16, v17);
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
    sub_1B64324(Instance);
  writeMasterDataThread_high = HIDWORD(Instance[2].fields.writeMasterDataThread);
  switch ( writeMasterDataThread_high )
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFA7A & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineMenuControl_OnLongPushListView__, method);
    byte_49FFA7A = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1B64324(0LL);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FFA87 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FFA87 = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37486440(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v4, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *infoBack; // x20
  int32_t transformTotal; // w20
  UISprite_o *v7; // x19
  void *v8; // x0
  System_String_o *v9; // x8

  if ( (byte_49FFA88 & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_16062/*"_2"*/, v4);
    byte_49FFA88 = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0LL, 0LL) )
  {
    transformTotal = this->fields.transformTotal;
    v7 = this->fields.infoBack;
    v8 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
      v8 = CombineMenuControl_TypeInfo;
    }
    v9 = (System_String_o *)**((_QWORD **)v8 + 23);
    if ( transformTotal >= 2 )
    {
      v8 = System_String__Concat_61375396(**((System_String_o ***)v8 + 23), (System_String_o *)StringLiteral_16062/*"_2"*/, 0LL);
      if ( !v7 )
        goto LABEL_14;
      v9 = (System_String_o *)v8;
    }
    else if ( !v7 )
    {
LABEL_14:
      sub_1B64324(v8);
    }
    UISprite__set_spriteName(v7, v9, 0LL);
  }
}


void __fastcall CombineMenuControl__SortCombineItemInfoList(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CombineMenuControl___c_c *v7; // x0
  System_Collections_Generic_List_object__o *combineItemInfoList; // x19
  System_Comparison_T__o *_9__41_0; // x20
  Il2CppObject *v10; // x21
  struct CombineMenuControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFA81 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_CombineMenuControl_CombineItemInfo__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Sort__, v4);
    sub_1B640C8(&Method_CombineMenuControl___c__SortCombineItemInfoList_b__41_0__, v5);
    sub_1B640C8(&CombineMenuControl___c_TypeInfo, v6);
    byte_49FFA81 = 1;
  }
  v7 = CombineMenuControl___c_TypeInfo;
  combineItemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  if ( !CombineMenuControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineMenuControl___c_TypeInfo);
    v7 = CombineMenuControl___c_TypeInfo;
  }
  _9__41_0 = (System_Comparison_T__o *)v7->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = CombineMenuControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__41_0 = (System_Comparison_T__o *)sub_1B64314(
                                           System_Comparison_CombineMenuControl_CombineItemInfo__TypeInfo,
                                           method,
                                           v2);
    System_Comparison_object____ctor(
      _9__41_0,
      v10,
      Method_CombineMenuControl___c__SortCombineItemInfoList_b__41_0__,
      0LL);
    static_fields = CombineMenuControl___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_CombineMenuControl_CombineItemInfo__o *)_9__41_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v12, v13);
  }
  if ( !combineItemInfoList )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___Sort_55243320(
    combineItemInfoList,
    _9__41_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Sort__);
}


void __fastcall CombineMenuControl__UpdateItemLinkListWindowButton(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_49FFA83 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FFA83 = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
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
        sub_1B64324(Instance);
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
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFA8B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_49FFA8B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)Entity, v12, v13);
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


void __fastcall CombineMenuControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFA8C & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl___c_TypeInfo, v1);
    byte_49FFA8C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CombineMenuControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CombineMenuControl___c_TypeInfo->static_fields->__9 = (struct CombineMenuControl___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)CombineMenuControl___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall CombineMenuControl___c___ctor(CombineMenuControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineMenuControl___c___SortCombineItemInfoList_b__41_0(
        CombineMenuControl___c_o *this,
        CombineMenuControl_CombineItemInfo_o *a,
        CombineMenuControl_CombineItemInfo_o *b,
        const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8
  struct ItemEntity_o *v5; // x9

  if ( !a
    || (ItemEntity_k__BackingField = a->fields._ItemEntity_k__BackingField) == 0LL
    || !b
    || (v5 = b->fields._ItemEntity_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return ItemEntity_k__BackingField->fields.priority - v5->fields.priority;
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
    sub_1B64324(this);
  return ItemEntity_k__BackingField->fields.id == this->fields.itemId;
}


void __fastcall CombineMenuControl___c__DisplayClass44_0___ctor(
        CombineMenuControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineMenuControl___c__DisplayClass44_0___IsPurePrismExchangeItem_b__0(
        CombineMenuControl___c__DisplayClass44_0_o *this,
        ShopEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return ShopEntity__get_TargetId(n, 0LL) == this->fields.itemId;
}