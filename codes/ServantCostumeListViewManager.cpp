void ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v2; // x20
  struct ServantCostumeListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4CC142E & 1) == 0 )
  {
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&ServantCostumeListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_4738/*"CostumeCombineList"*/);
    byte_4CC142E = 1;
  }
  ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4738/*"CostumeCombineList"*/;
  sub_1C71354(ServantCostumeListViewManager_TypeInfo->static_fields, StringLiteral_4738/*"CostumeCombineList"*/);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v2 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_44130992(v2, SORT_SAVE_KEY, 8, 1, 0);
  static_fields = ServantCostumeListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v2;
  sub_1C71354(&static_fields->servantSortStatus, v2);
}


void ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantCostumeListViewManager__ChangeIconScale(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantCostumeListViewManager_o *v8; // x0
  int v9; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20

  if ( (byte_4CC142C & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantCostumeListViewManager_ChangeIconScale__);
    byte_4CC142C = 1;
  }
  v3 = Method_ServantCostumeListViewManager_ChangeIconScale__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_ChangeIconScale__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_ChangeIconScale__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v8 = this;
    v9 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v8 = this;
    v9 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v8 = this;
    v9 = 1;
LABEL_11:
    v8->fields.seed = smallSizeSeed;
    p_seed = &v8->fields.seed;
    *((_DWORD *)p_seed + 68) = v9;
    sub_1C71354(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0), (sort = this->fields.sort) == 0) )
  {
    sub_1C71608(sort, v5);
  }
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantCostumeListViewManager__CreateList(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x2
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x0
  ServantCostumeListViewManager_c *v7; // x8
  ServantCostumeItemInfo_array *v8; // x20
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t v11; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x25
  ServantCostumeItemInfo_o *v17; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  UserServantEntity_o *v19; // x24
  ServantCostumeListViewItem_o *v20; // x22
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC1419 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&ServantCostumeListViewItem_TypeInfo);
    sub_1C713B0(&ServantCostumeListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3852/*"COSTUME_SERVANT_LIST_MSG"*/);
    byte_4CC1419 = 1;
  }
  bgTxtSprite = (__int64)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0);
  currentBase = 0;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v5);
  v7 = ServantCostumeListViewManager_TypeInfo;
  v8 = ServantCostumeItemInfoList;
  if ( !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v7 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v7->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1C71354(&this->fields.sort, servantSortStatus);
  bgTxtSprite = (__int64)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_31;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0);
  bgTxtSprite = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_31;
  v11 = *(_DWORD *)(bgTxtSprite + 136);
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = v11;
  bgTxtSprite = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)bgTxtSprite, v11, 0);
  if ( !scaleChangeTabSprite )
    goto LABEL_31;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)bgTxtSprite, 0);
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
  sub_1C71354(&this->fields.seed, normalSizeSeed);
LABEL_17:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v8 )
    goto LABEL_31;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C71610(bgTxtSprite);
      v17 = v8->m_Items[v16];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v19 = currentBase;
      v20 = (ServantCostumeListViewItem_o *)sub_1C715FC(ServantCostumeListViewItem_TypeInfo);
      ServantCostumeListViewItem___ctor(v20, v17, v19, v21);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v20;
        bgTxtSprite = sub_1C71354(v25 + 4, v20);
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1C71608(bgTxtSprite, method);
  }
LABEL_27:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v26);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bgTxtSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3852/*"COSTUME_SERVANT_LIST_MSG"*/, 0);
  if ( !combineInfoMsgLabel )
    goto LABEL_31;
  UILabel__set_text(combineInfoMsgLabel, (System_String_o *)bgTxtSprite, 0);
}


ServantCostumeItemInfo_o *ServantCostumeListViewManager__CreateServantCostumeItemInfo(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        UserServantMaster_o *userServantMaster,
        ServantCostumeMaster_o *servantCostumeMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v14; // w8
  __int64 v15; // x22
  unsigned int v16; // w26
  __int64 v17; // x8
  ServantLeaderInfo_o *v18; // x25

  if ( (byte_4CC141B & 1) == 0 )
  {
    sub_1C713B0(&ServantCostumeItemInfo_TypeInfo);
    sub_1C713B0(&ServantLeaderInfo_TypeInfo);
    byte_4CC141B = 1;
  }
  v10 = sub_1C715FC(ServantCostumeItemInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !userServantMaster )
    goto LABEL_19;
  v11 = (__int64)UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0);
  if ( !v11 )
  {
    if ( servantCostumeMaster )
    {
      v11 = (__int64)ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, 0);
      if ( v11 )
      {
        v14 = *(_DWORD *)(v11 + 24);
        v15 = v11;
        if ( v14 < 1 )
          return (ServantCostumeItemInfo_o *)v10;
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v14 )
            sub_1C71610(v11);
          v17 = *(_QWORD *)(v15 + 8LL * (int)v16 + 32);
          if ( !v17 || !servantCostumeReleaseMaster )
            break;
          v11 = ServantCostumeReleaseMaster__checkItemHaving(
                  servantCostumeReleaseMaster,
                  svtId,
                  *(_DWORD *)(v17 + 20),
                  0);
          if ( (v11 & 1) != 0 )
          {
            v18 = (ServantLeaderInfo_o *)sub_1C715FC(ServantLeaderInfo_TypeInfo);
            ServantLeaderInfo___ctor_43769908(v18, svtId, 0, 1, 0);
            if ( !v10 )
              break;
            *(_BYTE *)(v10 + 32) = 0;
            *(_QWORD *)(v10 + 16) = 0;
            sub_1C71354(v10 + 16, 0);
            *(_QWORD *)(v10 + 24) = v18;
            v11 = sub_1C71354(v10 + 24, v18);
            *(_BYTE *)(v10 + 32) = 0;
            *(_DWORD *)(v10 + 35) = 0;
            *(_QWORD *)(v10 + 40) = 0;
            *(_QWORD *)(v10 + 48) = 0;
          }
          v14 = *(_DWORD *)(v15 + 24);
          if ( (int)++v16 >= v14 )
            return (ServantCostumeItemInfo_o *)v10;
        }
      }
    }
LABEL_19:
    sub_1C71608(v11, v12);
  }
  if ( !v10 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData((ServantCostumeItemInfo_o *)v10, (UserServantEntity_o *)v11, v13);
  return (ServantCostumeItemInfo_o *)v10;
}


void ServantCostumeListViewManager__DestroyList(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, v3);
  ListViewSort__Save(sort, 0);
}


void ServantCostumeListViewManager__EndSelectFilterKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CC1426 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1426 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC1429 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1429 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4CC1424 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&ServantCostumeListViewItem_TypeInfo);
    byte_4CC1424 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (ServantCostumeListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)itemList[3].monitor;
      if ( !itemList )
        break;
      ++v7;
      if ( ServantCostumeItemInfo__get_SvtId((ServantCostumeItemInfo_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_14:
    sub_1C71608(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


bool ServantCostumeListViewManager__GetFocusItemIndex(
        ServantCostumeListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_4CC142D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantCostumeListViewManager_o *)sub_1C713B0(&ServantCostumeListViewItem_TypeInfo);
    byte_4CC142D = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C71608(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v8,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantCostumeListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( LOBYTE(this->fields.sortOrderButton) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


UserServantEntity_o *ServantCostumeListViewManager__GetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserSvtData;
}


UserServantEntity_o *ServantCostumeListViewManager__GetSelectUserSvtEntity(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUserSvtEntity;
}


ServantCostumeItemInfo_array *ServantCostumeListViewManager__GetServantCostumeItemInfoList(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o **currentBase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x24
  UserServantCollectionMaster_o *v10; // x25
  const MethodInfo *v11; // x5
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x26
  unsigned __int64 v14; // x28
  DataManager_o *v15; // x27
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w22
  intptr_t m_CachedPtr; // x23
  __int128 v22; // q0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v24; // q0
  Il2CppObject *Item; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-80h]

  if ( (byte_4CC141A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC141A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 )
    goto LABEL_38;
  v10 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)v8, 0);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)System_Collections_Generic_List_int___ToArray(
                                (System_Collections_Generic_List_int__o *)Instance,
                                (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Instance )
    goto LABEL_38;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v13 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)m_CancellationTokenSource )
        sub_1C71610(Instance);
      Instance = (DataManager_o *)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                                    (ServantCostumeListViewManager_o *)Instance,
                                    *((_DWORD *)&v13->fields._DispLog + v14),
                                    (UserServantMaster_o *)MasterData_object,
                                    (ServantCostumeMaster_o *)v8,
                                    (ServantCostumeReleaseMaster_o *)v9,
                                    v11);
      if ( !Instance )
        break;
      v15 = Instance;
      if ( Instance->fields.m_CachedPtr || Instance->fields.m_CancellationTokenSource )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          (ServantCostumeListViewManager_o *)Instance,
          (ServantCostumeItemInfo_o *)Instance,
          (ServantCostumeMaster_o *)v8,
          v10,
          (ServantCostumeReleaseMaster_o *)v9,
          v11);
        if ( !*(&v15->fields._DispLog + 6) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v15,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v15;
            Instance = (DataManager_o *)sub_1C71354(v19 + 4, v15);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
      if ( (__int64)++v14 >= (int)m_CancellationTokenSource )
        goto LABEL_23;
    }
LABEL_38:
    sub_1C71608(Instance, v6);
  }
LABEL_23:
  *currentBase = 0;
  Instance = (DataManager_o *)sub_1C71354(currentBase, 0);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v4 )
      goto LABEL_38;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v4,
                                             (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v4 )
    goto LABEL_38;
  if ( v4->fields._size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v4,
                                             (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v20 = 0;
  do
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  v4,
                                  v20,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
    if ( !Instance )
      goto LABEL_38;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( m_CachedPtr )
    {
      v22 = *(_OWORD *)(m_CachedPtr + 32);
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(m_CachedPtr + 16);
      *(_OWORD *)&v30.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v30;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v29, 0);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_38;
      v24 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v24;
      if ( Instance == (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v28, 0) )
      {
        *currentBase = (UserServantEntity_o *)m_CachedPtr;
        sub_1C71354(currentBase, m_CachedPtr);
        Item = System_Collections_Generic_List_object___get_Item(
                 v4,
                 v20,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
        System_Collections_Generic_List_object___Remove(
          v4,
          Item,
          (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_object___Insert(
          v4,
          0,
          Item,
          (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    ++v20;
  }
  while ( v20 < v4->fields._size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v4,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  int v7; // w23
  int32_t v8; // w20
  ServantCostumeListViewItem_o *v9; // x21
  __int64 naturalAligment; // x10
  __int64 v11; // x8
  __int64 v12; // x8
  __int128 v13; // q0
  Il2CppObject v14; // q0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *viewObject; // x22
  int v17; // w23
  int32_t v18; // w20
  ServantCostumeListViewItem_o *v19; // x21
  __int64 v20; // x10
  __int64 v21; // x8
  __int64 v22; // x8
  __int128 v23; // q0
  Il2CppObject v24; // q0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+80h] [xbp-80h]
  Il2CppObject *entity; // [xsp+A8h] [xbp-58h] BYREF

  if ( (byte_4CC141D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&ServantCostumeListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC141D = 1;
  }
  entity = 0;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_52;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             userSvtId,
             (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          goto LABEL_52;
        v7 = *(_DWORD *)(Instance + 24);
        if ( v7 >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v8,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_52;
            v9 = (ServantCostumeListViewItem_o *)Instance;
            naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment )
              goto LABEL_52;
            if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_52;
            v11 = *(_QWORD *)(Instance + 128);
            if ( !v11 )
              goto LABEL_52;
            v12 = *(_QWORD *)(v11 + 16);
            if ( v12 )
            {
              v13 = *(_OWORD *)(v12 + 32);
              *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
              *(_OWORD *)&v31.fields.fakeValue = v13;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v30 = v31;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v30, 0);
              if ( !entity )
                goto LABEL_52;
              v14 = entity[2];
              *(Il2CppObject *)&v29.fields.currentCryptoKey = entity[1];
              *(Il2CppObject *)&v29.fields.fakeValue = v14;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v29, 0) )
                ServantCostumeListViewItem__ModifyItem(v9, (UserServantEntity_o *)entity, v15);
            }
            viewObject = (UnityEngine_Object_o *)v9->fields.viewObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
            {
              Instance = (int64_t)v9->fields.viewObject;
              if ( !Instance )
                goto LABEL_52;
              (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                Instance,
                v9,
                *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            if ( v7 == ++v8 )
              return;
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_52;
          }
        }
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_52;
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_52;
          v17 = *(_DWORD *)(Instance + 24);
          if ( v17 >= 1 )
          {
            v18 = 0;
            do
            {
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v18,
                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                break;
              v19 = (ServantCostumeListViewItem_o *)Instance;
              v20 = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v20 )
                break;
              if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v20 - 8) != ServantCostumeListViewItem_TypeInfo )
                break;
              v21 = *(_QWORD *)(Instance + 128);
              if ( !v21 )
                break;
              v22 = *(_QWORD *)(v21 + 16);
              if ( v22 )
              {
                v23 = *(_OWORD *)(v22 + 32);
                *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
                *(_OWORD *)&v31.fields.fakeValue = v23;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v28 = v31;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v28, 0);
                if ( !entity )
                  break;
                v24 = entity[2];
                *(Il2CppObject *)&v27.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v27.fields.fakeValue = v24;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v27, 0) )
                  ServantCostumeListViewItem__ModifyItem(v19, (UserServantEntity_o *)entity, v25);
              }
              v26 = (UnityEngine_Object_o *)v19->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
              {
                Instance = (int64_t)v19->fields.viewObject;
                if ( !Instance )
                  break;
                (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                  Instance,
                  v19,
                  *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( v17 == ++v18 )
                return;
              Instance = (int64_t)this->fields.itemList;
            }
            while ( Instance );
LABEL_52:
            sub_1C71608(Instance, v6);
          }
        }
      }
    }
  }
}


void ServantCostumeListViewManager__OnClickFilterKind(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC1425 & 1) == 0 )
  {
    sub_1C713B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantCostumeListViewManager_EndSelectFilterKind__);
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnClickFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1425 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C71608(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 4, sort, v8, -1, 0);
  }
}


void ServantCostumeListViewManager__OnClickListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void ServantCostumeListViewManager__OnClickSelectBase(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v4; // x19
  __int64 naturalAligment; // x10
  ServantCostumeListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v8; // x21
  struct UserServantEntity_o **p_baseUserSvtData; // x20
  __int128 v10; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct UserServantEntity_o **v16; // x0
  struct UserServantEntity_o *v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct ServantCostumeItemInfo_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-50h]

  v4 = this;
  if ( (byte_4CC1422 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnClickSelectBase__);
    this = (ServantCostumeListViewManager_o *)sub_1C713B0(&ServantCostumeListViewObject_TypeInfo);
    byte_4CC1422 = 1;
  }
  if ( !obj )
    goto LABEL_26;
  naturalAligment = ServantCostumeListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    goto LABEL_26;
  }
  Item = ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, (const MethodInfo *)obj);
  baseUserSvtData = v4->fields.baseUserSvtData;
  v8 = Item;
  p_baseUserSvtData = &v4->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_16;
  v10 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v22 = v23;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                              &v22,
                                              0);
  if ( !v8 )
    goto LABEL_26;
  servantData = v8->fields.servantData;
  if ( !servantData )
    goto LABEL_26;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_26;
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v13;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                    &v21,
                                                    0) )
  {
LABEL_16:
    v18 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnClickSelectBase__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C71394(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    if ( v8 )
    {
      v20 = v8->fields.servantData;
      if ( v20 )
      {
        v17 = v20->fields.userServantEntity;
        v16 = &v4->fields.baseUserSvtData;
        *p_baseUserSvtData = v17;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_1C71608(this, obj);
  }
  v14 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnClickSelectBase__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C71394(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0);
  *p_baseUserSvtData = 0;
  v16 = &v4->fields.baseUserSvtData;
  v17 = 0;
LABEL_21:
  sub_1C71354(v16, v17);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_26;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUserSvtData != 0, 0);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_26;
  if ( HIDWORD(this[1].fields.m_CachedPtr) == 8 )
    CombineRootComponent__ShowSelectCostumeBaseSvt((CombineRootComponent_o *)this, 0);
}


void ServantCostumeListViewManager__OnClickSortAscendingOrder(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CC142A & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    byte_4CC142A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C71608(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantCostumeListViewManager__OnClickSortButton(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC1428 & 1) == 0 )
  {
    sub_1C713B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantCostumeListViewManager_EndSelectSortKind__);
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnClickSortButton__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1428 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C71608(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 5, sort, 0, v8, 0);
  }
}


void ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CombineRootComponent_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  CombineRootComponent_o *v10; // x20
  struct LimitCntUpControl_o *limitCntCtr; // x8
  struct UserServantEntity_o *m_CachedPtr; // x1

  if ( (byte_4CC1423 & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnLongPushListView__);
    sub_1C713B0(&ServantCostumeListViewObject_TypeInfo);
    byte_4CC1423 = 1;
  }
  v5 = Method_ServantCostumeListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_ServantCostumeListViewManager_OnLongPushListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_15;
  naturalAligment = ServantCostumeListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_15;
  if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewObject_TypeInfo )
    goto LABEL_15;
  Item = (CombineRootComponent_o *)ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v8);
  if ( !this->fields.scrollView
    || (v10 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0), !v10)
    || (limitCntCtr = v10->fields.limitCntCtr) == 0
    || (m_CachedPtr = (struct UserServantEntity_o *)limitCntCtr->fields.m_CachedPtr,
        this->fields.selectUserSvtEntity = m_CachedPtr,
        sub_1C71354(&this->fields.selectUserSvtEntity, m_CachedPtr),
        (Item = this->fields.combineRootComponent) == 0) )
  {
LABEL_15:
    sub_1C71608(Item, v8);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0);
}


void ServantCostumeListViewManager__OnMoveEnd(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CC1421 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1421 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_1C71608(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C71354(&this->fields.callbackFunc2, 0);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewManager__RequestListObject(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantCostumeListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4CC1420 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
    sub_1C713B0(&Method_ServantCostumeListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC1420 = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantCostumeListViewObject__Init_31711540((ServantCostumeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C71608(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
    delay,
    0);
}


void ServantCostumeListViewManager__ResetListViewInfo(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  this->fields.baseUserSvtData = 0;
  sub_1C71354(&this->fields.baseUserSvtData, 0);
}


void ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CC1427 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17509/*"btn_filter_on"*/);
    sub_1C713B0(&StringLiteral_17508/*"btn_filter"*/);
    byte_4CC1427 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C71608(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17508/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17509/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(&this->fields.callbackFunc, callback);
  ServantCostumeListViewManager__SetMode_31710860(this, mode, v6);
}


void ServantCostumeListViewManager__SetMode_31710860(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_4CC141F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC141F = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v8, 0) )
      goto LABEL_11;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8
      || (UnityEngine_Behaviour__set_enabled(v8, 1, 0), (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
    {
LABEL_17:
      sub_1C71608(v8, v6);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0);
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


void ServantCostumeListViewManager__SetMode_31711124(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C71354(&this->fields.callbackFunc2, callback);
  ServantCostumeListViewManager__SetMode_31710860(this, mode, v6);
}


void ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC141E & 1) == 0 )
  {
    this = (ServantCostumeListViewManager_o *)sub_1C713B0(&ServantCostumeListViewObject_TypeInfo);
    byte_4CC141E = 1;
  }
  if ( !obj
    || (naturalAligment = ServantCostumeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantCostumeListViewObject__Init_31710736((ServantCostumeListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  this->fields.baseUserSvtData = baseSvtData;
  sub_1C71354(&this->fields.baseUserSvtData, baseSvtData);
}


void ServantCostumeListViewManager__SetServantCostumeItemInfoData(
        ServantCostumeListViewManager_o *this,
        ServantCostumeItemInfo_o *info,
        ServantCostumeMaster_o *servantCostumeMaster,
        UserServantCollectionMaster_o *userServantCollectionMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantCostumeListViewManager_o *v11; // x22
  unsigned int v12; // w28
  int v13; // w27
  int v14; // w26
  int32_t v15; // w25
  ServantCostumeEntity_o *v16; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t SvtId; // w24
  const MethodInfo *v19; // x1
  int64_t UserSvtId; // x0
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v22; // x1
  int32_t v23; // w24
  const MethodInfo *v24; // x1
  int64_t v25; // x0

  if ( (byte_4CC141C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    this = (ServantCostumeListViewManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC141C = 1;
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
                                              0);
  if ( !this )
    goto LABEL_37;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1C71610(this);
      v16 = (ServantCostumeEntity_o *)*((_QWORD *)&v11->fields.dropObjectList + (int)v12);
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
      if ( !v16 || !userServantCollectionMaster )
        break;
      this = (ServantCostumeListViewManager_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                  userServantCollectionMaster,
                                                  (int32_t)this,
                                                  v16->fields.id,
                                                  0);
      info->fields.isCostumeGet |= (unsigned __int8)this & 1;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        ++v15;
      }
      else
      {
        this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
        if ( !servantCostumeReleaseMaster )
          break;
        if ( ServantCostumeReleaseMaster__checkItemHaving(servantCostumeReleaseMaster, (int32_t)this, v16->fields.id, 0) )
        {
          info->fields.isReleaseItemHaving = 1;
          ++v14;
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__IsEventCombineCostume(v16, 0);
          userServantEntity = info->fields.userServantEntity;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( userServantEntity )
            {
              if ( !info->fields.isEventItemOpenCond )
              {
                SvtId = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
                UserSvtId = ServantCostumeItemInfo__get_UserSvtId(info, v19);
                this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                            servantCostumeReleaseMaster,
                                                            v16,
                                                            SvtId,
                                                            UserSvtId,
                                                            0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
                  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, v22);
                  if ( !MasterData_object )
                    break;
                  this = (ServantCostumeListViewManager_o *)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                              (EventCombineCostumeMaster_o *)MasterData_object,
                                                              (int32_t)this,
                                                              v16->fields.id,
                                                              0);
                  if ( this
                    && (this = (ServantCostumeListViewManager_o *)EventCombineCostumeEntity__IsShortEventItem(
                                                                    (EventCombineCostumeEntity_o *)this,
                                                                    0),
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
            v23 = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
            v25 = ServantCostumeItemInfo__get_UserSvtId(info, v24);
            this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                        servantCostumeReleaseMaster,
                                                        v16,
                                                        v23,
                                                        v25,
                                                        0);
            info->fields.isCanRelease = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__checkFlag(v16, 64, 0);
          v13 += (unsigned __int8)this & 1;
        }
      }
      m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= (int)m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_37:
    sub_1C71608(this, info);
  }
  v15 = 0;
  v14 = 0;
  v13 = 0;
LABEL_32:
  if ( v15 == (_DWORD)m_CancellationTokenSource )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v14 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  info->fields.allCostumeNum = (int)m_CancellationTokenSource;
  info->fields.releaseCostumeNum = v15;
  info->fields.isHide = v13 == (_DWORD)m_CancellationTokenSource;
  info->fields.notHavingCostumeNum = (_DWORD)m_CancellationTokenSource - v15;
  info->fields.notHavingReleaseItemNum = (_DWORD)m_CancellationTokenSource - (v15 + v14);
}


void ServantCostumeListViewManager__SetSortButtonImage(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4CC142B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17545/*"btn_sort_up"*/);
    sub_1C713B0(&StringLiteral_17645/*"btn_txt_up"*/);
    sub_1C713B0(&StringLiteral_17596/*"btn_txt_new"*/);
    sub_1C713B0(&StringLiteral_17586/*"btn_txt_down"*/);
    sub_1C713B0(&StringLiteral_17603/*"btn_txt_old"*/);
    sub_1C713B0(&StringLiteral_17542/*"btn_sort_down"*/);
    byte_4CC142B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17603/*"btn_txt_old"*/ : &StringLiteral_17596/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17645/*"btn_txt_up"*/ : &StringLiteral_17586/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C71608(sort, v4);
  }
}


void ServantCostumeListViewManager__add_callbackFunc(
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

  if ( (byte_4CC1413 & 1) == 0 )
  {
    sub_1C713B0(&ServantCostumeListViewManager_CallbackFunc_TypeInfo);
    byte_4CC1413 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCostumeListViewManager_o *)sub_1C719A4(v7);
  ServantCostumeListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantCostumeListViewManager__add_callbackFunc2(
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

  if ( (byte_4CC1415 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1415 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCostumeListViewManager_o *)sub_1C719A4(v7);
  ServantCostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *v8; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  Il2CppClass **v12; // x0

  if ( (byte_4CC1418 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
    byte_4CC1418 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v7,
                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !objectList )
        break;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantCostumeListViewObject__GetItem(
                                                                  (ServantCostumeListViewObject_o *)objectList,
                                                                  v4);
      if ( !objectList )
        break;
      v4 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].fields._items) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44112976(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v3 )
        break;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      v11 = v3->fields._size;
      if ( (unsigned int)v11 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + v11;
        v3->fields._size = v11 + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C71354(v12 + 4, v8);
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1C71608(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4CC1417 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1417 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v11 = v3->fields._size;
        v12 = objectList;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C71354(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C71608(objectList, v4);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
}


void ServantCostumeListViewManager__remove_callbackFunc(
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

  if ( (byte_4CC1414 & 1) == 0 )
  {
    sub_1C713B0(&ServantCostumeListViewManager_CallbackFunc_TypeInfo);
    byte_4CC1414 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCostumeListViewManager_o *)sub_1C719A4(v7);
  ServantCostumeListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantCostumeListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CC1416 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC1416 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantCostumeListViewManager_o *)sub_1C719A4(v7);
  ServantCostumeListViewManager__get_ObjectList(v10, v11);
}


void ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9DDBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DD64;
}


System_IAsyncResult_o *ServantCostumeListViewManager_CallbackFunc__BeginInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = kind;
  if ( (byte_4CC142F & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&ServantCostumeListViewManager_ResultKind_TypeInfo);
    byte_4CC142F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void ServantCostumeListViewManager_CallbackFunc__Invoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    this->fields.method);
}