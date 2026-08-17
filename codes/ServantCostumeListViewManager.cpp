void ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v9; // x20
  struct ServantCostumeListViewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A383 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&ServantCostumeListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_4924/*"CostumeCombineList"*/);
    byte_596A383 = 1;
  }
  v7 = StringLiteral_4924/*"CostumeCombineList"*/;
  ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4924/*"CostumeCombineList"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCostumeListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v9 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v9, SORT_SAVE_KEY, 8, 1, 0);
  static_fields = ServantCostumeListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantSortStatus,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantCostumeListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20

  if ( (byte_596A381 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCostumeListViewManager_ChangeIconScale__);
    byte_596A381 = 1;
  }
  v3 = Method_ServantCostumeListViewManager_ChangeIconScale__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_ChangeIconScale__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_ChangeIconScale__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 68) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0), (sort = this->fields.sort) == 0) )
  {
    sub_2213CDC(sort, v5);
  }
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantCostumeListViewManager__CreateList(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  void *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x2
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ServantCostumeListViewManager_c *v14; // x8
  ServantCostumeItemInfo_array *v15; // x20
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t v18; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x25
  ServantCostumeItemInfo_o *v30; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  UserServantEntity_o *v32; // x24
  ServantCostumeListViewItem_o *v33; // x22
  const MethodInfo *v34; // x3
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *combineInfoMsgLabel; // x19
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596A36E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ServantCostumeListViewItem_TypeInfo);
    sub_2213A60(&ServantCostumeListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_4001/*"COSTUME_SERVANT_LIST_MSG"*/);
    byte_596A36E = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  currentBase = 0;
  if ( !bgTxtSprite )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0);
  bgTxtSprite = (void *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  currentBase = 0;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v5);
  v14 = ServantCostumeListViewManager_TypeInfo;
  v15 = ServantCostumeItemInfoList;
  if ( !*(&ServantCostumeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo, v7, v8);
    v14 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v14->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)servantSortStatus,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  bgTxtSprite = this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_31;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0);
  bgTxtSprite = *p_sort;
  if ( !*p_sort )
    goto LABEL_31;
  v18 = *((_DWORD *)bgTxtSprite + 34);
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = v18;
  bgTxtSprite = ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)bgTxtSprite, v18, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
LABEL_17:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v15 )
    goto LABEL_31;
  max_length = v15->max_length;
  if ( (int)max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)max_length )
        sub_2213CE4(bgTxtSprite);
      v30 = v15->m_Items[v29];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v32 = currentBase;
      v33 = (ServantCostumeListViewItem_o *)sub_2213CCC(ServantCostumeListViewItem_TypeInfo);
      ServantCostumeListViewItem___ctor(v33, v30, v32, v34);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v33,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v33, v35, v36, v37, v38, v39, v40);
      }
      LODWORD(max_length) = v15->max_length;
      if ( (__int64)++v29 >= (int)max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_2213CDC(bgTxtSprite, method);
  }
LABEL_27:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v45);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
  bgTxtSprite = LocalizationManager__Get((System_String_o *)StringLiteral_4001/*"COSTUME_SERVANT_LIST_MSG"*/, 0);
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
  void *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v14; // w8
  void *v15; // x22
  unsigned int v16; // w25
  __int64 v17; // x8
  ServantLeaderInfo_o *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596A370 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeItemInfo_TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    byte_596A370 = 1;
  }
  v10 = sub_2213CCC(ServantCostumeItemInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !userServantMaster )
    goto LABEL_19;
  v11 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0);
  if ( !v11 )
  {
    if ( servantCostumeMaster )
    {
      v11 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, 1, 0);
      if ( v11 )
      {
        v14 = *((_DWORD *)v11 + 6);
        v15 = v11;
        if ( v14 < 1 )
          return (ServantCostumeItemInfo_o *)v10;
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v14 )
            sub_2213CE4(v11);
          v17 = *((_QWORD *)v15 + (int)v16 + 4);
          if ( !v17 || !servantCostumeReleaseMaster )
            break;
          v11 = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                          servantCostumeReleaseMaster,
                          svtId,
                          *(_DWORD *)(v17 + 20),
                          0);
          if ( ((unsigned __int8)v11 & 1) != 0 )
          {
            v18 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
            ServantLeaderInfo___ctor_50583572(v18, svtId, 0, 1, 0);
            if ( !v10 )
              break;
            *(_BYTE *)(v10 + 32) = 0;
            *(_QWORD *)(v10 + 16) = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), 0, v19, v20, v21, v22, v23, v24);
            *(_QWORD *)(v10 + 24) = v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)v18, v25, v26, v27, v28, v29, v30);
            *(_BYTE *)(v10 + 32) = 0;
            *(_DWORD *)(v10 + 35) = 0;
            *(_QWORD *)(v10 + 40) = 0;
            *(_QWORD *)(v10 + 48) = 0;
          }
          v14 = *((_DWORD *)v15 + 6);
          if ( (int)++v16 >= v14 )
            return (ServantCostumeItemInfo_o *)v10;
        }
      }
    }
LABEL_19:
    sub_2213CDC(v11, v12);
  }
  if ( !v10 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData((ServantCostumeItemInfo_o *)v10, (UserServantEntity_o *)v11, v13);
  return (ServantCostumeItemInfo_o *)v10;
}


void ServantCostumeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCostumeListViewManager_c *v3; // x0
  ListViewSort_o *servantSortStatus; // x0

  if ( (byte_596A36B & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeListViewManager_TypeInfo);
    byte_596A36B = 1;
  }
  v3 = ServantCostumeListViewManager_TypeInfo;
  if ( !*(&ServantCostumeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo, v1, v2);
    v3 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v3->static_fields->servantSortStatus;
  if ( !servantSortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortStatus, 0);
}


void ServantCostumeListViewManager__DestroyList(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
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

  if ( (byte_596A37B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A37B = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596A37E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A37E = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_596A379 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantCostumeListViewManager_o *)sub_2213A60(&ServantCostumeListViewItem_TypeInfo);
    byte_596A379 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (ServantCostumeListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (ServantCostumeListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewItem_TypeInfo )
        break;
      this = (ServantCostumeListViewManager_o *)this->fields.dropList;
      if ( !this )
        break;
      ++v8;
      if ( ServantCostumeItemInfo__get_SvtId((ServantCostumeItemInfo_o *)this, *(const MethodInfo **)&svtId) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&svtId);
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

  if ( (byte_596A382 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantCostumeListViewManager_o *)sub_2213A60(&ServantCostumeListViewItem_TypeInfo);
    byte_596A382 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v8,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_object__o *v5; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x24
  UserServantCollectionMaster_o *v11; // x25
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x5
  ServantCostumeListViewManager_o *ServantCostumeItemInfo; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  ServantCostumeListViewManager_o *v17; // x26
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w22
  __int64 v37; // x2
  intptr_t m_CachedPtr; // x23
  __int128 v39; // q1
  int v40; // w8
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v42; // q1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *Item; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_596A36F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A36F = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v9 )
    goto LABEL_36;
  v11 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)v9, 0);
  if ( !Instance )
    goto LABEL_36;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v54.fields._current = v53.fields.fakeValue;
  *(_OWORD *)&v54.fields._list = *(_OWORD *)&v53.fields.currentCryptoKey;
  v53.fields.currentCryptoKey = 0;
  v53.fields.hiddenValue = (int64_t)&v54;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v12 )
      break;
    ServantCostumeItemInfo = (ServantCostumeListViewManager_o *)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                                                                  (ServantCostumeListViewManager_o *)v12,
                                                                  v54.fields._current,
                                                                  (UserServantMaster_o *)MasterData_object,
                                                                  (ServantCostumeMaster_o *)v9,
                                                                  (ServantCostumeReleaseMaster_o *)v10,
                                                                  v13);
    v17 = ServantCostumeItemInfo;
    if ( !ServantCostumeItemInfo )
      sub_2213CDC(0, v15);
    if ( ServantCostumeItemInfo->fields.m_CachedPtr || ServantCostumeItemInfo->fields.m_CancellationTokenSource )
    {
      ServantCostumeListViewManager__SetServantCostumeItemInfoData(
        ServantCostumeItemInfo,
        (ServantCostumeItemInfo_o *)ServantCostumeItemInfo,
        (ServantCostumeMaster_o *)v9,
        v11,
        (ServantCostumeReleaseMaster_o *)v10,
        v16);
      if ( !BYTE6(v17->fields.dropObjectList) )
      {
        if ( !v5
          || (items = v5->fields._items,
              v27 = Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(v18, v19);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v17,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v17, v20, v21, v22, v23, v24, v25);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *currentBase = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)currentBase, 0, v30, v31, v32, v33, v34, v35);
  if ( this->fields.baseUserSvtData )
  {
    if ( !v5 )
      goto LABEL_36;
    if ( v5->fields._size >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v5,
                                      v36,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          v39 = *(_OWORD *)(m_CachedPtr + 32);
          v40 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(m_CachedPtr + 16);
          *(_OWORD *)&v53.fields.fakeValue = v39;
          if ( !v40 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v37);
          v52 = v53;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v52, 0);
          baseUserSvtData = this->fields.baseUserSvtData;
          if ( !baseUserSvtData )
            break;
          v42 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v51.fields.fakeValue = v42;
          if ( Instance == (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v51,
                                              0) )
          {
            *currentBase = (UserServantEntity_o *)m_CachedPtr;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)currentBase, m_CachedPtr, v43, v44, v45, v46, v47, v48);
            Item = System_Collections_Generic_List_object___get_Item(
                     v5,
                     v36,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
            System_Collections_Generic_List_object___Remove(
              v5,
              Item,
              (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
            System_Collections_Generic_List_object___Insert(
              v5,
              0,
              Item,
              (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
          }
        }
        if ( ++v36 >= v5->fields._size )
          return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                   v5,
                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
      }
LABEL_36:
      sub_2213CDC(Instance, v7);
    }
  }
  else if ( !v5 )
  {
    goto LABEL_36;
  }
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t Instance; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v8; // x8
  int size; // w23
  int32_t v10; // w20
  const MethodInfo *v11; // x2
  ServantCostumeListViewItem_o *v12; // x21
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int64 v15; // x8
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // w8
  Il2CppObject v19; // q1
  UnityEngine_Object_o *viewObject; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x8
  int v22; // w23
  int32_t v23; // w20
  const MethodInfo *v24; // x2
  ServantCostumeListViewItem_o *v25; // x21
  __int64 v26; // x10
  __int64 v27; // x8
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  Il2CppObject v32; // q1
  UnityEngine_Object_o *v33; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+80h] [xbp-80h]
  Il2CppObject *entity; // [xsp+A8h] [xbp-58h] BYREF

  if ( (byte_596A372 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantCostumeListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A372 = 1;
  }
  itemList = this->fields.itemList;
  entity = 0;
  if ( itemList )
  {
    UserGameMaster__getSelfUserGame(0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_53;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_53;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   &entity,
                   userSvtId,
                   (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        v8 = this->fields.itemList;
        if ( !v8 )
          goto LABEL_53;
        size = v8->fields._size;
        if ( size >= 1 )
        {
          v10 = 0;
          while ( 1 )
          {
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_53;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v10,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_53;
            v12 = (ServantCostumeListViewItem_o *)Instance;
            naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment )
              goto LABEL_53;
            if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_53;
            v14 = *(_QWORD *)(Instance + 128);
            if ( !v14 )
              goto LABEL_53;
            v15 = *(_QWORD *)(v14 + 16);
            if ( v15 )
            {
              v16 = *(_OWORD *)(v15 + 16);
              v17 = *(_OWORD *)(v15 + 32);
              v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v38.fields.currentCryptoKey = v16;
              *(_OWORD *)&v38.fields.fakeValue = v17;
              if ( !v18 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v11);
              v37 = v38;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
              if ( !entity )
                goto LABEL_53;
              v19 = entity[2];
              *(Il2CppObject *)&v36.fields.currentCryptoKey = entity[1];
              *(Il2CppObject *)&v36.fields.fakeValue = v19;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0) )
                ServantCostumeListViewItem__ModifyItem(v12, (UserServantEntity_o *)entity, v11);
            }
            viewObject = (UnityEngine_Object_o *)v12->fields.viewObject;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v11);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
            {
              Instance = (int64_t)v12->fields.viewObject;
              if ( !Instance )
                goto LABEL_53;
              (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                Instance,
                v12,
                *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            if ( size == ++v10 )
              return;
          }
        }
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_53;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_53;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     userSvtId,
                     (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          v21 = this->fields.itemList;
          if ( !v21 )
            goto LABEL_53;
          v22 = v21->fields._size;
          if ( v22 >= 1 )
          {
            v23 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                break;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v23,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                break;
              v25 = (ServantCostumeListViewItem_o *)Instance;
              v26 = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v26 )
                break;
              if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v26 - 8) != ServantCostumeListViewItem_TypeInfo )
                break;
              v27 = *(_QWORD *)(Instance + 128);
              if ( !v27 )
                break;
              v28 = *(_QWORD *)(v27 + 16);
              if ( v28 )
              {
                v29 = *(_OWORD *)(v28 + 16);
                v30 = *(_OWORD *)(v28 + 32);
                v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v38.fields.currentCryptoKey = v29;
                *(_OWORD *)&v38.fields.fakeValue = v30;
                if ( !v31 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v24);
                v35 = v38;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v35, 0);
                if ( !entity )
                  break;
                v32 = entity[2];
                *(Il2CppObject *)&v34.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v34.fields.fakeValue = v32;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v34, 0) )
                  ServantCostumeListViewItem__ModifyItem(v25, (UserServantEntity_o *)entity, v24);
              }
              v33 = (UnityEngine_Object_o *)v25->fields.viewObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v24);
              if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
              {
                Instance = (int64_t)v25->fields.viewObject;
                if ( !Instance )
                  break;
                (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                  Instance,
                  v25,
                  *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( v22 == ++v23 )
                return;
            }
LABEL_53:
            sub_2213CDC(Instance, v7);
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

  if ( (byte_596A37A & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantCostumeListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_ServantCostumeListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A37A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v10; // x20
  __int128 v11; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v14; // q1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UserServantEntity_o *v23; // x1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  struct ServantCostumeItemInfo_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]

  v4 = this;
  if ( (byte_596A377 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_ServantCostumeListViewManager_OnClickSelectBase__);
    this = (ServantCostumeListViewManager_o *)sub_2213A60(&ServantCostumeListViewObject_TypeInfo);
    byte_596A377 = 1;
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
  v10 = Item;
  if ( !baseUserSvtData )
    goto LABEL_16;
  v11 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v11;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
  v28 = v29;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v28,
                                              0);
  if ( !v10 )
    goto LABEL_26;
  servantData = v10->fields.servantData;
  if ( !servantData )
    goto LABEL_26;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_26;
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v14;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                    &v27,
                                                    0) )
  {
LABEL_16:
    v24 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnClickSelectBase__);
    v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
    if ( v10 )
    {
      v26 = v10->fields.servantData;
      if ( v26 )
      {
        v23 = v26->fields.userServantEntity;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_2213CDC(this, obj);
  }
  v15 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnClickSelectBase__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
  v23 = 0;
LABEL_21:
  v4->fields.baseUserSvtData = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.baseUserSvtData,
    (int32_t)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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

  if ( (byte_596A37F & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    byte_596A37F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596A37D & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantCostumeListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_ServantCostumeListViewManager_OnClickSortButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A37D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantCostumeListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnClickSortButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct LimitCntUpControl_o *limitCntCtr; // x8
  struct UserServantEntity_o *m_CachedPtr; // x1

  if ( (byte_596A378 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCostumeListViewManager_OnLongPushListView__);
    sub_2213A60(&ServantCostumeListViewObject_TypeInfo);
    byte_596A378 = 1;
  }
  v5 = Method_ServantCostumeListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_ServantCostumeListViewManager_OnLongPushListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectUserSvtEntity,
          (int32_t)m_CachedPtr,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (Item = this->fields.combineRootComponent) == 0) )
  {
LABEL_15:
    sub_2213CDC(Item, v8);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0);
}


void ServantCostumeListViewManager__OnMoveEnd(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A376 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A376 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v9,
                1,
                v9->klass->vtable._8_UpdateScrollbars.method),
              (v9 = this->fields.scrollView) == 0) )
        {
          sub_2213CDC(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v15; // x1

  if ( (byte_596A375 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
    sub_2213A60(&Method_ServantCostumeListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A375 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      ServantCostumeListViewObject__Init_37906816((ServantCostumeListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void ServantCostumeListViewManager__ResetListViewInfo(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseUserSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserSvtData, 0, v2, v3, v4, v5, v6, v7);
}


void ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596A37C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596A37C = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_37906136(this, mode, v10);
}


void ServantCostumeListViewManager__SetMode_37906136(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Behaviour_o *v10; // x0
  int32_t v11; // w1

  if ( (byte_596A374 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A374 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v10 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v10, 0) )
      goto LABEL_11;
    v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v10
      || (UnityEngine_Behaviour__set_enabled(v10, 1, 0), (v10 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
    {
LABEL_17:
      sub_2213CDC(v10, v8);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v10, 0);
  }
LABEL_11:
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v11 = 2;
    else
      v11 = 3;
    ServantCostumeListViewManager__RequestListObject(this, v11, 0.0, v9);
  }
}


void ServantCostumeListViewManager__SetMode_37906400(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_37906136(this, mode, v10);
}


void ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596A373 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeListViewObject_TypeInfo);
    byte_596A373 = 1;
  }
  if ( obj
    && (naturalAligment = ServantCostumeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantCostumeListViewObject__Init_37906012((ServantCostumeListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseUserSvtData = baseSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserSvtData,
    (int32_t)baseSvtData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCostumeListViewManager__SetServantCostumeItemInfoData(
        ServantCostumeListViewManager_o *this,
        ServantCostumeItemInfo_o *info,
        ServantCostumeMaster_o *servantCostumeMaster,
        UserServantCollectionMaster_o *userServantCollectionMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  int32_t m_CancellationTokenSource; // w8
  ServantCostumeListViewManager_o *v11; // x22
  unsigned int v12; // w28
  int v13; // w27
  int v14; // w25
  int32_t v15; // w26
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
  int32_t v26; // w9
  bool v27; // zf
  int v28; // w8
  bool v29; // w10

  if ( (byte_596A371 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    this = (ServantCostumeListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A371 = 1;
  }
  if ( !info )
    goto LABEL_40;
  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
  if ( !servantCostumeMaster )
    goto LABEL_40;
  this = (ServantCostumeListViewManager_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                              servantCostumeMaster,
                                              (int32_t)this,
                                              0,
                                              1,
                                              0);
  if ( !this )
    goto LABEL_40;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v12 >= m_CancellationTokenSource )
        sub_2213CE4(this);
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
        if ( !servantCostumeReleaseMaster )
          break;
        if ( ServantCostumeReleaseMaster__checkItemHaving(
               servantCostumeReleaseMaster,
               v16->fields.svtId,
               v16->fields.id,
               0) )
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
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
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
      m_CancellationTokenSource = (int32_t)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_32;
    }
LABEL_40:
    sub_2213CDC(this, info);
  }
  v15 = 0;
  v14 = 0;
  v13 = 0;
LABEL_32:
  v26 = m_CancellationTokenSource - v15;
  if ( m_CancellationTokenSource == v15 )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v14 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  v27 = v13 == m_CancellationTokenSource;
  info->fields.allCostumeNum = m_CancellationTokenSource;
  info->fields.releaseCostumeNum = v15;
  v28 = m_CancellationTokenSource - v15;
  v29 = v27;
  info->fields.isHide = v29;
  info->fields.notHavingCostumeNum = v26;
  info->fields.notHavingReleaseItemNum = v28 - v14;
}


void ServantCostumeListViewManager__SetSortButtonImage(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596A380 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596A380 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_30:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v5);
  }
}


void ServantCostumeListViewManager__add_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  ServantCostumeListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A367 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeListViewManager_CallbackFunc_TypeInfo);
    byte_596A367 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v6->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantCostumeListViewManager_o *)sub_221405C(v6, ServantCostumeListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantCostumeListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantCostumeListViewManager__add_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A369 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A369 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantCostumeListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantCostumeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  Il2CppObject *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_596A36D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
    byte_596A36D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_19;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v8,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)Item,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !Item )
        break;
      v9 = (Il2CppObject *)Item;
      Item = (System_Collections_Generic_List_object__o *)ServantCostumeListViewObject__GetItem(
                                                            (ServantCostumeListViewObject_o *)Item,
                                                            v5);
      if ( !Item )
        break;
      v5 = (const MethodInfo *)Item;
      if ( !LOBYTE(Item[2].fields._items)
        || (Item = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                  (ListViewManager_o *)this,
                                                                  (ListViewItem_o *)Item,
                                                                  0),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v18 = v3->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          v3->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v9;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
    }
LABEL_19:
    sub_2213CDC(Item, v5);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_596A36C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A36C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v3;
}


void ServantCostumeListViewManager__remove_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A368 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeListViewManager_CallbackFunc_TypeInfo);
    byte_596A368 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v6->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantCostumeListViewManager_o *)sub_221405C(v6, ServantCostumeListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantCostumeListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantCostumeListViewManager__remove_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596A36A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A36A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantCostumeListViewManager__DeleteContinueData(v11);
}


void ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF0CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFF074;
}


System_IAsyncResult_o *ServantCostumeListViewManager_CallbackFunc__BeginInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = index;
  if ( (byte_596A384 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeListViewManager_ResultKind_TypeInfo);
    byte_596A384 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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