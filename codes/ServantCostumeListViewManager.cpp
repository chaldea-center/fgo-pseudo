void __fastcall ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  ListViewSort_o *v17; // x20
  struct ServantCostumeListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EB90D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&ServantCostumeListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_4392/*"CostumeCombineList"*/, v11, v12, v13);
    byte_42EB90D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCostumeListViewManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_4392/*"CostumeCombineList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4392/*"CostumeCombineList"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v17, SORT_SAVE_KEY, 8, 1, 0LL);
  v18 = ServantCostumeListViewManager_TypeInfo->static_fields;
  v18->servantSortStatus = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v18->servantSortStatus,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__ChangeIconScale(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v14; // w8
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  struct ListViewSort_o *v17; // x8

  if ( (byte_42EB90C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB90C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = 1;
LABEL_12:
    this->fields.scaleType = v14;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (v17 = this->fields.sort) == 0LL)
    || (v17->fields.iconScaleKind = this->fields.scaleType, (sort = this->fields.sort) == 0LL) )
  {
    sub_B5D69C(sort, v5);
  }
  ListViewSort__Save(sort, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCostumeListViewManager__CreateList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x20
  ServantCostumeListViewManager_c *v27; // x8
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t m_CachedPtr; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v40; // x8
  unsigned __int64 v41; // x25
  ServantCostumeItemInfo_o *v42; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  UserServantEntity_o *v44; // x24
  ServantCostumeListViewItem_o *v45; // x22
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  __int64 v49; // x0
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB8F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantCostumeListViewItem_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantCostumeListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3473/*"COSTUME_SERVANT_LIST_MSG"*/, v14, v15, v16);
    byte_42EB8F9 = 1;
  }
  currentBase = 0LL;
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  currentBase = 0LL;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v19);
  v27 = ServantCostumeListViewManager_TypeInfo;
  if ( (BYTE3(ServantCostumeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v27 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v27->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_29;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_29;
  m_CachedPtr = bgTxtSprite[5].fields.m_CachedPtr;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = m_CachedPtr;
  bgTxtSprite = (UnityEngine_Component_o *)ListViewSort__GetScaleKindSpriteName(
                                             (ListViewSort_o *)bgTxtSprite,
                                             m_CachedPtr,
                                             0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_29;
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
      goto LABEL_18;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
LABEL_18:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !ServantCostumeItemInfoList )
    goto LABEL_29;
  v40 = *(_QWORD *)&ServantCostumeItemInfoList->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)v40 )
      {
        v49 = sub_B5D6C8(bgTxtSprite);
        sub_B5D668(v49, 0LL);
      }
      v42 = ServantCostumeItemInfoList->m_Items[v41];
      itemList = this->fields.itemList;
      v44 = currentBase;
      v45 = (ServantCostumeListViewItem_o *)sub_B5D694(ServantCostumeListViewItem_TypeInfo);
      ServantCostumeListViewItem___ctor(v45, v42, v44, v46);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v40) = ServantCostumeItemInfoList->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_24;
    }
LABEL_29:
    sub_B5D69C(bgTxtSprite, method);
  }
LABEL_24:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v47);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  bgTxtSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3473/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
  if ( !combineInfoMsgLabel )
    goto LABEL_29;
  UILabel__set_text(combineInfoMsgLabel, (System_String_o *)bgTxtSprite, 0LL);
}


ServantCostumeItemInfo_o *__fastcall ServantCostumeListViewManager__CreateServantCostumeItemInfo(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        UserServantMaster_o *userServantMaster,
        ServantCostumeMaster_o *servantCostumeMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x21
  void *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int v19; // w8
  void *v20; // x22
  unsigned int v21; // w26
  __int64 v22; // x8
  ServantLeaderInfo_o *v23; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // x0

  if ( (byte_42EB8FB & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeItemInfo_TypeInfo, svtId, (_DWORD)userServantMaster, servantCostumeMaster);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v10, v11, v12);
    byte_42EB8FB = 1;
  }
  v13 = sub_B5D694(ServantCostumeItemInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !userServantMaster )
    goto LABEL_19;
  v14 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0LL);
  if ( !v14 )
  {
    if ( servantCostumeMaster )
    {
      v14 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, v17);
      if ( v14 )
      {
        v19 = *((_DWORD *)v14 + 6);
        v20 = v14;
        if ( v19 < 1 )
          return (ServantCostumeItemInfo_o *)v13;
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
          {
            v37 = sub_B5D6C8(v14);
            sub_B5D668(v37, 0LL);
          }
          v22 = *((_QWORD *)v20 + (int)v21 + 4);
          if ( !v22 || !servantCostumeReleaseMaster )
            break;
          v14 = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                          servantCostumeReleaseMaster,
                          svtId,
                          *(_DWORD *)(v22 + 20),
                          v18);
          if ( ((unsigned __int8)v14 & 1) != 0 )
          {
            v23 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
            ServantLeaderInfo___ctor_29348816(v23, svtId, 0, 1, 0LL);
            if ( !v13 )
              break;
            *(_BYTE *)(v13 + 32) = 0;
            *(_QWORD *)(v13 + 16) = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), 0LL, v24, v25, v26, v27, v28, v29);
            *(_QWORD *)(v13 + 24) = v23;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v13 + 24),
              (System_Int32_array **)v23,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            *(_BYTE *)(v13 + 32) = 0;
            *(_DWORD *)(v13 + 35) = 0;
            *(_QWORD *)(v13 + 40) = 0LL;
            *(_QWORD *)(v13 + 48) = 0LL;
          }
          v19 = *((_DWORD *)v20 + 6);
          if ( (int)++v21 >= v19 )
            return (ServantCostumeItemInfo_o *)v13;
        }
      }
    }
LABEL_19:
    sub_B5D69C(v14, v15);
  }
  if ( !v13 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData((ServantCostumeItemInfo_o *)v13, (UserServantEntity_o *)v14, v16);
  return (ServantCostumeItemInfo_o *)v13;
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall ServantCostumeListViewManager__EndSelectFilterKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EB906 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB906 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EB909 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB909 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantCostumeListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v14; // w23
  int64_t v15; // x21
  ServantCostumeListViewManager_o **v16; // x8
  __int64 v17; // x11

  v5 = this;
  if ( (byte_42EB904 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantCostumeListViewManager_o *)sub_B5D5C4(&ServantCostumeListViewItem_TypeInfo, v9, v10, v11);
    byte_42EB904 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = (ServantCostumeListViewManager_o **)itemList->fields._items->m_Items[v14];
      if ( !v16 )
        break;
      v17 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v16)->fields.oldScrollPosition.fields.y) < (unsigned int)v17
        || *((ServantCostumeListViewItem_c **)(*v16)->fields.objectList + v17 - 1) != ServantCostumeListViewItem_TypeInfo )
      {
        break;
      }
      if ( *((ServantCostumeListViewItem_c **)(*v16)->fields.objectList
           + *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1)
           - 1) != ServantCostumeListViewItem_TypeInfo )
        v16 = 0LL;
      this = v16[15];
      if ( !this )
        break;
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(
                                                  (ServantCostumeItemInfo_o *)this,
                                                  *(const MethodInfo **)&svtId);
      ++v14;
      if ( (_DWORD)this == svtId )
        ++v15;
      if ( v14 >= size )
        return v15;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_18:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x21
  int64_t Instance; // x0
  const MethodInfo *v49; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  ServantCostumeMaster_o *v51; // x23
  ServantCostumeReleaseMaster_o *v52; // x24
  UserServantCollectionMaster_o *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  MethodInfo *v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x8
  int64_t v61; // x26
  unsigned __int64 v62; // x28
  int64_t v63; // x27
  int size; // w8
  __int64 v65; // x24
  __int64 v66; // x8
  __int64 v67; // x22
  __int128 v68; // q0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v70; // q0
  int64_t v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  WarBoardManager_TaskList_o *v78; // x22
  __int64 v80; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-70h]

  if ( (byte_42EB8FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, (_DWORD)currentBase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    byte_42EB8FA = 1;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v51 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v52 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v51 )
    goto LABEL_40;
  v53 = (UserServantCollectionMaster_o *)Instance;
  Instance = (int64_t)ServantCostumeMaster__GetCostumeSvtIdList(v51, v49);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Instance )
    goto LABEL_40;
  v60 = *(_QWORD *)(Instance + 24);
  v61 = Instance;
  if ( (int)v60 >= 1 )
  {
    v62 = 0LL;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)v60 )
      {
        v80 = sub_B5D6C8(Instance);
        sub_B5D668(v80, 0LL);
      }
      Instance = (int64_t)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                            (ServantCostumeListViewManager_o *)Instance,
                            *(_DWORD *)(v61 + 32 + 4 * v62),
                            MasterData_WarQuestSelectionMaster,
                            v51,
                            v52,
                            v57);
      if ( !Instance )
        break;
      v63 = Instance;
      if ( *(_QWORD *)(Instance + 16) || *(_QWORD *)(Instance + 24) )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          (ServantCostumeListViewManager_o *)Instance,
          (ServantCostumeItemInfo_o *)Instance,
          v51,
          v53,
          v52,
          v57);
        if ( !*(_BYTE *)(v63 + 38) )
        {
          if ( !v47 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__);
        }
      }
      LODWORD(v60) = *(_DWORD *)(v61 + 24);
      if ( (__int64)++v62 >= (int)v60 )
        goto LABEL_20;
    }
LABEL_40:
    sub_B5D69C(Instance, v49);
  }
LABEL_20:
  *currentBase = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)currentBase, 0LL, v54, v55, v56, (System_Int32_array **)v57, v58, v59);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v47 )
      goto LABEL_40;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v47 )
    goto LABEL_40;
  size = v47->fields._size;
  if ( size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v65 = 4LL;
  do
  {
    if ( size <= (unsigned int)(v65 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v66 = *((_QWORD *)&v47->fields._items->obj.klass + v65);
    if ( !v66 )
      goto LABEL_40;
    v67 = *(_QWORD *)(v66 + 16);
    if ( v67 )
    {
      v68 = *(_OWORD *)(v67 + 32);
      *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v67 + 16);
      *(_OWORD *)&v84.fields.fakeValue = v68;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v83 = v84;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v83, 0LL);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_40;
      v70 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      v71 = Instance;
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v70;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v82, 0LL);
      if ( v71 == Instance )
      {
        *currentBase = (UserServantEntity_o *)v67;
        sub_B5D560(
          (BattleServantConfConponent_o *)currentBase,
          (System_Int32_array **)v67,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        if ( v47->fields._size <= (unsigned int)(v65 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v78 = (WarBoardManager_TaskList_o *)*((_QWORD *)&v47->fields._items->obj.klass + v65);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v47,
          v78,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v47,
          0,
          (XWeaponTrail_Element_o *)v78,
          (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    size = v47->fields._size;
    ++v65;
  }
  while ( (int)v65 - 4 < size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void __fastcall ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 Instance; // x0
  __int64 v34; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v37; // x23
  ServantCostumeListViewItem_o *v38; // x20
  __int64 v39; // x10
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v42; // q0
  __int128 v43; // q0
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x20
  signed __int64 v47; // x22
  unsigned __int64 v48; // x23
  ServantCostumeListViewItem_o *v49; // x20
  __int64 v50; // x10
  struct ServantCostumeItemInfo_o *v51; // x8
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q0
  __int128 v54; // q0
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *v56; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+80h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+A8h] [xbp-48h] BYREF

  if ( (byte_42EB8FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantCostumeListViewItem_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42EB8FD = 1;
  }
  entity = 0LL;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_60;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   userSvtId,
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_60;
        size = itemList->fields._size;
        if ( (int)size >= 1 )
        {
          v37 = 0LL;
          while ( 1 )
          {
            if ( v37 >= (unsigned int)itemList->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v38 = (ServantCostumeListViewItem_o *)itemList->fields._items->m_Items[v37];
            if ( !v38 )
              goto LABEL_60;
            v39 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v39 )
              goto LABEL_60;
            if ( (ServantCostumeListViewItem_c *)v38->klass->_2.typeHierarchy[v39 - 1] != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_60;
            servantData = v38->fields.servantData;
            if ( !servantData )
              goto LABEL_60;
            userServantEntity = servantData->fields.userServantEntity;
            if ( userServantEntity )
            {
              v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v61.fields.fakeValue = v42;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v60 = v61;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
              if ( !entity )
                goto LABEL_60;
              v43 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
              *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v59.fields.fakeValue = v43;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL) )
                ServantCostumeListViewItem__ModifyItem(v38, entity, v44);
            }
            viewObject = (UnityEngine_Object_o *)v38->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v38->fields.viewObject;
              if ( !Instance )
                goto LABEL_60;
              Instance = (*(__int64 (__fastcall **)(__int64, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v38,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
            }
            if ( (__int64)++v37 >= size )
              return;
            itemList = this->fields.itemList;
            if ( !itemList )
              goto LABEL_60;
          }
        }
      }
      else
      {
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_60;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_60;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                     &entity,
                     userSvtId,
                     (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          v46 = this->fields.itemList;
          if ( !v46 )
            goto LABEL_60;
          v47 = v46->fields._size;
          if ( (int)v47 >= 1 )
          {
            v48 = 0LL;
            do
            {
              if ( v48 >= (unsigned int)v46->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v49 = (ServantCostumeListViewItem_o *)v46->fields._items->m_Items[v48];
              if ( !v49 )
                break;
              v50 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v49->klass->_2.bitflags2 + 1) < (unsigned int)v50 )
                break;
              if ( (ServantCostumeListViewItem_c *)v49->klass->_2.typeHierarchy[v50 - 1] != ServantCostumeListViewItem_TypeInfo )
                break;
              v51 = v49->fields.servantData;
              if ( !v51 )
                break;
              v52 = v51->fields.userServantEntity;
              if ( v52 )
              {
                v53 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
                *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v61.fields.fakeValue = v53;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v58 = v61;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL);
                if ( !entity )
                  break;
                v54 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v57.fields.fakeValue = v54;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v57, 0LL) )
                  ServantCostumeListViewItem__ModifyItem(v49, entity, v55);
              }
              v56 = (UnityEngine_Object_o *)v49->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v49->fields.viewObject;
                if ( !Instance )
                  break;
                Instance = (*(__int64 (__fastcall **)(__int64, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                             Instance,
                             v49,
                             *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( (__int64)++v48 >= v47 )
                return;
              v46 = this->fields.itemList;
            }
            while ( v46 );
LABEL_60:
            sub_B5D69C(Instance, v34);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB905 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCostumeListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB905 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu(v16, 4, sort, v17, -1, 0LL);
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
  __int64 v3; // x3
  ServantCostumeListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x10
  __int64 v13; // x10
  ListViewObject_o *v14; // x0
  ServantCostumeListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v17; // x21
  _QWORD *p_baseUserSvtData; // x20
  __int128 v19; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleServantConfConponent_o *v29; // x0
  System_Int32_array **v30; // x1
  struct ServantCostumeItemInfo_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-40h]

  v5 = this;
  if ( (byte_42EB902 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&ServantCostumeListViewObject_TypeInfo, v6, v7, v8);
    this = (ServantCostumeListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EB902 = 1;
  }
  if ( !obj )
    goto LABEL_34;
  v12 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    goto LABEL_34;
  }
  v13 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
  {
    if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v13 - 1] == ServantCostumeListViewObject_TypeInfo )
      v14 = obj;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  Item = ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)v14, (const MethodInfo *)obj);
  baseUserSvtData = v5->fields.baseUserSvtData;
  v17 = Item;
  p_baseUserSvtData = &v5->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_37;
  v19 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v33 = v34;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                              &v33,
                                              0LL);
  if ( !v17 )
    goto LABEL_34;
  servantData = v17->fields.servantData;
  if ( !servantData )
    goto LABEL_34;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v22;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v32,
                                                    0LL) )
  {
LABEL_37:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( v17 )
    {
      v31 = v17->fields.servantData;
      if ( v31 )
      {
        v30 = (System_Int32_array **)v31->fields.userServantEntity;
        v29 = (BattleServantConfConponent_o *)&v5->fields.baseUserSvtData;
        *p_baseUserSvtData = v30;
        goto LABEL_29;
      }
    }
LABEL_34:
    sub_B5D69C(this, obj);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  *p_baseUserSvtData = 0LL;
  v29 = (BattleServantConfConponent_o *)&v5->fields.baseUserSvtData;
  v30 = 0LL;
LABEL_29:
  sub_B5D560(v29, v30, v23, v24, v25, v26, v27, v28);
  this = (ServantCostumeListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_34;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v5->fields.baseUserSvtData != 0LL, 0LL);
  this = (ServantCostumeListViewManager_o *)v5->fields.combineRootComponent;
  if ( !this )
    goto LABEL_34;
  if ( HIDWORD(this->fields.callbackFunc) == 8 )
    CombineRootComponent__ShowSelectCostumeBaseSvt((CombineRootComponent_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnClickSortAscendingOrder(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EB90A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB90A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickSortButton(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB908 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCostumeListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB908 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 5, sort, 0, v17, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CombineRootComponent_o *Item; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x10
  CombineRootComponent_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct LimitCntUpControl_o *limitCntCtr; // x8
  struct UserServantEntity_o *v20; // x1

  if ( (byte_42EB903 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42EB903 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_16;
  v11 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    goto LABEL_16;
  if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != ServantCostumeListViewObject_TypeInfo )
    goto LABEL_16;
  Item = (CombineRootComponent_o *)ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v10);
  if ( !this->fields.scrollView
    || (v12 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0LL), !v12)
    || (limitCntCtr = v12->fields.limitCntCtr) == 0LL
    || (v20 = *(struct UserServantEntity_o **)&limitCntCtr->fields.m_CachedPtr,
        this->fields.selectUserSvtEntity = v20,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.selectUserSvtEntity,
          (System_Int32_array **)v20,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (Item = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(Item, v10);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnMoveEnd(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB901 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB901 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v12, v13, v14, v15, v16, v17);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_ServantCostumeListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantCostumeListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  ServantCostumeListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB900 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantCostumeListViewManager_OnMoveEnd__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42EB900 = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v23 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v24 = ObjectList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCostumeListViewObject__Init(v27, mode, v28, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(ObjectList, v21);
    }
  }
}


void __fastcall ServantCostumeListViewManager__ResetListViewInfo(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUserSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUserSvtData, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EB907 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EB907 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30787164(this, mode, v10);
}


void __fastcall ServantCostumeListViewManager__SetMode_30787164(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_42EB8FF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    byte_42EB8FF = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v9, 0LL) )
      goto LABEL_12;
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9
      || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL),
          (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_18:
      sub_B5D69C(v9, v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0LL);
  }
LABEL_12:
  if ( mode == 1 )
  {
    v10 = 2;
LABEL_16:
    ServantCostumeListViewManager__RequestListObject(this, v10, 0.0, v8);
    return;
  }
  if ( mode == 2 )
  {
    v10 = 3;
    goto LABEL_16;
  }
}


void __fastcall ServantCostumeListViewManager__SetMode_30787444(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30787164(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42EB8FE & 1) == 0 )
  {
    this = (ServantCostumeListViewManager_o *)sub_B5D5C4(
                                                &ServantCostumeListViewObject_TypeInfo,
                                                (_DWORD)obj,
                                                (_DWORD)item,
                                                method);
    byte_42EB8FE = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  ServantCostumeListViewObject__Init(
    (ServantCostumeListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUserSvtData = baseSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUserSvtData,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)method,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  ServantCostumeListViewManager_o *v15; // x22
  unsigned int v16; // w28
  int v17; // w27
  int v18; // w26
  int32_t v19; // w25
  int32_t v20; // w24
  const MethodInfo *v21; // x1
  int64_t v22; // x0
  const MethodInfo *v23; // x4
  ServantCostumeEntity_o *v24; // x23
  const MethodInfo *v25; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t SvtId; // w24
  const MethodInfo *v28; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v30; // x4
  EventCombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v32; // x1
  __int64 v33; // x0

  if ( (byte_42EB8FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventCombineCostumeMaster___,
      (_DWORD)info,
      (_DWORD)servantCostumeMaster,
      userServantCollectionMaster);
    this = (ServantCostumeListViewManager_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10,
                                                v11,
                                                v12);
    byte_42EB8FC = 1;
  }
  if ( !info )
    goto LABEL_38;
  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
  if ( !servantCostumeMaster )
    goto LABEL_38;
  this = (ServantCostumeListViewManager_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                              servantCostumeMaster,
                                              (int32_t)this,
                                              0,
                                              v13);
  if ( !this )
    goto LABEL_38;
  dropObjectList = this->fields.dropObjectList;
  v15 = this;
  if ( (int)dropObjectList >= 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)dropObjectList )
      {
        v33 = sub_B5D6C8(this);
        sub_B5D668(v33, 0LL);
      }
      v24 = (ServantCostumeEntity_o *)*((_QWORD *)&v15->fields.indicator + (int)v16);
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
      if ( !v24 || !userServantCollectionMaster )
        break;
      this = (ServantCostumeListViewManager_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                  userServantCollectionMaster,
                                                  (int32_t)this,
                                                  v24->fields.id,
                                                  0LL);
      info->fields.isCostumeGet |= (unsigned __int8)this & 1;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        ++v19;
      }
      else
      {
        this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
        if ( !servantCostumeReleaseMaster )
          break;
        this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                    servantCostumeReleaseMaster,
                                                    (int32_t)this,
                                                    v24->fields.id,
                                                    v25);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          info->fields.isReleaseItemHaving = 1;
          ++v18;
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__IsEventCombineCostume(
                                                      v24,
                                                      (const MethodInfo *)info);
          userServantEntity = info->fields.userServantEntity;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( userServantEntity )
            {
              if ( !info->fields.isEventItemOpenCond )
              {
                SvtId = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
                UserSvtId = ServantCostumeItemInfo__get_UserSvtId(info, v28);
                this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                            servantCostumeReleaseMaster,
                                                            v24,
                                                            SvtId,
                                                            UserSvtId,
                                                            v30);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_WarQuestSelectionMaster = (EventCombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
                  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, v32);
                  if ( !MasterData_WarQuestSelectionMaster )
                    break;
                  this = (ServantCostumeListViewManager_o *)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (int32_t)this,
                                                              v24->fields.id,
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
            v20 = ServantCostumeItemInfo__get_SvtId(info, (const MethodInfo *)info);
            v22 = ServantCostumeItemInfo__get_UserSvtId(info, v21);
            this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                        servantCostumeReleaseMaster,
                                                        v24,
                                                        v20,
                                                        v22,
                                                        v23);
            info->fields.isCanRelease = (unsigned __int8)this & 1;
          }
        }
        else
        {
          v17 += ((unsigned int)v24->fields.flag >> 6) & 1;
        }
      }
      dropObjectList = v15->fields.dropObjectList;
      if ( (int)++v16 >= (int)dropObjectList )
        goto LABEL_33;
    }
LABEL_38:
    sub_B5D69C(this, info);
  }
  v19 = 0;
  v18 = 0;
  v17 = 0;
LABEL_33:
  if ( v19 == (_DWORD)dropObjectList )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v18 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  info->fields.allCostumeNum = (int)dropObjectList;
  info->fields.releaseCostumeNum = v19;
  info->fields.isHide = v17 == (_DWORD)dropObjectList;
  info->fields.notHavingCostumeNum = (_DWORD)dropObjectList - v19;
  info->fields.notHavingReleaseItemNum = (_DWORD)dropObjectList - (v19 + v18);
}


void __fastcall ServantCostumeListViewManager__SetSortButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8

  if ( (byte_42EB90B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EB90B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_36;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  ServantCostumeListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB8F3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB8F3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v8->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantCostumeListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB8F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB8F5 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantCostumeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v25; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x21

  if ( (byte_42EB8F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v17, v18, v19);
    byte_42EB8F8 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v25 = 0;
    do
    {
      if ( objectList->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v25];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantCostumeListViewObject__GetItem(
                                                              (ServantCostumeListViewObject_o *)Component_srcLineSprite,
                                                              v22);
      if ( !Component_srcLineSprite )
        break;
      v22 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v26,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (int)++v25 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v20;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v20;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42EB8F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EB8F7 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v23;
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB8F4 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB8F4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v8->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantCostumeListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EB8F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB8F6 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantCostumeListViewManager__get_ObjectList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantCostumeListViewManager_CallbackFunc__BeginInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_42E5D4D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, index, callback);
    sub_B5D5C4(&ServantCostumeListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5D4D = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc__Invoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantCostumeListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantCostumeListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  ServantCostumeListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantCostumeListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}