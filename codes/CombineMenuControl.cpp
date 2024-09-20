void __fastcall CombineMenuControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5E871 & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    sub_1B885B0(&StringLiteral_20290/*"img_combinebg_03"*/);
    byte_4A5E871 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20290/*"img_combinebg_03"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CombineMenuControl_TypeInfo->static_fields,
    StringLiteral_20290/*"img_combinebg_03"*/,
    v1,
    v2);
}


void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E870 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
    byte_4A5E870 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineItemInfoList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineMenuControl__AddCombineItemInfo(
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
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5E868 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___);
    sub_1B885B0(&CombineMenuControl_CombineItemInfo_TypeInfo);
    sub_1B885B0(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__);
    sub_1B885B0(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__);
    sub_1B885B0(&CombineMenuControl___c__DisplayClass40_0_TypeInfo);
    byte_4A5E868 = 1;
  }
  v7 = sub_1B887FC(CombineMenuControl___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v12 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v13 = *(_DWORD *)(v7 + 16);
  v14 = (CombineMenuControl_CombineItemInfo_o *)sub_1B887FC(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v14, v13, needNum, v15);
  if ( !v12
    || (items = v12->fields._items,
        v19 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_10:
    sub_1B8880C(v8, v9);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v14,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
  }
}


void __fastcall CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A5E867 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__);
    byte_4A5E867 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1B8880C(this, method);
  size = combineItemInfoList->fields._size;
  v5 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)combineItemInfoList->fields._items, 0, size, 0LL);
}


void __fastcall CombineMenuControl__CloaseCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5E86D & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E86D = 1;
  }
  v3 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v31; // w3
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  System_Int32_array **v36; // x8
  System_Int32_array *v37; // x1

  if ( (byte_4A5E869 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    byte_4A5E869 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v13 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)size);
    *itemIds = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)itemIds, (int32_t)v13, v14, v15);
    v16 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)size);
    *needNums = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)needNums, (int32_t)v16, v17, v18);
    if ( (int)size >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v20 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v19,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v20 )
          break;
        if ( v19 >= v20->max_length )
          goto LABEL_36;
        v20->m_Items[v19 + 1] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v22 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v19,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v19 >= v22->max_length )
LABEL_36:
          sub_1B88814(Item, v8);
        v23 = (char *)v22 + 4 * v19++;
        *((_DWORD *)v23 + 8) = Item->fields._size;
        if ( size == v19 )
          return;
      }
LABEL_35:
      sub_1B8880C(Item, v8);
    }
  }
  else
  {
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1BDA48C(v26);
    if ( !*(_DWORD *)(v26 + 224) )
      j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BDA48C(v27);
    v28 = *(System_Int32_array ***)(v27 + 184);
    v29 = *v28;
    *itemIds = *v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)itemIds, (int32_t)v29, v9, v10);
    v32 = Method_System_Array_Empty_int___;
    v33 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v33 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1BDA48C(v34);
    if ( !*(_DWORD *)(v34 + 224) )
      j_il2cpp_runtime_class_init_0(v34);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BDA48C(v35);
    v36 = *(System_Int32_array ***)(v35 + 184);
    v37 = *v36;
    *needNums = *v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)needNums, (int32_t)v37, v30, v31);
  }
}


UserServantEntity_o *__fastcall CombineMenuControl__GetMaterialUsrSvtData(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  ServantStatusBattleListViewItem_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5E864 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineMenuControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E864 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v3 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B88554(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v9, v10);
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v11; // x21

  if ( (byte_4A5E860 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4A5E860 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        CombineMenuControl__ClearCombineItemInfo(this, v8),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v9),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1B8880C(bgTxtSprite, v5);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v11 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46771408(monitor, v11, 0LL);
}


bool __fastcall CombineMenuControl__IsPurePrismExchangeItem(
        CombineMenuControl_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  ServantStatusBattleListViewItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_object__bool__o *v14; // x19

  if ( (byte_4A5E86B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_ShopEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__);
    sub_1B885B0(&CombineMenuControl___c__DisplayClass43_0_TypeInfo);
    byte_4A5E86B = 1;
  }
  v5 = sub_1B887FC(CombineMenuControl___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_DWORD *)(v5 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (ServantStatusBattleListViewItem_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0LL);
      p_itemExchangeShopEntList->klass = (ServantStatusBattleListViewItem_c *)EnableEntitiyList;
      sub_1B88554(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v12, v13);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B8880C(Master_object, v7);
  }
LABEL_9:
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0LL);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_ShopEntity___) != 0LL;
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4A5E861 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_OnClickBase__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5E861 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v6 = Method_CombineMenuControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1B8880C(Instance, v4);
  CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall CombineMenuControl__OnClickCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5E86C & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_1B885B0(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E86C = 1;
  }
  v13 = 0LL;
  itemIds = 0LL;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v13, v2);
  v4 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = v13;
  v7 = itemIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !v9 )
    sub_1B8880C(v11, v12);
  CommonUI__OpenItemLinkInfoListWindow(v9, v7, v8, v10, 0, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4A5E866 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_OnClickHelp__);
    byte_4A5E866 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5E865 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_OnClickLvExceedConductionWire__);
    byte_4A5E865 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  int writeMasterDataThread_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5E863 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E863 = 1;
  }
  v7 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnClickMaterial__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_selectMaterialUsrSvtEntity, (int32_t)Entity, v14, v15);
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
    sub_1B8880C(Instance, v9);
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
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5E862 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineMenuControl_OnLongPushListView__);
    byte_4A5E862 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1B8880C(0LL, v5);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A5E86E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5E86E = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37799632(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v4, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *infoBack; // x20
  __int64 v4; // x1
  int32_t transformTotal; // w20
  UISprite_o *v6; // x19
  void *v7; // x0
  System_String_o *v8; // x8

  if ( (byte_4A5E86F & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16131/*"_2"*/);
    byte_4A5E86F = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0LL, 0LL) )
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
      v7 = System_String__Concat_61707032(**((System_String_o ***)v7 + 23), (System_String_o *)StringLiteral_16131/*"_2"*/, 0LL);
      if ( !v6 )
        goto LABEL_14;
      v8 = (System_String_o *)v7;
    }
    else if ( !v6 )
    {
LABEL_14:
      sub_1B8880C(v7, v4);
    }
    UISprite__set_spriteName(v6, v8, 0LL);
  }
}


void __fastcall CombineMenuControl__UpdateItemLinkListWindowButton(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_4A5E86A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E86A = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v4 )
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
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
        sub_1B8880C(Instance, v5);
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


void __fastcall CombineMenuControl_CombineItemInfo___ctor(
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
  int32_t v12; // w3

  if ( (byte_4A5E872 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4A5E872 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)Entity, v11, v12);
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
    sub_1B8880C(this, n);
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
    sub_1B8880C(this, 0LL);
  return ShopEntity__get_TargetId(n, 0LL) == this->fields.itemId;
}