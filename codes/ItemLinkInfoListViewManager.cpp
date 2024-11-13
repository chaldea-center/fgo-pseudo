void __fastcall ItemLinkInfoListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B18200 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoListViewManager_TypeInfo, v1, v2);
    byte_4B18200 = 1;
  }
  LODWORD(ItemLinkInfoListViewManager_TypeInfo->static_fields->BOARD_OFFSET_X) = (struct ItemLinkInfoListViewManager_StaticFields)1115815936;
}


void __fastcall ItemLinkInfoListViewManager___ctor(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B181FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10);
    byte_4B181FF = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewObject__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject___ctor__);
  this->fields.itemLinkInfoObjectList = (struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemLinkInfoObjectList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ItemLinkInfoListViewManager__CoCreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isSynchro,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B181FA & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList, isSynchro);
    byte_4B181FA = 1;
  }
  v6 = sub_1BCAA2C(ItemLinkInfoListViewManager__CoCreateList_d__17_TypeInfo, itemLinkInfoGroupList, isSynchro, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = itemLinkInfoGroupList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)itemLinkInfoGroupList, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoListViewManager__CreateList(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
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
  __int64 v15; // x1
  UnityEngine_Object_o *noneDataLabel; // x22
  UnityEngine_Component_o *HasViewItem; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  ItemLinkInfoListViewManager_o *gameObject; // x22
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  UILabel_o *v23; // x22
  System_Collections_IEnumerator_o *List; // x1

  if ( (byte_4B181F8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___,
      itemLinkInfoGroupList,
      isDispStoneDetail);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Count__,
      v7,
      v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_7551/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, v13, v14);
    byte_4B181F8 = 1;
  }
  ItemLinkInfoListViewManager__DestroyList(this, (const MethodInfo *)itemLinkInfoGroupList);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemLinkInfoGroupList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewManager_ItemLinkInfoGroup___) )
  {
    noneDataLabel = (UnityEngine_Object_o *)this->fields.noneDataLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    HasViewItem = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(noneDataLabel, 0LL, 0LL);
    if ( ((unsigned __int8)HasViewItem & 1) != 0 )
    {
      HasViewItem = (UnityEngine_Component_o *)this->fields.noneDataLabel;
      if ( !HasViewItem )
        goto LABEL_18;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(HasViewItem, 0LL);
      HasViewItem = (UnityEngine_Component_o *)ItemLinkInfoListViewManager__HasViewItem(
                                                 gameObject,
                                                 itemLinkInfoGroupList,
                                                 v21);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        ((unsigned __int8)HasViewItem & 1) == 0,
        0LL);
      v23 = this->fields.noneDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      HasViewItem = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7551/*"ITEM_LINK_INFO_LIST_NONE_DATA_LABEL"*/, 0LL);
      if ( !v23 )
        goto LABEL_18;
      UILabel__set_text(v23, (System_String_o *)HasViewItem, 0LL);
    }
    if ( itemLinkInfoGroupList )
    {
      if ( itemLinkInfoGroupList->fields._size >= 2 )
      {
        List = ItemLinkInfoListViewManager__CoCreateList(this, itemLinkInfoGroupList, 0, v19);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, List, 0LL);
      }
      else
      {
        ItemLinkInfoListViewManager__CreateListSub(this, itemLinkInfoGroupList, isDispStoneDetail, v19);
      }
      return;
    }
LABEL_18:
    sub_1BCAA3C(HasViewItem, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoListViewManager__CreateListSub(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoListViewManager_o *v6; // x19
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float y; // s11
  float x; // s9
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x22
  UnityEngine_Object_o *monitor; // x21
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x3
  UnityEngine_Component_o *v41; // x21
  __int64 v42; // x0
  __int64 v43; // x1
  float ItemDetailOffsetPositionY; // s0
  float v45; // s10
  ItemLinkInfoListViewManager_o *gameObject; // x0
  const MethodInfo *v47; // x2
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  int *v63; // x8
  System_Collections_Generic_List_object__o *klass; // x21
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x23
  _BOOL8 v67; // x0
  __int64 v68; // x1
  ItemLinkInfoSubHeaderObject_o *v69; // x23
  UnityEngine_GameObject_o *v70; // x24
  float v71; // s1
  ItemLinkInfoListViewManager_o *v72; // x0
  const MethodInfo *v73; // x2
  System_Collections_Generic_List_object__o *v74; // x24
  Il2CppObject *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x1
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  UnityEngine_Object_o *v87; // x23
  _BOOL8 v88; // x0
  __int64 v89; // x1
  UnityEngine_Component_o *v90; // x22
  UnityEngine_GameObject_o *v91; // x23
  float v92; // s1
  ItemLinkInfoListViewManager_o *v93; // x0
  const MethodInfo *v94; // x2
  System_Collections_Generic_List_object__o *v95; // x23
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int32_t v108; // w22
  __int64 v109; // x1
  ItemLinkInfoListViewItem_o *Item; // x25
  Il2CppObject *baseViewItemPrefab; // x23
  Il2CppObject *v112; // x23
  _BOOL8 v113; // x0
  __int64 v114; // x1
  Il2CppObject *Component_object; // x0
  __int64 v116; // x1
  ItemLinkInfoListViewObject_o *v117; // x24
  ItemLinkInfoListViewManager_c *v118; // x0
  __int64 v119; // x1
  const MethodInfo *v120; // x2
  float Height; // s0
  float v122; // s10
  float BOARD_OFFSET_X; // s0
  float v124; // s13
  __int64 v125; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x8
  __int64 v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  System_Collections_Generic_List_object__o *v147; // x0
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x8
  UIScrollView_o *scrollView; // x0
  bool isDispStoneDetaila; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v155; // [xsp+20h] [xbp-C0h] BYREF

  v6 = this;
  if ( (byte_4B181F9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
      itemLinkInfoGroupList,
      isDispStoneDetail);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v13, v14);
    sub_1BCA7E0(&ItemLinkInfoListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v21,
      v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    this = (ItemLinkInfoListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    byte_4B181F9 = 1;
  }
  memset(&v155, 0, sizeof(v155));
  if ( !byte_4B109C1 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BCA7E0(
                                              &UnityEngine_Vector3_TypeInfo,
                                              itemLinkInfoGroupList,
                                              isDispStoneDetail);
    byte_4B109C1 = 1;
  }
  if ( !itemLinkInfoGroupList )
    sub_1BCAA3C(this, itemLinkInfoGroupList);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  x = static_fields->zeroVector.fields.x;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v154,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  isDispStoneDetaila = isDispStoneDetail;
  v155 = v154;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v155,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    if ( !v35 )
      break;
    current = v155.fields._current;
    if ( !v155.fields._current )
      sub_1BCAA3C(v35, v36);
    monitor = (UnityEngine_Object_o *)v155.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    v39 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( v39 )
    {
      v41 = (UnityEngine_Component_o *)current[1].monitor;
      ItemDetailOffsetPositionY = ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
                                    (ItemLinkInfoListViewManager_o *)v39,
                                    (ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)current,
                                    isDispStoneDetaila,
                                    v40);
      if ( !v41 )
        sub_1BCAA3C(v42, v43);
      v45 = ItemDetailOffsetPositionY;
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(v41, 0LL);
      ItemLinkInfoListViewManager__InitTransform(gameObject, (UnityEngine_GameObject_o *)gameObject, x, y + v45, z, v47);
      objectList = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
      v49 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v41, 0LL);
      v56 = (int64_t)v49;
      if ( !objectList )
        sub_1BCAA3C(v49, v49);
      items = objectList->fields._items;
      v58 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BCAA3C(v49, v49);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v49,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v56;
        sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), v56, v50, v51, v52, v53, v54, v55);
      }
      v63 = (int *)v41[2].monitor;
      if ( !v63 )
        sub_1BCAA3C(v61, v62);
      y = y - (float)(*(float *)&v41[3].fields.m_CachedPtr + (float)v63[43]);
    }
    klass = (System_Collections_Generic_List_object__o *)current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)current[3].klass,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v66 = (UnityEngine_Object_o *)current[2].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
      v67 = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
      if ( v67 )
      {
        v69 = (ItemLinkInfoSubHeaderObject_o *)current[2].klass;
        if ( !v69 )
          sub_1BCAA3C(v67, v68);
        v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current[2].klass, 0LL);
        v71 = (float)(y + (float)(ItemLinkInfoSubHeaderObject__get_Height(v69, 0LL) * -0.5)) + 1.0;
        ItemLinkInfoListViewManager__InitTransform(v72, v70, x, v71, z, v73);
        v74 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v75 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
        v82 = (int64_t)v75;
        if ( !v74 )
          sub_1BCAA3C(v75, v75);
        v83 = v74->fields._items;
        v84 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v74->fields._version;
        if ( !v83 )
          sub_1BCAA3C(v75, v75);
        v85 = v74->fields._size;
        if ( (unsigned int)v85 >= v83->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            v75,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &v83->obj.klass + v85;
          v74->fields._size = v85 + 1;
          v86[4] = (Il2CppClass *)v82;
          sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), v82, v76, v77, v78, v79, v80, v81);
        }
        y = y - ItemLinkInfoSubHeaderObject__get_Height(v69, 0LL);
      }
      v87 = (UnityEngine_Object_o *)current[2].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
      v88 = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
      if ( v88 )
      {
        v90 = (UnityEngine_Component_o *)current[2].monitor;
        if ( !v90 )
          sub_1BCAA3C(v88, v89);
        v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
        v92 = y + (float)(ItemLinkInfoTextObject__get_Height((ItemLinkInfoTextObject_o *)v90, 0LL) * -0.5);
        ItemLinkInfoListViewManager__InitTransform(v93, v91, x, v92, z, v94);
        v95 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
        v96 = (Il2CppObject *)UnityEngine_Component__get_gameObject(v90, 0LL);
        v103 = (int64_t)v96;
        if ( !v95 )
          sub_1BCAA3C(v96, v96);
        v104 = v95->fields._items;
        v105 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v95->fields._version;
        if ( !v104 )
          sub_1BCAA3C(v96, v96);
        v106 = v95->fields._size;
        if ( (unsigned int)v106 >= v104->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v95,
            v96,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &v104->obj.klass + v106;
          v95->fields._size = v106 + 1;
          v107[4] = (Il2CppClass *)v103;
          sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), v103, v97, v98, v99, v100, v101, v102);
        }
        y = y - ItemLinkInfoTextObject__get_Height((ItemLinkInfoTextObject_o *)v90, 0LL);
      }
      if ( klass->fields._size >= 1 )
      {
        v108 = 0;
        do
        {
          Item = (ItemLinkInfoListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 klass,
                                                 v108,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
          baseViewItemPrefab = (Il2CppObject *)v6->fields.baseViewItemPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
          v112 = UnityEngine_Object__Instantiate_object_(
                   baseViewItemPrefab,
                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          v113 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v112, 0LL, 0LL);
          if ( !v113 )
          {
            if ( !v112 )
              sub_1BCAA3C(v113, v114);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v112,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
            v117 = (ItemLinkInfoListViewObject_o *)Component_object;
            if ( !Component_object )
              sub_1BCAA3C(0LL, v116);
            ItemLinkInfoListViewObject__SetItem((ItemLinkInfoListViewObject_o *)Component_object, Item, 0LL);
            GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v112, v6->fields.listParent, 0LL);
            Height = ItemLinkInfoListViewObject__GetHeight(v117, 0LL);
            if ( !Item )
              sub_1BCAA3C(v118, v119);
            v122 = Height;
            BOARD_OFFSET_X = -1.0;
            if ( Item->fields._IsItemGetInfoList_k__BackingField )
              v124 = 0.0;
            else
              v124 = -1.0;
            if ( Item->fields._IsItemGetInfoList_k__BackingField )
            {
              v118 = ItemLinkInfoListViewManager_TypeInfo;
              if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo, v119);
                v118 = ItemLinkInfoListViewManager_TypeInfo;
              }
              BOARD_OFFSET_X = v118->static_fields->BOARD_OFFSET_X;
            }
            ItemLinkInfoListViewManager__InitTransform(
              (ItemLinkInfoListViewManager_o *)v118,
              (UnityEngine_GameObject_o *)v112,
              x + BOARD_OFFSET_X,
              y - (float)((float)(v122 * 0.5) + v124),
              z,
              v120);
            listParent = v6->fields.listParent;
            if ( !listParent )
              sub_1BCAA3C(0LL, v125);
            layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
            UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v112, layer, 0LL);
            itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)v6->fields.itemLinkInfoObjectList;
            if ( !itemLinkInfoObjectList )
              sub_1BCAA3C(0LL, v128);
            v136 = itemLinkInfoObjectList->fields._items;
            v137 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
            ++itemLinkInfoObjectList->fields._version;
            if ( !v136 )
              sub_1BCAA3C(itemLinkInfoObjectList, v128);
            v138 = itemLinkInfoObjectList->fields._size;
            if ( (unsigned int)v138 >= v136->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemLinkInfoObjectList,
                (Il2CppObject *)v117,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
            }
            else
            {
              v139 = &v136->obj.klass + v138;
              itemLinkInfoObjectList->fields._size = v138 + 1;
              v139[4] = (Il2CppClass *)v117;
              sub_1BCA784((PartyOrganizationUtility_o *)(v139 + 4), (int64_t)v117, v129, v130, v131, v132, v133, v134);
            }
            v147 = (System_Collections_Generic_List_object__o *)v6->fields.objectList;
            if ( !v147 )
              sub_1BCAA3C(0LL, v140);
            v148 = v147->fields._items;
            v149 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v147->fields._version;
            if ( !v148 )
              sub_1BCAA3C(v147, v140);
            v150 = v147->fields._size;
            if ( (unsigned int)v150 >= v148->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v147,
                v112,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
            }
            else
            {
              v151 = &v148->obj.klass + v150;
              v147->fields._size = v150 + 1;
              v151[4] = (Il2CppClass *)v112;
              sub_1BCA784((PartyOrganizationUtility_o *)(v151 + 4), (int64_t)v112, v141, v142, v143, v144, v145, v146);
            }
            y = y - (float)(v122 + v6->fields.boardSpace);
          }
          ++v108;
        }
        while ( v108 < klass->fields._size );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v155,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  scrollView = v6->fields.scrollView;
  if ( scrollView )
    UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall ItemLinkInfoListViewManager__DeleteCallback(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ItemLinkInfoListViewObject__o *itemLinkInfoObjectList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B181FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__, v8, v9);
    byte_4B181FE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemLinkInfoObjectList = this->fields.itemLinkInfoObjectList;
  if ( itemLinkInfoObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemLinkInfoObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1BCAA3C(0LL, v11);
      ItemLinkInfoListViewObject__DeleteCallback((ItemLinkInfoListViewObject_o *)v12.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewObject__Dispose__);
  }
}


void __fastcall ItemLinkInfoListViewManager__DestroyList(ItemLinkInfoListViewManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B181FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B181FC = 1;
  }
  memset(&v24, 0, sizeof(v24));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v15 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v15, v16);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24.fields._current, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v19 = this->fields.objectList;
  if ( !v19 )
    goto LABEL_20;
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ItemLinkInfoListViewManager__GetItemDetailOffsetPositionY(
        ItemLinkInfoListViewManager_o *this,
        ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *itemLinkInfoGroup,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  float v6; // s8
  struct ItemLinkInfoDetailObject_o *itemDetailObj; // x19
  struct UIWidget_o *widget; // x8
  float v9; // s1
  float mHeight; // s0
  struct UILabel_o *itemDetailLabel; // x8
  struct UIWidget_o *v12; // x9
  float v13; // s0
  float v14; // s1

  if ( (byte_4B181FB & 1) == 0 )
  {
    this = (ItemLinkInfoListViewManager_o *)sub_1BCA7E0(
                                              &Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___,
                                              itemLinkInfoGroup,
                                              isDispStoneDetail);
    byte_4B181FB = 1;
  }
  v6 = 0.0;
  if ( !isDispStoneDetail )
  {
    if ( !itemLinkInfoGroup )
      goto LABEL_17;
    this = (ItemLinkInfoListViewManager_o *)itemLinkInfoGroup->fields.viewItemList;
    itemDetailObj = itemLinkInfoGroup->fields.itemDetailObj;
    if ( this )
    {
      this = (ItemLinkInfoListViewManager_o *)System_Linq_Enumerable__Any_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                                (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( itemDetailObj )
        {
          widget = itemDetailObj->fields.widget;
          if ( widget )
          {
            v9 = -0.5;
            mHeight = (float)widget->fields.mHeight;
            return mHeight * v9;
          }
        }
LABEL_17:
        sub_1BCAA3C(this, itemLinkInfoGroup);
      }
    }
    if ( !itemDetailObj )
      goto LABEL_17;
    itemDetailLabel = itemDetailObj->fields.itemDetailLabel;
    if ( !itemDetailLabel )
      goto LABEL_17;
    v12 = itemDetailObj->fields.widget;
    if ( !v12 )
      goto LABEL_17;
    v13 = itemDetailObj->fields.itemDetailLabelMargin + (float)itemDetailLabel->fields.mHeight;
    v14 = (float)v12->fields.mHeight;
    if ( v13 > v14 )
    {
      mHeight = fmaxf(v13 - v14, 0.0);
      v9 = 0.5;
      return mHeight * v9;
    }
  }
  return v6;
}


bool __fastcall ItemLinkInfoListViewManager__HasViewItem(
        ItemLinkInfoListViewManager_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *itemLinkInfoGroupList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  bool v14; // w19
  Il2CppClass *klass; // x0
  int v16; // w21
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B181FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, itemLinkInfoGroupList, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v8,
      v9);
    this = (ItemLinkInfoListViewManager_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
                                              v10,
                                              v11);
    byte_4B181FD = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !itemLinkInfoGroupList )
    sub_1BCAA3C(this, itemLinkInfoGroupList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemLinkInfoGroupList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__);
    v14 = v12;
    if ( !v12 )
      break;
    if ( !v18.fields._current )
      sub_1BCAA3C(v12, v13);
    klass = v18.fields._current[3].klass;
    if ( klass
      && System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)klass,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) )
    {
      v16 = 4;
      goto LABEL_11;
    }
  }
  v16 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
  return v14 && v16 == 4;
}


void __fastcall ItemLinkInfoListViewManager__InitTransform(
        ItemLinkInfoListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPosition_34331148(obj, x, y, z, 0LL);
  GameObjectExtensions__ResetLocalRotation(obj, 0LL);
  GameObjectExtensions__ResetLocalScale(obj, 0LL);
}


UnityEngine_GameObject_o *__fastcall ItemLinkInfoListViewManager__get_ListParentObject(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.listParent;
}


UIScrollBar_o *__fastcall ItemLinkInfoListViewManager__get_ScrollBar(
        ItemLinkInfoListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void __fastcall ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor(
        ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoListViewManager__CoCreateList_d__17___ctor(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ItemLinkInfoListViewManager__CoCreateList_d__17__MoveNext(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v8; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoListViewManager_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemLinkInfoGroupList; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v36; // x9
  __int128 v37; // q0
  struct System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *p__7__wrap2; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool result; // w0
  const MethodInfo *v46; // x1
  struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *current; // x21
  UnityEngine_Object_o *itemDetailObj; // x19
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct ItemLinkInfoDetailObject_o *v57; // x19
  ItemLinkInfoListViewManager_o *gameObject; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  struct UIWidget_o *widget; // x8
  System_Collections_Generic_List_object__o *objectList; // x20
  Il2CppObject *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v77; // x0
  struct UILabel_o *itemDetailLabel; // x8
  int64_t viewItemList; // x1
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewItemList_5__4; // x0
  __int64 v81; // x1
  UnityEngine_Object_o *listDescriptionObj; // x19
  ItemLinkInfoTextObject_o *v83; // x19
  UnityEngine_GameObject_o *v84; // x20
  float x; // s8
  float y; // s9
  ItemLinkInfoListViewManager_o *v87; // x0
  __int64 v88; // x1
  const MethodInfo *v89; // x2
  float Height; // s0
  System_Collections_Generic_List_object__o *v91; // x20
  Il2CppObject *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x1
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v104; // x8
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v105; // x20
  float v106; // s8
  int32_t v107; // w8
  Il2CppObject *Item; // x0
  __int64 v109; // x1
  ItemLinkInfoListViewItem_o *v110; // x21
  Il2CppObject *baseViewItemPrefab; // x19
  Il2CppObject *v112; // x19
  System_Collections_Generic_List_object__o *v113; // x9
  PartyOrganizationUtility_o *p_viewItemList_5__4; // x19
  struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v115; // t1
  Il2CppObject *Component_object; // x0
  __int64 v117; // x1
  ItemLinkInfoListViewObject_o *v118; // x20
  ItemLinkInfoListViewManager_c *v119; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x2
  float v122; // s0
  float v123; // s8
  float BOARD_OFFSET_X; // s0
  float v125; // s9
  __int64 v126; // x1
  UnityEngine_GameObject_o *listParent; // x0
  int32_t layer; // w0
  __int64 v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  System_Collections_Generic_List_object__o *itemLinkInfoObjectList; // x0
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x8
  __int64 v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_Collections_Generic_List_object__o *v148; // x0
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x8
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v159; // x0
  System_Collections_Generic_List_Enumerator_T__o v160[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v161; // [xsp+40h] [xbp-70h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o **v162; // [xsp+48h] [xbp-68h]
  ItemLinkInfoListViewManager__CoCreateList_d__17_o *v163; // [xsp+68h] [xbp-48h] BYREF

  v163 = this;
  v8 = this;
  if ( (byte_4B18201 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___, v13, v14);
    sub_1BCA7E0(&ItemLinkInfoListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__,
      v21,
      v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    byte_4B18201 = 1;
  }
  v161 = 0LL;
  v162 = &v163;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_59;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    v8 = v163;
    byte_4B109C1 = 1;
  }
  itemLinkInfoGroupList = (System_Collections_Generic_List_object__o *)v8->fields.itemLinkInfoGroupList;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v8->fields._basePosition_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v8->fields._basePosition_5__2.fields.z = z;
  if ( !itemLinkInfoGroupList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    v160,
    itemLinkInfoGroupList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__GetEnumerator__);
  v36 = v163;
  v37 = *(_OWORD *)&v160[0].fields._list;
  p__7__wrap2 = &v163->fields.__7__wrap2;
  v160[1] = v160[0];
  v163->fields.__7__wrap2.fields._current = (struct ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v160[0].fields._current;
  *(_OWORD *)&v36->fields.__7__wrap2.fields._list = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v39, v40, v41, v42, v43, v44);
  v163->fields.__1__state = -3;
  do
  {
LABEL_12:
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v163->fields.__7__wrap2,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__MoveNext__) )
    {
      ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(v163, v46);
      v104 = v163;
      result = 0;
      v163->fields.__7__wrap2.fields._list = 0LL;
      *(_QWORD *)&v104->fields.__7__wrap2.fields._index = 0LL;
      v104->fields.__7__wrap2.fields._current = 0LL;
      return result;
    }
    current = v163->fields.__7__wrap2.fields._current;
    if ( !current )
      sub_1BCAA3C(v163, v46);
    itemDetailObj = (UnityEngine_Object_o *)current->fields.itemDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
    v49 = UnityEngine_Object__op_Inequality(itemDetailObj, 0LL, 0LL);
    if ( v49 )
    {
      v57 = current->fields.itemDetailObj;
      if ( !v57 )
        sub_1BCAA3C(v49, v50);
      gameObject = (ItemLinkInfoListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)current->fields.itemDetailObj,
                                                      0LL);
      widget = v57->fields.widget;
      if ( !widget )
        sub_1BCAA3C(gameObject, v59);
      if ( !_4__this )
        sub_1BCAA3C(gameObject, v59);
      ItemLinkInfoListViewManager__InitTransform(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        v163->fields._basePosition_5__2.fields.x,
        v163->fields._basePosition_5__2.fields.y + (float)((float)widget->fields.mHeight * -0.5),
        v163->fields._basePosition_5__2.fields.z,
        v60);
      objectList = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
      v63 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v57, 0LL);
      v70 = (int64_t)v63;
      if ( !objectList )
        sub_1BCAA3C(v63, v63);
      items = objectList->fields._items;
      v72 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++objectList->fields._version;
      if ( !items )
        sub_1BCAA3C(v63, v63);
      size = objectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          objectList,
          v63,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &items->obj.klass + size;
        objectList->fields._size = size + 1;
        v74[4] = (Il2CppClass *)v70;
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), v70, v64, v65, v66, v67, v68, v69);
      }
      itemDetailLabel = v57->fields.itemDetailLabel;
      if ( !itemDetailLabel )
        sub_1BCAA3C(v75, v76);
      v77 = v163;
      v163->fields._basePosition_5__2.fields.y = v163->fields._basePosition_5__2.fields.y
                                               - (float)(v57->fields.itemDetailLabelMargin
                                                       + (float)itemDetailLabel->fields.mHeight);
    }
    else
    {
      v77 = v163;
    }
    viewItemList = (int64_t)current->fields.viewItemList;
    v77->fields._viewItemList_5__4 = (struct System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)viewItemList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v77->fields._viewItemList_5__4,
      viewItemList,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    viewItemList_5__4 = v163->fields._viewItemList_5__4;
  }
  while ( !viewItemList_5__4
       || !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)viewItemList_5__4,
             (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___) );
  listDescriptionObj = (UnityEngine_Object_o *)current->fields.listDescriptionObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
  this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                listDescriptionObj,
                                                                0LL,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v83 = current->fields.listDescriptionObj;
    if ( !v83 )
      sub_1BCAA3C(this, method);
    v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current->fields.listDescriptionObj, 0LL);
    x = v163->fields._basePosition_5__2.fields.x;
    y = v163->fields._basePosition_5__2.fields.y;
    Height = ItemLinkInfoTextObject__get_Height(v83, 0LL);
    if ( !_4__this )
      sub_1BCAA3C(v87, v88);
    ItemLinkInfoListViewManager__InitTransform(
      v87,
      v84,
      x,
      y + (float)(Height * -0.5),
      v163->fields._basePosition_5__2.fields.z,
      v89);
    v91 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
    v92 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v83, 0LL);
    v99 = (int64_t)v92;
    if ( !v91 )
      sub_1BCAA3C(v92, v92);
    v100 = v91->fields._items;
    v101 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v91->fields._version;
    if ( !v100 )
      sub_1BCAA3C(v92, v92);
    v102 = v91->fields._size;
    if ( (unsigned int)v102 >= v100->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        v92,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
    }
    else
    {
      v103 = &v100->obj.klass + v102;
      v91->fields._size = v102 + 1;
      v103[4] = (Il2CppClass *)v99;
      sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), v99, v93, v94, v95, v96, v97, v98);
    }
    v105 = v163;
    v106 = v163->fields._basePosition_5__2.fields.y;
    v105->fields._basePosition_5__2.fields.y = v106 - ItemLinkInfoTextObject__get_Height(v83, 0LL);
  }
  v8 = v163;
  v107 = 0;
  v163->fields._i_5__5 = 0;
  while ( 1 )
  {
    v115 = v8->fields._viewItemList_5__4;
    p_viewItemList_5__4 = (PartyOrganizationUtility_o *)&v8->fields._viewItemList_5__4;
    v113 = (System_Collections_Generic_List_object__o *)v115;
    if ( !v115 )
      sub_1BCAA3C(this, method);
    if ( v107 >= v113->fields._size )
    {
      p_viewItemList_5__4->klass = 0LL;
      sub_1BCA784(p_viewItemList_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_12;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v113,
             v107,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !_4__this )
      sub_1BCAA3C(Item, v109);
    v110 = (ItemLinkInfoListViewItem_o *)Item;
    baseViewItemPrefab = (Il2CppObject *)_4__this->fields.baseViewItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
    v112 = UnityEngine_Object__Instantiate_object_(
             baseViewItemPrefab,
             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ItemLinkInfoListViewManager__CoCreateList_d__17_o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v112,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v8 = v163;
LABEL_59:
    v107 = v8->fields._i_5__5 + 1;
    v8->fields._i_5__5 = v107;
  }
  if ( !v112 )
    sub_1BCAA3C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v112,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewObject___);
  v118 = (ItemLinkInfoListViewObject_o *)Component_object;
  if ( !Component_object )
    sub_1BCAA3C(0LL, v117);
  ItemLinkInfoListViewObject__SetItem((ItemLinkInfoListViewObject_o *)Component_object, v110, 0LL);
  GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v112, _4__this->fields.listParent, 0LL);
  v122 = ItemLinkInfoListViewObject__GetHeight(v118, 0LL);
  if ( !v110 )
    sub_1BCAA3C(v119, v120);
  v123 = v122;
  BOARD_OFFSET_X = -1.0;
  if ( v110->fields._IsItemGetInfoList_k__BackingField )
    v125 = 0.0;
  else
    v125 = -1.0;
  if ( v110->fields._IsItemGetInfoList_k__BackingField )
  {
    v119 = ItemLinkInfoListViewManager_TypeInfo;
    if ( !ItemLinkInfoListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewManager_TypeInfo, v120);
      v119 = ItemLinkInfoListViewManager_TypeInfo;
    }
    BOARD_OFFSET_X = v119->static_fields->BOARD_OFFSET_X;
  }
  ItemLinkInfoListViewManager__InitTransform(
    (ItemLinkInfoListViewManager_o *)v119,
    (UnityEngine_GameObject_o *)v112,
    BOARD_OFFSET_X + v163->fields._basePosition_5__2.fields.x,
    v163->fields._basePosition_5__2.fields.y - (float)((float)(v123 * 0.5) + v125),
    v163->fields._basePosition_5__2.fields.z,
    v121);
  listParent = _4__this->fields.listParent;
  if ( !listParent )
    sub_1BCAA3C(0LL, v126);
  layer = UnityEngine_GameObject__get_layer(listParent, 0LL);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v112, layer, 0LL);
  itemLinkInfoObjectList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemLinkInfoObjectList;
  if ( !itemLinkInfoObjectList )
    sub_1BCAA3C(0LL, v129);
  v137 = itemLinkInfoObjectList->fields._items;
  v138 = Method_System_Collections_Generic_List_ItemLinkInfoListViewObject__Add__;
  ++itemLinkInfoObjectList->fields._version;
  if ( !v137 )
    sub_1BCAA3C(itemLinkInfoObjectList, v129);
  v139 = itemLinkInfoObjectList->fields._size;
  if ( (unsigned int)v139 >= v137->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      itemLinkInfoObjectList,
      (Il2CppObject *)v118,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v140 = &v137->obj.klass + v139;
    itemLinkInfoObjectList->fields._size = v139 + 1;
    v140[4] = (Il2CppClass *)v118;
    sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), (int64_t)v118, v130, v131, v132, v133, v134, v135);
  }
  v148 = (System_Collections_Generic_List_object__o *)_4__this->fields.objectList;
  if ( !v148 )
    sub_1BCAA3C(0LL, v141);
  v149 = v148->fields._items;
  v150 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v148->fields._version;
  if ( !v149 )
    sub_1BCAA3C(v148, v141);
  v151 = v148->fields._size;
  if ( (unsigned int)v151 >= v149->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v148,
      v112,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v152 = &v149->obj.klass + v151;
    v148->fields._size = v151 + 1;
    v152[4] = (Il2CppClass *)v112;
    sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 4), (int64_t)v112, v142, v143, v144, v145, v146, v147);
  }
  v159 = v163;
  v163->fields._basePosition_5__2.fields.y = v163->fields._basePosition_5__2.fields.y
                                           - (float)(v123 + _4__this->fields.boardSpace);
  if ( _4__this->fields.scrollView )
  {
    UIScrollView__ResetPosition(_4__this->fields.scrollView, 0LL);
    v159 = v163;
  }
  v159->fields.__2__current = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v159->fields.__2__current, 0LL, v153, v154, v155, v156, v157, v158);
  result = 1;
  v163->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_IEnumerator_Reset(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ItemLinkInfoListViewManager__CoCreateList_d__17_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ItemLinkInfoListViewManager__CoCreateList_d__17__System_Collections_IEnumerator_get_Current(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ItemLinkInfoListViewManager__CoCreateList_d__17__System_IDisposable_Dispose(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(this, method);
}


void __fastcall ItemLinkInfoListViewManager__CoCreateList_d__17____m__Finally1(
        ItemLinkInfoListViewManager__CoCreateList_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18202 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__,
      method,
      v2);
    byte_4B18202 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Dispose__);
}