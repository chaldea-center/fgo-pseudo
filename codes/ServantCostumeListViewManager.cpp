void __fastcall ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v7; // x20
  struct ServantCostumeListViewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B2061A & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewSort_TypeInfo, v1);
    sub_1BCAFF8(&ServantCostumeListViewManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_4707/*"CostumeCombineList"*/, v5);
    byte_4B2061A = 1;
  }
  ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4707/*"CostumeCombineList"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ServantCostumeListViewManager_TypeInfo->static_fields,
    StringLiteral_4707/*"CostumeCombineList"*/,
    v2,
    v3);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v7 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42965576(v7, SORT_SAVE_KEY, 8, 1, 0LL);
  static_fields = ServantCostumeListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->servantSortStatus, (int32_t)v7, v9, v10);
}


void __fastcall ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__ChangeIconScale(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantCostumeListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20

  if ( (byte_4B20618 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_ChangeIconScale__, method);
    byte_4B20618 = 1;
  }
  v3 = Method_ServantCostumeListViewManager_ChangeIconScale__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_ChangeIconScale__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_ChangeIconScale__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 68) = v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (sort = this->fields.sort) == 0LL) )
  {
    sub_1BCB254(sort, v5);
  }
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCostumeListViewManager__CreateList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x2
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantCostumeListViewManager_c *v13; // x8
  ServantCostumeItemInfo_array *v14; // x20
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t m_CachedPtr; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  ServantCostumeItemInfo_o *v26; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  UserServantEntity_o *v28; // x24
  ServantCostumeListViewItem_o *v29; // x22
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B20605 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&ServantCostumeListViewItem_TypeInfo, v4);
    sub_1BCAFF8(&ServantCostumeListViewManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3820/*"COSTUME_SERVANT_LIST_MSG"*/, v6);
    byte_4B20605 = 1;
  }
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  currentBase = 0LL;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v9);
  v13 = ServantCostumeListViewManager_TypeInfo;
  v14 = ServantCostumeItemInfoList;
  if ( !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v13 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v13->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantSortStatus, v11, v12);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_31;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_31;
  m_CachedPtr = bgTxtSprite[5].fields.m_CachedPtr;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = m_CachedPtr;
  bgTxtSprite = (UnityEngine_Component_o *)ListViewSort__GetScaleKindSpriteName(
                                             (ListViewSort_o *)bgTxtSprite,
                                             m_CachedPtr,
                                             0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_31;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)bgTxtSprite, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( scaleType == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_17;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v19, v20);
LABEL_17:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v14 )
    goto LABEL_31;
  v24 = *(_QWORD *)&v14->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v24 )
        sub_1BCB25C(bgTxtSprite, method, v23);
      v26 = v14->m_Items[v25];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v28 = currentBase;
      v29 = (ServantCostumeListViewItem_o *)sub_1BCB244(ServantCostumeListViewItem_TypeInfo);
      ServantCostumeListViewItem___ctor(v29, v26, v28, v30);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v29,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v29;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v29, v31, v32);
      }
      LODWORD(v24) = v14->max_length;
      if ( (__int64)++v25 >= (int)v24 )
        goto LABEL_27;
    }
LABEL_31:
    sub_1BCB254(bgTxtSprite, method);
  }
LABEL_27:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v37);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
  if ( !combineInfoMsgLabel )
    goto LABEL_31;
  UILabel__set_text(combineInfoMsgLabel, (System_String_o *)bgTxtSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeItemInfo_o *__fastcall ServantCostumeListViewManager__CreateServantCostumeItemInfo(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        UserServantMaster_o *userServantMaster,
        ServantCostumeMaster_o *servantCostumeMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  int v16; // w8
  void *v17; // x22
  unsigned int v18; // w26
  __int64 v19; // x8
  ServantLeaderInfo_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B20607 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCostumeItemInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&ServantLeaderInfo_TypeInfo, v10);
    byte_4B20607 = 1;
  }
  v11 = sub_1BCB244(ServantCostumeItemInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !userServantMaster )
    goto LABEL_19;
  v12 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0LL);
  if ( !v12 )
  {
    if ( servantCostumeMaster )
    {
      v12 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, 0LL);
      if ( v12 )
      {
        v16 = *((_DWORD *)v12 + 6);
        v17 = v12;
        if ( v16 < 1 )
          return (ServantCostumeItemInfo_o *)v11;
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= v16 )
            sub_1BCB25C(v12, v13, v15);
          v19 = *((_QWORD *)v17 + (int)v18 + 4);
          if ( !v19 || !servantCostumeReleaseMaster )
            break;
          v12 = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                          servantCostumeReleaseMaster,
                          svtId,
                          *(_DWORD *)(v19 + 20),
                          0LL);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            v20 = (ServantLeaderInfo_o *)sub_1BCB244(ServantLeaderInfo_TypeInfo);
            ServantLeaderInfo___ctor_42609280(v20, svtId, 0, 1, 0LL);
            if ( !v11 )
              break;
            *(_BYTE *)(v11 + 32) = 0;
            *(_QWORD *)(v11 + 16) = 0LL;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), 0, v21, v22);
            *(_QWORD *)(v11 + 24) = v20;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)v20, v23, v24);
            *(_BYTE *)(v11 + 32) = 0;
            *(_DWORD *)(v11 + 35) = 0;
            *(_QWORD *)(v11 + 40) = 0LL;
            *(_QWORD *)(v11 + 48) = 0LL;
          }
          v16 = *((_DWORD *)v17 + 6);
          if ( (int)++v18 >= v16 )
            return (ServantCostumeItemInfo_o *)v11;
        }
      }
    }
LABEL_19:
    sub_1BCB254(v12, v13);
  }
  if ( !v11 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData((ServantCostumeItemInfo_o *)v11, (UserServantEntity_o *)v12, v14);
  return (ServantCostumeItemInfo_o *)v11;
}


void __fastcall ServantCostumeListViewManager__DestroyList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCB254(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__EndSelectFilterKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B20612 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B20612 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B20615 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B20615 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B20610 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BCAFF8(&ServantCostumeListViewItem_TypeInfo, v6);
    byte_4B20610 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (ServantCostumeListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)itemList[3].klass;
      if ( !itemList )
        break;
      ++v9;
      if ( ServantCostumeItemInfo__get_SvtId((ServantCostumeItemInfo_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_14:
    sub_1BCB254(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


bool __fastcall ServantCostumeListViewManager__GetFocusItemIndex(
        ServantCostumeListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t v9; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B20619 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (ServantCostumeListViewManager_o *)sub_1BCAFF8(&ServantCostumeListViewItem_TypeInfo, v8);
    byte_4B20619 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCB254(this, index);
    v9 = 0;
    while ( 1 )
    {
      this = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v9,
                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantCostumeListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( LOBYTE(this->fields.sortKindButton) )
        break;
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
  }
  return 1;
}


UserServantEntity_o *__fastcall ServantCostumeListViewManager__GetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserSvtData;
}


UserServantEntity_o *__fastcall ServantCostumeListViewManager__GetSelectUserSvtEntity(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUserSvtEntity;
}


ServantCostumeItemInfo_array *__fastcall ServantCostumeListViewManager__GetServantCostumeItemInfoList(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o **currentBase,
        const MethodInfo *method)
{
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x24
  UserServantCollectionMaster_o *v24; // x25
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5
  __int64 v28; // x8
  int64_t v29; // x26
  unsigned __int64 v30; // x28
  int64_t v31; // x27
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w22
  __int64 v37; // x23
  __int128 v38; // q0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v40; // q0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *Item; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-80h]

  if ( (byte_4B20606 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, currentBase);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B20606 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v22 )
    goto LABEL_38;
  v24 = (UserServantCollectionMaster_o *)Instance;
  Instance = (int64_t)ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)v22, 0LL);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Instance )
    goto LABEL_38;
  v28 = *(_QWORD *)(Instance + 24);
  v29 = Instance;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v28 )
        sub_1BCB25C(Instance, v20, v25);
      Instance = (int64_t)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                            (ServantCostumeListViewManager_o *)Instance,
                            *(_DWORD *)(v29 + 32 + 4 * v30),
                            (UserServantMaster_o *)MasterData_object,
                            (ServantCostumeMaster_o *)v22,
                            (ServantCostumeReleaseMaster_o *)v23,
                            v27);
      if ( !Instance )
        break;
      v31 = Instance;
      if ( *(_QWORD *)(Instance + 16) || *(_QWORD *)(Instance + 24) )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          (ServantCostumeListViewManager_o *)Instance,
          (ServantCostumeItemInfo_o *)Instance,
          (ServantCostumeMaster_o *)v22,
          v24,
          (ServantCostumeReleaseMaster_o *)v23,
          v27);
        if ( !*(_BYTE *)(v31 + 38) )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v33 = Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v31,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v31;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), v31, v25, v26);
          }
        }
      }
      LODWORD(v28) = *(_DWORD *)(v29 + 24);
      if ( (__int64)++v30 >= (int)v28 )
        goto LABEL_23;
    }
LABEL_38:
    sub_1BCB254(Instance, v20);
  }
LABEL_23:
  *currentBase = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)currentBase, 0, v25, v26);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v18 )
      goto LABEL_38;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v18,
                                             (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v18 )
    goto LABEL_38;
  if ( v18->fields._size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v18,
                                             (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v36 = 0;
  do
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v18,
                          v36,
                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
    if ( !Instance )
      goto LABEL_38;
    v37 = *(_QWORD *)(Instance + 16);
    if ( v37 )
    {
      v38 = *(_OWORD *)(v37 + 32);
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
      *(_OWORD *)&v48.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v47 = v48;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v47, 0LL);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_38;
      v40 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v40;
      if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v46, 0LL) )
      {
        *currentBase = (UserServantEntity_o *)v37;
        sub_1BCAF9C((CGThumbnailListItem_o *)currentBase, v37, v41, v42);
        Item = System_Collections_Generic_List_object___get_Item(
                 v18,
                 v36,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
        System_Collections_Generic_List_object___Remove(
          v18,
          Item,
          (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_object___Insert(
          v18,
          0,
          Item,
          (const MethodInfo_36BA980 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    ++v36;
  }
  while ( v36 < v18->fields._size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v18,
                                           (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void __fastcall ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  int v16; // w23
  int32_t v17; // w20
  ServantCostumeListViewItem_o *v18; // x21
  __int64 methodPtr_low; // x10
  __int64 v20; // x8
  __int64 v21; // x8
  __int128 v22; // q0
  Il2CppObject v23; // q0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *viewObject; // x22
  int v26; // w23
  int32_t v27; // w20
  ServantCostumeListViewItem_o *v28; // x21
  __int64 v29; // x10
  __int64 v30; // x8
  __int64 v31; // x8
  __int128 v32; // q0
  Il2CppObject v33; // q0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *v35; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+80h] [xbp-80h]
  Il2CppObject *entity; // [xsp+A8h] [xbp-58h] BYREF

  if ( (byte_4B20609 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BCAFF8(&ServantCostumeListViewItem_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B20609 = 1;
  }
  entity = 0LL;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_52;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             userSvtId,
             (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          goto LABEL_52;
        v16 = *(_DWORD *)(Instance + 24);
        if ( v16 >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v17,
                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_52;
            v18 = (ServantCostumeListViewItem_o *)Instance;
            methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low )
              goto LABEL_52;
            if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_52;
            v20 = *(_QWORD *)(Instance + 120);
            if ( !v20 )
              goto LABEL_52;
            v21 = *(_QWORD *)(v20 + 16);
            if ( v21 )
            {
              v22 = *(_OWORD *)(v21 + 32);
              *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
              *(_OWORD *)&v40.fields.fakeValue = v22;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v39 = v40;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v39, 0LL);
              if ( !entity )
                goto LABEL_52;
              v23 = entity[2];
              *(Il2CppObject *)&v38.fields.currentCryptoKey = entity[1];
              *(Il2CppObject *)&v38.fields.fakeValue = v23;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v38, 0LL) )
                ServantCostumeListViewItem__ModifyItem(v18, (UserServantEntity_o *)entity, v24);
            }
            viewObject = (UnityEngine_Object_o *)v18->fields.viewObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
            {
              Instance = (int64_t)v18->fields.viewObject;
              if ( !Instance )
                goto LABEL_52;
              (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                Instance,
                v18,
                *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            if ( v16 == ++v17 )
              return;
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_52;
          }
        }
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_52;
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_52;
          v26 = *(_DWORD *)(Instance + 24);
          if ( v26 >= 1 )
          {
            v27 = 0;
            do
            {
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v27,
                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                break;
              v28 = (ServantCostumeListViewItem_o *)Instance;
              v29 = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v29 )
                break;
              if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != ServantCostumeListViewItem_TypeInfo )
                break;
              v30 = *(_QWORD *)(Instance + 120);
              if ( !v30 )
                break;
              v31 = *(_QWORD *)(v30 + 16);
              if ( v31 )
              {
                v32 = *(_OWORD *)(v31 + 32);
                *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v31 + 16);
                *(_OWORD *)&v40.fields.fakeValue = v32;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v37 = v40;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v37, 0LL);
                if ( !entity )
                  break;
                v33 = entity[2];
                *(Il2CppObject *)&v36.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v36.fields.fakeValue = v33;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v36, 0LL) )
                  ServantCostumeListViewItem__ModifyItem(v28, (UserServantEntity_o *)entity, v34);
              }
              v35 = (UnityEngine_Object_o *)v28->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
              {
                Instance = (int64_t)v28->fields.viewObject;
                if ( !Instance )
                  break;
                (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                  Instance,
                  v28,
                  *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( v26 == ++v27 )
                return;
              Instance = (int64_t)this->fields.itemList;
            }
            while ( Instance );
LABEL_52:
            sub_1BCB254(Instance, v15);
          }
        }
      }
    }
  }
}


void __fastcall ServantCostumeListViewManager__OnClickFilterKind(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B20611 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_EndSelectFilterKind__, v3);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnClickFilterKind__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B20611 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantCostumeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCB244(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BCB254(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 4, sort, v11, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantCostumeListViewManager__OnClickSelectBase(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x10
  ServantCostumeListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v10; // x21
  struct UserServantEntity_o **p_baseUserSvtData; // x20
  __int128 v12; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v15; // q0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *v20; // x0
  struct UserServantEntity_o *v21; // x1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct ServantCostumeItemInfo_o *v24; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-50h]

  v4 = this;
  if ( (byte_4B2060E & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnClickSelectBase__, v5);
    this = (ServantCostumeListViewManager_o *)sub_1BCAFF8(&ServantCostumeListViewObject_TypeInfo, v6);
    byte_4B2060E = 1;
  }
  if ( !obj )
    goto LABEL_26;
  methodPtr_low = LOBYTE(ServantCostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    goto LABEL_26;
  }
  Item = ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  baseUserSvtData = v4->fields.baseUserSvtData;
  v10 = Item;
  p_baseUserSvtData = &v4->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_16;
  v12 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                              &v26,
                                              0LL);
  if ( !v10 )
    goto LABEL_26;
  servantData = v10->fields.servantData;
  if ( !servantData )
    goto LABEL_26;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_26;
  v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v15;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                    &v25,
                                                    0LL) )
  {
LABEL_16:
    v22 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnClickSelectBase__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
    if ( v10 )
    {
      v24 = v10->fields.servantData;
      if ( v24 )
      {
        v21 = v24->fields.userServantEntity;
        v20 = (CGThumbnailListItem_o *)&v4->fields.baseUserSvtData;
        *p_baseUserSvtData = v21;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_1BCB254(this, obj);
  }
  v16 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnClickSelectBase__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0LL);
  *p_baseUserSvtData = 0LL;
  v20 = (CGThumbnailListItem_o *)&v4->fields.baseUserSvtData;
  LODWORD(v21) = 0;
LABEL_21:
  sub_1BCAF9C(v20, (int32_t)v21, v18, v19);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_26;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUserSvtData != 0LL, 0LL);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_26;
  if ( *(&this->fields.callbackCount + 1) == 8 )
    CombineRootComponent__ShowSelectCostumeBaseSvt((CombineRootComponent_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnClickSortAscendingOrder(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B20616 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B20616 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCB254(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickSortButton(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B20614 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_EndSelectSortKind__, v3);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnClickSortButton__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B20614 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantCostumeListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnClickSortButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCB244(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BCB254(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 5, sort, 0, v11, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  CombineRootComponent_o *Item; // x0
  const MethodInfo *v9; // x1
  __int64 methodPtr_low; // x10
  CombineRootComponent_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct NpCombineControl_o *npCombineCtr; // x8
  struct UserServantEntity_o *v15; // x1

  if ( (byte_4B2060F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnLongPushListView__, obj);
    sub_1BCAFF8(&ServantCostumeListViewObject_TypeInfo, v5);
    byte_4B2060F = 1;
  }
  v6 = Method_ServantCostumeListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_ServantCostumeListViewManager_OnLongPushListView__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  if ( !obj )
    goto LABEL_15;
  methodPtr_low = LOBYTE(ServantCostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_15;
  if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewObject_TypeInfo )
    goto LABEL_15;
  Item = (CombineRootComponent_o *)ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v9);
  if ( !this->fields.scrollView
    || (v11 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0LL), !v11)
    || (npCombineCtr = v11->fields.npCombineCtr) == 0LL
    || (v15 = *(struct UserServantEntity_o **)&npCombineCtr->fields.m_CachedPtr,
        this->fields.selectUserSvtEntity = v15,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectUserSvtEntity, (int32_t)v15, v12, v13),
        (Item = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_15:
    sub_1BCB254(Item, v9);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnMoveEnd(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B2060D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B2060D = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCB254(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__RequestListObject(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_ServantCostumeListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3

  if ( (byte_4B2060C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__, v8);
    sub_1BCAFF8(&Method_ServantCostumeListViewManager_OnMoveEnd__, v9);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v10);
    byte_4B2060C = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCostumeListViewObject__Init_47928980((ServantCostumeListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1BCB254(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall ServantCostumeListViewManager__ResetListViewInfo(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.baseUserSvtData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserSvtData, 0, v2, v3);
}


void __fastcall ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B20613 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17343/*"btn_filter_on"*/, method);
    sub_1BCAFF8(&StringLiteral_17342/*"btn_filter"*/, v3);
    byte_4B20613 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCB254(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17342/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17343/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantCostumeListViewManager__SetMode_47928300(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetMode_47928300(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_4B2060B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_4B2060B = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v8, 0LL) )
      goto LABEL_11;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8
      || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
          (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_17:
      sub_1BCB254(v8, v6);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
  }
LABEL_11:
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v9 = 2;
    else
      v9 = 3;
    ServantCostumeListViewManager__RequestListObject(this, v9, 0.0, v7);
  }
}


void __fastcall ServantCostumeListViewManager__SetMode_47928564(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantCostumeListViewManager__SetMode_47928300(this, mode, v6);
}


void __fastcall ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B2060A & 1) == 0 )
  {
    this = (ServantCostumeListViewManager_o *)sub_1BCAFF8(&ServantCostumeListViewObject_TypeInfo, obj);
    byte_4B2060A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantCostumeListViewObject__Init_47928176((ServantCostumeListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.baseUserSvtData = baseSvtData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserSvtData, (int32_t)baseSvtData, (int32_t)method, v3);
}


void __fastcall ServantCostumeListViewManager__SetServantCostumeItemInfoData(
        ServantCostumeListViewManager_o *this,
        ServantCostumeItemInfo_o *info,
        ServantCostumeMaster_o *servantCostumeMaster,
        UserServantCollectionMaster_o *userServantCollectionMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantCostumeListViewManager_o *v13; // x22
  unsigned int v14; // w28
  int v15; // w27
  int v16; // w26
  int32_t v17; // w25
  ServantCostumeEntity_o *v18; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t SvtId; // w24
  const MethodInfo *v21; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v24; // x1
  int32_t v25; // w24
  const MethodInfo *v26; // x1
  int64_t v27; // x0

  if ( (byte_4B20608 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, info);
    this = (ServantCostumeListViewManager_o *)sub_1BCAFF8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_4B20608 = 1;
  }
  if ( !info )
    goto LABEL_37;
  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
  if ( !servantCostumeMaster )
    goto LABEL_37;
  this = (ServantCostumeListViewManager_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                              servantCostumeMaster,
                                              (int32_t)this,
                                              0,
                                              0LL);
  if ( !this )
    goto LABEL_37;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v13 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, info, v11);
      v18 = (ServantCostumeEntity_o *)*((_QWORD *)&v13->fields.dropObjectList + (int)v14);
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
      if ( !v18 || !userServantCollectionMaster )
        break;
      this = (ServantCostumeListViewManager_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                  userServantCollectionMaster,
                                                  (int32_t)this,
                                                  v18->fields.id,
                                                  0LL);
      info->fields.isCostumeGet |= (unsigned __int8)this & 1;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        ++v17;
      }
      else
      {
        this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
        if ( !servantCostumeReleaseMaster )
          break;
        if ( ServantCostumeReleaseMaster__checkItemHaving(
               servantCostumeReleaseMaster,
               (int32_t)this,
               v18->fields.id,
               0LL) )
        {
          info->fields.isReleaseItemHaving = 1;
          ++v16;
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__IsEventCombineCostume(v18, 0LL);
          userServantEntity = info->fields.userServantEntity;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( userServantEntity )
            {
              if ( !info->fields.isEventItemOpenCond )
              {
                SvtId = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
                UserSvtId = ServantCostumeItemInfo__get_UserSvtId(info, v21);
                this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                            servantCostumeReleaseMaster,
                                                            v18,
                                                            SvtId,
                                                            UserSvtId,
                                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
                  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, v24);
                  if ( !MasterData_object )
                    break;
                  this = (ServantCostumeListViewManager_o *)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                              (EventCombineCostumeMaster_o *)MasterData_object,
                                                              (int32_t)this,
                                                              v18->fields.id,
                                                              0LL);
                  if ( this
                    && (this = (ServantCostumeListViewManager_o *)EventCombineCostumeEntity__IsShortEventItem(
                                                                    (EventCombineCostumeEntity_o *)this,
                                                                    0LL),
                        ((unsigned __int8)this & 1) != 0) )
                  {
                    info->fields.isCanRelease = 1;
                  }
                  else
                  {
                    info->fields.isEventItemOpenCond = 1;
                  }
                }
              }
            }
          }
          else if ( userServantEntity && !info->fields.isCanRelease )
          {
            v25 = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
            v27 = ServantCostumeItemInfo__get_UserSvtId(info, v26);
            this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                        servantCostumeReleaseMaster,
                                                        v18,
                                                        v25,
                                                        v27,
                                                        0LL);
            info->fields.isCanRelease = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__checkFlag(v18, 64, 0LL);
          v15 += (unsigned __int8)this & 1;
        }
      }
      m_CancellationTokenSource = v13->fields.m_CancellationTokenSource;
      if ( (int)++v14 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_37:
    sub_1BCB254(this, info);
  }
  v17 = 0;
  v16 = 0;
  v15 = 0;
LABEL_32:
  if ( v17 == (_DWORD)m_CancellationTokenSource )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v16 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  info->fields.allCostumeNum = (int)m_CancellationTokenSource;
  info->fields.releaseCostumeNum = v17;
  info->fields.isHide = v15 == (_DWORD)m_CancellationTokenSource;
  info->fields.notHavingCostumeNum = (_DWORD)m_CancellationTokenSource - v17;
  info->fields.notHavingReleaseItemNum = (_DWORD)m_CancellationTokenSource - (v17 + v16);
}


void __fastcall ServantCostumeListViewManager__SetSortButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4B20617 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17379/*"btn_sort_up"*/, v3);
    sub_1BCAFF8(&StringLiteral_17474/*"btn_txt_up"*/, v4);
    sub_1BCAFF8(&StringLiteral_17427/*"btn_txt_new"*/, v5);
    sub_1BCAFF8(&StringLiteral_17417/*"btn_txt_down"*/, v6);
    sub_1BCAFF8(&StringLiteral_17434/*"btn_txt_old"*/, v7);
    sub_1BCAFF8(&StringLiteral_17376/*"btn_sort_down"*/, v8);
    byte_4B20617 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17434/*"btn_txt_old"*/ : &StringLiteral_17427/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17474/*"btn_txt_up"*/ : &StringLiteral_17417/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCB254(sort, v10);
  }
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  ServantCostumeListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B205FF & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B205FF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  ServantCostumeListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B20601 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B20601 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  ServantCostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v12; // w21
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B20604 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v7);
    byte_4B20604 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !objectList )
        break;
      v13 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantCostumeListViewObject__GetItem(
                                                                  (ServantCostumeListViewObject_o *)objectList,
                                                                  v9);
      if ( !objectList )
        break;
      v9 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42948252(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v8 )
        break;
      items = v8->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      v18 = v8->fields._size;
      if ( (unsigned int)v18 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v13,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        v8->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
      }
      if ( size == ++v12 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v8;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1BCB254(objectList, v9);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v8;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4B20603 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B20603 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v19 = v9->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v9->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCB254(objectList, v10);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v9;
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B20600 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B20600 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  ServantCostumeListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B20602 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B20602 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  ServantCostumeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1A0A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1A04C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCostumeListViewManager_CallbackFunc__BeginInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = kind;
  if ( (byte_4B2061B & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&ServantCostumeListViewManager_ResultKind_TypeInfo, v9);
    byte_4B2061B = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             ServantCostumeListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__Invoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}