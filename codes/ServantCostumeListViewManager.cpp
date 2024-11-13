void __fastcall ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ListViewSort_o *v16; // x20
  struct ServantCostumeListViewManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19E86 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&ServantCostumeListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4850/*"CostumeCombineList"*/, v10, v11);
    byte_4B19E86 = 1;
  }
  ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4850/*"CostumeCombineList"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCostumeListViewManager_TypeInfo->static_fields,
    StringLiteral_4850/*"CostumeCombineList"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v16 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v13, v14, v15);
  ListViewSort___ctor_41480716(v16, SORT_SAVE_KEY, 8, 1, 0LL);
  static_fields = ServantCostumeListViewManager_TypeInfo->static_fields;
  static_fields->servantSortStatus = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->servantSortStatus,
    (int64_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__ChangeIconScale(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantCostumeListViewManager_o *v15; // x0
  int v16; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20

  if ( (byte_4B19E84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_ChangeIconScale__, method, v2);
    byte_4B19E84 = 1;
  }
  v4 = Method_ServantCostumeListViewManager_ChangeIconScale__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_ChangeIconScale__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_ChangeIconScale__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = this;
    v16 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = this;
    v16 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = this;
    v16 = 1;
LABEL_11:
    v15->fields.seed = smallSizeSeed;
    p_seed = &v15->fields.seed;
    *((_DWORD *)p_seed + 68) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v7, v8, v9, v10, v11, v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (sort = this->fields.sort) == 0LL) )
  {
    sub_1BCAA3C(sort, v6);
  }
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCostumeListViewManager__CreateList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v14; // x2
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ServantCostumeListViewManager_c *v23; // x8
  ServantCostumeItemInfo_array *v24; // x20
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t m_CachedPtr; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x25
  ServantCostumeItemInfo_o *v41; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  UserServantEntity_o *v43; // x24
  ServantCostumeListViewItem_o *v44; // x22
  const MethodInfo *v45; // x3
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B19E71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantCostumeListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantCostumeListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3937/*"COSTUME_SERVANT_LIST_MSG"*/, v10, v11);
    byte_4B19E71 = 1;
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
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v14);
  v23 = ServantCostumeListViewManager_TypeInfo;
  v24 = ServantCostumeItemInfoList;
  if ( !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo, v16);
    v23 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v23->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.sort,
    (int64_t)servantSortStatus,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v29, v30, v31, v32, v33, v34);
LABEL_17:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v24 )
    goto LABEL_31;
  v39 = *(_QWORD *)&v24->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)v39 )
        sub_1BCAA44(bgTxtSprite, method);
      v41 = v24->m_Items[v40];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v43 = currentBase;
      v44 = (ServantCostumeListViewItem_o *)sub_1BCAA2C(ServantCostumeListViewItem_TypeInfo, method, v37, v38);
      ServantCostumeListViewItem___ctor(v44, v41, v43, v45);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v53 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v44,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v44;
        sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v44, v46, v47, v48, v49, v50, v51);
      }
      LODWORD(v39) = v24->max_length;
      if ( (__int64)++v40 >= (int)v39 )
        goto LABEL_27;
    }
LABEL_31:
    sub_1BCAA3C(bgTxtSprite, method);
  }
LABEL_27:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v56);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
  bgTxtSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3937/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x21
  void *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int v16; // w8
  void *v17; // x22
  unsigned int v18; // w26
  __int64 v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  ServantLeaderInfo_o *v22; // x25
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B19E73 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeItemInfo_TypeInfo, *(_QWORD *)&svtId, userServantMaster);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v10, v11);
    byte_4B19E73 = 1;
  }
  v12 = sub_1BCAA2C(ServantCostumeItemInfo_TypeInfo, *(_QWORD *)&svtId, userServantMaster, servantCostumeMaster);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !userServantMaster )
    goto LABEL_19;
  v13 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0LL);
  if ( !v13 )
  {
    if ( servantCostumeMaster )
    {
      v13 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, 0LL);
      if ( v13 )
      {
        v16 = *((_DWORD *)v13 + 6);
        v17 = v13;
        if ( v16 < 1 )
          return (ServantCostumeItemInfo_o *)v12;
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= v16 )
            sub_1BCAA44(v13, v14);
          v19 = *((_QWORD *)v17 + (int)v18 + 4);
          if ( !v19 || !servantCostumeReleaseMaster )
            break;
          v13 = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                          servantCostumeReleaseMaster,
                          svtId,
                          *(_DWORD *)(v19 + 20),
                          0LL);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            v22 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v14, v20, v21);
            ServantLeaderInfo___ctor_41224104(v22, svtId, 0, 1, 0LL);
            if ( !v12 )
              break;
            *(_BYTE *)(v12 + 32) = 0;
            *(_QWORD *)(v12 + 16) = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), 0LL, v23, v24, v25, v26, v27, v28);
            *(_QWORD *)(v12 + 24) = v22;
            sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)v22, v29, v30, v31, v32, v33, v34);
            *(_BYTE *)(v12 + 32) = 0;
            *(_DWORD *)(v12 + 35) = 0;
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_QWORD *)(v12 + 48) = 0LL;
          }
          v16 = *((_DWORD *)v17 + 6);
          if ( (int)++v18 >= v16 )
            return (ServantCostumeItemInfo_o *)v12;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(v13, v14);
  }
  if ( !v12 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData((ServantCostumeItemInfo_o *)v12, (UserServantEntity_o *)v13, v15);
  return (ServantCostumeItemInfo_o *)v12;
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
    sub_1BCAA3C(0LL, v3);
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

  if ( (byte_4B19E7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19E7E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
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

  if ( (byte_4B19E81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19E81 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B19E7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantCostumeListViewItem_TypeInfo, v7, v8);
    byte_4B19E7C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      ++v11;
      if ( ServantCostumeItemInfo__get_SvtId((ServantCostumeItemInfo_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_14:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B19E85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, list);
    this = (ServantCostumeListViewManager_o *)sub_1BCA7E0(&ServantCostumeListViewItem_TypeInfo, v8, v9);
    byte_4B19E85 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)list,
                                                  v10,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x21
  int64_t Instance; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x24
  UserServantCollectionMaster_o *v39; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  MethodInfo *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  int64_t v47; // x26
  unsigned __int64 v48; // x28
  int64_t v49; // x27
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w22
  int64_t v55; // x23
  __int128 v56; // q0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v58; // q0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *Item; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-80h]

  if ( (byte_4B19E72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, currentBase, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B19E72 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo,
                                                       currentBase,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v37 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v38 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v37 )
    goto LABEL_38;
  v39 = (UserServantCollectionMaster_o *)Instance;
  Instance = (int64_t)ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)v37, 0LL);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Instance )
    goto LABEL_38;
  v46 = *(_QWORD *)(Instance + 24);
  v47 = Instance;
  if ( (int)v46 >= 1 )
  {
    v48 = 0LL;
    while ( 1 )
    {
      if ( v48 >= (unsigned int)v46 )
        sub_1BCAA44(Instance, v35);
      Instance = (int64_t)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                            (ServantCostumeListViewManager_o *)Instance,
                            *(_DWORD *)(v47 + 32 + 4 * v48),
                            (UserServantMaster_o *)MasterData_object,
                            (ServantCostumeMaster_o *)v37,
                            (ServantCostumeReleaseMaster_o *)v38,
                            v43);
      if ( !Instance )
        break;
      v49 = Instance;
      if ( *(_QWORD *)(Instance + 16) || *(_QWORD *)(Instance + 24) )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          (ServantCostumeListViewManager_o *)Instance,
          (ServantCostumeItemInfo_o *)Instance,
          (ServantCostumeMaster_o *)v37,
          v39,
          (ServantCostumeReleaseMaster_o *)v38,
          v43);
        if ( !*(_BYTE *)(v49 + 38) )
        {
          if ( !v33 )
            break;
          items = v33->fields._items;
          v51 = Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__;
          ++v33->fields._version;
          if ( !items )
            break;
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              (Il2CppObject *)v49,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v53[4] = (Il2CppClass *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v49, v40, v41, v42, (BattleSetupInfo_o *)v43, v44, v45);
          }
        }
      }
      LODWORD(v46) = *(_DWORD *)(v47 + 24);
      if ( (__int64)++v48 >= (int)v46 )
        goto LABEL_23;
    }
LABEL_38:
    sub_1BCAA3C(Instance, v35);
  }
LABEL_23:
  *currentBase = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)currentBase, 0LL, v40, v41, v42, (BattleSetupInfo_o *)v43, v44, v45);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v33 )
      goto LABEL_38;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v33,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v33 )
    goto LABEL_38;
  if ( v33->fields._size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                             v33,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v54 = 0;
  do
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v33,
                          v54,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
    if ( !Instance )
      goto LABEL_38;
    v55 = *(_QWORD *)(Instance + 16);
    if ( v55 )
    {
      v56 = *(_OWORD *)(v55 + 32);
      *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
      *(_OWORD *)&v70.fields.fakeValue = v56;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
      v69 = v70;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_38;
      v58 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v68.fields.fakeValue = v58;
      if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL) )
      {
        *currentBase = (UserServantEntity_o *)v55;
        sub_1BCA784((PartyOrganizationUtility_o *)currentBase, v55, v59, v60, v61, v62, v63, v64);
        Item = System_Collections_Generic_List_object___get_Item(
                 v33,
                 v54,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__);
        System_Collections_Generic_List_object___Remove(
          v33,
          Item,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_object___Insert(
          v33,
          0,
          Item,
          (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    ++v54;
  }
  while ( v54 < v33->fields._size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v33,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void __fastcall ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t Instance; // x0
  __int64 v24; // x1
  int v25; // w23
  int32_t v26; // w20
  ServantCostumeListViewItem_o *v27; // x21
  __int64 methodPtr_low; // x10
  __int64 v29; // x8
  __int64 v30; // x8
  __int128 v31; // q0
  Il2CppObject v32; // q0
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *viewObject; // x22
  int v35; // w23
  int32_t v36; // w20
  ServantCostumeListViewItem_o *v37; // x21
  __int64 v38; // x10
  __int64 v39; // x8
  __int64 v40; // x8
  __int128 v41; // q0
  Il2CppObject v42; // q0
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *v44; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-80h]
  Il2CppObject *entity; // [xsp+A8h] [xbp-58h] BYREF

  if ( (byte_4B19E75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantCostumeListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B19E75 = 1;
  }
  entity = 0LL;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_52;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             userSvtId,
             (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          goto LABEL_52;
        v25 = *(_DWORD *)(Instance + 24);
        if ( v25 >= 1 )
        {
          v26 = 0;
          while ( 1 )
          {
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v26,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_52;
            v27 = (ServantCostumeListViewItem_o *)Instance;
            methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low )
              goto LABEL_52;
            if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_52;
            v29 = *(_QWORD *)(Instance + 120);
            if ( !v29 )
              goto LABEL_52;
            v30 = *(_QWORD *)(v29 + 16);
            if ( v30 )
            {
              v31 = *(_OWORD *)(v30 + 32);
              *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
              *(_OWORD *)&v49.fields.fakeValue = v31;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
              v48 = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL);
              if ( !entity )
                goto LABEL_52;
              v32 = entity[2];
              *(Il2CppObject *)&v47.fields.currentCryptoKey = entity[1];
              *(Il2CppObject *)&v47.fields.fakeValue = v32;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL) )
                ServantCostumeListViewItem__ModifyItem(v27, (UserServantEntity_o *)entity, v33);
            }
            viewObject = (UnityEngine_Object_o *)v27->fields.viewObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
            if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
            {
              Instance = (int64_t)v27->fields.viewObject;
              if ( !Instance )
                goto LABEL_52;
              (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                Instance,
                v27,
                *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            if ( v25 == ++v26 )
              return;
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_52;
          }
        }
      }
      else
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_52;
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_52;
          v35 = *(_DWORD *)(Instance + 24);
          if ( v35 >= 1 )
          {
            v36 = 0;
            do
            {
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v36,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                break;
              v37 = (ServantCostumeListViewItem_o *)Instance;
              v38 = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v38 )
                break;
              if ( *(ServantCostumeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v38 - 8) != ServantCostumeListViewItem_TypeInfo )
                break;
              v39 = *(_QWORD *)(Instance + 120);
              if ( !v39 )
                break;
              v40 = *(_QWORD *)(v39 + 16);
              if ( v40 )
              {
                v41 = *(_OWORD *)(v40 + 32);
                *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v40 + 16);
                *(_OWORD *)&v49.fields.fakeValue = v41;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
                v46 = v49;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
                if ( !entity )
                  break;
                v42 = entity[2];
                *(Il2CppObject *)&v45.fields.currentCryptoKey = entity[1];
                *(Il2CppObject *)&v45.fields.fakeValue = v42;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL) )
                  ServantCostumeListViewItem__ModifyItem(v37, (UserServantEntity_o *)entity, v43);
              }
              v44 = (UnityEngine_Object_o *)v37->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
              if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
              {
                Instance = (int64_t)v37->fields.viewObject;
                if ( !Instance )
                  break;
                (*(void (__fastcall **)(int64_t, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                  Instance,
                  v37,
                  *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( v35 == ++v36 )
                return;
              Instance = (int64_t)this->fields.itemList;
            }
            while ( Instance );
LABEL_52:
            sub_1BCAA3C(Instance, v24);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B19E7D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19E7D = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_ServantCostumeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 4, sort, v18, -1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x10
  ServantCostumeListViewItem_o *Item; // x0
  __int64 v11; // x1
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v13; // x21
  _QWORD *p_baseUserSvtData; // x20
  __int128 v15; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v18; // q0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  PartyOrganizationUtility_o *v27; // x0
  int64_t v28; // x1
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct ServantCostumeItemInfo_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-50h]

  v4 = this;
  if ( (byte_4B19E7A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnClickSelectBase__, v5, v6);
    this = (ServantCostumeListViewManager_o *)sub_1BCA7E0(&ServantCostumeListViewObject_TypeInfo, v7, v8);
    byte_4B19E7A = 1;
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
  v13 = Item;
  p_baseUserSvtData = &v4->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_16;
  v15 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v33 = v34;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                              &v33,
                                              0LL);
  if ( !v13 )
    goto LABEL_26;
  servantData = v13->fields.servantData;
  if ( !servantData )
    goto LABEL_26;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_26;
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v18;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v32,
                                                    0LL) )
  {
LABEL_16:
    v29 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnClickSelectBase__);
    v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
    if ( v13 )
    {
      v31 = v13->fields.servantData;
      if ( v31 )
      {
        v28 = (int64_t)v31->fields.userServantEntity;
        v27 = (PartyOrganizationUtility_o *)&v4->fields.baseUserSvtData;
        *p_baseUserSvtData = v28;
        goto LABEL_21;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, obj);
  }
  v19 = Method_ServantCostumeListViewManager_OnClickSelectBase__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSelectBase__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnClickSelectBase__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0LL);
  *p_baseUserSvtData = 0LL;
  v27 = (PartyOrganizationUtility_o *)&v4->fields.baseUserSvtData;
  v28 = 0LL;
LABEL_21:
  sub_1BCA784(v27, v28, v21, v22, v23, v24, v25, v26);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B19E82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B19E82 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickSortButton(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B19E80 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnClickSortButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19E80 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_ServantCostumeListViewManager_OnClickSortButton__;
    if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnClickSortButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnClickSortButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 5, sort, 0, v18, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CombineRootComponent_o *Item; // x0
  const MethodInfo *v10; // x1
  __int64 methodPtr_low; // x10
  CombineRootComponent_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct NpCombineControl_o *npCombineCtr; // x8
  struct UserServantEntity_o *v20; // x1

  if ( (byte_4B19E7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnLongPushListView__, obj, method);
    sub_1BCA7E0(&ServantCostumeListViewObject_TypeInfo, v5, v6);
    byte_4B19E7B = 1;
  }
  v7 = Method_ServantCostumeListViewManager_OnLongPushListView__;
  if ( (*((_BYTE *)Method_ServantCostumeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeListViewManager_OnLongPushListView__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  if ( !obj )
    goto LABEL_15;
  methodPtr_low = LOBYTE(ServantCostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_15;
  if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewObject_TypeInfo )
    goto LABEL_15;
  Item = (CombineRootComponent_o *)ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v10);
  if ( !this->fields.scrollView
    || (v12 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0LL), !v12)
    || (npCombineCtr = v12->fields.npCombineCtr) == 0LL
    || (v20 = *(struct UserServantEntity_o **)&npCombineCtr->fields.m_CachedPtr,
        this->fields.selectUserSvtEntity = v20,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.selectUserSvtEntity,
          (int64_t)v20,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (Item = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(Item, v10);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnMoveEnd(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19E79 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19E79 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_ServantCostumeListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B19E78 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_ServantCostumeListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B19E78 = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      ServantCostumeListViewObject__Init_46193376((ServantCostumeListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall ServantCostumeListViewManager__ResetListViewInfo(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.baseUserSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserSvtData, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B19E7F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B19E7F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_46192696(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetMode_46192696(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_4B19E77 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    byte_4B19E77 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v9, 0LL) )
      goto LABEL_11;
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9
      || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL),
          (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(v9, v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0LL);
  }
LABEL_11:
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v10 = 2;
    else
      v10 = 3;
    ServantCostumeListViewManager__RequestListObject(this, v10, 0.0, v8);
  }
}


void __fastcall ServantCostumeListViewManager__SetMode_46192960(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_46192696(this, mode, v10);
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
  if ( (byte_4B19E76 & 1) == 0 )
  {
    this = (ServantCostumeListViewManager_o *)sub_1BCA7E0(&ServantCostumeListViewObject_TypeInfo, obj, item);
    byte_4B19E76 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCostumeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantCostumeListViewObject__Init_46192572((ServantCostumeListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.baseUserSvtData = baseSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserSvtData,
    (int64_t)baseSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4B19E74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, info, servantCostumeMaster);
    this = (ServantCostumeListViewManager_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10,
                                                v11);
    byte_4B19E74 = 1;
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
        sub_1BCAA44(this, info);
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
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
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
    sub_1BCAA3C(this, info);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B19E83 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B19E83 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_34;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_30:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(sort, v17);
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

  if ( (byte_4B19E6B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19E6B = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B19E6D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19E6D = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ServantCostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v19; // w21
  Il2CppObject *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B19E70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v13, v14);
    byte_4B19E70 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v19,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        break;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !objectList )
        break;
      v20 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantCostumeListViewObject__GetItem(
                                                                  (ServantCostumeListViewObject_o *)objectList,
                                                                  v16);
      if ( !objectList )
        break;
      v16 = (const MethodInfo *)objectList;
      if ( LOBYTE(objectList[2].monitor) )
      {
        objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)objectList,
                                                                    0LL);
        if ( ((unsigned __int8)objectList & 1) == 0 )
          continue;
      }
      if ( !v15 )
        break;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      v29 = v15->fields._size;
      if ( (unsigned int)v29 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v20,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v29;
        v15->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      }
      if ( size == ++v19 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v15;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_18:
    sub_1BCAA3C(objectList, v16);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v15;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B19E6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19E6F = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v17;
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

  if ( (byte_4B19E6C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B19E6C = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B19E6E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19E6E = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  ServantCostumeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A119E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11990;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = kind;
  if ( (byte_4B19E87 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&ServantCostumeListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B19E87 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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